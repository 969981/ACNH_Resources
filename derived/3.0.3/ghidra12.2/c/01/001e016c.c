
void FUN_001e016c(long *param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint *puVar3;
  
  puVar2 = PTR_DAT_04bcbec8;
  *param_1 = (long)(PTR_DAT_04bcbec0 + 0x10);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = 0x100;
  memset(param_1 + 3,0,0x10);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 2;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar3 != 0) {
      param_1[7] = DAT_04c5e5e8 + (ulong)*puVar3 * 0x148;
      return;
    }
  }
  param_1[7] = (long)&DAT_04c5e5f0;
  return;
}

