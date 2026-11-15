
void FUN_021a3ce0(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  ulong uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8;
  byte local_b7;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_84;
  uint uStack_80;
  byte local_7c [4];
  byte local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  
  piVar2 = (int *)(param_1 + 0x92c0);
  local_68 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if ((char)(local_68 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
    local_b0 = (undefined *)(lVar10 + -0x15180);
    local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
  }
  uVar11 = local_68 >> 0x30;
  local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
  local_68 = CONCAT26((short)uVar11,(undefined6)local_68) & 0xff00ffffffffffff;
  lVar10 = *(long *)PTR_DAT_04bb32f0;
  *(undefined8 *)(param_1 + 0x92e4) = 0xffffffffffffffff;
  piVar2[0] = -1;
  piVar2[1] = -1;
  *(undefined8 *)(param_1 + 0x92c8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x92d0) = 0xffffffffffffffff;
  if (lVar10 == 0) {
    return;
  }
  local_70 = 0;
  local_74 = 0;
  FUN_021a7710((long)&local_70 + 4,&local_70,&local_74,lVar10,&local_68);
  FUN_021a78d0(param_1,&local_70,(long)&local_70 + 4,&local_74);
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (*(int *)(lVar10 + 0x15c) != 0) {
    return;
  }
  pbVar16 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar10 + 0x15c) != 0) {
    pbVar16 = (byte *)(lVar10 + 0x158);
  }
  if ((*pbVar16 < 8) ||
     (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
      (pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar16 < 8)))) {
LAB_021a3e78:
    local_78[0] = *pbVar16;
    if (7 < local_78[0]) {
      local_78[0] = 0xff;
    }
  }
  else {
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_021a3e70:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_021a3e78;
    }
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar7 = *(byte *)(lVar10 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar4 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar4 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar4 & 8) != 0) {
        pbVar16 = (byte *)(lVar10 + 0x471);
      }
    }
    local_78[0] = *pbVar16;
    if (7 < local_78[0]) goto LAB_021a3e70;
  }
  uVar11 = FUN_02b5f280(local_78);
  if ((uVar11 & 1) == 0) {
    return;
  }
  local_7c[0] = local_78[0];
  if (7 < local_78[0]) {
    local_7c[0] = 0xff;
  }
  uVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_7c,1);
  if (uVar11 == 0) {
    return;
  }
  uVar13 = uVar11;
  if (*(long **)(uVar11 + 0x28) != (long *)0x0) {
    puVar12 = (undefined8 *)**(long **)(uVar11 + 0x28);
    uVar13 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar13 = (**(code **)*puVar12)();
      uVar17 = uVar13 & 0xffffffff;
      goto LAB_021a3ef4;
    }
  }
  uVar17 = 0;
LAB_021a3ef4:
  if (*(short *)(*(long *)(uVar11 + 0x10) + *(long *)(uVar11 + 8) + 0x36908) == (short)local_68) {
    if ((((uVar17 & 1) != 0) && (*(long *)(uVar11 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(uVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  else {
    local_c8 = (undefined *)local_68;
    if ((char)(local_68 >> 0x20) < '\x05') {
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_b0 = (undefined *)(lVar10 + -0x15180);
      uVar13 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
      local_c8 = (undefined *)uVar13;
    }
    uVar6 = (ulong)local_c8;
    uVar15 = (ulong)local_c8 >> 0x10;
    local_c8._7_1_ = SUB81(uVar6,7);
    local_c8._0_7_ = (uint7)CONCAT24(5,(undefined4)local_c8);
    uVar13 = FUN_00872588(uVar13,uVar6,uVar15,uVar6 >> 0x18);
    if ((((uVar17 & 1) != 0) && (*(long *)(uVar11 + 0x28) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(uVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    if ((uVar13 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_a8 = "GetBirthdayTable";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayCandle";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayHat";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayBoard";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdaySunglasses";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayCake";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayFloorParty";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_a8 = "GetBirthdayWallParty";
      local_b0 = puVar1;
      FUN_0274bfe8(local_78,&local_b0,0);
      local_b0 = (undefined *)0x0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (char *)0x0;
      uStack_a0 = 0;
      FUN_025196e4(&local_c8);
      uVar8 = FUN_021a6fcc(&local_b0,0,(long)&local_70 + 4,&local_c8);
      if (uVar8 == 0) {
        uVar18 = 0;
      }
      else {
        if (uVar8 != 1) {
          uVar8 = 0;
        }
        uVar18 = 1;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc((ulong)&local_b0 | 4,1,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 2;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 2;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc(&local_a8,2,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 4;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 4;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc((long)&local_a8 + 4,3,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 8;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 8;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc(&uStack_a0,4,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x10;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 0x10;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc((long)&uStack_a0 + 4,5,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x20;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 0x20;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc(&local_98,6,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x40;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 0x40;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc((long)&local_98 + 4,7,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x80;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 0x80;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc(&uStack_90,8,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x100;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      if (iVar9 != 0) {
        uVar8 = uVar3;
        uVar18 = uVar18 | 0x100;
      }
      FUN_025196e4(&local_c8);
      iVar9 = FUN_021a6fcc((long)&uStack_90 + 4,9,(long)&local_70 + 4,&local_c8);
      uVar3 = uVar8 | 0x200;
      if (iVar9 != 1) {
        uVar3 = uVar8;
      }
      uStack_80 = uVar8;
      local_84 = uVar18;
      if (iVar9 != 0) {
        uStack_80 = uVar3;
        local_84 = uVar18 | 0x200;
      }
      FUN_021ab460(param_1,&local_84,&uStack_80,&local_b0);
      if ((*(int *)(param_1 + 0x92e4) != -1) && (lVar10 = FUN_0265b370(), lVar10 != 0)) {
        local_c0 = lVar10 + 0x38;
        local_b8 = 1;
        if (*(long **)(lVar10 + 0x60) == (long *)0x0) {
          local_b7 = 0;
        }
        else {
          puVar12 = (undefined8 *)**(long **)(lVar10 + 0x60);
          local_b7 = 0;
          if (puVar12 != (undefined8 *)0x0) {
            local_b7 = (**(code **)*puVar12)();
          }
        }
        local_b7 = local_b7 & 1;
        local_c8 = PTR_DAT_04bb6ba0 + 0x10;
        cVar5 = *(char *)(*(long *)(lVar10 + 0x48) + *(long *)(lVar10 + 0x40) + 0x2c);
        FUN_02640184(&local_c8);
        iVar9 = (int)cVar5;
        if ((((*piVar2 != -1) && (*piVar2 == iVar9)) ||
            ((*(int *)(param_1 + 0x92c4) != -1 && (*(int *)(param_1 + 0x92c4) == iVar9)))) ||
           ((*(int *)(param_1 + 0x92c8) != -1 && (*(int *)(param_1 + 0x92c8) == iVar9)))) {
          local_b8 = 0;
          local_c0 = lVar10;
          if (*(long *)(lVar10 + 0x28) == 0) {
            bVar7 = 0;
          }
          else {
            puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x10);
            bVar7 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              bVar7 = (**(code **)*puVar12)();
            }
          }
          local_b7 = bVar7 & 1;
          local_c8 = PTR_DAT_04bb6bd8 + 0x10;
          uVar14 = FUN_021abc3c(&local_c8);
          FUN_0284c3b0(uVar14,0);
          FUN_02640184(&local_c8);
        }
      }
    }
  }
  return;
}

