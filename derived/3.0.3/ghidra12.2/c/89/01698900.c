
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01698900(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  long *plVar10;
  undefined4 *puVar11;
  undefined2 *puVar12;
  char *pcVar13;
  byte *pbVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined2 *puVar19;
  int *piVar20;
  int iVar21;
  byte bVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 uVar25;
  int iVar26;
  undefined *puVar27;
  undefined *puVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  ulong uVar33;
  void *__s;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  long lVar37;
  undefined8 *puVar38;
  long lVar39;
  long *plVar40;
  char cVar41;
  int iVar42;
  undefined4 uVar43;
  int iVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  long *plVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  ulong local_17a0;
  undefined2 local_1780;
  undefined1 local_177e;
  undefined1 local_177d;
  undefined4 local_177c;
  undefined2 local_1778;
  undefined1 local_1776;
  undefined1 local_1775;
  undefined4 local_1774;
  undefined8 local_1770;
  undefined4 local_1768;
  undefined4 uStack_1764;
  long local_1760;
  undefined *local_1758;
  undefined *local_1750;
  undefined8 local_1748;
  undefined *local_1740;
  undefined8 local_1738;
  undefined4 local_1730;
  undefined4 uStack_172c;
  undefined *local_1728;
  undefined8 uStack_1720;
  undefined8 local_1718;
  int local_1710;
  int iStack_170c;
  int local_1704;
  undefined8 local_1700;
  undefined *puStack_16f8;
  undefined8 local_16f0;
  undefined *local_16e8;
  undefined8 local_16e0;
  undefined *local_16d8;
  uint local_16d0;
  undefined4 local_16cc;
  byte local_16c8;
  undefined *local_16c0;
  undefined *puStack_16b8;
  undefined8 local_16b0;
  undefined *local_16a8;
  undefined8 local_16a0;
  undefined *local_1698;
  char *pcStack_1690;
  long local_f20 [238];
  undefined8 local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined8 local_738;
  undefined4 local_8c;
  undefined4 local_84;
  undefined1 local_7f;
  undefined1 local_78;
  undefined1 local_76;
  uint local_6c;
  
  if ((*(byte *)(param_1 + 0xb28) >> (ulong)(param_2 & 0x1f) & 1) != 0) {
    return 0;
  }
  local_1698 = (undefined *)CONCAT44(local_1698._4_4_,param_2);
  lVar37 = param_1 + 0x10 + (ulong)param_2 * 0x160;
  if (7 < param_2) {
    lVar37 = param_1 + 0x10;
  }
  *(long *)(param_1 + 0xb18) = lVar37;
  plVar49 = (long *)PTR_DAT_04bb46b0;
  lVar37 = *(long *)PTR_DAT_04bb46b0;
  if (lVar37 == 0) {
    return 0;
  }
  puVar38 = *(undefined8 **)(lVar37 + 0x10);
  local_6c = param_2;
  if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
    lVar37 = (**(code **)(*(long *)*puVar38 + 0x38))();
    if (lVar37 == 0) {
      return 0;
    }
    lVar37 = lVar37 + 0x70;
  }
  else {
    if (puVar38 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar38[0x26] == (long *)0x0) {
      return 0;
    }
    lVar37 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
    if (lVar37 == 0) {
      return 0;
    }
  }
  if (7 < (uint)local_1698) {
    return 0;
  }
  lVar39 = lVar37 + 0x119228 + ((ulong)local_1698 & 0xffffffff) * 0xfa08;
  if (7 < (uint)local_1698) {
    lVar39 = lVar37 + 0x119228;
  }
  if (*(long **)(lVar39 + 0x28) == (long *)0x0) {
    uVar33 = 0;
  }
  else {
    puVar38 = (undefined8 *)**(long **)(lVar39 + 0x28);
    uVar33 = 0;
    if (puVar38 != (undefined8 *)0x0) {
      uVar33 = (**(code **)*puVar38)();
    }
  }
  uVar50 = *(uint *)(*(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8));
  if (8 < uVar50) {
    uVar50 = 0;
  }
  local_16c0 = (undefined *)CONCAT44(local_16c0._4_4_,uVar50);
  if ((((uVar33 & 1) != 0) && (*(long *)(lVar39 + 0x28) != 0)) &&
     (puVar38 = *(undefined8 **)(*(long *)(lVar39 + 0x28) + 8), puVar38 != (undefined8 *)0x0)) {
    (**(code **)*puVar38)();
  }
  lVar37 = *plVar49;
  plVar3 = (long *)(param_1 + 0xb18);
  local_1698 = (undefined *)CONCAT44(local_1698._4_4_,param_2);
  if (lVar37 == 0) {
LAB_01698ab4:
    iVar32 = -1;
  }
  else {
    puVar38 = *(undefined8 **)(lVar37 + 0x10);
    if ((*(byte *)(lVar37 + 0x453) & 1) != 0) {
      if (((puVar38 != (undefined8 *)0x0) && ((long *)puVar38[0x26] != (long *)0x0)) &&
         (lVar37 = (**(code **)(*(long *)puVar38[0x26] + 0x38))(), lVar37 != 0)) goto LAB_01698aa8;
      goto LAB_01698ab4;
    }
    lVar37 = (**(code **)(*(long *)*puVar38 + 0x38))();
    if (lVar37 == 0) goto LAB_01698ab4;
    lVar37 = lVar37 + 0x70;
LAB_01698aa8:
    if (7 < (uint)local_1698) goto LAB_01698ab4;
    lVar39 = lVar37 + 0x119228 + ((ulong)local_1698 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_1698) {
      lVar39 = lVar37 + 0x119228;
    }
    if ((*(long **)(lVar39 + 0x28) == (long *)0x0) ||
       (puVar38 = (undefined8 *)**(long **)(lVar39 + 0x28), puVar38 == (undefined8 *)0x0)) {
      iVar32 = (int)*(char *)(*(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8) + 0x289f8);
    }
    else {
      uVar33 = (**(code **)*puVar38)();
      iVar32 = (int)*(char *)(*(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8) + 0x289f8);
      if ((((uVar33 & 1) != 0) && (*(long *)(lVar39 + 0x28) != 0)) &&
         (puVar38 = *(undefined8 **)(*(long *)(lVar39 + 0x28) + 8), puVar38 != (undefined8 *)0x0)) {
        (**(code **)*puVar38)();
      }
    }
  }
  *(int *)(*plVar3 + 0x158) = iVar32;
  if ((*(int *)(*plVar3 + 0x158) == -1) || ((int)(uint)local_16c0 < 2)) {
switchD_01698b34_default:
    return 0;
  }
  local_1698 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1690 = "HHAGradeMailFlag";
  FUN_0274d104(*plVar3 + 0x158,&local_1698,1);
  switch((uint)local_16c0) {
  case 2:
    *(undefined4 *)(*plVar3 + 0x14c) = 0x24;
    cVar41 = '\x01';
    lVar37 = *plVar3;
    break;
  case 8:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x3c;
    *(char *)(*plVar3 + 0x154) = *(char *)(*plVar3 + 0x154) + '\x01';
  case 7:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x3c;
    *(char *)(*plVar3 + 0x154) = *(char *)(*plVar3 + 0x154) + '\x01';
  case 6:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x24;
    *(char *)(*plVar3 + 0x154) = *(char *)(*plVar3 + 0x154) + '\x01';
  case 5:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x24;
    *(char *)(*plVar3 + 0x154) = *(char *)(*plVar3 + 0x154) + '\x01';
  case 4:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x24;
    *(char *)(*plVar3 + 0x154) = *(char *)(*plVar3 + 0x154) + '\x01';
  case 3:
    *(int *)(*plVar3 + 0x14c) = *(int *)(*plVar3 + 0x14c) + 0x40;
    lVar37 = *plVar3;
    cVar41 = *(char *)(lVar37 + 0x154) + '\x01';
    break;
  default:
    goto switchD_01698b34_default;
  }
  *(char *)(lVar37 + 0x154) = cVar41;
  FUN_016a18d4(&local_1698);
  *(undefined ***)(param_1 + 0xb20) = &local_1698;
  local_7f = 0;
  local_84 = 0;
  local_8c = 0;
  local_78 = 0;
  local_7b0 = 0;
  local_7a8 = 0;
  local_7a0 = 0;
  local_798 = 0;
  local_790 = 0;
  local_788 = 0;
  local_780 = 0;
  local_778 = 0;
  local_770 = 0;
  local_768 = 0;
  local_760 = 0;
  local_758 = 0;
  local_750 = 0;
  local_748 = 0;
  local_740 = 0;
  local_738 = 0;
  __s = (void *)(**(code **)(local_f20[0] + 0x18))(local_f20);
  memset(__s,0,0x754);
  local_76 = 0;
  FUN_016a03e0(&local_1698);
  uVar33 = FUN_01383880(local_6c);
  puVar27 = PTR_DAT_04bb2010;
  uVar50 = (uint)(uVar33 >> 0x20);
  if ((uint)uVar33 != uVar50) {
    local_17a0 = 0;
    puVar4 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    puVar6 = PTR_DAT_04bb2010 + 0x10;
    puVar7 = PTR_DAT_04bb6268 + 0x10;
    puVar8 = PTR_DAT_04bc0510 + 0x10;
    do {
      uVar47 = (uint)uVar33;
      local_16a0 = 0;
      local_16b0 = 0;
      puVar11 = puVar4 + (uVar33 & 0xffffffff);
      if (0x38 < uVar47) {
        puVar11 = puVar4;
      }
      local_16c0 = puVar5;
      puStack_16b8 = puVar6;
      local_16a8 = puVar6;
      uVar34 = FUN_017ba710(*puVar11,&local_16c0);
      if ((uVar34 & 1) != 0) {
        local_16cc = *puVar11;
        local_16d0 = uVar47;
        local_16c8 = FUN_017baf44();
        local_16c8 = local_16c8 & 1;
        local_16d8 = puVar7;
        if (uVar47 == 0) {
          local_1700 = (undefined *)((ulong)local_1700._4_4_ << 0x20);
LAB_016991ec:
          plVar40 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
        }
        else {
          local_1758 = (undefined *)CONCAT44(local_1758._4_4_,uVar47);
          if (uVar47 == 0) goto LAB_01699134;
          local_1700 = (undefined *)CONCAT44(local_1700._4_4_,uVar47);
          if (uVar47 == 0) goto LAB_016991ec;
          plVar10 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
          plVar40 = plVar10 + (uVar33 & 0xffffffff);
          if (0x38 < uVar47) {
            plVar40 = plVar10;
          }
        }
        if (*plVar40 != 0) {
          lVar37 = FUN_01a4fa00(&local_16d8);
          iVar32 = *(int *)(lVar37 + 0x10);
          iVar44 = *(int *)(lVar37 + 0x14);
          iVar36 = *(int *)(lVar37 + 0x20);
          iVar21 = *(int *)(lVar37 + 0x24);
          FUN_016a03e0(*(undefined8 *)(param_1 + 0xb20));
          lVar37 = 0;
          *(undefined4 *)(*(long *)(param_1 + 0xb20) + 0x1624) = 0;
          lVar39 = *(long *)(param_1 + 0xb18);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x24);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x28);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x2c);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x30);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x34);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x38);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x3c);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x40);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x44);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x48);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x4c);
          local_16f0 = 0;
          local_1700 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_16f8 = puVar27 + 0x10;
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar39 + 0x50);
          local_16e0 = 0;
          local_16e8 = puStack_16f8;
          do {
            iVar51 = (int)lVar37;
            local_1704 = iVar51;
            uVar33 = FUN_01a4f680(&local_16d8,lVar37);
            if ((uVar33 & 1) != 0) {
              bVar29 = 3 < iVar51 - 2U;
              iVar15 = iVar32;
              if (bVar29) {
                iVar15 = (int)local_16b0;
              }
              lVar39 = *(long *)(param_1 + 0xb20);
              *(undefined8 *)(lVar39 + 0xee8) = 0;
              *(undefined8 *)(lVar39 + 0xef0) = 0;
              *(undefined8 *)(lVar39 + 0xef8) = 0;
              *(undefined8 *)(lVar39 + 0xf00) = 0;
              *(undefined8 *)(lVar39 + 0xf08) = 0;
              *(undefined8 *)(lVar39 + 0xf10) = 0;
              *(undefined8 *)(lVar39 + 0xf18) = 0;
              iVar16 = iVar44;
              if (bVar29) {
                iVar16 = local_16b0._4_4_;
              }
              *(undefined8 *)(lVar39 + 0xf20) = 0;
              *(undefined8 *)(lVar39 + 0xf28) = 0;
              iVar17 = iVar36;
              if (bVar29) {
                iVar17 = (int)local_16a0;
              }
              local_16f0 = CONCAT44(iVar16,iVar15);
              *(undefined8 *)(lVar39 + 0xf30) = 0;
              *(undefined8 *)(lVar39 + 0xf38) = 0;
              *(undefined8 *)(lVar39 + 0xf40) = 0;
              iVar18 = iVar21;
              if (bVar29) {
                iVar18 = local_16a0._4_4_;
              }
              *(undefined8 *)(lVar39 + 0xf48) = 0;
              *(undefined8 *)(lVar39 + 0xf50) = 0;
              *(undefined8 *)(lVar39 + 0xf58) = 0;
              *(undefined8 *)(lVar39 + 0xf60) = 0;
              local_16e0 = CONCAT44(iVar18,iVar17);
              if (iVar18 + 1 != iVar16) {
                iVar1 = (iVar17 - iVar15) + 1;
                iVar52 = iVar16;
                iVar48 = iVar15;
                do {
                  iVar26 = iVar48 - iVar15;
                  iVar42 = iVar52 - iVar16;
                  uVar31 = iVar26 + iVar42 * iVar1;
                  local_1718 = puVar27 + 0x10;
                  local_1710 = iVar48;
                  iStack_170c = iVar52;
                  if ((0x3ff < uVar31) ||
                     ((*(uint *)(*(long *)(param_1 + 0xb20) + (ulong)(uVar31 >> 5) * 4 + 0xee8) >>
                       (ulong)(uVar31 & 0x1f) & 1) == 0)) {
                    uStack_1720 = 0;
                    local_1728 = local_1718;
                    FUN_01a5033c(&local_1730,&local_16d8,lVar37,&local_1718,&local_1728);
                    puVar28 = PTR_DAT_04bb43c0;
                    if ((short)local_1730 != -2) {
                      lVar39 = *(long *)PTR_DAT_04bb43c0;
                      uVar30 = FUN_0277d6c4(&local_1730);
                      if (*(long *)puVar28 != 0) {
                        lVar39 = *(long *)(lVar39 + 0x57e58);
                        uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                        if ((uVar30 < *(uint *)(lVar39 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                          FUN_0169e8d0(param_1,&local_1730,&local_1728,&local_1700,&local_1704,
                                       local_17a0);
                          local_1750 = puVar27 + 0x10;
                          local_1748 = 0;
                          local_1738 = 0;
                          local_1758 = PTR_DAT_04bbc1a0 + 0x10;
                          local_1740 = local_1750;
                          uVar33 = FUN_0277f02c(&local_1730,&local_1758);
                          puVar28 = PTR_DAT_04bb43c0;
                          if ((uVar33 & 1) != 0) {
                            if (iVar51 == 0) {
                              local_1760 = 0;
                              local_1768 = local_1730;
                              uStack_1764 = uStack_172c;
                              lVar39 = *(long *)PTR_DAT_04bb43c0;
                              local_1770 = puVar8;
                              uVar31 = FUN_0277d6c4(&local_1768);
                              if (*(long *)puVar28 != 0) {
                                lVar39 = *(long *)(lVar39 + 0x57e58);
                                uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                                if ((uVar31 < *(uint *)(lVar39 + 0x1d8)) &&
                                   (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar31 * 8) !=
                                    0)) {
                                  lVar39 = *(long *)PTR_DAT_04bc0428;
                                  uVar31 = FUN_0277d6c4(&local_1730);
                                  uVar31 = (uVar31 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                                  if (uVar31 < *(uint *)(lVar39 + 0x1d8)) {
                                    lVar39 = *(long *)(*(long *)(lVar39 + 0x1e0) +
                                                      (long)(int)uVar31 * 8);
                                    if (lVar39 != 0) {
                                      local_1760 = lVar39;
                                    }
                                  }
                                }
                              }
                              uVar33 = FUN_01ae59b0(&local_1770);
                              if ((uVar33 & 1) != 0) {
                                iVar46 = ((int)local_1738 - (int)local_1748) + 1;
                                *(int *)(*plVar3 + 0x150) =
                                     *(int *)(*plVar3 + 0x150) +
                                     iVar46 + iVar46 * (local_1738._4_4_ - local_1748._4_4_);
                              }
                            }
                            local_1738._0_4_ = (int)local_1738 + iVar26;
                            local_1738._4_4_ = local_1738._4_4_ + iVar42;
                            iVar42 = local_1748._4_4_ + iVar42;
                            local_1748._0_4_ = (int)local_1748 + iVar26;
                            iVar26 = local_1738._4_4_ + 1;
                            local_1748 = CONCAT44(iVar42,(int)local_1748);
                            if (iVar26 != iVar42) {
                              iVar46 = (int)local_1748;
                              do {
                                uVar31 = iVar46 + iVar42 * iVar1;
                                if (uVar31 < 0x400) {
                                  lVar39 = *(long *)(param_1 + 0xb20) + (ulong)(uVar31 >> 5) * 4;
                                  *(uint *)(lVar39 + 0xee8) =
                                       *(uint *)(lVar39 + 0xee8) | 1 << (ulong)(uVar31 & 0x1f);
                                }
                                if (iVar46 < (int)local_1738) {
                                  iVar46 = iVar46 + 1;
                                }
                                else {
                                  iVar42 = iVar42 + 1;
                                  iVar46 = (int)local_1748;
                                }
                              } while (((int)local_1748 != iVar46) || (iVar26 != iVar42));
                            }
                          }
                          goto LAB_016996e0;
                        }
                      }
                    }
                    if (uVar31 < 0x400) {
                      lVar39 = *(long *)(param_1 + 0xb20) + (ulong)(uVar31 >> 5) * 4;
                      *(uint *)(lVar39 + 0xee8) =
                           *(uint *)(lVar39 + 0xee8) | 1 << (ulong)(uVar31 & 0x1f);
                    }
                  }
LAB_016996e0:
                  if (iVar48 < iVar17) {
                    iVar48 = iVar48 + 1;
                  }
                  else {
                    iVar52 = iVar52 + 1;
                    iVar48 = iVar15;
                  }
                } while ((iVar15 != iVar48) || (iVar18 + 1 != iVar52));
              }
            }
            lVar37 = lVar37 + 1;
          } while (lVar37 != 8);
          local_1770 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_1770);
          local_1718 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_1718);
          plVar49 = (long *)PTR_DAT_04bb46b0;
          local_1718 = *(undefined **)PTR_DAT_04bb37e0;
          local_1770 = *(undefined **)PTR_DAT_04bb37e0;
          uVar31 = (uint)local_17a0;
          local_1728 = (undefined *)CONCAT44(local_1728._4_4_,uVar31);
          local_1758 = (undefined *)CONCAT44(local_1758._4_4_,local_6c);
          lVar37 = *(long *)PTR_DAT_04bb46b0;
          if (lVar37 != 0) {
            puVar38 = *(undefined8 **)(lVar37 + 0x10);
            if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
              lVar37 = (**(code **)(*(long *)*puVar38 + 0x38))();
              if (lVar37 != 0) {
                lVar37 = lVar37 + 0x70;
                goto LAB_016997d0;
              }
            }
            else if (((puVar38 != (undefined8 *)0x0) && ((long *)puVar38[0x26] != (long *)0x0)) &&
                    (lVar37 = (**(code **)(*(long *)puVar38[0x26] + 0x38))(), lVar37 != 0)) {
LAB_016997d0:
              if ((uint)local_1758 < 8) {
                lVar39 = lVar37 + 0x119228 + ((ulong)local_1758 & 0xffffffff) * 0xfa08;
                if (7 < (uint)local_1758) {
                  lVar39 = lVar37 + 0x119228;
                }
                lVar37 = lVar39 + 0x1df8 + ((ulong)local_1728 & 0xffffffff) * 0x2488;
                if (5 < (uint)local_1728) {
                  lVar37 = lVar39 + 0x1df8;
                }
                if ((*(long **)(lVar37 + 0x1ec8) == (long *)0x0) ||
                   (puVar38 = (undefined8 *)**(long **)(lVar37 + 0x1ec8),
                   puVar38 == (undefined8 *)0x0)) {
                  uVar33 = 0;
                }
                else {
                  uVar33 = (**(code **)*puVar38)();
                  uVar33 = uVar33 & 0xffffffff;
                }
                local_1758 = (undefined *)0xfffe;
                FUN_0277d4ac(&local_1758);
                puVar11 = (undefined4 *)(*(long *)(lVar37 + 0x1eb0) + *(long *)(lVar37 + 0x1ea8));
                local_1758 = (undefined *)CONCAT44(local_1758._4_4_,*puVar11);
                local_1770 = *(undefined **)(puVar11 + 2);
                local_1718 = *(undefined **)(puVar11 + 4);
                if (*(short *)((long)puVar11 + 0x1a) != *(short *)PTR_DAT_04bb3170) {
                  local_1770 = *(undefined **)PTR_DAT_04bb37e0;
                }
                if (*(short *)(puVar11 + 7) != *(short *)PTR_DAT_04bb3170) {
                  local_1718 = *(undefined **)PTR_DAT_04bb37e0;
                }
                if ((((uVar33 & 1) != 0) && (*(long *)(lVar37 + 0x1ec8) != 0)) &&
                   (puVar38 = *(undefined8 **)(*(long *)(lVar37 + 0x1ec8) + 8),
                   puVar38 != (undefined8 *)0x0)) {
                  (**(code **)*puVar38)();
                }
                puVar28 = PTR_DAT_04bb43c0;
                lVar39 = *(long *)PTR_DAT_04bb43c0;
                uVar30 = FUN_0277d6c4(&local_1770);
                lVar37 = *(long *)puVar28;
                if (lVar37 != 0) {
                  lVar39 = *(long *)(lVar39 + 0x57e58);
                  uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar39 + 0x1f8);
                  if ((uVar30 < *(uint *)(lVar39 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar39 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                    local_1748 = 0;
                    local_1758 = PTR_DAT_04bc0510 + 0x10;
                    local_1776 = local_1770._2_1_;
                    local_1775 = local_1770._3_1_;
                    local_1774 = local_1770._4_4_;
                    local_1778 = (undefined2)local_1770;
                    local_1750 = local_1770;
                    uVar30 = FUN_0277d6c4(&local_1750);
                    if (*(long *)PTR_DAT_04bb43c0 != 0) {
                      lVar37 = *(long *)(lVar37 + 0x57e58);
                      uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                      if ((uVar30 < *(uint *)(lVar37 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                        lVar37 = *(long *)PTR_DAT_04bc0428;
                        uVar30 = FUN_0277d6c4(&local_1778);
                        uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                        if (uVar30 < *(uint *)(lVar37 + 0x1d8)) {
                          lVar37 = *(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar30 * 8);
                          if (lVar37 != 0) {
                            local_1748 = lVar37;
                          }
                        }
                      }
                    }
                    iVar32 = FUN_01b15eb0(&local_1758);
                    *(int *)(*(long *)(param_1 + 0xb18) + 0x24) =
                         *(int *)(*(long *)(param_1 + 0xb18) + 0x24) + iVar32;
                    FUN_016a1134(param_1,&local_1758);
                    FUN_016a12ec(param_1,&local_1758);
                    FUN_016a1590(param_1,&local_1758);
                    lVar37 = *(long *)PTR_DAT_04bb43c0;
                  }
                }
                uVar30 = FUN_0277d6c4(&local_1718);
                lVar39 = *(long *)PTR_DAT_04bb43c0;
                if (lVar39 != 0) {
                  lVar37 = *(long *)(lVar37 + 0x57e58);
                  uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                  if ((uVar30 < *(uint *)(lVar37 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                    local_1748 = 0;
                    local_1758 = PTR_DAT_04bc0510 + 0x10;
                    local_177e = local_1718._2_1_;
                    local_177d = local_1718._3_1_;
                    local_177c = local_1718._4_4_;
                    local_1780 = (undefined2)local_1718;
                    local_1750 = local_1718;
                    uVar30 = FUN_0277d6c4(&local_1750);
                    if (*(long *)PTR_DAT_04bb43c0 != 0) {
                      lVar37 = *(long *)(lVar39 + 0x57e58);
                      uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                      if ((uVar30 < *(uint *)(lVar37 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar30 * 8) != 0)) {
                        lVar37 = *(long *)PTR_DAT_04bc0428;
                        uVar30 = FUN_0277d6c4(&local_1780);
                        uVar30 = (uVar30 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                        if (uVar30 < *(uint *)(lVar37 + 0x1d8)) {
                          lVar37 = *(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar30 * 8);
                          if (lVar37 != 0) {
                            local_1748 = lVar37;
                          }
                        }
                      }
                    }
                    iVar32 = FUN_01b15eb0(&local_1758);
                    *(int *)(*(long *)(param_1 + 0xb18) + 0x24) =
                         *(int *)(*(long *)(param_1 + 0xb18) + 0x24) + iVar32;
                    FUN_016a1134(param_1,&local_1758);
                    FUN_016a12ec(param_1,&local_1758);
                    FUN_016a1590(param_1,&local_1758);
                  }
                }
              }
            }
          }
          uVar33 = FUN_017ff970(*(undefined4 *)(*plVar3 + 0x158),local_17a0);
          uVar30 = local_6c;
          uVar25 = (undefined1)local_17a0;
          if ((uVar33 & 1) != 0) {
            if (*(char *)(*plVar3 + 0x157) != -1) {
              uVar45 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar45 = uVar45 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar45 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar45;
              if (0x1d < (uint)((ulong)uVar45 * 100 >> 0x20)) goto LAB_01699c38;
            }
            *(undefined1 *)(*plVar3 + 0x157) = uVar25;
          }
LAB_01699c38:
          FUN_0169fdc8(param_1);
          *(int *)(*(long *)(param_1 + 0xb18) + 0x48) =
               *(int *)(*(long *)(param_1 + 0xb18) + 0x48) +
               *(char *)(*(long *)(param_1 + 0xb20) + 0x1618) * 400;
          lVar37 = *(long *)(param_1 + 0xb20);
          iVar32 = *(int *)(lVar37 + 0x1610);
          if (iVar32 < 10) {
LAB_01699cbc:
            iVar44 = 1000;
            if (5 < iVar32) goto LAB_01699cc8;
          }
          else {
            iVar44 = 4000;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x123) = uVar25;
            lVar37 = *(long *)(param_1 + 0xb20);
            iVar32 = *(int *)(lVar37 + 0x1610);
            if (((iVar32 < 0x14) && (iVar44 = 3000, iVar32 < 0xf)) && (iVar44 = 2000, iVar32 < 10))
            goto LAB_01699cbc;
LAB_01699cc8:
            *(int *)(*(long *)(param_1 + 0xb18) + 0x48) =
                 *(int *)(*(long *)(param_1 + 0xb18) + 0x48) + iVar44;
            lVar37 = *(long *)(param_1 + 0xb20);
          }
          iVar32 = 0;
          uVar45 = 0;
          uVar34 = 0;
          lVar37 = lVar37 + 0xfa4;
          uVar33 = 0xffffffff;
          do {
            uVar23 = uVar34 << 2;
            uVar24 = uVar34 >> 0x1f;
            lVar39 = uVar34 << 0x20;
            uVar34 = (ulong)((int)uVar34 + 3);
            iVar36 = *(int *)(lVar37 + (-uVar24 & 0xfffffffc00000000 | uVar23));
            iVar44 = iVar32;
            if (iVar32 <= iVar36) {
              iVar44 = iVar36;
            }
            uVar35 = uVar45;
            if (iVar36 <= iVar32) {
              uVar35 = (uint)uVar33;
            }
            iVar32 = *(int *)(lVar37 + (lVar39 + 0x100000000 >> 0x1e));
            iVar21 = *(int *)(lVar37 + (lVar39 + 0x200000000 >> 0x1e));
            iVar36 = iVar44;
            if (iVar44 <= iVar32) {
              iVar36 = iVar32;
            }
            if (iVar44 < iVar32) {
              uVar35 = uVar45 + 1;
            }
            iVar32 = iVar36;
            if (iVar36 <= iVar21) {
              iVar32 = iVar21;
            }
            uVar2 = uVar45 + 2;
            uVar45 = uVar45 + 3;
            if (iVar21 <= iVar36) {
              uVar2 = uVar35;
            }
            uVar33 = (ulong)uVar2;
          } while (uVar45 != 0x39);
          if (3 < iVar32) {
            *(int *)(*plVar3 + 0x28) = *(int *)(*plVar3 + 0x28) + iVar32 * 1000;
            iVar44 = *(int *)(*plVar3 + 0x10);
            if (iVar44 < iVar32) {
LAB_01699d78:
              *(uint *)(*plVar3 + 0xc) = uVar2;
              *(int *)(*(long *)(param_1 + 0xb18) + 0x10) = iVar32;
              *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xcd) = uVar25;
              puVar12 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 0x11c0);
              puVar19 = puVar12 + uVar33 * 4;
              if (0x38 < uVar2) {
                puVar19 = puVar12;
              }
              lVar37 = *(long *)(param_1 + 0xb18);
              *(undefined2 *)(lVar37 + 0x5c) = *puVar19;
              *(undefined1 *)(lVar37 + 0x5e) = *(undefined1 *)(puVar19 + 1);
              *(undefined1 *)(lVar37 + 0x5f) = *(undefined1 *)((long)puVar19 + 3);
              *(undefined4 *)(lVar37 + 0x60) = *(undefined4 *)(puVar19 + 2);
            }
            else if (iVar44 == iVar32) {
              uVar45 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar45 = uVar45 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar45 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar45;
              if ((uint)((ulong)uVar45 * 100 >> 0x20) < 0x32) goto LAB_01699d78;
            }
          }
          FUN_0169ff70(param_1,local_17a0);
          iVar44 = 0;
          iVar36 = 0;
          uVar33 = 0;
          local_1758 = (undefined *)((ulong)local_1758 & 0xffffffff00000000);
          lVar37 = *(long *)(param_1 + 0xb20) + 0x1104;
          iVar32 = 1;
          while( true ) {
            iVar21 = *(int *)(lVar37 + (-(uVar33 >> 0x1f) & 0xfffffffc00000000 | uVar33 << 2));
            if (iVar36 < iVar21) {
              iVar44 = iVar32 + -1;
              local_1758 = (undefined *)CONCAT44(local_1758._4_4_,iVar44);
              iVar36 = iVar21;
            }
            if (iVar32 == 0x2f) break;
            iVar21 = *(int *)(lVar37 + ((long)((uVar33 << 0x20) + 0x100000000) >> 0x1e));
            if (iVar36 < iVar21) {
              local_1758 = (undefined *)CONCAT44(local_1758._4_4_,iVar32);
              iVar44 = iVar32;
              iVar36 = iVar21;
            }
            uVar33 = (ulong)((int)uVar33 + 2);
            iVar32 = iVar32 + 2;
          }
          if (4 < iVar36) {
            lVar37 = *plVar3;
            if (*(int *)(lVar37 + 0x20) == 0) {
LAB_01699ee8:
              *(int *)(lVar37 + 0x20) = iVar44;
              puVar12 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 0x1480);
              lVar37 = *(long *)(param_1 + 0xb18);
              puVar19 = puVar12 + ((ulong)local_1758 & 0xffffffff) * 4;
              if (0x2e < (uint)local_1758) {
                puVar19 = puVar12;
              }
              *(undefined2 *)(lVar37 + 0xa4) = *puVar19;
              *(undefined1 *)(lVar37 + 0xa6) = *(undefined1 *)(puVar19 + 1);
              *(undefined1 *)(lVar37 + 0xa7) = *(undefined1 *)((long)puVar19 + 3);
              *(undefined4 *)(lVar37 + 0xa8) = *(undefined4 *)(puVar19 + 2);
              *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd6) = uVar25;
              lVar37 = *(long *)(param_1 + 0xb18);
            }
            else {
              uVar45 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar45 = uVar45 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar45 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar45;
              if ((uint)((ulong)uVar45 * 100 >> 0x20) < 0x1e) goto LAB_01699ee8;
            }
            *(int *)(lVar37 + 0x4c) = *(int *)(lVar37 + 0x4c) + iVar36 * 400;
          }
          FUN_016a01f0(param_1,local_17a0);
          lVar37 = *plVar49;
          local_1758 = (undefined *)CONCAT44(local_1758._4_4_,uVar30);
          if (lVar37 == 0) {
LAB_01699fb4:
            lVar37 = 0;
            plVar40 = _DAT_00000028;
            if (_DAT_00000028 == (long *)0x0) goto LAB_0169a00c;
LAB_01699fc0:
            if ((undefined8 *)*plVar40 == (undefined8 *)0x0) goto LAB_0169a00c;
            uVar30 = (*(code *)**(undefined8 **)*plVar40)();
            uVar30 = uVar30 ^ 1;
          }
          else {
            puVar38 = *(undefined8 **)(lVar37 + 0x10);
            if ((*(byte *)(lVar37 + 0x453) & 1) != 0) {
              if (((puVar38 != (undefined8 *)0x0) && ((long *)puVar38[0x26] != (long *)0x0)) &&
                 (lVar37 = (**(code **)(*(long *)puVar38[0x26] + 0x38))(), lVar37 != 0))
              goto LAB_01699fa8;
              goto LAB_01699fb4;
            }
            lVar37 = (**(code **)(*(long *)*puVar38 + 0x38))();
            if (lVar37 == 0) goto LAB_01699fb4;
            lVar37 = lVar37 + 0x70;
LAB_01699fa8:
            if (7 < (uint)local_1758) goto LAB_01699fb4;
            lVar39 = lVar37 + 0x119228 + ((ulong)local_1758 & 0xffffffff) * 0xfa08;
            if (7 < (uint)local_1758) {
              lVar39 = lVar37 + 0x119228;
            }
            lVar37 = lVar39 + 0xf9d0;
            plVar40 = *(long **)(lVar39 + 0xf9f8);
            if (plVar40 != (long *)0x0) goto LAB_01699fc0;
LAB_0169a00c:
            uVar30 = 1;
          }
          lVar39 = *(long *)(lVar37 + 0x10) + *(long *)(lVar37 + 8);
          local_1758 = (undefined *)CONCAT44(local_1758._4_4_,uVar31);
          pcVar13 = (char *)(lVar39 + 1 + (local_17a0 & 0xffffffff));
          if (5 < uVar31) {
            pcVar13 = (char *)(lVar39 + 1);
          }
          if (*pcVar13 == '\0') {
            uVar45 = 0;
            uVar31 = 0;
          }
          else {
            pbVar14 = (byte *)(lVar39 + 7) + (local_17a0 & 0xffffffff);
            if (5 < uVar31) {
              pbVar14 = (byte *)(lVar39 + 7);
            }
            uVar45 = (uint)*pbVar14;
            uVar31 = (uint)*pbVar14;
          }
          if ((uVar30 & 1) == 0) {
            uVar31 = uVar45;
            if ((*(long *)(lVar37 + 0x28) != 0) &&
               (puVar38 = *(undefined8 **)(*(long *)(lVar37 + 0x28) + 8),
               puVar38 != (undefined8 *)0x0)) {
              (**(code **)*puVar38)();
            }
          }
          if (uVar31 != 0) {
            *(uint *)(*(long *)(param_1 + 0xb18) + 0x50) =
                 *(int *)(*(long *)(param_1 + 0xb18) + 0x50) + uVar31 * -0x9c4;
            pbVar14 = (byte *)(*(long *)(param_1 + 0xb20) + 0x1619);
            uVar30 = (uint)*pbVar14;
            if (uVar30 < uVar31) {
LAB_0169a0f4:
              *pbVar14 = (byte)uVar31;
              *(undefined1 *)(*plVar3 + 0x122) = uVar25;
              *(uint *)(*plVar3 + 0x140) = *(uint *)(*plVar3 + 0x140) | 0x4000;
            }
            else if (uVar30 == uVar31) {
              uVar30 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar30 = uVar30 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar30 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar30;
              if ((uint)((ulong)uVar30 * 100 >> 0x20) < 0x28) goto LAB_0169a0f4;
            }
          }
          lVar37 = *(long *)(param_1 + 0xb20);
          if (7 < *(int *)(lVar37 + 0x1610)) {
            lVar39 = *plVar3;
            if (*(char *)(lVar39 + 0x114) != -1) {
              uVar31 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar31 = uVar31 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar31 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar31;
              if (0x31 < (uint)((ulong)uVar31 * 100 >> 0x20)) goto LAB_0169a19c;
            }
            *(uint *)(lVar39 + 0x140) = *(uint *)(lVar39 + 0x140) | 1;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x114) = uVar25;
            lVar37 = *(long *)(param_1 + 0xb20);
          }
