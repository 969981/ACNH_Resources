
/* WARNING: Removing unreachable block (ram,0x0335bedc) */
/* WARNING: Removing unreachable block (ram,0x0335b728) */
/* WARNING: Removing unreachable block (ram,0x0335b6b8) */
/* WARNING: Removing unreachable block (ram,0x0335b68c) */
/* WARNING: Removing unreachable block (ram,0x0335b6ec) */
/* WARNING: Removing unreachable block (ram,0x0335b9d0) */
/* WARNING: Removing unreachable block (ram,0x0335c350) */

void FUN_0335b640(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined **ppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  ulong uVar23;
  void *pvVar24;
  float fVar25;
  long *local_130;
  undefined ***local_128;
  undefined **local_120;
  long lStack_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined *local_100;
  long *local_f8;
  undefined8 *local_f0;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  char local_94 [15];
  undefined1 local_85;
  undefined1 auStack_80 [8];
  undefined *local_78;
  char *pcStack_70;
  
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "LayoutTranslationArea Heap";
  local_130 = (long *)0x0;
  local_128 = (undefined ***)0x0;
  if (*param_2 != 0) {
    local_130 = (long *)FUN_038c6d48(0,&local_a8,*param_2,8,1,1);
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  }
  *(long **)(param_1 + 0x2e0) = local_130;
  plVar1 = (long *)(param_1 + 0x2e0);
  *(undefined ****)(param_1 + 0x2e8) = local_128;
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  uVar12 = (**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0xf80,8);
  FUN_032d04c4(uVar12,plVar1);
  puVar10 = PTR_DAT_04bc96f8;
  *(undefined8 *)(param_1 + 0x2f0) = uVar12;
  local_130._0_4_ = 4;
  local_108 = 0;
  if (*(uint *)(*(long *)puVar10 + 0x10) < 5) {
    local_130._0_4_ = 0;
  }
  local_130 = (long *)(*(long *)(*(long *)puVar10 + 0x18) + (long)(int)local_130 * 0x158);
  local_100 = (undefined *)((ulong)local_100 & 0xffffffffffffff00);
  local_110 = (undefined1 *)((ulong)local_110 & 0xffffffffff000000);
  local_f8 = (long *)0x0;
  local_f0 = (undefined8 *)0x0;
  local_128 = (undefined ***)(PTR_DAT_04bc8e68 + 0x10);
  local_120 = (undefined **)0x41008bb;
  lStack_118 = 0x640;
  FUN_032d0880(uVar12,&local_130);
  if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)();
  }
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xf0);
  pcVar8 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    pcVar8 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*pcVar8 != '\0') {
    local_130 = (long *)(PTR_DAT_04bc8e68 + 0x10);
    local_128 = (undefined ***)pcVar8;
    lVar13 = FUN_032cb8e0(&local_a8,&local_130);
    uVar12 = *(undefined8 *)(lVar13 + 0xe8);
  }
  lVar13 = FUN_0036ab80(uVar12,"L_TransMlt");
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0xe8);
  }
  local_a8 = *(undefined **)(lVar13 + 0x18);
  local_130 = (long *)(PTR_DAT_04bc8e68 + 0x10);
  local_128 = (undefined ***)0x40d12de;
  plVar14 = (long *)FUN_032d3050(&local_a8,local_a8,&local_130);
  puVar10 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar11 != 0)) {
    *(undefined8 *)puVar10 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if ((plVar14 != (long *)0x0) &&
     (puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14),
     puVar15 != (undefined8 *)puVar10)) {
    do {
      puVar15 = (undefined8 *)*puVar15;
    } while (puVar15 != (undefined8 *)puVar10 && puVar15 != (undefined8 *)0x0);
  }
  lVar19 = param_1 + 0x3b8;
  uVar23 = 0;
  puVar2 = PTR_DAT_04bb2ab0 + 0x10;
  puVar3 = PTR_DAT_04bc8f08 + 0x10;
  puVar22 = PTR_DAT_04bc8e60 + 0x10;
  puVar21 = PTR_DAT_04bc8f88 + 0x10;
  puVar4 = PTR_DAT_04bc8e70 + 0x10;
  puVar5 = PTR_DAT_04bc8f78 + 0x10;
  puVar6 = PTR_DAT_04bc8f80 + 0x10;
  puVar7 = PTR_DAT_04bc8e68 + 0x10;
  plVar14 = (long *)(PTR_DAT_04bc8fe8 + 0x10);
  do {
    local_98 = 0x10;
    local_85 = 0;
    local_94[0] = '\0';
    local_a8 = puVar2;
    local_a0 = local_94;
    FUN_038d1270(&local_a8,"L_TransWord_%02d",uVar23 & 0xffffffff);
    local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
    plVar16 = (long *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x590,8);
    plVar16[2] = 0;
    plVar16[3] = 0;
    plVar16[4] = 0;
    plVar16[5] = 0;
    *plVar16 = (long)puVar3;
    plVar16[1] = 0;
    FUN_032ae014(plVar16 + 6);
    plVar16[0x48] = 0;
    *(undefined8 *)((long)plVar16 + 0x417) = 0;
    *(undefined8 *)((long)plVar16 + 0x24d) = 0;
    plVar16[0x49] = 0;
    plVar16[0x47] = 0;
    plVar16[0x46] = 0;
    plVar16[0x45] = 0;
    plVar16[0x44] = 0;
    plVar16[0x43] = 0;
    plVar16[0x42] = 0;
    plVar16[0x41] = 0;
    plVar16[0x40] = 0;
    plVar16[0x4b] = (long)puVar22;
    plVar16[0x4c] = 0;
    plVar16[0x51] = (long)puVar22;
    plVar16[0x52] = 0;
    plVar16[0x57] = (long)puVar22;
    plVar16[0x58] = 0;
    plVar16[0x5d] = (long)puVar22;
    plVar16[0x5e] = 0;
    plVar16[99] = (long)puVar22;
    plVar16[100] = 0;
    plVar16[0x69] = (long)puVar21;
    plVar16[0x6a] = 0;
    plVar16[0x6f] = (long)puVar21;
    plVar16[0x70] = 0;
    plVar16[0x75] = (long)puVar21;
    plVar16[0x76] = 0;
    plVar16[0x7b] = (long)puVar21;
    plVar16[0x7c] = 0;
    plVar16[0x82] = 0;
    plVar16[0x81] = 0;
    *(undefined2 *)(plVar16 + 0x4a) = 0x41;
    *(undefined2 *)((long)plVar16 + 0x253) = 0x50f;
    plVar16[0xa2] = (long)puVar5;
    plVar16[0x8d] = 0;
    *(undefined4 *)(plVar16 + 0x8e) = 0;
    plVar16[0x8f] = 0;
    *(undefined1 *)(plVar16 + 0x90) = 0;
    plVar16[0x98] = 0;
    *(undefined4 *)(plVar16 + 0x99) = 0;
    plVar16[0xa8] = (long)puVar6;
    plVar16[0x9a] = 0;
    *(undefined1 *)(plVar16 + 0x9b) = 0;
    plVar16[0x91] = 0;
    plVar16[0x92] = 0;
    plVar16[0x93] = 0;
    plVar16[0x94] = 0;
    plVar16[0x95] = 0;
    plVar16[0x96] = 0;
    *(undefined4 *)(plVar16 + 0x97) = 0;
    plVar16[0x84] = 0;
    plVar16[0x85] = 0;
    plVar16[0x86] = 0;
    plVar16[0x87] = 0;
    plVar16[0x88] = 0;
    plVar16[0x89] = 0;
    plVar16[0x8a] = 0;
    plVar16[0x8b] = 0;
    *(undefined4 *)(plVar16 + 0x8c) = 0;
    plVar16[0x9c] = (long)puVar4;
    plVar16[0x9d] = 0;
    plVar16[0xa3] = 0;
    plVar16[0xa9] = 0;
    plVar16[0xb1] = 0;
    plVar16[0xae] = 0;
    plVar16[0xaf] = 0;
    *(undefined4 *)(plVar16 + 0xb0) = 0;
    local_128 = (undefined ***)0x0;
    local_f8 = (long *)0x0;
    local_110 = (undefined1 *)0x0;
    local_108 = 0;
    local_120 = (undefined **)0x0;
    lStack_118 = 0;
    local_b0 = 0xffffffff;
    local_b8 = 0;
    local_b4 = 1;
    local_c8 = PTR_DAT_04bb2120;
    local_c0 = 0x100000000;
    uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x2f0) + 0xf0);
    pcVar8 = PTR_DAT_04bb2120;
    if (local_a0 != (char *)0x0) {
      pcVar8 = local_a0;
    }
    local_130 = plVar1;
    local_100 = puVar4;
    local_d0 = puVar7;
    if (*pcVar8 != '\0') {
      local_78 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_70 = pcVar8;
      lVar17 = FUN_032cb8e0(auStack_80,&local_78);
      if (lVar17 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(lVar17 + 0xe8);
      }
    }
    lVar17 = *(long *)(param_1 + 0x2f0);
    local_128 = (undefined ***)uVar12;
    if (*local_a0 == '\0') {
      lVar18 = *(long *)(lVar17 + 0xf0);
LAB_0335bc28:
      puVar9 = PTR_DAT_04bb2120;
      if (*(undefined **)(lVar18 + 0x30) != (undefined *)0x0) {
        puVar9 = *(undefined **)(lVar18 + 0x30);
      }
      lVar17 = *(long *)(lVar17 + 0x110);
      if (lVar17 == 0) {
LAB_0335bc84:
        local_120 = (undefined **)0x0;
      }
      else {
        do {
          while (*(undefined **)(lVar17 + 0x20) <= puVar9) {
            if (puVar9 <= *(undefined **)(lVar17 + 0x20)) {
              local_120 = (undefined **)(lVar17 + 0x28);
              goto LAB_0335bc94;
            }
            lVar17 = *(long *)(lVar17 + 0x10);
            if (lVar17 == 0) goto LAB_0335bc7c;
          }
          lVar17 = *(long *)(lVar17 + 8);
        } while (lVar17 != 0);
LAB_0335bc7c:
        local_120 = (undefined **)0x0;
      }
    }
    else {
      local_78 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_70 = local_a0;
      lVar18 = FUN_032cb8e0(auStack_80,&local_78,*(undefined8 *)(lVar17 + 0xf0));
      if (lVar18 == 0) goto LAB_0335bc84;
      lVar18 = *(long *)(lVar18 + 0xe8);
      if (lVar18 != 0) goto LAB_0335bc28;
      local_120 = (undefined **)0x0;
    }
