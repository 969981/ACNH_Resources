
/* WARNING: Removing unreachable block (ram,0x032bf380) */
/* WARNING: Removing unreachable block (ram,0x032bf884) */

void FUN_032bf340(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  undefined8 *puVar15;
  void *__ptr;
  undefined8 *__ptr_00;
  undefined8 uVar16;
  float fVar17;
  undefined *local_148;
  char *pcStack_140;
  undefined *local_138;
  char *pcStack_130;
  undefined *local_128;
  char *pcStack_120;
  undefined *local_118;
  char *pcStack_110;
  undefined *local_108;
  char *pcStack_100;
  undefined *local_f8;
  char *pcStack_f0;
  char *local_e8;
  undefined8 uStack_e0;
  ushort local_d8;
  undefined1 local_d6;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
  puVar15 = (undefined8 *)*param_2;
  plVar10 = (long *)*puVar15;
  lVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,0xf80,8);
  FUN_032d04c4(lVar11,puVar15);
  __ptr = (void *)*param_1;
  *param_1 = lVar11;
  puVar7 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    lVar11 = *(long *)puVar7;
    if (lVar11 == 0) {
      free(__ptr);
    }
    else {
      plVar10 = (long *)FUN_038cb610(lVar11,__ptr);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x38))(plVar10,__ptr);
      }
    }
  }
  puVar3 = PTR_DAT_04bc8e68;
  puVar6 = PTR_DAT_04bb2120;
  local_d6 = 0;
  local_d0 = 0;
  local_c8 = 0;
  pcStack_f0 = PTR_DAT_04bc8e68 + 0x10;
  local_c0 = 0;
  local_b8 = (undefined8 *)0x0;
  local_f8 = (undefined *)0x0;
  local_e8 = PTR_DAT_04bb2120;
  uStack_e0 = 0x640;
  local_d8 = 1;
  if (*(char *)param_2[3] == '\0') {
    local_e8 = "DBtmSelBox2.bflyt";
  }
  else {
    (**(code **)(param_2[2] + 0x18))(param_2 + 2);
    local_e8 = puVar6;
    if ((char *)param_2[3] != (char *)0x0) {
      local_e8 = (char *)param_2[3];
    }
  }
  local_f8 = (undefined *)param_2[1];
  local_d8 = local_d8 & 0xff00;
  FUN_032d0880(*param_1,&local_f8);
  if (local_b8 != (undefined8 *)0x0) {
    (**(code **)*local_b8)();
  }
  puVar6 = PTR_PTR_04bb2238;
  if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
    local_70 = *(undefined **)(*(long *)(*param_1 + 0xf0) + 0x18);
  }
  else {
    local_f8 = puVar3 + 0x10;
    pcStack_f0 = *(char **)(PTR_PTR_04bb2238 + 8);
    local_70 = (undefined *)FUN_032cb8e0(&local_70,&local_f8,*(undefined8 *)(*param_1 + 0xf0));
  }
  puVar1 = puVar3 + 0x10;
  pcStack_100 = "L_Head/T_00";
  local_108 = puVar1;
  lVar11 = FUN_032a3e70(&local_70,&local_108);
  param_1[2] = lVar11;
  pcStack_110 = "B_Content";
  local_118 = puVar1;
  lVar11 = FUN_032bfbf0(&local_70,&local_118);
  param_1[3] = lVar11;
  pcStack_120 = "B_Scroll";
  local_128 = puVar1;
  lVar11 = FUN_032bfbf0(&local_70,&local_128);
  param_1[4] = lVar11;
  pcStack_130 = "N_BtnOptPos";
  local_138 = puVar1;
  lVar11 = FUN_032d32b0(&local_70,&local_138);
  param_1[5] = lVar11;
  pcStack_f0 = "L_BtnOpt_00";
  local_f8 = puVar1;
  lVar11 = FUN_032c0120(&local_70,&local_f8,0);
  param_1[6] = lVar11;
  pcStack_f0 = "L_Line_00";
  local_f8 = puVar1;
  lVar11 = FUN_032c0120(&local_70,&local_f8,0);
  param_1[7] = lVar11;
  pcStack_f0 = "L_HeadOptGroup_00";
  local_f8 = puVar1;
  lVar11 = FUN_032c0120(&local_70,&local_f8,0);
  param_1[8] = lVar11;
  pcStack_f0 = "N_Center";
  local_f8 = puVar1;
  plVar10 = (long *)FUN_032d3050(&local_70,local_70,&local_f8);
  puVar8 = PTR_DAT_04bc8f38;
  puVar1 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0))
  {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar10 == (long *)0x0) {
LAB_032bf608:
    plVar10 = (long *)0x0;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar15 != (undefined8 *)puVar1) {
      do {
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)puVar1 && puVar15 != (undefined8 *)0x0);
      if (puVar15 == (undefined8 *)0x0) goto LAB_032bf608;
    }
  }
  param_1[9] = (long)plVar10;
  puVar2 = puVar3 + 0x10;
  pcStack_f0 = "L_BtnR";
  local_f8 = puVar2;
  lVar11 = FUN_032c0120(&local_70,&local_f8,0);
  param_1[10] = lVar11;
  pcStack_140 = "L_BtnR/L_BtnIsland/T_00";
  local_148 = puVar2;
  lVar11 = FUN_032a3e70(&local_70,&local_148);
  param_1[0xb] = lVar11;
  pcStack_f0 = "N_Top";
  local_f8 = puVar2;
  plVar10 = (long *)FUN_032d3050(&local_70,local_70,&local_f8);
  if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar10 == (long *)0x0) {
LAB_032bf6a8:
    plVar10 = (long *)0x0;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar15 != (undefined8 *)puVar1) {
      do {
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)puVar1 && puVar15 != (undefined8 *)0x0);
      if (puVar15 == (undefined8 *)0x0) goto LAB_032bf6a8;
    }
  }
  local_f8 = puVar3 + 0x10;
  param_1[0xc] = (long)plVar10;
  pcStack_f0 = "N_Btm";
  plVar10 = (long *)FUN_032d3050(&local_70,local_70,&local_f8);
  if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar10 == (long *)0x0) {
LAB_032bf714:
    plVar10 = (long *)0x0;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar15 != (undefined8 *)puVar1) {
      do {
        puVar15 = (undefined8 *)*puVar15;
      } while (puVar15 != (undefined8 *)puVar1 && puVar15 != (undefined8 *)0x0);
      if (puVar15 == (undefined8 *)0x0) goto LAB_032bf714;
    }
  }
  param_1[0xd] = (long)plVar10;
  pcStack_f0 = "L_ScrollIndicator";
  local_f8 = puVar3 + 0x10;
  lVar11 = FUN_032c0120(&local_70,&local_f8,0);
  param_1[0xe] = lVar11;
  pcStack_f0 = "N_ScrollIndicatorSize";
  local_f8 = puVar3 + 0x10;
  plVar10 = (long *)FUN_032d3050(&local_70,local_70,&local_f8);
  if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar9 != 0)) {
    *(undefined8 *)puVar1 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar10 != (long *)0x0) {
    puVar15 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
    if (puVar15 == (undefined8 *)puVar1) goto LAB_032bf79c;
    do {
      puVar15 = (undefined8 *)*puVar15;
    } while (puVar15 != (undefined8 *)puVar1 && puVar15 != (undefined8 *)0x0);
    if (puVar15 != (undefined8 *)0x0) goto LAB_032bf79c;
  }
  plVar10 = (long *)0x0;
