program tugasLab1;
uses crt;


var
    name: string;
    umur, anakke, dr: shortint;

begin
    clrscr;

    writeln('Halo! Aku Ave, asisten pribadi kalian.');
    writeln('Aku akan nemenin kalian selama satu minggu ke depan.');
    writeln();
    writeln('   /\_/\ ');
    writeln('  =  0 . 0  =');
    writeln('   /      \  ');
    writeln();

    writeln('Tapi, sebelum itu, aku butuh bantuan kamu!');
    writeln('Karena kita baru ketemu, aku belum tau siapa kamu.');

    write('Boleh aku tau siapa nama kamu? '); 
    writeln();
    write('Namaku =');readln(name);
    writeln();
    writeln('Wah, nama kamu keren banget! Salam kenal ya, ', name, '. Semoga kamu betah sama aku.');

    write('Sekarang, hm... boleh aku tau berapa umur kamu? ');
    writeln();
    WriteLn('Umur aku ='); readln(umur);
    writeln();
    writeln('Wow, muda sekali... aku merasa tua... T__T');

    writeln('Aku penasaran deh! Kamu yang semuda ini anak ke berapa?');
    writeln();
    write('Aku anak ke- '); readln(anakke);
    writeln();
    
    writeln('Dari berapa bersaudara?');
    readln(dr);
    writeln();
    writeln('Hooo, begitu ternyata.');
    writeln('Yupzz, Ave');
    writeln();

    writeln('Oke! Terima kasih atas data dirinya ya, ', name, '!');
    writeln('Saat ini, aku belum menerima perintah baru dari tuanku.');
    writeln('Jadi, aku pergi dulu, ya!');
    writeln('Dadah! Sampai jumpa minggu depan!');
    writeln();
    writeln('   /\_/\ ');
    writeln('  =  0 . 0  =');
    writeln('   /      \  ');
end.