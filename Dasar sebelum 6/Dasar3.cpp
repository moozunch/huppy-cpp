#include <iostream> //iostream penting(macam unit), kalo ga tar std dkk gabisa dipake.
/*include hastagh bole ada spasi atau nyambung terus,iostream itu file di folder yang isinya 
mau kita ambil dimasukin kesini.
iostream itu library*/ //comment yang multi line gaboleh ada di line syntax

//file cpp di ambil file iostream nya lalu di preprocessing baru di compiling, obj file nya baru di linking jadilahh exe.

//comment, selain itu space kosong juga tidak akan dieksekusi

// start of entry point, yang dijalankan program. kek begin, pintu awalnya main.
int main()  //int adalah tipe data integer, kawannya sama return. () itu bisa dimasukin argumen
{ //start of a body dari fungsi main, kek begin nya.
    std::cout << "hello world" << std::endl;

/*pengeksekusian secara berurutan, mirip pascal tiap perintah harus diakhiri dengan titik koma 
dan boleh sebebas nya menggunakan spasi or not, but yk the deal supaya rapi.komen gaboleh ada dibawah
return dan brackets.

pembahasan
std::cout << "hello world" << std::endl;
1. std itu kepanjangan dari stndar yang ada dari library iostream untuk input output
2. cout untuk output (console out)
3. << artinya masukkan "hello world" kedalam cout, bisa juga << "hallo" << "world" <<
4. std::endl; artinya akhir dari line itu dan akan ditutup titik koma dan endl itu bagian dari std.
*/
    return 0;
}