LAB_0335bc94:
    local_108 = *(undefined8 *)(param_1 + 0x3b0);
    local_110 = (undefined1 *)lVar19;
    FUN_032873d0(plVar16,&local_130);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
    local_120 = &PTR_LAB_04b203c8;
    local_110 = (undefined1 *)0x335ca50;
    local_108 = 0;
    local_130 = (long *)(PTR_DAT_04bc8e70 + 0x10);
    local_128 = &local_120;
    lStack_118 = param_1;
    if ((long *)plVar16[0x9d] == (long *)0x0) {
      ppuVar20 = &PTR_LAB_04b203c8;
LAB_0335bd18:
      lVar17 = (*(code *)ppuVar20[3])(local_128,plVar16 + 0x9e);
      plVar16[0x9d] = lVar17;
      if (local_128 != (undefined ***)0x0) {
        (*(code *)(*local_128)[1])();
      }
    }
    else {
      (**(code **)(*(long *)plVar16[0x9d] + 8))();
      if (local_128 != (undefined ***)0x0) {
        ppuVar20 = *local_128;
        goto LAB_0335bd18;
      }
      plVar16[0x9d] = 0;
    }
    ppuVar20 = &PTR_LAB_04b20450;
    local_120 = &PTR_LAB_04b20450;
    local_110 = &LAB_0335cde0;
    local_108 = 0;
    lVar17 = plVar16[0x85];
    local_130 = plVar14;
    local_128 = &local_120;
    lStack_118 = param_1;
    if (lVar17 == 0) {
LAB_0335bdc4:
      (*(code *)ppuVar20[1])(local_128);
    }
    else if (*(long **)(lVar17 + 0x38) == (long *)0x0) {
LAB_0335bda4:
      uVar12 = (*(code *)ppuVar20[3])(local_128,lVar17 + 0x40);
      *(undefined8 *)(lVar17 + 0x38) = uVar12;
      if (local_128 != (undefined ***)0x0) {
        ppuVar20 = *local_128;
        goto LAB_0335bdc4;
      }
    }
    else {
      (**(code **)(**(long **)(lVar17 + 0x38) + 8))();
      if (local_128 != (undefined ***)0x0) {
        ppuVar20 = *local_128;
        goto LAB_0335bda4;
      }
      *(undefined8 *)(lVar17 + 0x38) = 0;
    }
    pvVar24 = *(void **)(param_1 + 0x300 + uVar23 * 8);
    *(long **)(param_1 + 0x300 + uVar23 * 8) = plVar16;
    if (pvVar24 != (void *)0x0) {
      FUN_03286c9c(pvVar24);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar24);
      }
      else {
        plVar16 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar24);
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x38))(plVar16,pvVar24);
        }
      }
    }
    local_78 = *(undefined **)(lVar13 + 0x18);
    local_130 = (long *)(PTR_DAT_04bc8e68 + 0x10);
    local_128 = (undefined ***)local_a0;
    plVar16 = (long *)FUN_032d3050(&local_78,local_78,&local_130);
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar11 != 0)) {
      *(undefined8 *)puVar10 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar16 + 0x10))(plVar16);
    if (puVar15 != (undefined8 *)puVar10) {
      do {
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)puVar10 && puVar15 != (undefined8 *)0x0);
    }
    uVar23 = uVar23 + 1;
    *(byte *)(plVar16 + 0xb) = *(byte *)(plVar16 + 0xb) & 0xfe;
  } while (uVar23 != 0x13);
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  plVar14 = (long *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x590,8);
  puVar2 = PTR_DAT_04bc8f08;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  *plVar14 = (long)(puVar2 + 0x10);
  plVar14[1] = 0;
  FUN_032ae014(plVar14 + 6);
  plVar14[0x48] = 0;
  *(undefined8 *)((long)plVar14 + 0x24d) = 0;
  plVar14[0x49] = 0;
  plVar14[0x47] = 0;
  plVar14[0x46] = 0;
  plVar14[0x45] = 0;
  plVar14[0x44] = 0;
  plVar14[0x43] = 0;
  plVar14[0x42] = 0;
  plVar14[0x41] = 0;
  plVar14[0x40] = 0;
  puVar2 = PTR_DAT_04bc8e60 + 0x10;
  plVar14[0x4c] = 0;
  plVar14[0x4b] = (long)puVar2;
  plVar14[0x51] = (long)puVar2;
  plVar14[0x52] = 0;
  plVar14[0x57] = (long)puVar2;
  plVar14[0x58] = 0;
  plVar14[0x5d] = (long)puVar2;
  plVar14[0x5e] = 0;
  plVar14[99] = (long)puVar2;
  plVar14[100] = 0;
  puVar2 = PTR_DAT_04bc8f88 + 0x10;
  plVar14[0x6a] = 0;
  plVar14[0x70] = 0;
  plVar14[0x76] = 0;
  plVar14[0x7c] = 0;
  plVar14[0x81] = 0;
  plVar14[0x69] = (long)puVar2;
  plVar14[0x6f] = (long)puVar2;
  plVar14[0x75] = (long)puVar2;
  plVar14[0x7b] = (long)puVar2;
  *(undefined8 *)((long)plVar14 + 0x417) = 0;
  plVar14[0x82] = 0;
  plVar14[0x8d] = 0;
  *(undefined4 *)(plVar14 + 0x8e) = 0;
  plVar14[0x8f] = 0;
  *(undefined1 *)(plVar14 + 0x90) = 0;
  plVar14[0x98] = 0;
  *(undefined4 *)(plVar14 + 0x99) = 0;
  plVar14[0x9a] = 0;
  *(undefined1 *)(plVar14 + 0x9b) = 0;
  plVar14[0x91] = 0;
  plVar14[0x92] = 0;
  plVar14[0x93] = 0;
  plVar14[0x94] = 0;
  plVar14[0x95] = 0;
  plVar14[0x96] = 0;
  *(undefined4 *)(plVar14 + 0x97) = 0;
  plVar14[0x84] = 0;
  *(undefined2 *)(plVar14 + 0x4a) = 0x41;
  plVar14[0x85] = 0;
  *(undefined2 *)((long)plVar14 + 0x253) = 0x50f;
  plVar14[0x86] = 0;
  plVar14[0x87] = 0;
  plVar14[0x88] = 0;
  plVar14[0x89] = 0;
  plVar14[0x8a] = 0;
  plVar14[0x8b] = 0;
  *(undefined4 *)(plVar14 + 0x8c) = 0;
  local_100 = PTR_DAT_04bc8e70 + 0x10;
  plVar14[0x9d] = 0;
  plVar14[0x9c] = (long)local_100;
  puVar2 = PTR_DAT_04bc8f78 + 0x10;
  plVar14[0xa3] = 0;
  plVar14[0xa2] = (long)puVar2;
  puVar3 = PTR_DAT_04bc8f80;
  puVar2 = PTR_DAT_04bc8f80 + 0x10;
  plVar14[0xa9] = 0;
  plVar14[0xb1] = 0;
  plVar14[0xae] = 0;
  plVar14[0xaf] = 0;
  *(undefined4 *)(plVar14 + 0xb0) = 0;
  plVar14[0xa8] = (long)puVar2;
  local_110 = (undefined1 *)0x0;
  local_108 = 0;
  local_120 = (undefined **)0x0;
  lStack_118 = 0;
  local_f8 = (long *)0x0;
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  local_b4 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_c8 = PTR_DAT_04bb2120;
  local_c0 = 0x100000000;
  local_128 = (undefined ***)0x0;
  local_130 = plVar1;
  local_d0 = puVar2;
  lVar17 = FUN_0036ab80(lVar13,"L_TransBtnL");
  if (lVar17 == 0) {
    local_128 = (undefined ***)0x0;
  }
  else {
    local_128 = *(undefined ****)(lVar17 + 0xe8);
  }
  lVar18 = *(long *)(param_1 + 0x2f0);
  local_a0 = "L_TransBtnL";
  local_a8 = puVar2;
  lVar17 = FUN_032cb8e0(&local_78,&local_a8,*(undefined8 *)(lVar18 + 0xf0));
  puVar2 = PTR_DAT_04bc8fe8;
  if (lVar17 == 0) {
LAB_0335c188:
    local_120 = (undefined **)0x0;
  }
  else if (*(long *)(lVar17 + 0xe8) == 0) {
    local_120 = (undefined **)0x0;
  }
  else {
    puVar21 = *(undefined **)(*(long *)(lVar17 + 0xe8) + 0x30);
    puVar22 = PTR_DAT_04bb2120;
    if (puVar21 != (undefined *)0x0) {
      puVar22 = puVar21;
    }
    lVar17 = *(long *)(lVar18 + 0x110);
    if (lVar17 == 0) goto LAB_0335c188;
    do {
      while (*(undefined **)(lVar17 + 0x20) <= puVar22) {
        if (puVar22 <= *(undefined **)(lVar17 + 0x20)) {
          local_120 = (undefined **)(lVar17 + 0x28);
          goto LAB_0335c1a8;
        }
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 == 0) goto LAB_0335c180;
      }
      lVar17 = *(long *)(lVar17 + 8);
    } while (lVar17 != 0);
