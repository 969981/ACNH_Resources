
/* WARNING: Removing unreachable block (ram,0x01e24a18) */
/* WARNING: Removing unreachable block (ram,0x01e2487c) */
/* WARNING: Removing unreachable block (ram,0x01e24870) */
/* WARNING: Removing unreachable block (ram,0x01e248ac) */
/* WARNING: Removing unreachable block (ram,0x01e24b24) */
/* WARNING: Removing unreachable block (ram,0x01e24a3c) */
/* WARNING: Removing unreachable block (ram,0x01e24b48) */

bool FUN_01e24634(undefined8 param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined *local_7e8;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  byte local_7d8;
  undefined **local_7d0;
  undefined **ppuStack_7c8;
  undefined8 *local_7c0;
  byte *pbStack_7b8;
  undefined8 local_7ac;
  byte local_7a4 [4];
  undefined *local_7a0;
  undefined *puStack_798;
  int local_790;
  int iStack_78c;
  undefined *local_788;
  int local_780;
  int iStack_77c;
  undefined *local_778;
  char *local_770;
  int local_418;
  int local_414;
  int local_408;
  int local_404;
  
  puVar8 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_770 = "RcmImmQuestComplete";
  local_778 = puVar1;
  uVar12 = FUN_0273f0a0(&local_778);
  if ((uVar12 & 1) == 0) {
    local_770 = "RcmImmQuestRunning";
    local_778 = puVar1;
    uVar12 = FUN_0273f0a0(&local_778);
    if ((uVar12 & 1) == 0) {
      local_778 = puVar8 + 0x10;
      local_770 = "RcmImmQuestOpen";
      uVar12 = FUN_0273f0a0(&local_778);
      if ((uVar12 & 1) == 0) {
        return false;
      }
    }
  }
  iVar10 = FUN_0285e924(param_2);
  local_778 = (undefined *)CONCAT44(local_778._4_4_,iVar10);
  if ((iVar10 < 2) || (lVar14 = *(long *)PTR_DAT_04bb46b0, lVar14 == 0)) {
    return false;
  }
  puVar15 = *(undefined8 **)(lVar14 + 0x10);
  if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
    lVar14 = (**(code **)(*(long *)*puVar15 + 0x38))();
    if (lVar14 == 0) {
      return false;
    }
    lVar14 = lVar14 + 0x70;
  }
  else {
    if (puVar15 == (undefined8 *)0x0) {
      return false;
    }
    if ((long *)puVar15[0x26] == (long *)0x0) {
      return false;
    }
    lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
    if (lVar14 == 0) {
      return false;
    }
  }
  if ((*(long **)(&LAB_00205730 + lVar14) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(&LAB_00205730 + lVar14), puVar15 == (undefined8 *)0x0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (**(code **)*puVar15)();
    uVar11 = uVar11 ^ 1;
  }
  pbVar2 = (byte *)(*(long *)(&LAB_00205718 + lVar14) + *(long *)(&LAB_00205710 + lVar14) + 0xba);
  pbVar3 = pbVar2 + param_2;
  if (2 < param_2) {
    pbVar3 = pbVar2;
  }
  bVar6 = *pbVar3;
  local_778._0_4_ = param_2;
  if (bVar6 < 4) {
    lVar17 = *(long *)PTR_DAT_04bb48f0;
    FUN_01e2543c(lVar17);
    if (bVar6 != 3) {
      lVar17 = lVar17 + (ulong)(uint)bVar6 * 0x70;
    }
    pbVar2 = (byte *)(*(long *)(&LAB_00205718 + lVar14) + *(long *)(&LAB_00205710 + lVar14) + 0xb7);
    pbVar3 = pbVar2 + param_2;
    if (2 < param_2) {
      pbVar3 = pbVar2;
    }
    local_778._0_4_ = (uint)*pbVar3;
    if (((uint)local_778 < 10) && (FUN_02a7cf70(&local_778), ((ulong)local_770 & 1) != 0)) {
      local_7a0 = PTR_DAT_04bbc1a0 + 0x10;
      local_7d0 = (undefined **)CONCAT44(local_7d0._4_4_,param_3);
      local_790 = local_418 + -2;
      puStack_798 = PTR_DAT_04bb2010 + 0x10;
      iStack_77c = local_404 + 2;
      if (iStack_77c <= local_414) {
        local_414 = iStack_77c;
      }
      if (local_408 <= local_790) {
        local_408 = local_790;
      }
      iStack_78c = local_414 + -2;
      local_780 = local_408 + 2;
      if (local_780 <= local_790) {
        local_790 = local_780;
      }
      if (iStack_77c <= iStack_78c) {
        iStack_77c = iStack_78c;
      }
      local_788 = puStack_798;
      if (((DAT_0538c570 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_0538c570), iVar10 != 0)) {
        DAT_0538c560 = 0;
        DAT_0538c568 = (undefined8 *)0x0;
        lVar13 = FUN_038cd998();
        nn::os::LockMutex((MutexType *)(lVar13 + 0x20));
        if (DAT_0538c568 == (undefined8 *)0x0) {
          if (((DAT_0538c588 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_0538c588), iVar10 != 0)) {
            DAT_0538c578 = 0x200000001;
            DAT_0538c580 = 0x700000004;
            __cxa_guard_release(&DAT_0538c588);
          }
          DAT_0538c568 = &DAT_0538c578;
          DAT_0538c560 = 1;
        }
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x20));
        __cxa_guard_release(&DAT_0538c570);
      }
      uVar12 = (ulong)(int)local_7d0;
      if ((DAT_0538c560 & uVar12 < 4) == 0) {
        uVar12 = 0;
      }
      uVar5 = *(uint *)((long)DAT_0538c568 + uVar12 * 4);
      local_7a4[0] = 0;
      local_7ac = 0xfffe;
      FUN_0277d4ac(&local_7ac);
      ppuStack_7c8 = &local_7a0;
      local_7d0 = &PTR_LAB_04a5d0e8;
      pbStack_7b8 = local_7a4;
      local_7e8 = PTR_DAT_04bbfe68 + 0x10;
      uStack_7dc = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
      local_7e0 = 1;
      local_7c0 = &local_7ac;
      local_7d8 = FUN_017baf44();
      puVar15 = (undefined8 *)(lVar17 + 0x3c);
      local_7a4[0] = 0;
      uVar7 = 0;
      if (param_3 != 3) {
        uVar7 = param_3;
      }
      local_7d8 = local_7d8 & 1;
      puVar4 = puVar15 + uVar7;
      if (2 < uVar7) {
        puVar4 = puVar15;
      }
      local_7ac = *puVar4;
      FUN_01a51a0c(&local_7e8,0,&local_7a0,&local_7d0);
      uVar18 = 0;
      if (local_7a4[0] != 0) {
        uVar18 = 1 << (ulong)(uVar7 & 0x1f);
      }
      if (param_3 == 3) {
        local_7ac = *(undefined8 *)(lVar17 + 0x44);
        local_7a4[0] = 0;
        FUN_01a51a0c(&local_7e8,0,&local_7a0,&local_7d0);
        bVar6 = local_7a4[0];
        local_7a4[0] = 0;
        uVar7 = uVar18 & 0xfffffffd | (uint)bVar6 << 1;
        local_7ac = *(undefined8 *)(lVar17 + 0x4c);
        FUN_01a51a0c(&local_7e8,0,&local_7a0,&local_7d0);
        uVar18 = uVar7 & 0xfffffffb;
        if (local_7a4[0] != 0) {
          uVar18 = uVar7 | 4;
        }
      }
      bVar9 = true;
      if ((uVar18 & 0xffff) != (uVar5 & 0xffff)) {
        local_7a4[0] = 0;
        uVar7 = 0;
        if (param_3 != 3) {
          uVar7 = param_3;
        }
        puVar4 = puVar15 + uVar7;
        if (2 < uVar7) {
          puVar4 = puVar15;
        }
        local_7ac = *puVar4;
        FUN_01a51a0c(&local_7e8,1,&local_7a0,&local_7d0);
        uVar16 = 0;
        if (local_7a4[0] != 0) {
          uVar16 = 1 << (ulong)(uVar7 & 0x1f);
        }
        if (param_3 == 3) {
          local_7ac = *(undefined8 *)(lVar17 + 0x44);
          local_7a4[0] = 0;
          FUN_01a51a0c(&local_7e8,1,&local_7a0,&local_7d0);
          bVar6 = local_7a4[0];
          local_7a4[0] = 0;
          uVar7 = uVar16 & 0xfffffffd | (uint)bVar6 << 1;
          local_7ac = *(undefined8 *)(lVar17 + 0x4c);
          FUN_01a51a0c(&local_7e8,1,&local_7a0,&local_7d0);
          uVar16 = uVar7 & 0xfffffffb;
          if (local_7a4[0] != 0) {
            uVar16 = uVar7 | 4;
          }
        }
        bVar9 = ((uVar16 | uVar18) & 0xffff) == (uVar5 & 0xffff);
      }
      goto LAB_01e24814;
    }
  }
  bVar9 = false;
LAB_01e24814:
  if ((uVar11 & 1) != 0) {
    return bVar9;
  }
  if (*(long *)(&LAB_00205730 + lVar14) == 0) {
    return bVar9;
  }
  puVar15 = *(undefined8 **)(*(long *)(&LAB_00205730 + lVar14) + 8);
  if (puVar15 == (undefined8 *)0x0) {
    return bVar9;
  }
  (**(code **)*puVar15)();
  return bVar9;
}

