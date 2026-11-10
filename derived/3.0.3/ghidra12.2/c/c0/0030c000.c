
void FUN_0030c000(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_002a3808();
  puVar2 = PTR_DAT_04bceb00;
  lVar3 = 0;
  param_1[0x12f] = 0x1010000000000;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 2) = 2;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar3 + 0x18);
    lVar3 = lVar3 + 0x20;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  } while (lVar3 != 0x960);
  return;
}