LAB_032bf79c:
  pcVar12 = *(char **)(puVar6 + 8);
  param_1[0xf] = (long)plVar10;
  if (*pcVar12 == '\0') {
    lVar11 = *(long *)(*(long *)(*param_1 + 0xf0) + 0x18);
  }
  else {
    local_f8 = puVar3 + 0x10;
    pcStack_f0 = pcVar12;
    lVar11 = FUN_032cb8e0(&local_70,&local_f8,*(undefined8 *)(*param_1 + 0xf0));
  }
  *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  lVar11 = param_1[6];
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  }
  lVar11 = param_1[7];
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  }
  lVar11 = param_1[8];
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
  }
  lVar11 = param_1[4];
  if (lVar11 != 0) {
    fVar17 = *(float *)(param_2 + 5);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
    *(float *)(lVar11 + 0x34) = *(float *)(lVar11 + 0x34) + fVar17;
  }
  lVar11 = param_1[5];
  if (lVar11 != 0) {
    fVar17 = *(float *)(param_2 + 5);
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 0x10;
    *(float *)(lVar11 + 0x34) = *(float *)(lVar11 + 0x34) + fVar17;
  }
  if (*(char *)((long)param_2 + 0x21) != '\0') {
    local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
    puVar15 = (undefined8 *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x58,8);
    puVar15[7] = 0;
    *(undefined4 *)(puVar15 + 8) = 0;
    puVar15[9] = 0;
    *(undefined1 *)(puVar15 + 10) = 0;
    *(undefined4 *)(puVar15 + 6) = 0;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    __ptr_00 = (undefined8 *)param_1[1];
    param_1[1] = (long)puVar15;
    if (__ptr_00 != (undefined8 *)0x0) {
      FUN_032c6840(__ptr_00);
      plVar10 = (long *)*__ptr_00;
      __ptr_00[4] = 0;
      __ptr_00[5] = 0;
      __ptr_00[3] = 0;
      if (plVar10 != (long *)0x0) {
        lVar11 = __ptr_00[1];
        lVar5 = __ptr_00[2];
        __ptr_00[2] = 0;
        *__ptr_00 = 0;
        __ptr_00[1] = 0;
        if ((undefined8 *)*plVar10 == __ptr_00) {
          *plVar10 = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 8) = lVar11;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x10) = lVar5;
        }
      }
      __ptr_00[1] = 0;
      __ptr_00[2] = 0;
      *__ptr_00 = 0;
      lVar11 = *(long *)puVar7;
      if (lVar11 == 0) {
        free(__ptr_00);
      }
      else {
        plVar10 = (long *)FUN_038cb610(lVar11,__ptr_00);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,__ptr_00);
        }
      }
    }
    *(undefined8 *)(param_1[1] + 0x18) = *param_2;
    *(undefined8 *)(param_1[1] + 0x28) = *(undefined8 *)(*param_1 + 0xf0);
    FUN_032c6b2c(param_1[1],3);
    lVar11 = param_1[1];
    FUN_032c6ccc(lVar11);
    puVar3 = puVar3 + 0x10;
    pcStack_f0 = &DAT_04b1ad38;
    pcStack_68 = &DAT_04b1ad38;
    puStack_78 = &DAT_0407ebb1;
    puStack_88 = &DAT_0407ebb1;
    local_f8 = puVar3;
    local_90 = puVar3;
    local_80 = puVar3;
    local_70 = puVar3;
    FUN_032c7320(lVar11,&local_f8,&local_70,&local_80,&local_90);
    pcStack_f0 = s_Multi_04b1ad3e;
    pcStack_68 = s_Multi_04b1ad3e;
    puStack_78 = &DAT_0407ebb1;
    puStack_88 = &DAT_0407ebb1;
    local_f8 = puVar3;
    local_90 = puVar3;
    local_80 = puVar3;
    local_70 = puVar3;
    FUN_032c7320(lVar11,&local_f8,&local_70,&local_80,&local_90);
    pcStack_f0 = &DAT_04b1ad46;
    pcStack_68 = &DAT_04b1ad46;
    puStack_78 = &DAT_0407ebb1;
    puStack_88 = &DAT_0407ebb1;
    local_f8 = puVar3;
    local_90 = puVar3;
    local_80 = puVar3;
    local_70 = puVar3;
    FUN_032c7320(lVar11,&local_f8,&local_70,&local_80,&local_90);
    pcStack_f0 = &DAT_04b1ad4d;
    pcStack_68 = &DAT_04b1ad4d;
    puStack_78 = &DAT_0407ebb1;
    puStack_88 = &DAT_0407ebb1;
    local_f8 = puVar3;
    local_90 = puVar3;
    local_80 = puVar3;
    local_70 = puVar3;
    FUN_032c7320(lVar11,&local_f8,&local_70,&local_80,&local_90);
    if (*(char *)(param_2 + 4) == '\0') {
      FUN_032c83b0(param_1[1],1,1);
    }
    else {
      FUN_032c8670();
    }
    uVar16 = 0x3f800000;
    if (*(float *)(param_2 + 5) != 0.0) {
      uVar16 = 0;
    }
    FUN_032c8150(uVar16,param_1[1],0,0);
    *(undefined1 *)(param_1 + 0x11) = 1;
    FUN_032c83b0(param_1[1],3,2);
    lVar11 = param_1[1];
    if (lVar11 != 0) {
      pbVar13 = *(byte **)(lVar11 + 0x48);
      local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
      if ((*pbVar13 & 1) == 0) {
        FUN_032c896c(**(undefined8 **)(lVar11 + 0x38));
        lVar11 = param_1[1];
        pbVar13 = *(byte **)(lVar11 + 0x48);
      }
      uVar14 = *(uint *)(lVar11 + 0x40);
      local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
      pbVar4 = pbVar13;
      if (1 < uVar14) {
        pbVar4 = pbVar13 + 1;
      }
      if ((*pbVar4 & 1) == 0) {
        FUN_032c896c(*(undefined8 *)
                      (*(long *)(lVar11 + 0x38) + (ulong)(1 < *(uint *)(lVar11 + 0x30)) * 8));
        lVar11 = param_1[1];
        uVar14 = *(uint *)(lVar11 + 0x40);
        pbVar13 = *(byte **)(lVar11 + 0x48);
      }
      local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
      if ((pbVar13[(ulong)(2 < uVar14) * 2] & 1) == 0) {
        FUN_032c896c(*(undefined8 *)
                      (*(long *)(lVar11 + 0x38) + (ulong)(2 < *(uint *)(lVar11 + 0x30)) * 0x10));
      }
    }
  }
  return;
}

