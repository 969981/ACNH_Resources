
void FUN_02494df4(long param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 local_38 [4];
  char local_34;
  byte local_33;
  undefined *local_30;
  char *pcStack_28;
  
  uVar4 = *(uint *)(param_1 + 0x17cc);
  *(uint *)(param_1 + 0x17cc) = uVar4 & 0xfffffffe;
  if ((uVar4 & 1) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x1ee8);
  uVar4 = (uint)bVar2;
  bVar3 = 7 < uVar4;
  if (bVar3) {
    uVar4 = 0xff;
  }
  local_38[0] = (undefined1)uVar4;
  lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar4 * 0x740;
  if (bVar3) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_1 + 0x18e1) == *(short *)PTR_DAT_04bb6298) {
    *(undefined4 *)(lVar1 + 0x11c) = 3;
    FUN_01393458(lVar1 + 0x1c0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x11c) = 4;
  }
  local_34 = '\x01';
  uVar5 = (ulong)&local_34 | 1;
  if (bVar2 < 8) {
    local_33 = bVar2;
    uVar4 = FUN_02582d8c(local_38,1);
    if ((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
      local_34 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6);
      if (local_34 != '\0') {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "WayEditCount";
        FUN_0212944c(&local_30,1,uVar5);
      }
      goto LAB_02494f28;
    }
  }
  else {
    local_33 = 0xff;
  }
  local_34 = '\0';
LAB_02494f28:
  FUN_0279f1f4(uVar5,0);
  if (local_34 != '\0') {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "PV_ConstructRoad";
    FUN_01b5c520(&local_30,1,uVar5);
  }
  return;
}

