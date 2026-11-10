
void FUN_001b64dc(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bcc510;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  puVar2 = (undefined8 *)FUN_00187df4(8);
  param_1[1] = (long)puVar2;
  param_1[3] = (long)(puVar2 + 1);
  *puVar2 = 0;
  param_1[2] = (long)(puVar2 + 1);
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = (undefined8 *)FUN_00187df4(8);
  param_1[4] = (long)puVar2;
  param_1[6] = (long)(puVar2 + 1);
  *puVar2 = 0;
  param_1[5] = (long)(puVar2 + 1);
  FUN_0019c934(param_1 + 8);
  FUN_0019ca90(param_1 + 0xd,0x20);
  FUN_0019ca90(param_1 + 0x12,0x20);
  FUN_00186460(param_1 + 0x17,0x20000000,1);
  puVar1 = PTR_DAT_04bcbce8;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((long)param_1 + 0x102) = 1;
  param_1[0x17] = (long)(puVar1 + 0x10);
  lVar3 = FUN_00185a6c(0x298);
  if (lVar3 != 0) {
    FUN_00195604(lVar3);
  }
  FUN_00195a48(lVar3,0);
  *(long *)param_1[1] = lVar3;
  lVar3 = FUN_00185a6c(0x298);
  if (lVar3 != 0) {
    FUN_00195604(lVar3);
  }
  FUN_00195a48(lVar3,0);
  *(long *)param_1[4] = lVar3;
  lVar3 = FUN_00185a6c(0x298);
  if (lVar3 != 0) {
    FUN_00195604(lVar3);
  }
  FUN_00195a48(lVar3,0);
  param_1[7] = lVar3;
  return;
}

