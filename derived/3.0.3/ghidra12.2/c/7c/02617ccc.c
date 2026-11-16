
void FUN_02617ccc(int *param_1,char param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_aa8;
  undefined4 local_aa0;
  ushort local_a9c;
  long local_a98;
  long local_a90;
  undefined8 uStack_a88;
  undefined4 local_6c;
  
  puVar1 = PTR_DAT_04bb46b0;
  if (*param_1 == -1) {
    return;
  }
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar3 = FUN_026eec4c();
  if (lVar3 == 0) {
    return;
  }
  lVar11 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar11 = *(long *)(*(long *)puVar1 + 0x20);
  }
  plVar10 = (long *)(lVar11 + 0x2d1b0);
  lVar12 = *(long *)(lVar11 + 0x2d1d0);
  if (lVar12 == 0) {
    *(undefined1 *)(*(long *)(lVar11 + 0x2d1b8) + *plVar10 + 5) = 1;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
joined_r0x02617e6c:
      if (plVar5 != (long *)0x0) {
        local_a98 = *plVar10;
        local_a90 = *(long *)(lVar11 + 0x2d1b8);
        uStack_a88 = 6;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_a98);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar11 + 0x2d1d0) != 0) {
        plVar5 = *(long **)(*(long *)(lVar11 + 0x2d1d0) + 0x20);
        goto joined_r0x02617e6c;
      }
    }
    *(undefined1 *)(*(long *)(lVar11 + 0x2d1b8) + *plVar10 + 5) = 1;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x2d1d0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d1d0) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  lVar12 = *(long *)(lVar11 + 0x2d208);
  if (lVar12 == 0) {
    *(undefined1 *)(*(long *)(lVar11 + 0x2d1f0) + *(long *)(lVar11 + 0x2d1e8) + 5) = 1;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar12 + 0x20);
      if (plVar5 == (long *)0x0) goto LAB_02617e80;
LAB_02617e04:
      local_a98 = *(long *)(lVar11 + 0x2d1e8);
      local_a90 = *(long *)(lVar11 + 0x2d1f0);
      uStack_a88 = 6;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_a98);
      lVar12 = *(long *)(lVar11 + 0x2d1e8);
      lVar13 = *(long *)(lVar11 + 0x2d1f0);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if ((*(long *)(lVar11 + 0x2d208) != 0) &&
         (plVar5 = *(long **)(*(long *)(lVar11 + 0x2d208) + 0x20), plVar5 != (long *)0x0))
      goto LAB_02617e04;
LAB_02617e80:
      lVar12 = *(long *)(lVar11 + 0x2d1e8);
      lVar13 = *(long *)(lVar11 + 0x2d1f0);
    }
    *(undefined1 *)(lVar13 + lVar12 + 5) = 1;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x2d208) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d208) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  local_aa8 = (long *)(lVar11 + 0x2d1f0);
  plVar5 = (long *)(lVar11 + 0x2d1e8);
  lVar12 = *(long *)(lVar11 + 0x2d240);
  if (lVar12 == 0) {
    *(undefined1 *)(*(long *)(lVar11 + 0x2d228) + *(long *)(lVar11 + 0x2d220) + 5) = 1;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar7 = *(long **)(lVar12 + 0x20);
      if (plVar7 == (long *)0x0) goto LAB_02617f54;
LAB_02617ef0:
      local_a98 = *(long *)(lVar11 + 0x2d220);
      local_a90 = *(long *)(lVar11 + 0x2d228);
      uStack_a88 = 6;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_a98);
      lVar12 = *(long *)(lVar11 + 0x2d220);
      lVar13 = *(long *)(lVar11 + 0x2d228);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if ((*(long *)(lVar11 + 0x2d240) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar11 + 0x2d240) + 0x20), plVar7 != (long *)0x0))
      goto LAB_02617ef0;
