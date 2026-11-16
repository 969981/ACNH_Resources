
void FUN_0265e740(byte *param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 local_80;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  byte local_44 [4];
  
  local_44[0] = *param_1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar7 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar7 == 0) {
    return;
  }
  local_80 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_80 >> 0x20) < '\x05') {
    lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
    local_78 = (undefined *)(lVar8 + -0x15180);
    local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
  }
  uVar9 = local_80 >> 0x30;
  local_80._0_6_ = CONCAT24(5,(undefined4)local_80);
  local_80 = CONCAT26((short)uVar9,(undefined6)local_80) & 0xff00ffffffffffff;
  lVar8 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar7 = *(long *)(lVar8 + 0x28);
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x194d8);
  }
  if (lVar7 == 0) {
    uVar9 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar9 = 0;
      plVar10 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar9 = uVar9 & 0xffffffff;
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_0265e87c;
      plVar10 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_78 = *(undefined **)(lVar8 + 8);
      pcStack_70 = *(char **)(lVar8 + 0x10);
      local_68 = 0x3ce60;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
LAB_0265e87c:
  uVar3 = (ushort)local_80;
  bVar4 = local_80._2_1_;
  bVar5 = local_80._3_1_;
  lVar1 = *(long *)(lVar8 + 8);
  lVar7 = *(long *)(lVar8 + 0x10);
  uVar11 = nn::time::IsValidDate((uint)(ushort)local_80,(uint)local_80._2_1_,(uint)local_80._3_1_);
  if ((uVar11 & 1) != 0) {
    lVar7 = lVar7 + lVar1;
    *(ushort *)(lVar7 + 0x2eaac) = uVar3;
    *(byte *)(lVar7 + 0x2eaae) = bVar4;
    *(byte *)(lVar7 + 0x2eaaf) = bVar5;
  }
  if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  iVar6 = FUN_021d7030(0,param_1);
  puVar2 = PTR_DAT_04bb2020;
  if (-1 < iVar6) {
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(0,param_1,&local_78,param_2 == 0,0);
  }
  iVar6 = FUN_021d7030(1,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(1,param_1,&local_78,param_2 == 1,0);
  }
  iVar6 = FUN_021d7030(2,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(2,param_1,&local_78,param_2 == 2,0);
  }
  iVar6 = FUN_021d7030(3,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(3,param_1,&local_78,param_2 == 3,0);
  }
  iVar6 = FUN_021d7030(4,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(4,param_1,&local_78,param_2 == 4,0);
  }
  iVar6 = FUN_021d7030(5,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(5,param_1,&local_78,param_2 == 5,0);
  }
  iVar6 = FUN_021d7030(6,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(6,param_1,&local_78,param_2 == 6,0);
  }
  iVar6 = FUN_021d7030(7,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(7,param_1,&local_78,param_2 == 7,0);
  }
  iVar6 = FUN_021d7030(8,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(8,param_1,&local_78,param_2 == 8,0);
  }
  iVar6 = FUN_021d7030(9,param_1);
  if (-1 < iVar6) {
    local_78 = puVar2 + 0x10;
    pcStack_70 = "NicknameOriginal";
    FUN_0265d4e0(9,param_1,&local_78,param_2 == 9,0);
  }
  return;
}

