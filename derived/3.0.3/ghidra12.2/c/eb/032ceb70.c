
/* WARNING: Removing unreachable block (ram,0x032cf74c) */
/* WARNING: Removing unreachable block (ram,0x032cf6b4) */
/* WARNING: Removing unreachable block (ram,0x032cf490) */
/* WARNING: Removing unreachable block (ram,0x032cf3cc) */
/* WARNING: Removing unreachable block (ram,0x032cf2b8) */
/* WARNING: Removing unreachable block (ram,0x032cf094) */
/* WARNING: Removing unreachable block (ram,0x032cedd4) */
/* WARNING: Removing unreachable block (ram,0x032ced74) */
/* WARNING: Removing unreachable block (ram,0x032cec88) */
/* WARNING: Removing unreachable block (ram,0x032ceda0) */
/* WARNING: Removing unreachable block (ram,0x032ceed0) */
/* WARNING: Removing unreachable block (ram,0x032cf164) */
/* WARNING: Removing unreachable block (ram,0x032cf380) */
/* WARNING: Removing unreachable block (ram,0x032cf46c) */
/* WARNING: Removing unreachable block (ram,0x032cf5d0) */
/* WARNING: Removing unreachable block (ram,0x032cf720) */
/* WARNING: Removing unreachable block (ram,0x032cf780) */
/* WARNING: Removing unreachable block (ram,0x032cf25c) */
/* WARNING: Removing unreachable block (ram,0x032cecfc) */
/* WARNING: Removing unreachable block (ram,0x032cf244) */
/* WARNING: Removing unreachable block (ram,0x032cf354) */

