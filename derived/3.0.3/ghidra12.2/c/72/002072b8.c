
void FUN_002072b8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = PTR_DAT_04bccc10;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bcbc48;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 5) = 1;
  puVar1 = PTR_DAT_04bcc068;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0xe] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[4] = (long)(puVar1 + 0x10);
  param_1[8] = (long)(param_1 + 8);
  param_1[9] = (long)(param_1 + 8);
  local_14 = 0x80010001;
  FUN_0018aa70(param_1 + 0xf,&local_14);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x17) = 30000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_002072b0(param_1 + 0x22);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 1;
  FUN_001b8014(param_1 + 0x26);
  FUN_001fa61c(param_1 + 0x35);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x18] = 0;
  param_1[0x3c] = 0x200009ea5;
  FUN_0019c050();
  FUN_001a59a0();
  FUN_00207420();
  FUN_002075e0();
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar3 = FUN_00185a6c(0xd0);
  FUN_001facb8(lVar3,0);
  param_1[0x19] = lVar3;
  FUN_001fb588(lVar3,0xe);
  FUN_001fab4c(param_1[0x19],8);
  lVar3 = FUN_00185a6c(0xa8);
  FUN_001faa4c(lVar3,0);
  param_1[0x1a] = lVar3;
  FUN_001fb588(lVar3,100);
  FUN_001fab4c(param_1[0x1a],8);
  return;
}

