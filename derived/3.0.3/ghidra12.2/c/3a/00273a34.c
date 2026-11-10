
void FUN_00273a34(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_002b3bec();
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *param_1 = &PTR_FUN_04845130;
  *(undefined2 *)((long)param_1 + 0xb2) = 0xffff;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(0x80,uVar1);
  if (lVar2 != 0) {
    FUN_00277ecc(lVar2);
  }
  param_1[0x15] = lVar2;
  return;
}

