
void FUN_021328c0(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  undefined1 uVar14;
  byte bVar15;
  long lVar16;
  undefined8 *puVar17;
  char *__dest;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  undefined *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined *local_78;
  char *local_70;
  ulong uStack_68;
  
  plVar18 = *(long **)(param_1[1] + 0x3b8);
  FUN_0212eca8(plVar18 + 0x154a,1,0);
  plVar18[0x15ab] = plVar18[0x15ab] | 0x40000000000000;
  puVar3 = PTR_DAT_04bb2020;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "";
  FUN_02085e20(plVar18[3],0,*(undefined4 *)((long)param_1 + 0x1c),&local_78,0);
  *(undefined4 *)(plVar18[3] + 0x29c) = 0x459c1800;
  uVar7 = (**(code **)(*param_1 + 0x50))(param_1);
  puVar4 = PTR_DAT_04bb27c0;
  lVar16 = *(long *)(param_1[1] + 0x3b0);
  if (((uVar7 & 1) == 0) && (*(char *)((long)param_1 + 0x25) == '\0')) {
    *(undefined4 *)(param_1 + 2) = 0;
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    FUN_01e5a930(0x40000000,lVar16,0xd,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,6);
    __dest = *(char **)(lVar16 + 0x3b8);
    if (__dest != "MaReTakenAback") {
      iVar6 = 0xe;
      if (*(int *)(lVar16 + 0x3c0) < 0xf) {
        iVar6 = *(int *)(lVar16 + 0x3c0) + -1;
      }
      memcpy(__dest,"MaReTakenAback",(long)iVar6);
      __dest[iVar6] = '\0';
    }
    *(undefined4 *)(lVar16 + 0x3a0) = 0;
    *(undefined1 *)(lVar16 + 0x410) = 0;
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x10;
    goto LAB_02132df4;
  }
  if ((uVar7 & 1) != 0) {
    lVar11 = *(long *)PTR_DAT_04bb27c0;
    if (lVar11 != 0) {
      uVar20 = *(uint *)((long)param_1 + 0x1c);
      if ((((uVar20 == 0) ||
           (plVar19 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
          ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar20)) {
        plVar19 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar8 + 0x60))();
        if (iVar6 < 0x11) {
          uVar20 = 1;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_02132ad0;
          uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02132ad0:
        uVar20 = 0;
      }
      if (plVar19 != (long *)0x0) {
        lVar11 = plVar19[0x2a];
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        uVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bb3fd8);
        uVar1 = 0;
        if ((int)lVar11 == 1) {
          uVar1 = uVar20;
        }
        if ((((uVar9 & 1) != 0) && (uVar1 != 0)) && ((int)plVar19[0x57] == 0x283))
        goto LAB_02132c34;
      }
    }
    FUN_0194a710(&local_78,0);
    local_88 = local_70;
    local_80 = uStack_68;
    local_90 = local_78;
    iVar6 = (int)uStack_68;
    while (iVar6 != 5) {
      lVar11 = FUN_0194b7fc(&local_90);
      if ((lVar11 != 0) && (*(int *)(lVar11 + 0x2b8) == 0x283)) {
        switch(local_80 & 0xffffffff) {
        case 0:
          uVar20 = (uint)local_88;
          if (*(uint *)(local_90 + 0x288) <= (uint)local_88) {
            uVar20 = 0;
          }
          lVar11 = *(long *)(local_90 + 0x290) + (long)(int)uVar20 * 0x30;
          uVar20 = local_88._4_4_;
          if (*(uint *)(lVar11 + 0x10) <= local_88._4_4_) {
            uVar20 = 0;
          }
          puVar12 = (undefined4 *)(*(long *)(lVar11 + 0x18) + (long)(int)uVar20 * 4);
          break;
        case 1:
          puVar12 = (undefined4 *)(local_90 + 2000);
          break;
        case 2:
          puVar12 = (undefined4 *)(local_90 + 0x860);
          break;
        case 3:
          puVar12 = (undefined4 *)(local_90 + 0x8c4);
          break;
        case 4:
          puVar12 = (undefined4 *)(local_90 + 0x8c8);
          break;
        default:
          puVar12 = (undefined4 *)PTR_DAT_04bb3238;
        }
        uVar10 = *puVar12;
        *(undefined1 *)((long)param_1 + 0x24) = 0;
        *(undefined1 *)((long)param_1 + 0x27) = 0;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar10;
        *(undefined4 *)(param_1 + 4) = 0x283;
        break;
      }
      FUN_0194afc0(&local_90);
      iVar6 = (int)local_80;
    }
  }
LAB_02132c34:
  (**(code **)(*param_1 + 0x58))(param_1);
  (**(code **)(*plVar18 + 0x328))(plVar18,1);
  uVar20 = *(uint *)((long)param_1 + 0x1c);
  if (uVar20 == 0) {
    uVar10 = 0;
    uVar14 = 0;
  }
  else {
    lVar11 = *(long *)puVar4;
    if (lVar11 != 0) {
      plVar18 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                          ((ulong)(uVar20 >> 0x11) & 0x7ff8));
      if (((plVar18 == (long *)0x0) || ((*(uint *)(plVar18 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar18 + 0x46) != uVar20)) {
        plVar18 = (long *)0x0;
      }
      if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
        plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar11 = *(long *)puVar4;
        iVar6 = (**(code **)(*plVar19 + 0x60))();
        if (iVar6 < 0x11) {
          uVar20 = 0;
        }
        else {
          if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_02132d00;
          uVar20 = 5U >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_02132d00:
        uVar20 = 1;
      }
      if (plVar18 != (long *)0x0) {
        lVar11 = plVar18[0x2a];
        if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3fe0);
        }
        uVar9 = (**(code **)(*plVar18 + 0x20))(plVar18,PTR_DAT_04bb3fd8);
        uVar10 = 0;
        if ((int)lVar11 != 1) {
          uVar20 = 1;
        }
        uVar14 = 0;
        if (((uVar9 & 1) != 0) && (uVar20 == 0)) {
          uVar14 = 1;
          uVar10 = 0xf;
          if (*(char *)((long)param_1 + 0x24) == '\0') {
            uVar10 = 0x10;
          }
        }
        goto LAB_02132d78;
      }
    }
    uVar10 = 0;
    uVar14 = 0;
  }
