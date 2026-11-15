
void FUN_02480ee8(long param_1)

{
  uint uVar1;
  undefined1 auStack_3c [8];
  byte local_34 [4];
  undefined *local_30;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    local_28 = "ForceToolBreakDemo";
    FUN_027533a8((byte *)(param_1 + 0x1ee8),&local_30,0);
  }
  uVar1 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar1 & 0xfffffffe;
  if ((uVar1 & 1) != 0) {
    local_34[0] = *(byte *)(param_1 + 0x1ee8);
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
    FUN_024802e4(local_34,param_1 + 0x18e0);
    local_30 = (undefined *)((ulong)local_30 & 0xffffff0000000000);
    local_28 = (char *)CONCAT17(local_28._7_1_,6);
    local_28 = (char *)CONCAT26(local_28._6_2_,6);
    FUN_02321e44(auStack_3c,param_1,&local_30);
  }
  FUN_0232f840(param_1);
  return;
}