LAB_0335c180:
    local_120 = (undefined **)0x0;
  }
LAB_0335c1a8:
  local_108 = *(undefined8 *)(param_1 + 0x3b0);
  local_110 = (undefined1 *)lVar19;
  FUN_032873d0(plVar14,&local_130);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_120 = &PTR_LAB_04b203c8;
  local_110 = (undefined1 *)0x335ca50;
  local_108 = 0;
  local_130 = (long *)(PTR_DAT_04bc8e70 + 0x10);
  local_128 = &local_120;
  if ((long *)plVar14[0x9d] == (long *)0x0) {
    ppuVar20 = &PTR_LAB_04b203c8;
    lStack_118 = param_1;
LAB_0335c22c:
    lVar17 = (*(code *)ppuVar20[3])(local_128,plVar14 + 0x9e);
    plVar14[0x9d] = lVar17;
    if (local_128 != (undefined ***)0x0) {
      (*(code *)(*local_128)[1])();
    }
  }
  else {
    lStack_118 = param_1;
    (**(code **)(*(long *)plVar14[0x9d] + 8))();
    if (local_128 != (undefined ***)0x0) {
      ppuVar20 = *local_128;
      goto LAB_0335c22c;
    }
    plVar14[0x9d] = 0;
  }
  lVar17 = plVar14[0x85];
  local_130 = (long *)(puVar2 + 0x10);
  local_120 = &PTR_LAB_04b20450;
  local_110 = &LAB_0335cde0;
  local_108 = 0;
  if (lVar17 == 0) {
    ppuVar20 = &PTR_LAB_04b20450;
    local_128 = &local_120;
    lStack_118 = param_1;
LAB_0335c2e0:
    (*(code *)ppuVar20[1])(local_128);
  }
  else if (*(long **)(lVar17 + 0x38) == (long *)0x0) {
    ppuVar20 = &PTR_LAB_04b20450;
    local_128 = &local_120;
    lStack_118 = param_1;
LAB_0335c2c0:
    uVar12 = (*(code *)ppuVar20[3])(local_128,lVar17 + 0x40);
    *(undefined8 *)(lVar17 + 0x38) = uVar12;
    if (local_128 != (undefined ***)0x0) {
      ppuVar20 = *local_128;
      goto LAB_0335c2e0;
    }
  }
  else {
    local_128 = &local_120;
    lStack_118 = param_1;
    (**(code **)(**(long **)(lVar17 + 0x38) + 8))();
    if (local_128 != (undefined ***)0x0) {
      ppuVar20 = *local_128;
      goto LAB_0335c2c0;
    }
    *(undefined8 *)(lVar17 + 0x38) = 0;
  }
  pvVar24 = *(void **)(param_1 + 0x398);
  *(long **)(param_1 + 0x398) = plVar14;
  if (pvVar24 != (void *)0x0) {
    FUN_03286c9c(pvVar24);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar24);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar24);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,pvVar24);
      }
    }
  }
  local_130 = (long *)((ulong)local_130 & 0xffffffff00000000);
  plVar14 = (long *)(**(code **)(*(long *)*plVar1 + 0x30))((long *)*plVar1,0x590,8);
  puVar22 = PTR_DAT_04bc8f08;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  *plVar14 = (long)(puVar22 + 0x10);
  plVar14[1] = 0;
  FUN_032ae014(plVar14 + 6);
  plVar14[0x48] = 0;
  *(undefined8 *)((long)plVar14 + 0x24d) = 0;
  plVar14[0x49] = 0;
  plVar14[0x47] = 0;
  plVar14[0x46] = 0;
  plVar14[0x45] = 0;
  plVar14[0x44] = 0;
  plVar14[0x43] = 0;
  plVar14[0x42] = 0;
  plVar14[0x41] = 0;
  plVar14[0x40] = 0;
  puVar22 = PTR_DAT_04bc8e60 + 0x10;
  plVar14[0x4c] = 0;
  plVar14[0x4b] = (long)puVar22;
  plVar14[0x51] = (long)puVar22;
  plVar14[0x52] = 0;
  plVar14[0x57] = (long)puVar22;
  plVar14[0x58] = 0;
  plVar14[0x5d] = (long)puVar22;
  plVar14[0x5e] = 0;
  plVar14[99] = (long)puVar22;
  plVar14[100] = 0;
  puVar22 = PTR_DAT_04bc8f88 + 0x10;
  plVar14[0x6a] = 0;
  plVar14[0x70] = 0;
  plVar14[0x76] = 0;
  plVar14[0x7c] = 0;
  plVar14[0x81] = 0;
  plVar14[0x69] = (long)puVar22;
  plVar14[0x6f] = (long)puVar22;
  plVar14[0x75] = (long)puVar22;
  plVar14[0x7b] = (long)puVar22;
  *(undefined8 *)((long)plVar14 + 0x417) = 0;
  plVar14[0x82] = 0;
  plVar14[0x8d] = 0;
  *(undefined4 *)(plVar14 + 0x8e) = 0;
  plVar14[0x8f] = 0;
  *(undefined1 *)(plVar14 + 0x90) = 0;
  plVar14[0x98] = 0;
  *(undefined4 *)(plVar14 + 0x99) = 0;
  plVar14[0x9a] = 0;
  *(undefined1 *)(plVar14 + 0x9b) = 0;
  plVar14[0x91] = 0;
  plVar14[0x92] = 0;
  plVar14[0x93] = 0;
  plVar14[0x94] = 0;
  plVar14[0x95] = 0;
  plVar14[0x96] = 0;
  *(undefined4 *)(plVar14 + 0x97) = 0;
  *(undefined2 *)(plVar14 + 0x4a) = 0x41;
  plVar14[0x84] = 0;
  *(undefined2 *)((long)plVar14 + 0x253) = 0x50f;
  plVar14[0x85] = 0;
  plVar14[0x86] = 0;
  plVar14[0x87] = 0;
  plVar14[0x88] = 0;
  plVar14[0x89] = 0;
  plVar14[0x8a] = 0;
  plVar14[0x8b] = 0;
  *(undefined4 *)(plVar14 + 0x8c) = 0;
  local_100 = PTR_DAT_04bc8e70 + 0x10;
  plVar14[0x9d] = 0;
  plVar14[0x9c] = (long)local_100;
  puVar22 = PTR_DAT_04bc8f78 + 0x10;
  plVar14[0xa3] = 0;
  plVar14[0xa9] = 0;
  plVar14[0xb1] = 0;
  plVar14[0xae] = 0;
  plVar14[0xaf] = 0;
  *(undefined4 *)(plVar14 + 0xb0) = 0;
  local_128 = (undefined ***)0x0;
  plVar14[0xa2] = (long)puVar22;
  plVar14[0xa8] = (long)(puVar3 + 0x10);
  local_110 = (undefined1 *)0x0;
  local_108 = 0;
  local_120 = (undefined **)0x0;
  lStack_118 = 0;
  puVar3 = PTR_DAT_04bc8e68 + 0x10;
  local_f8 = (long *)0x0;
  local_b4 = 1;
  local_b8 = 0;
  local_b0 = 0xffffffff;
  local_c8 = PTR_DAT_04bb2120;
  local_c0 = 0x100000000;
  local_130 = plVar1;
  local_d0 = puVar3;
  lVar17 = FUN_0036ab80(lVar13,"L_TransBtnR");
  if (lVar17 == 0) {
    local_128 = (undefined ***)0x0;
  }
  else {
    local_128 = *(undefined ****)(lVar17 + 0xe8);
  }
  lVar18 = *(long *)(param_1 + 0x2f0);
  local_a0 = "L_TransBtnR";
  local_a8 = puVar3;
  lVar17 = FUN_032cb8e0(&local_78,&local_a8,*(undefined8 *)(lVar18 + 0xf0));
  if (lVar17 == 0) {
LAB_0335c5ec:
    local_120 = (undefined **)0x0;
  }
  else {
    local_120 = (undefined **)0x0;
    if (*(long *)(lVar17 + 0xe8) != 0) {
      puVar22 = *(undefined **)(*(long *)(lVar17 + 0xe8) + 0x30);
      puVar3 = PTR_DAT_04bb2120;
      if (puVar22 != (undefined *)0x0) {
        puVar3 = puVar22;
      }
      for (lVar17 = *(long *)(lVar18 + 0x110); lVar17 != 0; lVar17 = *(long *)(lVar17 + 0x10)) {
        while (puVar3 < *(undefined **)(lVar17 + 0x20)) {
          lVar17 = *(long *)(lVar17 + 8);
          if (lVar17 == 0) goto LAB_0335c5ec;
        }
        if (puVar3 <= *(undefined **)(lVar17 + 0x20)) {
          local_120 = (undefined **)(lVar17 + 0x28);
          goto LAB_0335c5f0;
        }
      }
      goto LAB_0335c5ec;
    }
  }
