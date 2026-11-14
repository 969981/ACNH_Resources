
void FUN_01b31340(long *param_1,long *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  char **ppcVar14;
  char **ppcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 local_90;
  undefined4 uStack_8c;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  
  if (*(long *)*param_1 < 1) {
    return;
  }
  lVar17 = *param_2;
  lVar19 = lVar17 + 0x194b0;
  if (*(long *)(lVar17 + 0x194b8) == 0) {
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    lVar17 = *(long *)(lVar19 + 0x28);
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x194d8);
  }
  if (lVar17 == 0) {
    uVar8 = 0;
  }
  else {
    if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
      uVar8 = 0;
      plVar9 = *(long **)(lVar17 + 0x20);
    }
    else {
      uVar8 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      uVar8 = uVar8 & 0xffffffff;
      if (*(long *)(lVar19 + 0x28) == 0) goto LAB_01b31410;
      plVar9 = *(long **)(*(long *)(lVar19 + 0x28) + 0x20);
    }
    if (plVar9 != (long *)0x0) {
      local_78 = *(char **)(lVar19 + 8);
      local_70 = *(char **)(lVar19 + 0x10);
      local_68 = 0x3ce60;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
LAB_01b31410:
  lVar17 = *(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8);
  uVar10 = nn::time::IsValidDate
                     ((uint)*(ushort *)(lVar17 + 0x13690),(uint)*(byte *)(lVar17 + 0x13692),
                      (uint)*(byte *)(lVar17 + 0x13693));
  if ((uVar10 & 1) == 0) {
    lVar18 = *param_2;
    if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar11 == (undefined8 *)0x0)) {
      uVar6 = 1;
    }
    else {
      uVar6 = (**(code **)*puVar11)();
      uVar6 = uVar6 ^ 1;
    }
    uVar4 = *(ushort *)(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8) + 0x1341e);
    local_80 = *(undefined8 *)(*param_1 + 0x10);
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
    local_78 = (char *)(lVar12 + (long)(int)(uint)uVar4 * -0x15180);
    local_80 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_78);
    if ((((uVar6 & 1) == 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "MakeVillagePlayerFlag";
    iVar7 = FUN_0274b8d0(*param_2,&local_78);
    if (iVar7 == 0) {
      local_78 = (char *)0x844;
      FUN_0277d4ac(&local_78);
      uVar1 = (undefined4)param_2[8];
      local_88._0_4_ = (undefined4)local_80;
      nn::time::IsValidDate((uint)(ushort)local_80,(uint)local_80._2_1_,(uint)local_80._3_1_);
      uVar13 = 0x35;
      ppcVar14 = &local_88;
      ppcVar15 = &local_78;
      uVar16 = 0;
    }
    else {
      local_88 = (char *)0xfffe;
      FUN_0277d4ac(&local_88);
      uVar6 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar6 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar6 ^ DAT_05582b7c;
      FUN_01b03ee0(&local_90,1);
      puVar5 = PTR_DAT_04bb43c0;
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_90);
      lVar18 = *(long *)puVar5;
      if (lVar18 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_68 = 0;
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_70 = (char *)CONCAT44(uStack_8c,local_90);
          uVar6 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar5 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              lVar18 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(&local_90);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar18 + 0x1d8)) &&
                 (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar6 * 8), lVar18 != 0)
                 ) {
                local_68 = lVar18;
              }
            }
          }
          FUN_01af2bc0(&local_78,3);
          local_88 = local_70;
        }
      }
      uVar1 = (undefined4)param_2[8];
      local_78._0_4_ = (undefined4)local_80;
      nn::time::IsValidDate((uint)(ushort)local_80,(uint)local_80._2_1_,(uint)local_80._3_1_);
      uVar13 = 0x33;
      ppcVar14 = &local_78;
      ppcVar15 = &local_88;
      uVar16 = 1;
    }
    FUN_01b333b0(uVar1,uVar13,ppcVar14,ppcVar15,uVar16);
    lVar18 = *param_1;
    uVar4 = *(ushort *)(lVar18 + 0x10);
    bVar2 = *(byte *)(lVar18 + 0x12);
    bVar3 = *(byte *)(lVar18 + 0x13);
    uVar10 = nn::time::IsValidDate((uint)uVar4,(uint)bVar2,(uint)bVar3);
    if ((uVar10 & 1) != 0) {
      *(ushort *)(lVar17 + 0x13690) = uVar4;
      *(byte *)(lVar17 + 0x13692) = bVar2;
      *(byte *)(lVar17 + 0x13693) = bVar3;
    }
    *(undefined1 *)((long)param_2 + 0x1f6) = 1;
  }
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 0x18), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  return;
}