LAB_0169a19c:
          if ('\x01' < *(char *)(lVar37 + 0x1618)) {
            lVar39 = *plVar3;
            if (*(char *)(lVar39 + 0x116) != -1) {
              uVar31 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar31 = uVar31 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar31 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar31;
              if (0x31 < (uint)((ulong)uVar31 * 100 >> 0x20)) goto LAB_0169a248;
            }
            *(uint *)(lVar39 + 0x140) = *(uint *)(lVar39 + 0x140) | 4;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x116) = uVar25;
            lVar37 = *(long *)(param_1 + 0xb20);
            lVar39 = *(long *)(param_1 + 0xb18);
            *(undefined2 *)(lVar39 + 0x128) = *(undefined2 *)(lVar37 + 0x15f8);
            *(undefined1 *)(lVar39 + 0x12a) = *(undefined1 *)(lVar37 + 0x15fa);
            *(undefined1 *)(lVar39 + 299) = *(undefined1 *)(lVar37 + 0x15fb);
            *(undefined4 *)(lVar39 + 300) = *(undefined4 *)(lVar37 + 0x15fc);
            lVar37 = *(long *)(param_1 + 0xb20);
          }
LAB_0169a248:
          bVar22 = *(byte *)(lVar37 + 0x1622);
          if (*(int *)(lVar37 + 0x1604) == 0xe) {
            if (((bVar22 & 1) == 0) && (*(int *)(lVar37 + 0x1600) != 0xe)) {
              lVar37 = *plVar3;
              if (*(char *)(lVar37 + 0x118) != -1) {
                uVar31 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                DAT_05582b70 = DAT_05582b74;
                DAT_05582b74 = DAT_05582b78;
                uVar31 = uVar31 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar31 ^ DAT_05582b7c;
                DAT_05582b78 = DAT_05582b7c;
                DAT_05582b7c = uVar31;
                if (0x31 < (uint)((ulong)uVar31 * 100 >> 0x20)) goto LAB_0169900c;
              }
              *(uint *)(lVar37 + 0x140) = *(uint *)(lVar37 + 0x140) | 0x10;
              *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x118) = uVar25;
              *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd1) = uVar25;
              lVar37 = 0x1600;
              goto LAB_01698fb8;
            }
          }
          else {
            *(byte *)(lVar37 + 0x1622) = bVar22 | 1;
            lVar37 = *plVar3;
            if (*(char *)(lVar37 + 0x118) != -1) {
              uVar31 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar31 = uVar31 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar31 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar31;
              if (0x31 < (uint)((ulong)uVar31 * 100 >> 0x20)) goto LAB_0169900c;
            }
            *(uint *)(lVar37 + 0x140) = *(uint *)(lVar37 + 0x140) | 0x10;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0x118) = uVar25;
            *(undefined1 *)(*(long *)(param_1 + 0xb18) + 0xd1) = uVar25;
            lVar37 = 0x1604;
