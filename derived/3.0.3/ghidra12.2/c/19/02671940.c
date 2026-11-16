
void FUN_02671940(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined4 local_4c;
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04bb2020;
  if (*param_1 < 1) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "BuiltTownOffice";
  local_48 = puVar1;
  iVar5 = FUN_0273ea30(&local_48);
  if (iVar5 == 0) {
    return;
  }
  local_40 = "RcoBuildBridgeSlopeStatusCounter";
  local_48 = puVar1;
  iVar5 = FUN_0273ea30(&local_48);
  if (iVar5 != 2) {
    return;
  }
  local_4c = 0;
  local_40 = "MakeVillagePlayerFlag";
  local_48 = puVar4 + 0x10;
  iVar5 = FUN_0274ce10(&local_4c,&local_48);
  uVar22 = 0;
  if (iVar5 == 0) {
    uVar22 = 1;
    local_4c = 1;
    local_40 = "MakeVillagePlayerFlag";
    local_48 = puVar4 + 0x10;
    iVar5 = FUN_0274ce10(&local_4c,&local_48);
    if (iVar5 == 0) {
      uVar22 = 2;
      local_4c = 2;
      local_40 = "MakeVillagePlayerFlag";
      local_48 = puVar4 + 0x10;
      iVar5 = FUN_0274ce10(&local_4c,&local_48);
      if (iVar5 == 0) {
        uVar22 = 3;
        local_4c = 3;
        local_40 = "MakeVillagePlayerFlag";
        local_48 = puVar4 + 0x10;
        iVar5 = FUN_0274ce10(&local_4c,&local_48);
        if (iVar5 == 0) {
          uVar22 = 4;
          local_4c = 4;
          local_40 = "MakeVillagePlayerFlag";
          local_48 = puVar4 + 0x10;
          iVar5 = FUN_0274ce10(&local_4c,&local_48);
          if (iVar5 == 0) {
            uVar22 = 5;
            local_4c = 5;
            local_40 = "MakeVillagePlayerFlag";
            local_48 = puVar4 + 0x10;
            iVar5 = FUN_0274ce10(&local_4c,&local_48);
            if (iVar5 == 0) {
              uVar22 = 6;
              local_4c = 6;
              local_40 = "MakeVillagePlayerFlag";
              local_48 = puVar4 + 0x10;
              iVar5 = FUN_0274ce10(&local_4c,&local_48);
              if (iVar5 == 0) {
                uVar22 = 7;
                local_4c = 7;
                local_40 = "MakeVillagePlayerFlag";
                local_48 = puVar4 + 0x10;
                iVar5 = FUN_0274ce10(&local_4c,&local_48);
                if (iVar5 == 0) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar5 = FUN_021d71f0(0,uVar22);
  if (iVar5 < 0) {
    uVar6 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar6 = FUN_02746f80(0,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(1,uVar22);
  if (iVar5 < 0) {
    uVar7 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar7 = FUN_02746f80(1,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(2,uVar22);
  if (iVar5 < 0) {
    uVar8 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar8 = FUN_02746f80(2,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(3,uVar22);
  if (iVar5 < 0) {
    uVar9 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar9 = FUN_02746f80(3,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(4,uVar22);
  if (iVar5 < 0) {
    uVar10 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar10 = FUN_02746f80(4,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(5,uVar22);
  if (iVar5 < 0) {
    uVar11 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar11 = FUN_02746f80(5,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(6,uVar22);
  if (iVar5 < 0) {
    uVar12 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar12 = FUN_02746f80(6,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(7,uVar22);
  if (iVar5 < 0) {
    uVar13 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar13 = FUN_02746f80(7,iVar5,&local_48,1);
  }
  iVar5 = FUN_021d71f0(8,uVar22);
  if (iVar5 < 0) {
    uVar14 = 0;
  }
  else {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar14 = FUN_02746f80(8,iVar5,&local_48,1);
  }
  iVar5 = (uVar6 & 0xffff) + (uVar7 & 0xffff) + (uVar8 & 0xffff) + (uVar9 & 0xffff) +
          (uVar10 & 0xffff) + (uVar11 & 0xffff) + (uVar12 & 0xffff) + (uVar13 & 0xffff) +
          (uVar14 & 0xffff);
  iVar15 = FUN_021d71f0(9,uVar22);
  plVar18 = (long *)PTR_DAT_04bb46b0;
  if (-1 < iVar15) {
    local_48 = puVar4 + 0x10;
    local_40 = "Friendship";
    uVar6 = FUN_02746f80(9,iVar15,&local_48,1);
    iVar5 = iVar5 + (uVar6 & 0xffff);
    plVar18 = (long *)PTR_DAT_04bb46b0;
  }
  if (iVar5 == 0) {
    PTR_DAT_04bb46b0 = (undefined *)plVar18;
    return;
  }
  lVar19 = *plVar18;
  PTR_DAT_04bb46b0 = (undefined *)plVar18;
  if (lVar19 == 0) {
LAB_02671d34:
    lVar19 = 0;
  }
  else {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar20 + 0x38))();
      lVar19 = 0;
      if (lVar16 != 0) {
        lVar19 = lVar16 + 0x70;
      }
    }
    else {
      if (puVar20 == (undefined8 *)0x0) goto LAB_02671d34;
      lVar19 = 0;
      if ((long *)puVar20[0x26] != (long *)0x0) {
        lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(&LAB_00205148 + lVar19) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(&LAB_00205148 + lVar19), puVar20 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar20)();
    uVar6 = uVar6 ^ 1;
  }
  iVar15 = 0;
  puVar2 = (uint *)(*(long *)(&LAB_00205130 + lVar19) + *(long *)(&LAB_00205128 + lVar19));
  uVar7 = *puVar2;
  if ((*(byte *)((long)puVar2 + 7) != 0 ||
       (((ulong)uVar7 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar2 + 7) ==
      ((uVar7 + (uVar7 >> 0x10) + (uVar7 >> 0x18) + (uVar7 >> 8)) - 0x2d & 0xff))) {
    lVar16 = (ulong)uVar7 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
    iVar15 = ((int)lVar16 - (uint)(ushort)puVar2[1]) + (int)((ulong)lVar16 >> 0x20) + -0x7f1cd4ef;
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(&LAB_00205148 + lVar19) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar19) + 8),
     puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  if (iVar15 - iVar5 == 0 || iVar15 < iVar5) {
    return;
  }
  lVar19 = *plVar18;
  if (lVar19 == 0) {
LAB_02671e4c:
    lVar19 = 0;
  }
  else {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar20 + 0x38))();
      lVar19 = 0;
      if (lVar16 != 0) {
        lVar19 = lVar16 + 0x70;
      }
    }
    else {
      if (puVar20 == (undefined8 *)0x0) goto LAB_02671e4c;
      lVar19 = 0;
      if ((long *)puVar20[0x26] != (long *)0x0) {
        lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
      }
    }
  }
  lVar16 = *(long *)(&LAB_00205148 + lVar19);
  if (lVar16 == 0) {
    uVar17 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      lVar16 = *(long *)(&LAB_00205148 + lVar19);
      uVar17 = uVar17 & 0xffffffff;
      if (lVar16 == 0) goto LAB_02671ebc;
    }
    plVar18 = *(long **)(lVar16 + 0x20);
    if (plVar18 != (long *)0x0) {
      local_48 = *(undefined **)(&LAB_00205128 + lVar19);
      local_40 = *(char **)(&LAB_00205130 + lVar19);
      uStack_38 = 8;
      (**(code **)(*plVar18 + 0x20))(plVar18,&local_48);
    }
  }
LAB_02671ebc:
  piVar3 = (int *)(*(long *)(&LAB_00205130 + lVar19) + *(long *)(&LAB_00205128 + lVar19));
  uVar6 = nn::os::GetSystemTick();
  uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar6 = uVar7 ^ uVar7 * 0x800;
  uVar8 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  uVar7 = uVar8 ^ uVar8 * 0x800;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 3;
  uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  uVar6 = uVar6 >> 8 ^ uVar8 >> 0x13 ^ uVar6 ^ uVar8;
  *(short *)(piVar3 + 1) = (short)(uVar6 >> 0x10);
  uVar21 = (ulong)(uVar7 >> 8 ^ uVar6 >> 0x13 ^ uVar7 ^ uVar6) * 0x1b;
  *(char *)((long)piVar3 + 6) = (char)(uVar21 >> 0x20);
  lVar16 = (ulong)((iVar15 - iVar5) + 0x7f1cd4ef + (uVar6 >> 0x10)) << (uVar21 >> 0x20) + 3;
  iVar5 = (int)((ulong)lVar16 >> 0x20) + (int)lVar16;
  *piVar3 = iVar5;
  *(char *)((long)piVar3 + 7) =
       (char)iVar5 + (char)((uint)iVar5 >> 0x10) + (char)((uint)iVar5 >> 0x18) +
       (char)((uint)iVar5 >> 8) + -0x2d;
  if ((((uVar17 & 1) != 0) && (*(long *)(&LAB_00205148 + lVar19) != 0)) &&
     (puVar20 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar19) + 0x18),
     puVar20 != (undefined8 *)0x0)) {
    (**(code **)*puVar20)();
  }
  return;
}