LAB_02617f54:
      lVar12 = *(long *)(lVar11 + 0x2d220);
      lVar13 = *(long *)(lVar11 + 0x2d228);
    }
    *(undefined1 *)(lVar13 + lVar12 + 5) = 1;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x2d240) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d240) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  plVar16 = (long *)(lVar11 + 0x2d228);
  plVar7 = (long *)(lVar11 + 0x2d220);
  lVar12 = *(long *)(lVar11 + 0x2d278);
  if (lVar12 == 0) {
    *(undefined1 *)(*(long *)(lVar11 + 0x2d260) + *(long *)(lVar11 + 0x2d258) + 5) = 1;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar8 = *(long **)(lVar12 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_02618024;
LAB_02617fc0:
      local_a98 = *(long *)(lVar11 + 0x2d258);
      local_a90 = *(long *)(lVar11 + 0x2d260);
      uStack_a88 = 6;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_a98);
      lVar12 = *(long *)(lVar11 + 0x2d258);
      lVar13 = *(long *)(lVar11 + 0x2d260);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if ((*(long *)(lVar11 + 0x2d278) != 0) &&
         (plVar8 = *(long **)(*(long *)(lVar11 + 0x2d278) + 0x20), plVar8 != (long *)0x0))
      goto LAB_02617fc0;
LAB_02618024:
      lVar12 = *(long *)(lVar11 + 0x2d258);
      lVar13 = *(long *)(lVar11 + 0x2d260);
    }
    *(undefined1 *)(lVar13 + lVar12 + 5) = 1;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x2d278) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d278) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  plVar17 = (long *)(lVar11 + 0x2d258);
  plVar15 = (long *)(lVar11 + 0x2d260);
  FUN_0261964c(&local_a98,param_1);
  plVar8 = (long *)PTR_DAT_04bb46b0;
  if (param_2 == '\x01') {
    if ((*param_1 == -1) || (*(long *)PTR_DAT_04bb46b0 == 0)) {
LAB_02618230:
      local_6c = 1;
    }
    else {
      lVar12 = FUN_026eec4c();
      if (lVar12 == 0) goto LAB_02618230;
      lVar13 = lVar12 + 0x194b0;
      if (*(long *)(lVar12 + 0x194b8) == 0) {
        lVar13 = *(long *)(*plVar8 + 0x20);
      }
      if ((*(long **)(lVar13 + 0x2d160) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar13 + 0x2d160), puVar6 == (undefined8 *)0x0)) {
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x2d160) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x2d160) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
      }
      plVar8 = (long *)PTR_DAT_04bb46b0;
      if (bVar14 < 0x15) {
        if (bVar14 < 0xb) goto LAB_02618230;
        local_6c = 2;
      }
    }
    uVar9 = FUN_02615800(&local_a98,0x300000000,0);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(1,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,0);
    FUN_0261964c(&local_a98,param_1);
    if ((*param_1 == -1) || (*plVar8 == 0)) {
LAB_0261832c:
      local_6c = 1;
    }
    else {
      lVar12 = FUN_026eec4c();
      if (lVar12 == 0) goto LAB_0261832c;
      lVar13 = lVar12 + 0x194b0;
      if (*(long *)(lVar12 + 0x194b8) == 0) {
        lVar13 = *(long *)(*plVar8 + 0x20);
      }
      if ((*(long **)(lVar13 + 0x2d160) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar13 + 0x2d160), puVar6 == (undefined8 *)0x0)) {
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x2d160) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x2d160) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
      }
      plVar8 = (long *)PTR_DAT_04bb46b0;
      if (bVar14 < 0x15) {
        if (bVar14 < 0xb) goto LAB_0261832c;
        local_6c = 2;
      }
    }
    uVar9 = FUN_02615800(&local_a98,0x300000000,1);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(1,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,1);
    FUN_0261964c(&local_a98,param_1);
    if ((*param_1 == -1) || (*plVar8 == 0)) {
LAB_02618428:
      local_6c = 1;
    }
    else {
      lVar12 = FUN_026eec4c();
      if (lVar12 == 0) goto LAB_02618428;
      lVar13 = lVar12 + 0x194b0;
      if (*(long *)(lVar12 + 0x194b8) == 0) {
        lVar13 = *(long *)(*plVar8 + 0x20);
      }
      if ((*(long **)(lVar13 + 0x2d160) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar13 + 0x2d160), puVar6 == (undefined8 *)0x0)) {
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x2d160) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x2d160) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
      }
      plVar8 = (long *)PTR_DAT_04bb46b0;
      if (bVar14 < 0x15) {
        if (bVar14 < 0xb) goto LAB_02618428;
        local_6c = 2;
      }
    }
    uVar9 = FUN_02615800(&local_a98,0x300000000,2);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(1,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,2);
    FUN_0261964c(&local_a98,param_1);
    if (((*param_1 == -1) || (*plVar8 == 0)) || (lVar12 = FUN_026eec4c(), lVar12 == 0)) {
LAB_0261851c:
      local_6c = 1;
    }
    else {
      lVar13 = lVar12 + 0x194b0;
      if (*(long *)(lVar12 + 0x194b8) == 0) {
        lVar13 = *(long *)(*plVar8 + 0x20);
      }
      if ((*(long **)(lVar13 + 0x2d160) == (long *)0x0) ||
         (puVar6 = (undefined8 *)**(long **)(lVar13 + 0x2d160), puVar6 == (undefined8 *)0x0)) {
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
      }
      else {
        uVar4 = (**(code **)*puVar6)();
        bVar14 = *(byte *)(*(long *)(lVar13 + 0x2d148) + *(long *)(lVar13 + 0x2d140) + 0x1a);
        if ((((uVar4 & 1) != 0) && (*(long *)(lVar13 + 0x2d160) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar13 + 0x2d160) + 8), puVar6 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar6)();
        }
      }
      if (bVar14 < 0x15) {
        if (bVar14 < 0xb) goto LAB_0261851c;
        local_6c = 2;
      }
    }
    uVar9 = FUN_02615800(&local_a98,0x300000000,3);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(1,(undefined3)local_aa0);
  }
  else {
    local_6c = 1;
    uVar9 = FUN_02615800(&local_a98,0x300000000,0);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(param_2,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,0);
    FUN_0261964c(&local_a98,param_1);
    local_6c = 1;
    uVar9 = FUN_02615800(&local_a98,0x300000000,1);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(param_2,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,1);
    FUN_0261964c(&local_a98,param_1);
    local_6c = 1;
    uVar9 = FUN_02615800(&local_a98,0x300000000,2);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(param_2,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
    local_a9c = (ushort)(byte)local_a9c;
    FUN_02617510(&local_aa0,lVar3,0x300000000,2);
    FUN_0261964c(&local_a98,param_1);
    local_6c = 1;
    uVar9 = FUN_02615800(&local_a98,0x300000000,3);
    local_aa0._0_3_ = (undefined3)uVar9;
    local_aa0 = CONCAT13(param_2,(undefined3)local_aa0);
    local_a9c._0_1_ = (byte)((ulong)uVar9 >> 0x20);
  }
  local_a9c = (ushort)(byte)local_a9c;
  FUN_02617510(&local_aa0,lVar3,0x300000000,3);
  lVar3 = *(long *)(lVar11 + 0x2d1d0);
  if (lVar3 == 0) {
    *(undefined1 *)(*(long *)(lVar11 + 0x2d1b8) + *plVar10 + 4) = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar8 = *(long **)(lVar3 + 0x20);
joined_r0x02618678:
      if (plVar8 != (long *)0x0) {
        local_a98 = *plVar10;
        local_a90 = *(long *)(lVar11 + 0x2d1b8);
        uStack_a88 = 6;
        (**(code **)(*plVar8 + 0x20))(plVar8,&local_a98);
      }
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar11 + 0x2d1d0) != 0) {
        plVar8 = *(long **)(*(long *)(lVar11 + 0x2d1d0) + 0x20);
        goto joined_r0x02618678;
      }
    }
    *(undefined1 *)(*(long *)(lVar11 + 0x2d1b8) + *plVar10 + 4) = 0;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar11 + 0x2d1d0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d1d0) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  lVar3 = *(long *)(lVar11 + 0x2d208);
  if (lVar3 == 0) {
    *(undefined1 *)(*local_aa8 + *plVar5 + 4) = 1;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar10 = *(long **)(lVar3 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_0261868c;
LAB_02618620:
      local_a98 = *plVar5;
      local_a90 = *local_aa8;
      uStack_a88 = 6;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_a98);
      lVar3 = *plVar5;
      lVar12 = *local_aa8;
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if ((*(long *)(lVar11 + 0x2d208) != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar11 + 0x2d208) + 0x20), plVar10 != (long *)0x0))
      goto LAB_02618620;