LAB_01698fb8:
            *(undefined4 *)(*(long *)(param_1 + 0xb18) + 0x18) =
                 *(undefined4 *)(*(long *)(param_1 + 0xb20) + lVar37);
            lVar37 = *(long *)(param_1 + 0xb18);
            puVar12 = (undefined2 *)(*(long *)(param_1 + 0xb20) + 5000);
            puVar19 = puVar12 + (ulong)*(uint *)(lVar37 + 0x18) * 4;
            if (0xe < *(uint *)(lVar37 + 0x18)) {
              puVar19 = puVar12;
            }
            *(undefined2 *)(lVar37 + 0x7c) = *puVar19;
            *(undefined1 *)(lVar37 + 0x7e) = *(undefined1 *)(puVar19 + 1);
            *(undefined1 *)(lVar37 + 0x7f) = *(undefined1 *)((long)puVar19 + 3);
            *(undefined4 *)(lVar37 + 0x80) = *(undefined4 *)(puVar19 + 2);
          }
LAB_0169900c:
          iVar32 = *(int *)(*(long *)(param_1 + 0xb20) + 0x1624);
          *(undefined4 *)(*(long *)(param_1 + 0xb20) + 0x1624) = 0;
          lVar37 = *(long *)(param_1 + 0xb18);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x24);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x28);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x2c);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x30);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x34);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x38);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x3c);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x40);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x44);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x48);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x4c);
          *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) =
               *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) + *(int *)(lVar37 + 0x50);
          piVar9 = (int *)(*(long *)(param_1 + 0xb18) + 0xd8);
          piVar20 = piVar9 + local_17a0;
          if (5 < local_17a0) {
            piVar20 = piVar9;
          }
          *piVar20 = *(int *)(*(long *)(param_1 + 0xb20) + 0x1624) - iVar32;
        }
      }
