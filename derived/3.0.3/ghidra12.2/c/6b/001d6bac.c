
void FUN_001d6bac(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  
  FUN_001a57fc(param_1,8);
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[2] = (long)(param_1 + 3);
  puVar2 = PTR_DAT_04bcc778 + 0x10;
  param_1[4] = 0;
  param_1[5] = (long)(param_1 + 6);
  *param_1 = (long)puVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_00186460(param_1 + 9,1,1);
  puVar2 = PTR_DAT_04bcbb78;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar1 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar1 != 0) {
      puVar2 = (undefined *)(*(long *)(puVar2 + 0x2b8) + (ulong)*puVar1 * 0x148);
      goto LAB_001d6c40;
    }
  }
  puVar2 = puVar2 + 0x2c0;
LAB_001d6c40:
  FUN_001d7898(param_1 + 0x12,*(int *)(puVar2 + 0xb8) * 3);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[8] = 0;
  return;
}

