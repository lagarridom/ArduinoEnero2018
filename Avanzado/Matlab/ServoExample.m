clear; clc;

a = arduino();
%a = arduino('com23', 'uno');

%s = servo(a, 'D6');
s = servo(a, 'D6', 'MinPulseDuration', 700*10^-6, 'MaxPulseDuration', 2300*10^-6);

for angle = 0:0.1:1
   writePosition(s, angle);
   current_pos = readPosition(s);
   current_pos = current_pos*180;
   fprintf('Current motor position is %d degrees\n', current_pos);
   pause(0.5);
end

for angle = 1:-0.1:0
   writePosition(s, angle);
   current_pos = readPosition(s);
   current_pos = current_pos*180;
   fprintf('Current motor position is %d degrees\n', current_pos);
   pause(0.5);
end