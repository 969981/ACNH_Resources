
void FUN_00144bd8(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  if (param_3 != 0) {
    do {
      param_3 = param_3 + -1;
      bVar2 = *param_2;
      bVar1 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61) {
        bVar1 = bVar2;
      }
      *param_1 = bVar1;
      bVar1 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while (bVar1 != 0 && param_3 != 0);
  }
  return;
}