LAB_01699134:
      uVar31 = 0x39;
      if ((int)uVar47 < 0x39) {
        uVar31 = uVar47 + 1;
      }
      uVar33 = (ulong)uVar31;
      local_17a0 = local_17a0 + 1;
    } while (uVar31 != uVar50);
  }
  bVar22 = *(byte *)(*(long *)(param_1 + 0xb20) + 0x1620);
  uVar50 = (uint)bVar22 - (bVar22 >> 1 & 0x55555555);
  uVar50 = (uVar50 >> 2 & 0x33333333) + (uVar50 & 0x33333333);
  uVar50 = uVar50 + (uVar50 >> 4) & 0xf0f0f0f;
  uVar50 = uVar50 + (uVar50 >> 8);
  if ((uVar50 + (uVar50 >> 0x10) & 0x3c) != 0) {
    *(int *)(*plVar3 + 0x30) = *(int *)(*plVar3 + 0x30) + 0x9c4;
  }
  lVar37 = *plVar3;
  if (*(int *)(lVar37 + 0x30) != 0) {
    *(uint *)(lVar37 + 0x140) = *(uint *)(lVar37 + 0x140) | 2;
    *(undefined1 *)(*plVar3 + 0x115) = 0;
    lVar37 = *plVar3;
  }
  if (*(int *)(lVar37 + 0x40) != 0) {
    *(uint *)(lVar37 + 0x140) = *(uint *)(lVar37 + 0x140) | 0x20;
    lVar37 = *plVar3;
  }
  if (*(char *)(lVar37 + 0xd2) != -1) {
    *(char *)(lVar37 + 0x117) = *(char *)(lVar37 + 0xd2);
    *(uint *)(*plVar3 + 0x140) = *(uint *)(*plVar3 + 0x140) | 8;
    lVar37 = *plVar3;
  }
  *(undefined4 *)(lVar37 + 0x110) = 0;
  lVar37 = *plVar3;
  *(int *)(lVar37 + 0x110) = *(int *)(lVar37 + 0x110) + *(int *)(lVar37 + 0x24);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x28);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x2c);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x30);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x34);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x38);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x3c);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x40);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x44);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x48);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x4c);
  *(int *)(*plVar3 + 0x110) = *(int *)(*plVar3 + 0x110) + *(int *)(lVar37 + 0x50);
  if (*(int *)(*plVar3 + 0x110) < 0) {
    *(undefined4 *)(*plVar3 + 0x110) = 0;
  }
  local_16c0 = (undefined *)CONCAT44(local_16c0._4_4_,local_6c);
  lVar37 = *plVar49;
  if (lVar37 == 0) goto switchD_0169a408_default;
  puVar38 = *(undefined8 **)(lVar37 + 0x10);
  if ((*(byte *)(lVar37 + 0x453) & 1) == 0) {
    lVar37 = (**(code **)(*(long *)*puVar38 + 0x38))();
    if (lVar37 == 0) goto switchD_0169a408_default;
    lVar37 = lVar37 + 0x70;
  }
  else if (((puVar38 == (undefined8 *)0x0) || ((long *)puVar38[0x26] == (long *)0x0)) ||
          (lVar37 = (**(code **)(*(long *)puVar38[0x26] + 0x38))(), lVar37 == 0))
  goto switchD_0169a408_default;
  puVar27 = local_16c0;
  uVar50 = (uint)local_16c0;
  if (7 < (uint)local_16c0) goto switchD_0169a408_default;
  local_16c0 = (undefined *)((ulong)local_16c0 & 0xffffffff00000000);
  lVar39 = lVar37 + 0x119228 + ((ulong)puVar27 & 0xffffffff) * 0xfa08;
  if (7 < uVar50) {
    lVar39 = lVar37 + 0x119228;
  }
  if (*(long **)(lVar39 + 0x28) == (long *)0x0) {
    uVar33 = 0;
  }
  else {
    puVar38 = (undefined8 *)**(long **)(lVar39 + 0x28);
    uVar33 = 0;
    if (puVar38 != (undefined8 *)0x0) {
      uVar33 = (**(code **)*puVar38)();
    }
  }
  uVar50 = *(uint *)(*(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8));
  if (8 < uVar50) {
    uVar50 = 0;
  }
  local_16c0 = (undefined *)CONCAT44(local_16c0._4_4_,uVar50);
  if ((((uVar33 & 1) != 0) && (*(long *)(lVar39 + 0x28) != 0)) &&
     (puVar38 = *(undefined8 **)(*(long *)(lVar39 + 0x28) + 8), puVar38 != (undefined8 *)0x0)) {
    (**(code **)*puVar38)();
  }
  switch((uint)local_16c0) {
  case 2:
    lVar37 = *plVar3;
    if (9999 < (int)*(uint *)(lVar37 + 0x110)) {
      uVar50 = *(uint *)(lVar37 + 0x110) >> 3;
LAB_0169a49c:
      if (uVar50 < 0x753) goto LAB_0169a4f8;
LAB_0169a4a4:
      *(undefined4 *)(lVar37 + 8) = 0;
      goto switchD_0169a408_default;
    }
    break;
  case 3:
    lVar37 = *plVar3;
    if ((int)*(uint *)(lVar37 + 0x110) < 17000) break;
    if (0xb3a < *(uint *)(lVar37 + 0x110) >> 3) goto LAB_0169a4a4;
LAB_0169a4f8:
    uVar43 = 1;
    goto LAB_0169a4fc;
  case 4:
    lVar37 = *plVar3;
    uVar50 = *(uint *)(lVar37 + 0x110);
    if (24999 < (int)uVar50) {
      uVar47 = 34999;
LAB_0169a4f0:
      if (uVar50 <= uVar47) goto LAB_0169a4f8;
      goto LAB_0169a4a4;
    }
    break;
  case 5:
    lVar37 = *plVar3;
    uVar50 = *(uint *)(lVar37 + 0x110);
    if (37999 < (int)uVar50) {
      uVar47 = 46999;
      goto LAB_0169a4f0;
    }
    break;
  case 6:
    lVar37 = *plVar3;
    if (49999 < (int)*(uint *)(lVar37 + 0x110)) {
      uVar50 = *(uint *)(lVar37 + 0x110) >> 5;
      goto LAB_0169a49c;
    }
    break;
  case 7:
    lVar37 = *plVar3;
    uVar50 = *(uint *)(lVar37 + 0x110);
    if (63999 < (int)uVar50) {
      uVar47 = 0x24f7;
LAB_0169a4ec:
      uVar47 = uVar47 | 0x10000;
      goto LAB_0169a4f0;
    }
    break;
  case 8:
    lVar37 = *plVar3;
    uVar50 = *(uint *)(lVar37 + 0x110);
    if (79999 < (int)uVar50) {
      uVar47 = 0x5f8f;
      goto LAB_0169a4ec;
    }
    break;
  default:
    goto switchD_0169a408_default;
  }
  uVar43 = 2;
LAB_0169a4fc:
  *(undefined4 *)(lVar37 + 8) = uVar43;
switchD_0169a408_default:
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0xb20) = 0;
  return 1;
}

