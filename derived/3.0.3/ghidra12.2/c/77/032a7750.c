
/* WARNING: Removing unreachable block (ram,0x032a8724) */
/* WARNING: Removing unreachable block (ram,0x032a83b0) */
/* WARNING: Removing unreachable block (ram,0x032a80bc) */
/* WARNING: Removing unreachable block (ram,0x032a7dc8) */
/* WARNING: Removing unreachable block (ram,0x032a7a8c) */
/* WARNING: Removing unreachable block (ram,0x032a7794) */
/* WARNING: Removing unreachable block (ram,0x032a7a08) */
/* WARNING: Removing unreachable block (ram,0x032a7bf4) */
/* WARNING: Removing unreachable block (ram,0x032a7f24) */
/* WARNING: Removing unreachable block (ram,0x032a8228) */
/* WARNING: Removing unreachable block (ram,0x032a85c0) */
/* WARNING: Removing unreachable block (ram,0x032a87d4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_032a7750(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined **local_168;
  long lStack_160;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 *puStack_140;
  undefined *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  char *pcStack_120;
  char *local_118;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined ***local_f0;
  undefined **local_e8;
  long lStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined4 local_a8;
  undefined *local_a0;
  char *local_98;
  undefined4 local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar12 = (undefined8 *)*param_2;
  uVar14 = param_2[1];
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar8 = (**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0xf80,8);
  FUN_032d04c4(uVar8,puVar12);
  pvVar15 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  if (pvVar15 != (void *)0x0) {
    FUN_032d0688(pvVar15);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar15);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar15);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar15);
      }
    }
  }
  local_100 = 0;
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffffffffff00);
  puVar17 = PTR_DAT_04bc8e68 + 0x10;
  local_f0 = (undefined ***)0x0;
  local_e8 = (undefined **)0x0;
  local_108 = local_108 & 0xffffffffff000000;
  local_118 = "Footer.bflyt";
  local_110 = CONCAT44(1,uVar5);
  local_128 = (long *)uVar14;
  pcStack_120 = puVar17;
  FUN_032d0880(*(undefined8 *)(param_1 + 0x20),&local_128);
  lVar10 = FUN_0036ab80(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf0),"L_Footer");
  lVar10 = *(long *)(lVar10 + 0xe8);
  *(long *)(param_1 + 0x28) = lVar10;
  local_138 = *(undefined **)(lVar10 + 0x18);
  local_98 = "B_FooterArea_00";
  local_a0 = puVar17;
  plVar9 = (long *)FUN_032d3050(&local_138,local_138,&local_a0);
  puVar3 = PTR_DAT_04bc8f38;
  puVar17 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0))
  {
    *(undefined8 *)puVar17 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
  if (puVar11 != (undefined8 *)puVar17) {
    do {
      puVar11 = (undefined8 *)*puVar11;
    } while (puVar11 != (undefined8 *)puVar17 && puVar11 != (undefined8 *)0x0);
  }
  *(int *)(param_1 + 0xe4) = (int)plVar9[10];
  local_138 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x18);
  local_a0 = PTR_DAT_04bc8e68 + 0x10;
  local_98 = "N_BtnWrp";
  plVar9 = (long *)FUN_032d3050(&local_138,local_138,&local_a0);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
    *(undefined8 *)puVar17 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar9 != (long *)0x0) {
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar11 != (undefined8 *)puVar17) {
      do {
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)puVar17 && puVar11 != (undefined8 *)0x0);
      if (puVar11 == (undefined8 *)0x0) goto LAB_032a7940;
    }
    *(int *)(param_1 + 0xec) = (int)plVar9[6];
  }
LAB_032a7940:
  local_138 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x18);
  local_a0 = PTR_DAT_04bc8e68 + 0x10;
  local_98 = "L_Ctrl";
  plVar9 = (long *)FUN_032d3050(&local_138,local_138,&local_a0);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
    *(undefined8 *)puVar17 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar9 != (long *)0x0) {
    puVar11 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar11 != (undefined8 *)puVar17) {
      do {
        puVar11 = (undefined8 *)*puVar11;
      } while (puVar11 != (undefined8 *)puVar17 && puVar11 != (undefined8 *)0x0);
      if (puVar11 == (undefined8 *)0x0) goto LAB_032a79bc;
    }
    *(int *)(param_1 + 0xf0) = (int)plVar9[6];
  }
LAB_032a79bc:
  local_138 = *(undefined **)(param_1 + 0x28);
  local_a0 = PTR_DAT_04bc8e68 + 0x10;
  local_98 = "L_Line_00/P_Line";
  lVar10 = FUN_032cb990(&local_138,&local_a0);
  if (lVar10 != 0) {
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(lVar10 + 0x50);
  }
  local_138 = (undefined *)((ulong)local_138 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0xf0,0x10);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  FUN_0037bb94();
  *puVar12 = &PTR_LAB_04b198d8;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = uVar8;
  FUN_0037c2a0(puVar12,"FooterCustomPane");
  plVar9 = *(long **)(param_1 + 0x108);
  *(undefined8 **)(param_1 + 0x108) = puVar12;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  if (local_e8 != (undefined **)0x0) {
    (**(code **)*local_e8)();
  }
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar18 = (undefined8 *)*param_2;
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar18 + 0x30))((long *)*puVar18,0x58,8);
  puVar12[7] = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[9] = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined4 *)(puVar12 + 6) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar9 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = puVar11[1];
      lVar13 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar9 == puVar11) {
        *plVar9 = lVar13;
      }
      if (lVar13 != 0) {
        *(long *)(lVar13 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar13;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,puVar11);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x40);
  }
  puVar12[5] = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x18) = puVar18;
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  FUN_032c6ccc(uVar8);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_120 = &DAT_04b199d8;
  local_98 = &DAT_04b199d8;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  pcStack_120 = &DAT_04b199dc;
  local_98 = &DAT_04b199dc;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar18 + 0x30))((long *)*puVar18,0x58,8);
  puVar12[7] = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[9] = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined4 *)(puVar12 + 6) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar9 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = puVar11[1];
      lVar13 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar9 == puVar11) {
        *plVar9 = lVar13;
      }
      if (lVar13 != 0) {
        *(long *)(lVar13 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar13;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,puVar11);
      }
    }
  }
  *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 **)(*(long *)(param_1 + 0x48) + 0x18) = puVar18;
  lVar10 = *(long *)(param_1 + 0x48);
  uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18);
  FUN_032c6ccc(lVar10);
  pcStack_120 = "BgType";
  local_98 = "BgType";
  puStack_130 = &DAT_0407ebb1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c6e30(lVar10,uVar8,&local_128,&local_a0,1,&local_138);
  lVar10 = *(long *)(param_1 + 0x48);
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  if ((**(byte **)(lVar10 + 0x48) & 1) == 0) {
    local_128 = (long *)(PTR_DAT_04bc8e68 + 0x10);
    pcStack_120 = "BgType";
    FUN_032c7a60(lVar10,&local_128,0);
    lVar10 = **(long **)(lVar10 + 0x38);
    do {
      lVar13 = lVar10;
      plVar9 = *(long **)(lVar13 + 0x28);
      lVar10 = *(long *)(lVar13 + 0x18);
    } while (*(long *)(lVar13 + 0x18) != 0 && plVar9 == (long *)0x0);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0xd0))(0);
    }
    *(undefined4 *)(lVar13 + 0x6c) = 1;
  }
  lVar10 = FUN_0036ab80(*(undefined8 *)(param_1 + 0x28),"L_Line_00");
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar10 + 0xe8);
  }
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar18 + 0x30))((long *)*puVar18,0x58,8);
  puVar12[7] = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[9] = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined4 *)(puVar12 + 6) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  *(undefined8 **)(param_1 + 0x50) = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar9 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = puVar11[1];
      lVar13 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar9 == puVar11) {
        *plVar9 = lVar13;
      }
      if (lVar13 != 0) {
        *(long *)(lVar13 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar13;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,puVar11);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x50);
  }
  puVar12[5] = uVar8;
  *(undefined8 **)(*(long *)(param_1 + 0x50) + 0x18) = puVar18;
  lVar10 = *(long *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(*(long *)(lVar10 + 0x28) + 0x18);
  FUN_032c6ccc(lVar10);
  local_138 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_120 = "Color";
  local_98 = "Color";
  puStack_130 = &DAT_0407ebb1;
  local_128 = (long *)local_138;
  local_a0 = local_138;
  FUN_032c6e30(lVar10,uVar8,&local_128,&local_a0,1,&local_138);
  lVar10 = FUN_0036ab80(*(undefined8 *)(param_1 + 0x28),"L_Ctrl");
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar10 + 0xe8);
  }
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar18 + 0x30))((long *)*puVar18,0x58,8);
  puVar12[7] = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[9] = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined4 *)(puVar12 + 6) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar9 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = puVar11[1];
      lVar13 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar9 == puVar11) {
        *plVar9 = lVar13;
      }
      if (lVar13 != 0) {
        *(long *)(lVar13 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar13;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,puVar11);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x60);
  }
  puVar12[5] = uVar8;
  *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x18) = puVar18;
  FUN_032c6b2c(*(undefined8 *)(param_1 + 0x60),2);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  FUN_032c6ccc(uVar8);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_120 = s_IconColor_04b199f0;
  local_98 = s_IconColor_04b199f0;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  pcStack_120 = s_IndiPos_04b199fc;
  local_98 = s_IndiPos_04b199fc;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  lVar10 = FUN_0036ab80(*(undefined8 *)(param_1 + 0x28),"L_Ctrl");
  lVar10 = FUN_0036ab80(*(undefined8 *)(lVar10 + 0xe8),"L_Indi_00");
  if (lVar10 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar10 + 0xe8);
  }
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar18 + 0x30))((long *)*puVar18,0x58,8);
  puVar12[7] = 0;
  *(undefined4 *)(puVar12 + 8) = 0;
  puVar12[9] = 0;
  *(undefined1 *)(puVar12 + 10) = 0;
  *(undefined4 *)(puVar12 + 6) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 **)(param_1 + 0x68) = puVar12;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar9 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = puVar11[1];
      lVar13 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar9 == puVar11) {
        *plVar9 = lVar13;
      }
      if (lVar13 != 0) {
        *(long *)(lVar13 + 8) = lVar10;
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar13;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar11);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar11);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,puVar11);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x68);
  }
  puVar12[5] = uVar8;
  *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18) = puVar18;
  FUN_032c6b2c(*(undefined8 *)(param_1 + 0x68),2);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  FUN_032c6ccc(uVar8);
  puVar1 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_120 = &DAT_04b19a18;
  local_98 = &DAT_04b19a18;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  pcStack_120 = s_Color_04b19a1e;
  local_98 = s_Color_04b19a1e;
  puStack_130 = &DAT_0407ebb1;
  puStack_140 = &DAT_0407ebb1;
  local_148 = puVar1;
  local_138 = puVar1;
  local_128 = (long *)puVar1;
  local_a0 = puVar1;
  FUN_032c7320(uVar8,&local_128,&local_a0,&local_138,&local_148);
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  puVar11 = (undefined8 *)*param_2;
  plVar9 = (long *)*puVar11;
  puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x220,8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar12[9] = 0;
  *(undefined8 *)((long)puVar12 + 0x4d) = 0;
  puVar6 = PTR_DAT_04bc8e60;
  puVar2 = PTR_DAT_04bc8e60 + 0x10;
  puVar12[0xb] = puVar2;
  puVar12[0xc] = 0;
  puVar12[0x11] = puVar2;
  puVar12[0x12] = 0;
  puVar12[0x17] = puVar2;
  puVar12[0x18] = 0;
  puVar12[0x1d] = puVar2;
  puVar12[0x1e] = 0;
  puVar12[0x23] = puVar2;
  puVar12[0x24] = 0;
  puVar2 = PTR_DAT_04bc8f88 + 0x10;
  puVar12[0x41] = 0;
  puVar12[0x29] = puVar2;
  puVar12[0x2a] = 0;
  puVar12[0x2f] = puVar2;
  puVar12[0x30] = 0;
  puVar12[0x35] = puVar2;
  puVar12[0x36] = 0;
  puVar12[0x3b] = puVar2;
  puVar12[0x3c] = 0;
  *(undefined8 *)((long)puVar12 + 0x217) = 0;
  puVar12[0x42] = 0;
  local_128 = (long *)CONCAT44(local_128._4_4_,6);
  *(undefined2 *)(puVar12 + 10) = 0x41;
  *(undefined2 *)((long)puVar12 + 0x53) = 0x50f;
  pvVar15 = *(void **)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar12;
  if (pvVar15 != (void *)0x0) {
    FUN_032c1b04(pvVar15);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar15);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar15);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar15);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x30);
  }
  local_a0 = *(undefined **)(*(long *)(param_1 + 0x28) + 0x18);
  pcStack_120 = "B_FooterArea_00";
  local_128 = (long *)puVar1;
  plVar9 = (long *)FUN_032d3050(&local_a0,local_a0,&local_128);
  if (((*puVar3 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar7 != 0)) {
    *(undefined8 *)puVar17 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar9 == (long *)0x0) {
LAB_032a8394:
    plVar9 = (long *)0x0;
  }
  else {
    puVar18 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar18 != (undefined8 *)puVar17) {
      do {
        puVar18 = (undefined8 *)*puVar18;
      } while (puVar18 != (undefined8 *)puVar17 && puVar18 != (undefined8 *)0x0);
      if (puVar18 == (undefined8 *)0x0) goto LAB_032a8394;
    }
  }
  puVar12[4] = plVar9;
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  plVar9 = (long *)*puVar11;
  puVar12 = (undefined8 *)(**(code **)(*plVar9 + 0x30))(plVar9,0x1d0,8);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[6] = 0;
  *(undefined4 *)(puVar12 + 7) = 0;
  *(undefined8 *)((long)puVar12 + 0x3c) = 0x200000002;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar17 = PTR_DAT_04bc8f90 + 0x10;
  puVar12[9] = puVar17;
  puVar12[10] = 0;
  puVar3 = PTR_DAT_04bc8e98 + 0x10;
  local_128._4_4_ = (uint)((ulong)local_128 >> 0x20);
  puVar12[0x1b] = puVar17;
  puVar12[0x1c] = 0;
  puVar12[0x2d] = puVar6 + 0x10;
  puVar12[0x2e] = 0;
  puVar12[0x33] = puVar6 + 0x10;
  puVar12[0x34] = 0;
  *(undefined4 *)(puVar12 + 0x39) = 0x40a0000;
  puVar12[0xf] = puVar3;
  puVar12[0x10] = 0;
  puVar12[0x15] = puVar3;
  puVar12[0x16] = 0;
  puVar12[0x21] = puVar3;
  puVar12[0x22] = 0;
  puVar12[0x27] = puVar3;
  puVar12[0x28] = 0;
  local_128._0_4_ = 1;
  *(undefined1 *)(puVar12 + 0x39) = 6;
  pvVar15 = *(void **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x38) = puVar12;
  if (pvVar15 != (void *)0x0) {
    FUN_032ae0c8(pvVar15);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar15);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar15);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,pvVar15);
      }
    }
    puVar12 = *(undefined8 **)(param_1 + 0x38);
  }
  puVar1 = PTR_DAT_04bb2020;
  local_128 = (long *)((ulong)local_128._4_4_ << 0x20);
  local_90 = 0x20;
  uVar14 = 0;
  lVar10 = param_1 + 0x70;
  local_98 = local_8c;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  *(byte *)(puVar12 + 0x39) = *(byte *)(puVar12 + 0x39) | 1;
  plVar9 = (long *)*param_2;
  local_6d = 0;
  puVar17 = PTR_DAT_04bc8e70 + 0x10;
  local_8c[0] = '\0';
  puVar3 = PTR_DAT_04bc8e68 + 0x10;
  do {
    FUN_038d1270(&local_a0,"L_Btn_%02d",uVar14 & 0xffffffff);
    pcVar16 = *(char **)(param_1 + 0x28);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar4 = PTR_DAT_04bb2120;
    if (local_98 != (char *)0x0) {
      pcVar4 = local_98;
    }
    if (*pcVar4 != '\0') {
      lVar13 = FUN_0036ab80(pcVar16);
      if (lVar13 == 0) {
        pcVar16 = (char *)0x0;
      }
      else {
        pcVar16 = *(char **)(lVar13 + 0xe8);
      }
    }
    local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
    puVar12 = (undefined8 *)(**(code **)(*(long *)*plVar9 + 0x30))((long *)*plVar9,0x60,8);
    puVar12[10] = 0;
    puVar12[0xb] = 0;
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[6] = 0;
    puVar12[7] = 0;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    *puVar12 = 0;
    puVar12[1] = 0;
    uVar8 = *(undefined8 *)(PTR_PTR_04bb2238 + 8);
    *(undefined1 *)(puVar12 + 9) = 0;
    puVar12[4] = puVar1 + 0x10;
    puVar12[5] = uVar8;
    puVar12[6] = puVar1 + 0x10;
    puVar12[7] = uVar8;
    lVar13 = *(long *)(lVar10 + uVar14 * 8);
    *(undefined8 **)(lVar10 + uVar14 * 8) = puVar12;
    if (lVar13 != 0) {
      FUN_032a981c();
    }
    local_110 = 0;
    local_b0 = 0;
    puStack_c0 = PTR_DAT_04bb2120;
    local_ac = 1;
    local_a8 = 0xffffffff;
    lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x110);
    if (lVar13 != 0) {
      do {
        while (*(ulong *)(lVar13 + 0x20) <= *(ulong *)(pcVar16 + 0x30)) {
          if (*(ulong *)(pcVar16 + 0x30) <= *(ulong *)(lVar13 + 0x20)) {
            local_118 = (char *)(lVar13 + 0x28);
            goto LAB_032a86a8;
          }
          lVar13 = *(long *)(lVar13 + 0x10);
          if (lVar13 == 0) goto LAB_032a869c;
        }
        lVar13 = *(long *)(lVar13 + 8);
      } while (lVar13 != 0);
    }
LAB_032a869c:
    local_118 = (char *)0x0;
LAB_032a86a8:
    local_108 = *(ulong *)(param_1 + 0x30);
    local_100 = *(undefined8 *)(param_1 + 0x38);
    local_b8 = 0x100000000;
    local_e8 = &PTR_LAB_04b19d28;
    local_d8 = &LAB_032a5d90;
    uStack_d0 = 0;
    local_128 = plVar9;
    pcStack_120 = pcVar16;
    local_f8 = puVar17;
    local_f0 = &local_e8;
    lStack_e0 = param_1;
    local_c8 = puVar3;
    FUN_032aa3d8(*(undefined8 *)(lVar10 + uVar14 * 8),plVar9,&local_128,param_1);
    if (local_f0 != (undefined ***)0x0) {
      (*(code *)(*local_f0)[1])();
    }
    uVar14 = uVar14 + 1;
  } while (uVar14 != 7);
  FUN_032a5fc0(param_1,0);
  puVar17 = PTR_DAT_04bc8e60;
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar15 = malloc(0x38);
    puVar17 = PTR_DAT_04bc8e60;
joined_r0x032a89b4:
    if (pvVar15 != (void *)0x0) {
      *(undefined8 *)(param_1 + 0xf8) = 0x700000000;
      *(void **)(param_1 + 0x100) = pvVar15;
    }
  }
  else {
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) {
LAB_032a876c:
      pvVar15 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x38,8);
      goto joined_r0x032a89b4;
    }
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar10 + 8);
    if (lVar13 != 0) {
      plVar9 = (long *)(lVar13 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 != (long *)0x0) goto LAB_032a876c;
  }
  FUN_032a5fc0(param_1,0);
  FUN_032c8670(*(undefined8 *)(param_1 + 0x40),1,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  FUN_032a5fc0(param_1,0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  puVar12 = (undefined8 *)*param_2;
  local_128 = (long *)((ulong)local_128 & 0xffffffff00000000);
  if (DAT_0572cc78 == (void *)0x0) {
    plVar9 = (long *)*puVar12;
    pvVar15 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x528,8);
    memset(pvVar15,0,0x528);
    *(undefined **)((long)pvVar15 + 0x20) = PTR_DAT_04bb2120;
    puVar1 = PTR_DAT_04bc95f0;
    *(undefined4 *)((long)pvVar15 + 0x30) = 0x20;
    puVar3 = PTR_DAT_04bb2020;
    *(undefined **)((long)pvVar15 + 0x38) = puVar17 + 0x10;
    *(undefined2 *)((long)pvVar15 + 0x68) = 0x101;
    *(undefined **)((long)pvVar15 + 0x10) = puVar1 + 0x10;
    *(undefined **)((long)pvVar15 + 0x18) = puVar3 + 0x10;
    local_128 = (long *)(PTR_DAT_04bc8e68 + 0x10);
    pcStack_120 = "";
    FUN_032e24f4((long)pvVar15 + 0x70,&local_128);
    puVar3 = PTR_DAT_04bc9600;
    *(undefined **)((long)pvVar15 + 0xe8) = puVar17 + 0x10;
    *(undefined8 *)((long)pvVar15 + 0xf0) = 0;
    *(undefined8 *)((long)pvVar15 + 0x118) = 0;
    *(undefined8 *)((long)pvVar15 + 0x120) = 0;
    *(undefined **)((long)pvVar15 + 0x70) = puVar3 + 0x10;
    puVar17 = PTR_DAT_04bc92a8 + 0x10;
    lVar10 = 0;
    do {
      lVar13 = lVar10 + 0x20;
      *(undefined4 *)((long)pvVar15 + lVar10 + 0x128) = 0x4000000;
      *(undefined **)((long)pvVar15 + lVar10 + 0x130) = puVar17;
      *(undefined8 *)((long)pvVar15 + lVar10 + 0x138) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar15 + lVar10 + 0x140) = 0;
      lVar10 = lVar13;
    } while (lVar13 != 0x400);
    puVar12 = (undefined8 *)*param_2;
    DAT_0572cc78 = pvVar15;
    DAT_0572cc80 = plVar9;
  }
  FUN_032ac440(DAT_0572cc78,puVar12);
  lVar10 = *(long *)PTR_DAT_04bc9298;
  local_168 = &PTR_LAB_04b19c50;
  lStack_160 = param_1;
  local_158 = &LAB_032a8ab0;
  uStack_150 = 0;
  lVar13 = *(long *)(lVar10 + 0x210);
  plVar9 = *(long **)(lVar13 + 8);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))(plVar9);
    uVar8 = 0;
    if (&local_168 == (undefined ***)0x0) goto LAB_032a8944;
  }
  uVar8 = (*(code *)local_168[3])(&local_168,lVar13 + 0x10);
LAB_032a8944:
  *(undefined8 *)(lVar13 + 8) = uVar8;
  if (&local_168 != (undefined ***)0x0) {
    (*(code *)local_168[1])();
  }
  *(undefined1 *)(lVar10 + 0x208) = 1;
  if (*(long *)(param_1 + 0x1a0) == 0) {
    *(undefined1 **)(param_1 + 400) = &LAB_032a8c80;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined ***)(param_1 + 0x180) = &PTR_LAB_04b19cd8;
    *(long *)(param_1 + 0x188) = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1 + 0x1a0) + 0x20));
    *(undefined1 **)(param_1 + 400) = &LAB_032a8c80;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined ***)(param_1 + 0x180) = &PTR_LAB_04b19cd8;
    *(long *)(param_1 + 0x188) = param_1;
    if (*(long *)(param_1 + 0x1a0) != 0) {
      nn::os::UnlockMutex((MutexType *)(*(long *)(param_1 + 0x1a0) + 0x20));
    }
  }
  puVar17 = PTR_DAT_04bc8dd0;
  *(char **)(param_1 + 0x178) = "FooterManager::calc_()";
  FUN_038bbab4(*(long *)puVar17 + 0x930,param_1 + 0x128);
  return;
}