void FUN_032ceb70(undefined1 (*param_1) [16],undefined8 *param_2)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 (*pauVar14) [16];
  char *__dest;
  void *__ptr;
  long *plVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined1 auVar18 [16];
  undefined *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined **local_b8;
  undefined *local_b0;
  long *plStack_a8;
  undefined *local_a0;
  long *local_98;
  undefined2 local_70;
  undefined1 local_6e;
  undefined4 local_64;
  
  uVar6 = *(undefined8 *)*param_2;
  *(undefined8 *)(param_1[3] + 8) = ((undefined8 *)*param_2)[1];
  pauVar14 = param_1 + 3;
  *(undefined8 *)*pauVar14 = uVar6;
  puVar17 = PTR_DAT_04bb2020;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = (undefined **)0x406e9f4;
  auVar18 = FUN_032dd318(pauVar14,&local_c0,param_2[1],0xffffffffffffffff,1,1);
  *param_1 = auVar18;
  local_c0._0_4_ = 1;
  nn::os::GetTlsValue(DAT_0572ec98);
  nn::os::SetTlsValue(DAT_0572ec98,(long)(int)local_c0);
  *(undefined8 *)(param_1[0x1f] + 8) = param_2[0xf];
  *(undefined8 *)param_1[0x20] = param_2[0x10];
  *(undefined8 *)(param_1[0x20] + 8) = param_2[0x11];
  *(undefined8 *)param_1[0x21] = param_2[0x12];
  lVar11 = param_2[6];
  if (lVar11 == 0) {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  }
  *(long *)(param_1[6] + 8) = lVar11;
  FUN_00367a40(&LAB_032cde64,&LAB_032cdf80,0);
  if (param_2[7] == 0) {
    if (*(long *)(param_1[5] + 8) == 0) {
      local_c0._0_4_ = 0;
      uVar6 = (**(code **)(**(long **)*pauVar14 + 0x30))(*(long **)*pauVar14,0x3b8,8);
      FUN_0036664c();
      *(undefined8 *)(param_1[5] + 8) = uVar6;
      uVar10 = *(undefined8 *)(param_1[6] + 8);
      param_1[0x58][8] = 1;
      FUN_00365690(0,uVar6,uVar10,*(undefined4 *)(param_2 + 4),0,0,0,0);
      FUN_00366c08(*(undefined8 *)(param_1[5] + 8),*(undefined8 *)(param_1[0x20] + 8),0);
    }
  }
  else {
    *(undefined8 *)(param_1[5] + 8) = param_2[7];
  }
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  uVar6 = (**(code **)(**(long **)*pauVar14 + 0x30))(*(long **)*pauVar14,0x1a0,0x10);
  FUN_00364f30();
  plVar7 = *(long **)param_1[6];
  *(undefined8 *)param_1[6] = uVar6;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x10))();
  }
  if (param_1[0x58][9] == '\0') {
    local_e0 = puVar17 + 0x10;
    pcStack_d8 = "Constant LytAllocator";
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined **)0x0;
    if (*(long *)*pauVar14 != 0) {
      local_c0 = (undefined *)FUN_038c6d48(0,&local_e0,*(long *)*pauVar14,8,1,1);
      local_64 = 0;
    }
    uVar6 = *(undefined8 *)param_1[6];
    *(undefined **)param_1[2] = local_c0;
    *(undefined ***)(param_1[2] + 8) = local_b8;
    FUN_032cf7c0(param_1,uVar6,param_2);
    if (*(long **)param_1[2] != (long *)0x0) {
      (**(code **)(**(long **)param_1[2] + 0x28))();
    }
    if (*(long **)(param_1[2] + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1[2] + 8) + 0x28))();
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1[3] + 8);
    uVar10 = *(undefined8 *)param_1[6];
    *(undefined8 *)param_1[2] = *(undefined8 *)*pauVar14;
    *(undefined8 *)(param_1[2] + 8) = uVar6;
    FUN_032cf7c0(param_1,uVar10,param_2);
  }
  local_a0 = (undefined *)0x0;
  local_98 = (long *)0x0;
  *(undefined8 *)(*(long *)param_1[6] + 0xb8) = *(undefined8 *)(param_1[5] + 8);
  local_b0 = (undefined *)0x0;
  plStack_a8 = (long *)0x0;
  local_c0 = (undefined *)0x0;
  local_b8 = (undefined **)0x0;
  *(byte *)(*(long *)param_1[6] + 0x18e) = *(byte *)(*(long *)param_1[6] + 0x18e) | 8;
  lVar11 = *(long *)param_1[6];
  FUN_0034fd18(&local_c0);
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = (undefined **)0x4487000044f00000;
  local_e0 = (undefined *)0x0;
  pcStack_d8 = (char *)0x0;
  FUN_0034fd28(&local_e0);
  *(undefined **)(lVar11 + 0x110) = local_b0;
  *(long **)(lVar11 + 0x118) = plStack_a8;
  *(undefined **)(lVar11 + 0x120) = local_a0;
  *(long **)(lVar11 + 0x128) = local_98;
  *(undefined **)(lVar11 + 0x100) = local_c0;
  *(undefined ***)(lVar11 + 0x108) = local_b8;
  *(undefined8 *)(lVar11 + 0x140) = local_d0;
  *(undefined8 *)(lVar11 + 0x148) = uStack_c8;
  *(undefined **)(lVar11 + 0x130) = local_e0;
  *(undefined8 *)(lVar11 + 0x138) = 0x43800000780;
  if (*(char *)(param_2 + 0xb) != '\0') {
    if (param_2[10] != 0) {
      local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
      pvVar8 = (void *)(**(code **)(**(long **)*param_2 + 0x30))(*(long **)*param_2,0x138,8);
      memset(pvVar8,0,0x138);
      FUN_003490b4(pvVar8);
      *(undefined8 *)((long)pvVar8 + 0x128) = 0;
      *(undefined8 *)((long)pvVar8 + 0x130) = 0;
      *(undefined8 *)((long)pvVar8 + 0x120) = 0;
      __ptr = *(void **)(param_1[0x50] + 8);
      *(void **)(param_1[0x50] + 8) = pvVar8;
      puVar5 = PTR_DAT_04bb2698;
      if (__ptr != (void *)0x0) {
        lVar11 = *(long *)((long)__ptr + 0x130);
        if (lVar11 != 0) {
          plVar7 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar11);
          (**(code **)(*plVar7 + 0x38))(plVar7,lVar11);
        }
        FUN_003490c0(__ptr);
        if (*(long *)puVar5 == 0) {
          free(__ptr);
        }
        else {
          plVar7 = (long *)FUN_038cb610(*(long *)puVar5,__ptr);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
          }
        }
        pvVar8 = *(void **)(param_1[0x50] + 8);
      }
      FUN_0327df30(pvVar8,param_2[10],*param_2,*(undefined8 *)(param_1[6] + 8));
    }
    puVar5 = PTR_DAT_04bc9528;
    *(undefined1 **)PTR_DAT_04bc9520 = &LAB_032cdfc4;
    *(undefined1 **)puVar5 = &LAB_032ce3e0;
    *(undefined8 *)PTR_DAT_04bc9530 = 0;
  }
  if (*(long *)(param_1[0x11] + 8) == 0) {
    *(undefined1 **)(param_1[0x10] + 8) = &LAB_032cfa00;
    *(undefined8 *)param_1[0x11] = 0;
    *(undefined ***)(param_1[0xf] + 8) = &PTR_LAB_04b1b4f0;
    *(undefined1 (**) [16])param_1[0x10] = param_1;
  }
  else {
    nn::os::LockMutex((MutexType *)(*(long *)(param_1[0x11] + 8) + 0x20));
    *(undefined1 **)(param_1[0x10] + 8) = &LAB_032cfa00;
    *(undefined8 *)param_1[0x11] = 0;
    lVar11 = *(long *)(param_1[0x11] + 8);
    *(undefined ***)(param_1[0xf] + 8) = &PTR_LAB_04b1b4f0;
    *(undefined1 (**) [16])param_1[0x10] = param_1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  puVar5 = PTR_DAT_04bc8dd0;
  *(char **)param_1[0xf] = "lytManager::calc()";
  FUN_038bbab4(*(long *)puVar5 + 0x9c8,param_1 + 10);
  param_1[0x58][10] = *(undefined1 *)((long)param_2 + 0x59);
  param_1[0x58][0xb] = *(undefined1 *)((long)param_2 + 0x5a);
  param_1[0x58][0xc] = *(undefined1 *)(param_2 + 0xb);
  puVar9 = &DAT_0572ec90;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)param_2[8];
  }
  *(undefined8 **)param_1[8] = puVar9;
  *(undefined8 *)(param_1[8] + 8) = param_2[9];
  puVar9 = *(undefined8 **)param_1[0x56];
  plVar7 = (long *)PTR_DAT_04bc94e8;
  while (PTR_DAT_04bc94e8 = (undefined *)plVar7, puVar9 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)puVar9[2];
    puVar9[2] = 0;
    lVar11 = puVar9[1];
    *puVar9 = 0;
    puVar9[1] = 0;
    if (*(undefined8 **)param_1[0x56] == puVar9) {
      *(undefined8 **)param_1[0x56] = puVar12;
    }
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = lVar11;
    }
    puVar9 = puVar12;
    plVar7 = (long *)PTR_DAT_04bc94e8;
    if (lVar11 != 0) {
      *(undefined8 **)(lVar11 + 0x10) = puVar12;
      plVar7 = (long *)PTR_DAT_04bc94e8;
    }
  }
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  if (*plVar7 == 0) {
    plVar13 = *(long **)*pauVar14;
    puVar9 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x6c,8);
    *puVar9 = 0;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 0xc) = 0;
    *(undefined8 *)((long)puVar9 + 100) = 0x4487000044f00000;
    *plVar7 = (long)puVar9;
    DAT_0572ecc0 = plVar13;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    lVar11 = param_2[0xe];
    plVar7 = (long *)PTR_DAT_04bc6348;
  }
  else {
    lVar11 = param_2[0xe];
    plVar7 = (long *)PTR_DAT_04bc6348;
  }
  PTR_DAT_04bc6348 = (undefined *)plVar7;
  if (lVar11 != 0) {
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    if (*plVar7 == 0) {
      plVar13 = *(long **)*pauVar14;
      pvVar8 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x658,8);
      memset(pvVar8,0,0x658);
      *plVar7 = (long)pvVar8;
      DAT_0572ecd0 = plVar13;
    }
    local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
    iVar3 = *(int *)PTR_DAT_04bc9510;
    if (iVar3 != 0) {
      lVar11 = *(long *)(PTR_DAT_04bc9510 + 8);
      uVar16 = 0;
      do {
        FUN_032c9ff4(*plVar7,*(undefined8 *)
                              (lVar11 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)),
                     pauVar14,0);
        uVar1 = uVar16 + 1;
        uVar16 = uVar1 & 0xffffffff;
      } while (iVar3 != (int)uVar1);
    }
  }
  plVar7 = *(long **)param_1[8];
  if (*(char *)((long)param_2 + 0x59) != '\0') {
    local_b8 = (undefined **)param_2[0xc];
    local_c0 = puVar17 + 0x10;
    local_6e = 0;
    local_a0 = PTR_DAT_04bc8e60 + 0x10;
    local_70 = 0x100;
    local_98 = (long *)0x0;
    local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
    local_b0 = *(undefined **)*pauVar14;
    plStack_a8 = (long *)0x1000;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)*pauVar14);
    plVar13 = *(long **)param_1[0x57];
    *(long **)param_1[0x57] = plVar7;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      plVar7 = *(long **)param_1[0x57];
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_c0);
    local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
    uVar6 = (**(code **)(**(long **)*pauVar14 + 0x30))(*(long **)*pauVar14,0xe8,8);
    FUN_00361c7c();
    plVar7 = *(long **)(param_1[0x57] + 8);
    *(undefined8 *)(param_1[0x57] + 8) = uVar6;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 8))();
      uVar6 = *(undefined8 *)(param_1[0x57] + 8);
    }
    uVar10 = (**(code **)(**(long **)param_1[0x57] + 0x28))();
    FUN_00361d50(uVar6,uVar10,&DAT_0407ec0b,0,0,0);
    FUN_00362120(*(undefined8 *)(param_1[0x57] + 8),*(undefined8 *)(param_1[6] + 8));
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 8))();
    }
    plVar7 = *(long **)param_1[8];
  }
  local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
  lVar11 = param_2[0xd];
  uVar6 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)*pauVar14);
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  plVar7 = (long *)(**(code **)(**(long **)*pauVar14 + 0x30))(*(long **)*pauVar14,0x20,8);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  if (lVar11 != 0) {
    local_c0 = PTR_DAT_04bc9448 + 0x10;
    local_b0 = PTR_DAT_04bc9460 + 0x10;
    local_a0 = PTR_LAB_04bc9458;
    local_98 = (long *)0x0;
    local_b8 = &local_b0;
    plStack_a8 = plVar7;
    FUN_032e1d30(lVar11,uVar6,*(undefined8 *)*pauVar14,&local_c0);
    if (local_b8 != (undefined **)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
  }
  pvVar8 = *(void **)param_1[0x58];
  *(long **)param_1[0x58] = plVar7;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
  }
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  (**(code **)(**(long **)param_1[8] + 0x18))(*(long **)param_1[8],uVar6,*(undefined8 *)*pauVar14);
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  plVar7 = *(long **)PTR_DAT_04bc94a0;
  if (plVar7 == (long *)0x0) {
    plVar15 = *(long **)*pauVar14;
    plVar7 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x4008,8);
    memset(plVar7,0,0x4008);
    lVar11 = 0x1e;
    puVar17 = PTR_DAT_04bb2028 + 0x10;
    plVar13 = plVar7;
    do {
      *(undefined4 *)(plVar13 + 2) = 0x20;
      *(undefined1 *)((long)plVar13 + 0x14) = 0;
      *(undefined1 *)((long)plVar13 + 0x33) = 0;
      *plVar13 = (long)puVar17;
      plVar13[1] = (long)plVar13 + 0x14;
      memset(plVar13 + 7,0,0x1d4);
      lVar11 = lVar11 + -1;
      plVar13 = plVar13 + 0x42;
    } while (lVar11 != 0);
    plVar7[0x7bd] = (long)plVar7 + 0x3df4;
    *(undefined4 *)(plVar7 + 0x7be) = 0x20;
    *(undefined1 *)((long)plVar7 + 0x3e13) = 0;
    *(undefined1 *)((long)plVar7 + 0x3df4) = 0;
    plVar7[0x7bc] = (long)(PTR_DAT_04bb2028 + 0x10);
    memset(plVar7 + 0x7c3,0,0x1d4);
    *(undefined4 *)(plVar7 + 0x7fe) = 0;
    *(undefined4 *)(plVar7 + 0x7ff) = 0;
    *(undefined1 *)((long)plVar7 + 0x3ffc) = 0;
    *(undefined4 *)(plVar7 + 0x800) = 0;
    *(long **)PTR_DAT_04bc94a0 = plVar7;
    puVar17 = PTR_DAT_04bb2020;
    DAT_0572ecc8 = plVar15;
  }
  if (param_1[0x58][9] == '\0') {
    local_c0 = PTR_DAT_04bc9448 + 0x10;
    local_b0 = PTR_DAT_04bc9440 + 0x10;
    local_a0 = PTR_FUN_04bc9438;
    local_98 = (long *)0x0;
    local_b8 = &local_b0;
    plStack_a8 = plVar7;
    FUN_033706c0(DAT_0572e898,*(undefined8 *)(param_1[3] + 8),&local_c0);
    if (local_b8 != (undefined **)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
  }
  __dest = (char *)plVar7[0x7bd];
  if (__dest != "CurrentColor") {
    iVar3 = 0xc;
    if ((int)plVar7[0x7be] < 0xd) {
      iVar3 = (int)plVar7[0x7be] + -1;
    }
    memcpy(__dest,"CurrentColor",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  puVar2 = (uint *)(plVar7 + 0x7ff);
  if (*(char *)((long)plVar7 + 0x3ffc) != '\0') {
    puVar2 = (uint *)(plVar7 + 0x800);
  }
  uVar4 = *puVar2;
  plVar13 = plVar7 + (ulong)uVar4 * 0x42;
  if (0x1d < uVar4) {
    plVar13 = plVar7;
  }
  memcpy(plVar7 + 0x7c3,plVar13 + 7,0x1d4);
  *(uint *)(plVar7 + 0x7fe) = uVar4;
  puVar5 = PTR_DAT_04bc6340;
  local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
  pvVar8 = *(void **)PTR_DAT_04bc6340;
  if (pvVar8 == (void *)0x0) {
    plVar7 = *(long **)*pauVar14;
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x340,8);
    memset(pvVar8,0,0x324);
    *(undefined8 *)((long)pvVar8 + 0x328) = 0;
    *(undefined8 *)((long)pvVar8 + 0x330) = 0;
    *(undefined8 *)((long)pvVar8 + 0x338) = 0;
    *(void **)puVar5 = pvVar8;
    DAT_0572ecb0 = plVar7;
  }
  local_e0 = puVar17 + 0x10;
  pcStack_d8 = "TextAreaParkResHeap";
  local_c0 = (undefined *)0x0;
  local_b8 = (undefined **)0x0;
  if (*(long *)*pauVar14 == 0) {
    local_b8 = (undefined **)0x0;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_038c6d48(0x80000,&local_e0,*(long *)*pauVar14,8,1,1);
  }
  *(undefined8 *)((long)pvVar8 + 0x330) = uVar6;
  *(undefined ***)((long)pvVar8 + 0x338) = local_b8;
  return;
}

