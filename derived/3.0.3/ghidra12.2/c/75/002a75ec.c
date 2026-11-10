
void FUN_002a75ec(undefined8 param_1)

{
  undefined1 local_d0 [128];
  
  nn::util::VSNPrintf(&DAT_04c60f68,0x200,param_1,local_d0 + 0x80);
  if (DAT_04c60f60 != (code *)0x0) {
    (*DAT_04c60f60)(&DAT_04c60f68);
  }
  return;
}