LAB_0335c5f0:
  local_108 = *(undefined8 *)(param_1 + 0x3b0);
  local_110 = (undefined1 *)lVar19;
  FUN_032873d0(plVar14,&local_130);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  ppuVar20 = &PTR_LAB_04b203c8;
  local_120 = &PTR_LAB_04b203c8;
  local_110 = (undefined1 *)0x335ca50;
  local_108 = 0;
  local_130 = (long *)(PTR_DAT_04bc8e70 + 0x10);
  local_128 = &local_120;
  lStack_118 = param_1;
  if ((long *)plVar14[0x9d] == (long *)0x0) {
LAB_0335c670:
    lVar19 = (*(code *)ppuVar20[3])(local_128,plVar14 + 0x9e);
    plVar14[0x9d] = lVar19;
    if (local_128 != (undefined ***)0x0) {
      (*(code *)(*local_128)[1])();
    }
  }
  else {
    (**(code **)(*(long *)plVar14[0x9d] + 8))();
    if (local_128 != (undefined ***)0x0) {
      ppuVar20 = *local_128;
      goto LAB_0335c670;
    }
    plVar14[0x9d] = 0;
  }
  lVar19 = plVar14[0x85];
  local_130 = (long *)(puVar2 + 0x10);
  ppuVar20 = &PTR_LAB_04b20450;
  local_120 = &PTR_LAB_04b20450;
  local_110 = &LAB_0335cde0;
  local_108 = 0;
  local_128 = &local_120;
  lStack_118 = param_1;
  if (lVar19 != 0) {
    if (*(long **)(lVar19 + 0x38) == (long *)0x0) {
      ppuVar20 = &PTR_LAB_04b20450;
    }
    else {
      (**(code **)(**(long **)(lVar19 + 0x38) + 8))();
      if (local_128 == (undefined ***)0x0) {
        *(undefined8 *)(lVar19 + 0x38) = 0;
        goto LAB_0335c720;
      }
      ppuVar20 = *local_128;
    }
    uVar12 = (*(code *)ppuVar20[3])(local_128,lVar19 + 0x40);
    *(undefined8 *)(lVar19 + 0x38) = uVar12;
    if (local_128 == (undefined ***)0x0) goto LAB_0335c720;
    ppuVar20 = *local_128;
  }
  (*(code *)ppuVar20[1])(local_128);
