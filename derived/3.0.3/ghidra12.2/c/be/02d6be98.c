
void FUN_02d6be98(long param_1)

{
  undefined1 auStack_3a [2];
  undefined1 auStack_38 [8];
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [2];
  byte local_14 [2];
  undefined1 auStack_12 [2];
  
  local_14[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  FUN_007ef010(auStack_16,param_1 + 0x1668);
  FUN_007ef010(auStack_18,param_1 + 0x1668);
  FUN_02655ff0(auStack_12,local_14,auStack_16,auStack_18);
  FUN_007ef010(auStack_3a,auStack_12);
  FUN_00805ba8(auStack_38,auStack_3a);
  FUN_02536850(param_1 + 0x1f8,auStack_38,*(undefined4 *)PTR_DAT_04bb4e20,1,0);
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 0xe;
  }
  return;
}

