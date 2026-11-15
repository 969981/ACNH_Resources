
void FUN_0235b7ac(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 < 0xc) {
    uVar1 = param_2 + 7;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    uVar1 = (int)uVar1 >> 3;
    if (uVar1 < 2) {
      *(byte *)(param_1 + (ulong)uVar1) =
           *(byte *)(param_1 + (ulong)uVar1) & ((byte)(1 << (ulong)(param_2 & 7)) ^ 0xff);
    }
  }
  return;
}