LAB_0335c720:
  pvVar24 = *(void **)(param_1 + 0x3a0);
  *(long **)(param_1 + 0x3a0) = plVar14;
  if (pvVar24 != (void *)0x0) {
    FUN_03286c9c(pvVar24);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar24);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar24);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,pvVar24);
      }
    }
  }
  local_a8 = *(undefined **)(lVar13 + 0x18);
  local_130 = (long *)(PTR_DAT_04bc8e68 + 0x10);
  local_128 = (undefined ***)0x40eb7cc;
  plVar14 = (long *)FUN_032d3050(&local_a8,local_a8,&local_130);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar11 != 0)) {
    *(undefined8 *)puVar10 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
  if (puVar15 != (undefined8 *)puVar10) {
    do {
      puVar15 = (undefined8 *)*puVar15;
    } while (puVar15 != (undefined8 *)puVar10 && puVar15 != (undefined8 *)0x0);
  }
  *(int *)(param_1 + 6000) = (int)plVar14[10];
  local_a8 = *(undefined **)(lVar13 + 0x18);
  local_130 = (long *)(PTR_DAT_04bc8e68 + 0x10);
  local_128 = (undefined ***)0x40f11b2;
  plVar14 = (long *)FUN_032d3050(&local_a8,local_a8,&local_130);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar11 != 0)) {
    *(undefined8 *)puVar10 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14);
  if (puVar15 != (undefined8 *)puVar10) {
    do {
      puVar15 = (undefined8 *)*puVar15;
    } while (puVar15 != (undefined8 *)puVar10 && puVar15 != (undefined8 *)0x0);
  }
  fVar25 = *(float *)(plVar14 + 10);
  *(char **)(param_1 + 0x20) = "LayoutTranslationArea";
  *(float *)(param_1 + 0x1778) = fVar25 * 0.5;
  *(float *)(param_1 + 0x1774) = 0.0 - fVar25 * 0.5;
  if ((*(long *)(param_1 + 0x90) == 0) && (*(long *)(param_1 + 0xc0) == 0)) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(long *)(param_1 + 0xa0) = param_1;
    *(undefined1 **)(param_1 + 0xa8) = &LAB_0335f448;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 0x98) = &PTR_LAB_04b20340;
    *(undefined8 **)(param_1 + 0x90) = (undefined8 *)(param_1 + 0x98);
    lVar13 = *(long *)(param_1 + 0x138);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x138);
  }
  if ((lVar13 == 0) && (*(long *)(param_1 + 0x168) == 0)) {
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined ***)(param_1 + 0x140) = &PTR_LAB_04b20340;
    *(long *)(param_1 + 0x148) = param_1;
    *(long *)(param_1 + 0x138) = param_1 + 0x140;
    *(undefined1 **)(param_1 + 0x150) = &LAB_0335f44c;
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if ((*(long *)(param_1 + 0x1e0) == 0) && (*(long *)(param_1 + 0x210) == 0)) {
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined ***)(param_1 + 0x1e8) = &PTR_LAB_04b20340;
    *(long *)(param_1 + 0x1f0) = param_1;
    *(long *)(param_1 + 0x1e0) = param_1 + 0x1e8;
    *(undefined1 **)(param_1 + 0x1f8) = &LAB_0335f49c;
    *(undefined8 *)(param_1 + 0x200) = 0;
    lVar13 = *(long *)(param_1 + 0x288);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x288);
  }
  if ((lVar13 == 0) && (*(long *)(param_1 + 0x2b8) == 0)) {
    *(long *)(param_1 + 0x298) = param_1;
    *(undefined ***)(param_1 + 0x290) = &PTR_LAB_04b20340;
    *(undefined1 **)(param_1 + 0x2a0) = &LAB_03360084;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(long *)(param_1 + 0x288) = param_1 + 0x290;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    *(long *)(param_1 + 0x30) = param_1 + 0x40;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  }
  if ((long *)*plVar1 != (long *)0x0) {
    (**(code **)(*(long *)*plVar1 + 0x28))();
  }
  if (*(long **)(param_1 + 0x2e8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2e8) + 0x28))();
  }
  return;
}

