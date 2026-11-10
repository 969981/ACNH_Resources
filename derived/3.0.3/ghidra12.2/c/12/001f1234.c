
void FUN_001f1234(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uStack_11;
  
  FUN_0019a2a8(param_1,0,&uStack_11);
  puVar3 = PTR_DAT_04bcc888;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  puVar2 = PTR_DAT_04bc0ec8;
  param_1[0x19] = (long)(param_1 + 0x17);
  param_1[0x1a] = 0x10;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x16] = (long)(puVar2 + 0x10);
  FUN_0018b070(param_1 + 0x16,&DAT_0407ebb1,0xffffffffffffffff);
  puVar2 = PTR_DAT_04bcc100;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  puVar3 = PTR_DAT_04bcc8a0;
  cVar1 = *puVar2;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[0x25] = 0;
  uVar5 = 5;
  if (cVar1 != '\0') {
    uVar5 = 10;
  }
  param_1[0x23] = (long)(puVar3 + 0xb0);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x22) = uVar5;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  puVar4 = (undefined1 *)FUN_00187df4(1);
  param_1[0x27] = (long)puVar4;
  param_1[0x29] = (long)(puVar4 + 1);
  *puVar4 = 0;
  param_1[0x28] = (long)(puVar4 + 1);
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 1;
  param_1[0x2e] = (long)(param_1 + 0x2f);
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}

