
void FUN_002aa86c(long *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined1 *)((long)param_1 + 0x3c) = 0xfd;
  puVar3 = PTR_DAT_04bce0c0;
  puVar2 = PTR_DAT_04bcb8c8;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)puVar2;
  param_1[4] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  return;
}

