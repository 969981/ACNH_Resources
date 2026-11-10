
void FUN_002157fc(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_40[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  local_48 = puVar1;
  FUN_0018b070(&local_48,param_2,0xffffffffffffffff);
  thunk_FUN_001fd0c8(&local_48);
  local_48 = puVar1;
  FUN_0018b1a0(&local_48);
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  uVar2 = FUN_001a654c();
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(DAT_04c58c60);
    if ((*puVar3 != 0) && ((ulong)(DAT_04c58c40[1] - *DAT_04c58c40 >> 3) <= (ulong)*puVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                   0x47,0xe0000003,0);
    }
  }
  FUN_001a6450(uVar2);
  return;
}

