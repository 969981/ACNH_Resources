
void FUN_001d1cdc(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bcc6c0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  puVar2 = (undefined8 *)FUN_00187df4(0x10);
  param_1[1] = (long)puVar2;
  param_1[3] = (long)(puVar2 + 2);
  *puVar2 = 0;
  puVar2[1] = 0;
  param_1[2] = (long)(puVar2 + 2);
  lVar3 = FUN_00185a6c(8);
  if (lVar3 != 0) {
    FUN_001d2014(lVar3);
  }
  *(long *)param_1[1] = lVar3;
  lVar3 = FUN_00185a6c(0xa20);
  if (lVar3 != 0) {
    FUN_001d30dc(lVar3);
  }
  *(long *)(param_1[1] + 8) = lVar3;
  lVar3 = FUN_00185a6c(0x40);
  if (lVar3 != 0) {
    FUN_001bd484(lVar3);
  }
  param_1[4] = lVar3;
  return;
}

