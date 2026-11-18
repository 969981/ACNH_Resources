
void FUN_03451260(long param_1,undefined2 *param_2)

{
  byte bVar1;
  undefined1 auStack_16c2 [2];
  short local_16c0 [4];
  long local_16b8;
  long lStack_16b0;
  
  *(undefined2 *)(param_1 + 10) = *param_2;
  FUN_007ef010(auStack_16c2);
  FUN_007e4920(local_16c0,auStack_16c2);
  if ((local_16c0[0] != DAT_04cb6038) && (lStack_16b0 != 0 || local_16b8 != 0)) {
    bVar1 = FUN_007e4bb0(local_16c0);
    *(byte *)(param_1 + 0xc) = (bVar1 ^ 0xff) & 1;
  }
  return;
}

