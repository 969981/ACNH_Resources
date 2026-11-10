
void FUN_001bb97c(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  
  *param_1 = (long)(PTR_DAT_04bcc5b8 + 0x10);
  *(undefined1 *)(param_1 + 1) = 0;
  uVar3 = (uint)DAT_04c58c68;
  if (DAT_04c58c68 != 0) {
    puVar2 = (uint *)FUN_03876070(DAT_04c58c60);
    uVar3 = *puVar2;
  }
  *(uint *)((long)param_1 + 0xc) = uVar3;
  FUN_001bba40(param_1 + 2);
  FUN_001bba40(param_1 + 0x1f);
  FUN_001bba40(param_1 + 0x3c);
  FUN_0018ea28(param_1 + 0x59,0);
  FUN_00186460(param_1 + 0x5b,0x8000,0);
  puVar1 = PTR_DAT_04bcbdd0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x5b] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x3b) = 1;
  *(undefined4 *)(param_1 + 0x58) = 2;
                    /* WARNING: Could not recover jumptable at 0x001bba38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

