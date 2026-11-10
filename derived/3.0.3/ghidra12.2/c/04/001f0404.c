
void FUN_001f0404(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 uStack_11;
  
  FUN_0019a2a8(param_1,0,&uStack_11);
  puVar2 = PTR_DAT_04bcc888;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x16] = (long)(puVar1 + 0x10);
  param_1[0x19] = (long)(param_1 + 0x17);
  param_1[0x1a] = 0x10;
  FUN_0018b070(param_1 + 0x16,&DAT_0407ebb1,0xffffffffffffffff);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uVar3 = 5;
  if (*PTR_DAT_04bcc100 != '\0') {
    uVar3 = 10;
  }
  *(undefined4 *)(param_1 + 0x22) = uVar3;
  return;
}

