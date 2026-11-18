
/* WARNING: Removing unreachable block (ram,0x0331cf40) */
/* WARNING: Removing unreachable block (ram,0x0331ccf8) */
/* WARNING: Removing unreachable block (ram,0x0331caac) */
/* WARNING: Removing unreachable block (ram,0x0331c804) */
/* WARNING: Removing unreachable block (ram,0x0331c540) */
/* WARNING: Removing unreachable block (ram,0x0331c408) */
/* WARNING: Removing unreachable block (ram,0x0331c734) */
/* WARNING: Removing unreachable block (ram,0x0331c984) */
/* WARNING: Removing unreachable block (ram,0x0331cc18) */
/* WARNING: Removing unreachable block (ram,0x0331ce68) */
/* WARNING: Removing unreachable block (ram,0x0331d0c4) */

void FUN_0331c3c0(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined *puVar13;
  undefined *local_130;
  undefined ***local_128;
  undefined **local_120;
  long *plStack_118;
  code *local_110;
  undefined8 uStack_108;
  long *local_f8;
  undefined4 local_c0;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  char *pcStack_80;
  undefined *local_78;
  char *pcStack_70;
  
  plVar8 = param_1 + 0x5c;
  local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
  lVar4 = (**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x590,8);
  FUN_03286a68();
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "L_BtnEnter_00";
  pcStack_80 = "";
  local_78 = local_88;
  FUN_0331d330(&local_130,param_1,plVar8,param_1[0x5e],&local_78,&local_88);
  if ((((*(long *)PTR_DAT_04bc9298 == 0) || (*(long **)PTR_DAT_04bc92a0 == (long *)0x0)) ||
      (*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10)) ||
     (iVar3 = (**(code **)(**(long **)PTR_DAT_04bc92a0 + 0x40))(), 1 < iVar3 - 3U)) {
    local_c0 = 0x400;
  }
  else {
    local_c0 = 0x600;
  }
  FUN_032873d0(lVar4,&local_130);
  (**(code **)(*param_1 + 0x178))(param_1,lVar4);
  pvVar12 = (void *)param_1[0x67];
  param_1[0x67] = lVar4;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar12 != (void *)0x0) {
    FUN_03286c9c(pvVar12);
    if (*(long *)puVar2 == 0) {
      free(pvVar12);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
      }
    }
  }
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x58,8);
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar11 = (undefined8 *)param_1[0x70];
  param_1[0x70] = (long)puVar6;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar5 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar5 != (long *)0x0) {
      lVar4 = puVar11[1];
      lVar7 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar5 == puVar11) {
        *plVar5 = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar7;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,puVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
      }
    }
    puVar6 = (undefined8 *)param_1[0x70];
  }
  lVar4 = FUN_0036ab80(*(undefined8 *)(param_1[0x5e] + 0xf0),"L_BtnEnter_00");
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0xe8);
  }
  puVar6[5] = uVar9;
  *(long **)(param_1[0x70] + 0x18) = plVar8;
  FUN_032c6b2c(param_1[0x70],1);
  lVar4 = param_1[0x70];
  FUN_032c6ccc(lVar4);
  puVar13 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_70 = &DAT_04b1e978;
  pcStack_80 = &DAT_04b1e978;
  puStack_90 = &DAT_0407ebb1;
  puStack_a0 = &DAT_0407ebb1;
  local_a8 = puVar13;
  local_98 = puVar13;
  local_88 = puVar13;
  local_78 = puVar13;
  FUN_032c7320(lVar4,&local_78,&local_88,&local_98,&local_a8);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  lVar4 = *(long *)(param_1[0x5e] + 0xf0);
  local_128 = (undefined ***)0x406eaa2;
  local_78 = *(undefined **)(lVar4 + 0x18);
  local_130 = puVar13;
  plVar5 = (long *)FUN_032d3050(&local_78,local_78,&local_130);
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0))
  {
    *(undefined8 *)PTR_DAT_04bc8f30 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar5 == (long *)0x0) {
LAB_0331c714:
    plVar5 = (long *)0x0;
  }
  else {
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
    if (puVar6 != (undefined8 *)PTR_DAT_04bc8f30) {
      do {
        puVar6 = (undefined8 *)*puVar6;
      } while (puVar6 != (undefined8 *)PTR_DAT_04bc8f30 && puVar6 != (undefined8 *)0x0);
      if (puVar6 == (undefined8 *)0x0) goto LAB_0331c714;
    }
  }
  param_1[0x65] = (long)plVar5;
  local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
  lVar7 = (**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x590,8);
  FUN_03286a68();
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "L_BtnBS";
  pcStack_80 = "";
  local_78 = local_88;
  FUN_0331d330(&local_130,param_1,plVar8,param_1[0x5e],&local_78,&local_88);
  local_c0 = 2;
  FUN_032873d0(lVar7,&local_130);
  (**(code **)(*param_1 + 0x178))(param_1,lVar7);
  pvVar12 = (void *)param_1[0x68];
  param_1[0x68] = lVar7;
  if (pvVar12 != (void *)0x0) {
    FUN_03286c9c(pvVar12);
    if (*(long *)puVar2 == 0) {
      free(pvVar12);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
      }
    }
  }
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x58,8);
  puVar6[7] = 0;
  *(undefined4 *)(puVar6 + 8) = 0;
  puVar6[9] = 0;
  *(undefined1 *)(puVar6 + 10) = 0;
  *(undefined4 *)(puVar6 + 6) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar11 = (undefined8 *)param_1[0x6d];
  param_1[0x6d] = (long)puVar6;
  if (puVar11 != (undefined8 *)0x0) {
    FUN_032c6840(puVar11);
    plVar5 = (long *)*puVar11;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[3] = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = puVar11[1];
      lVar1 = puVar11[2];
      puVar11[2] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      if ((undefined8 *)*plVar5 == puVar11) {
        *plVar5 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar7;
      }
      if (lVar7 != 0) {
        *(long *)(lVar7 + 0x10) = lVar1;
      }
    }
    puVar11[1] = 0;
    puVar11[2] = 0;
    *puVar11 = 0;
    if (*(long *)puVar2 == 0) {
      free(puVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,puVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
      }
    }
    puVar6 = (undefined8 *)param_1[0x6d];
  }
  lVar4 = FUN_0036ab80(lVar4,"L_BtnBS");
  if (lVar4 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(undefined8 *)(lVar4 + 0xe8);
  }
  puVar6[5] = uVar9;
  *(long **)(param_1[0x6d] + 0x18) = plVar8;
  FUN_032c6b2c(param_1[0x6d],1);
  lVar4 = param_1[0x6d];
  FUN_032c6ccc(lVar4);
  puVar13 = PTR_DAT_04bc8e68;
  local_a8 = PTR_DAT_04bc8e68 + 0x10;
  pcStack_70 = "ChangeAssign";
  pcStack_80 = "ChangeAssign";
  puStack_90 = &DAT_0407ebb1;
  puStack_a0 = &DAT_0407ebb1;
  local_98 = local_a8;
  local_88 = local_a8;
  local_78 = local_a8;
  FUN_032c7320(lVar4,&local_78,&local_88,&local_98,&local_a8);
  if (local_f8 != (long *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  if ((param_3 & 1) != 0) {
    local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x590,8);
    FUN_03286a68();
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "L_BtnLineBreak";
    pcStack_80 = "";
    local_78 = local_88;
    FUN_0331d330(&local_130,param_1,plVar8,param_1[0x5e],&local_78,&local_88);
    if (((*(long *)PTR_DAT_04bc9298 == 0) || (*(long **)PTR_DAT_04bc92a0 == (long *)0x0)) ||
       ((*(int *)(*(long *)(*(long *)PTR_DAT_04bc9298 + 0x210) + 0x60) == 10 ||
        (iVar3 = (**(code **)(**(long **)PTR_DAT_04bc92a0 + 0x40))(), 1 < iVar3 - 3U)))) {
      local_c0 = 0x200;
    }
    else {
      local_c0 = 0x40;
    }
    FUN_032873d0(lVar4,&local_130);
    (**(code **)(*param_1 + 0x178))(param_1,lVar4);
    pvVar12 = (void *)param_1[0x69];
    param_1[0x69] = lVar4;
    if (pvVar12 != (void *)0x0) {
      FUN_03286c9c(pvVar12);
      if (*(long *)puVar2 == 0) {
        free(pvVar12);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
        }
      }
    }
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x58,8);
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar11 = (undefined8 *)param_1[0x71];
    param_1[0x71] = (long)puVar6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_032c6840(puVar11);
      plVar5 = (long *)*puVar11;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = 0;
      if (plVar5 != (long *)0x0) {
        lVar4 = puVar11[1];
        lVar7 = puVar11[2];
        puVar11[2] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        if ((undefined8 *)*plVar5 == puVar11) {
          *plVar5 = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 8) = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar7;
        }
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if (*(long *)puVar2 == 0) {
        free(puVar11);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,puVar11);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
        }
      }
      puVar6 = (undefined8 *)param_1[0x71];
    }
    lVar4 = FUN_0036ab80(*(undefined8 *)(param_1[0x5e] + 0xf0),"L_BtnLineBreak");
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar4 + 0xe8);
    }
    puVar6[5] = uVar9;
    *(long **)(param_1[0x71] + 0x18) = plVar8;
    FUN_032c6b2c(param_1[0x71],1);
    lVar4 = param_1[0x71];
    FUN_032c6ccc(lVar4);
    local_a8 = puVar13 + 0x10;
    pcStack_70 = "ChangeAssign";
    pcStack_80 = "ChangeAssign";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_98 = local_a8;
    local_88 = local_a8;
    local_78 = local_a8;
    FUN_032c7320(lVar4,&local_78,&local_88,&local_98,&local_a8);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  if ((param_3 >> 8 & 1) != 0) {
    local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x590,8);
    FUN_03286a68();
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "L_BtnSpace_00";
    pcStack_80 = "";
    local_78 = local_88;
    FUN_0331d330(&local_130,param_1,plVar8,param_1[0x5e],&local_78,&local_88);
    local_c0 = 0x10;
    FUN_032873d0(lVar4,&local_130);
    (**(code **)(*param_1 + 0x178))(param_1,lVar4);
    pvVar12 = (void *)param_1[0x6a];
    param_1[0x6a] = lVar4;
    if (pvVar12 != (void *)0x0) {
      FUN_03286c9c(pvVar12);
      if (*(long *)puVar2 == 0) {
        free(pvVar12);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
        }
      }
    }
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    uVar9 = *(undefined8 *)(param_1[0x5e] + 0xf0);
    puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x58,8);
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar11 = (undefined8 *)param_1[0x6e];
    param_1[0x6e] = (long)puVar6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_032c6840(puVar11);
      plVar5 = (long *)*puVar11;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = 0;
      if (plVar5 != (long *)0x0) {
        lVar4 = puVar11[1];
        lVar7 = puVar11[2];
        puVar11[2] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        if ((undefined8 *)*plVar5 == puVar11) {
          *plVar5 = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 8) = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar7;
        }
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if (*(long *)puVar2 == 0) {
        free(puVar11);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,puVar11);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
        }
      }
      puVar6 = (undefined8 *)param_1[0x6e];
    }
    lVar4 = FUN_0036ab80(uVar9,"L_BtnSpace_00");
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar4 + 0xe8);
    }
    puVar6[5] = uVar9;
    *(long **)(param_1[0x6e] + 0x18) = plVar8;
    FUN_032c6b2c(param_1[0x6e],1);
    lVar4 = param_1[0x6e];
    FUN_032c6ccc(lVar4);
    puVar13 = PTR_DAT_04bc8e68;
    local_a8 = PTR_DAT_04bc8e68 + 0x10;
    pcStack_70 = "ChangeAssign";
    pcStack_80 = "ChangeAssign";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_98 = local_a8;
    local_88 = local_a8;
    local_78 = local_a8;
    FUN_032c7320(lVar4,&local_78,&local_88,&local_98,&local_a8);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  if ((param_3 >> 0x10 & 1) != 0) {
    local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
    lVar4 = (**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x590,8);
    FUN_03286a68();
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "L_BtnArray";
    pcStack_80 = "";
    local_78 = local_88;
    FUN_0331d330(&local_130,param_1,plVar8,param_1[0x5e],&local_78,&local_88);
    FUN_032873d0(lVar4,&local_130);
    (**(code **)(*param_1 + 0x178))(param_1,lVar4);
    pvVar12 = (void *)param_1[0x6c];
    param_1[0x6c] = lVar4;
    if (pvVar12 != (void *)0x0) {
      FUN_03286c9c(pvVar12);
      if (*(long *)puVar2 == 0) {
        free(pvVar12);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
        }
      }
    }
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    uVar9 = *(undefined8 *)(param_1[0x5e] + 0xf0);
    puVar6 = (undefined8 *)(**(code **)(*(long *)*plVar8 + 0x30))((long *)*plVar8,0x58,8);
    puVar6[7] = 0;
    *(undefined4 *)(puVar6 + 8) = 0;
    puVar6[9] = 0;
    *(undefined1 *)(puVar6 + 10) = 0;
    *(undefined4 *)(puVar6 + 6) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar11 = (undefined8 *)param_1[0x6f];
    param_1[0x6f] = (long)puVar6;
    if (puVar11 != (undefined8 *)0x0) {
      FUN_032c6840(puVar11);
      plVar5 = (long *)*puVar11;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[3] = 0;
      if (plVar5 != (long *)0x0) {
        lVar4 = puVar11[1];
        lVar7 = puVar11[2];
        puVar11[2] = 0;
        *puVar11 = 0;
        puVar11[1] = 0;
        if ((undefined8 *)*plVar5 == puVar11) {
          *plVar5 = lVar7;
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 8) = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x10) = lVar7;
        }
      }
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      if (*(long *)puVar2 == 0) {
        free(puVar11);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)puVar2,puVar11);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,puVar11);
        }
      }
      puVar6 = (undefined8 *)param_1[0x6f];
    }
    lVar4 = FUN_0036ab80(uVar9,"L_BtnArray");
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar4 + 0xe8);
    }
    puVar6[5] = uVar9;
    *(long **)(param_1[0x6f] + 0x18) = plVar8;
    FUN_032c6b2c(param_1[0x6f],1);
    lVar4 = param_1[0x6f];
    FUN_032c6ccc(lVar4);
    local_a8 = puVar13 + 0x10;
    pcStack_70 = "ChangeCnt";
    pcStack_80 = "ChangeCnt";
    puStack_90 = &DAT_0407ebb1;
    puStack_a0 = &DAT_0407ebb1;
    local_98 = local_a8;
    local_88 = local_a8;
    local_78 = local_a8;
    FUN_032c7320(lVar4,&local_78,&local_88,&local_98,&local_a8);
    FUN_032c83b0(param_1[0x6f],0,0);
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  if (param_1[0x5f] != 0) {
    local_130 = (undefined *)((ulong)local_130 & 0xffffffff00000000);
    lVar4 = (**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x590,8);
    FUN_03286a68();
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "L_BtnShowNum";
    pcStack_80 = "";
    local_78 = local_88;
    FUN_0331d330(&local_130,param_1,param_2,param_1[0x5f],&local_78,&local_88);
    FUN_032873d0(lVar4,&local_130);
    (**(code **)(*param_1 + 0x178))(param_1,lVar4);
    pvVar12 = (void *)param_1[0x60];
    param_1[0x60] = lVar4;
    if (pvVar12 != (void *)0x0) {
      FUN_03286c9c(pvVar12);
      if (*(long *)puVar2 == 0) {
        free(pvVar12);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)puVar2,pvVar12);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,pvVar12);
        }
      }
    }
    if (local_f8 != (long *)0x0) {
      (**(code **)(*local_f8 + 8))();
    }
  }
  local_128 = &local_120;
  *(byte *)(param_1 + 0x2f8) = *(byte *)(param_1 + 0x2f8) | 1;
  puVar2 = PTR_DAT_04bc8f90;
  *(undefined4 *)(param_1 + 0x2c6) = 0xf0001;
  ppuVar10 = &PTR_LAB_04b1e878;
  local_110 = FUN_0331d564;
  uStack_108 = 0;
  local_130 = puVar2 + 0x10;
  local_120 = &PTR_LAB_04b1e878;
  plVar8 = (long *)param_1[0x2c9];
  plStack_118 = param_1;
  if (plVar8 == (long *)0x0) {
LAB_0331d204:
    lVar4 = (*(code *)ppuVar10[3])(local_128,param_1 + 0x2ca);
    param_1[0x2c9] = lVar4;
    if (local_128 != (undefined ***)0x0) {
      (*(code *)(*local_128)[1])();
    }
  }
  else {
    (**(code **)(*plVar8 + 8))(plVar8);
    if (local_128 != (undefined ***)0x0) {
      ppuVar10 = *local_128;
      goto LAB_0331d204;
    }
    param_1[0x2c9] = 0;
  }
  local_128 = &local_120;
  ppuVar10 = &PTR_LAB_04b1e900;
  local_130 = PTR_DAT_04bc8e98 + 0x10;
  local_120 = &PTR_LAB_04b1e900;
  local_110 = FUN_0331d5b4;
  uStack_108 = 0;
  plVar8 = (long *)param_1[0x2cf];
  plStack_118 = param_1;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
    if (local_128 == (undefined ***)0x0) {
      param_1[0x2cf] = 0;
      goto LAB_0331d2c0;
    }
    ppuVar10 = *local_128;
  }
  lVar4 = (*(code *)ppuVar10[3])(local_128,param_1 + 0x2d0);
  param_1[0x2cf] = lVar4;
  if (local_128 != (undefined ***)0x0) {
    (*(code *)(*local_128)[1])();
  }
LAB_0331d2c0:
  FUN_03292630(param_1[0x72],param_1 + 0x2bf);
  return;
}

