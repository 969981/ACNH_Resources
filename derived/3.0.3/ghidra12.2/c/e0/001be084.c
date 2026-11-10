
void FUN_001be084(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  
  FUN_001a57fc(param_1,0xb);
  puVar2 = PTR_DAT_04bcc600;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bcbb78;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar1 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar1 != 0) {
      puVar2 = (undefined *)(*(long *)(puVar2 + 0x2b8) + (ulong)*puVar1 * 0x148);
      goto LAB_001be0f0;
    }
  }
  puVar2 = puVar2 + 0x2c0;
LAB_001be0f0:
  FUN_001d7898(param_1 + 3,*(int *)(puVar2 + 0xb8) * 3);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = -1;
  param_1[10] = 0;
  return;
}