LAB_02132d78:
  *(undefined4 *)(lVar16 + 0x56c) = uVar10;
  *(undefined1 *)((long)param_1 + 0x25) = uVar14;
  if ((uVar7 & 1) == 0 && *(char *)((long)param_1 + 0x26) == '\0') {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    *(undefined4 *)(param_1 + 2) = 2;
    local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
    FUN_01e5a930(0x40000000,lVar16,0,PTR_DAT_04bb2150,&local_78,&local_90,PTR_DAT_04bc1600,6);
    goto LAB_02132df4;
  }
  if (*(int *)(param_1[1] + 0x750) - 1U < 2) {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 2) = 5;
    goto LAB_02132df4;
  }
  *(undefined4 *)(param_1 + 2) = 4;
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_02132e8c:
    if (*pbVar13 < 8) goto LAB_02132f04;
LAB_02132e98:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02132efc:
      pbVar13 = PTR_DAT_04bb5038;
      goto LAB_02132f04;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar16 + 0x473);
    pbVar13 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar2 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar13 = (byte *)(lVar16 + 0x471);
      }
    }
    bVar15 = *pbVar13;
    bVar5 = 7 < bVar15;
    if (bVar5) {
      bVar15 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar15);
    if (bVar5) goto LAB_02132efc;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02132e8c;
      }
      goto LAB_02132e98;
    }
LAB_02132f04:
    bVar15 = *pbVar13;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar15);
  }
  FUN_02078bbc(*(long *)(param_1[1] + 0x3b8) + 0x87c0,&local_78,PTR_DAT_04bc22a8);
  puVar17 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar17 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(&DAT_052461c0);
      puVar17 = &DAT_05240280;
      if (iVar6 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar17 = &DAT_05240280;
    }
  }
  local_78 = puVar3 + 0x10;
  local_70 = "NpcEscapePoisonInsect";
  if (((puVar17[0x227] != 0) && (lVar16 = *(long *)(puVar17[0x227] + 0x78), lVar16 != 0)) &&
     (plVar18 = *(long **)(lVar16 + 0x48), plVar18 != (long *)0x0)) {
    (**(code **)(*plVar18 + 0x28))(plVar18,&local_78,1);
  }
LAB_02132df4:
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  return;
}