LAB_0261868c:
      lVar3 = *plVar5;
      lVar12 = *local_aa8;
    }
    *(undefined1 *)(lVar12 + lVar3 + 4) = 1;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar11 + 0x2d208) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d208) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  lVar3 = *(long *)(lVar11 + 0x2d240);
  if (lVar3 == 0) {
    *(undefined1 *)(*plVar16 + *plVar7 + 4) = 2;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 1;
      plVar10 = *(long **)(lVar3 + 0x20);
joined_r0x0261882c:
      if (plVar10 != (long *)0x0) {
        local_a98 = *plVar7;
        local_a90 = *plVar16;
        uStack_a88 = 6;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_a98);
      }
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar2 = uVar2 ^ 1;
      if (*(long *)(lVar11 + 0x2d240) != 0) {
        plVar10 = *(long **)(*(long *)(lVar11 + 0x2d240) + 0x20);
        goto joined_r0x0261882c;
      }
    }
    *(undefined1 *)(*plVar16 + *plVar7 + 4) = 2;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar11 + 0x2d240) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d240) + 0x18), puVar6 != (undefined8 *)0x0))
    {
      (**(code **)*puVar6)();
    }
  }
  lVar3 = *(long *)(lVar11 + 0x2d278);
  if (lVar3 == 0) {
    *(undefined1 *)(*plVar15 + *plVar17 + 4) = 3;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar10 = *(long **)(lVar3 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar11 + 0x2d278) == 0) goto LAB_026187b8;
    plVar10 = *(long **)(*(long *)(lVar11 + 0x2d278) + 0x20);
  }
  if (plVar10 != (long *)0x0) {
    local_a98 = *plVar17;
    local_a90 = *plVar15;
    uStack_a88 = 6;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_a98);
  }
LAB_026187b8:
  *(undefined1 *)(*plVar15 + *plVar17 + 4) = 3;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar11 + 0x2d278) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x2d278) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

