clear; clc;

a = arduino();
%a = arduino('com23', 'uno');

lim_izq = 0; lim_der = 200;
lim_inf = -0.5; lim_sup = 5.5;

f = figure('Name','Intensidad LED');
ax = axes('XLim',[lim_izq lim_der],'YLim',[lim_inf lim_sup]);
title('Voltaje leído en potenciómetro')
%Creación de un "objeto" linea, cuyos vectores iniciales son (Not A Number)
%Sin embargo, sí se define el color de la línea y su ancho.
l1 = line(nan,nan,'Color','r','LineWidth',2);
grid on;
hold on;

voltage = 0;
t = 0;
i = 0;

time = 200;
   while time > 0
      set(l1,'YData',voltage,'XData',t);
      drawnow
      
      i = i+1;
      
      voltage = [voltage readVoltage(a, 'A0')];
      t = [t i];
      writePWMVoltage(a, 'D11', voltage(i));

      time = time - 1;
      
      pause(0.1);
   end