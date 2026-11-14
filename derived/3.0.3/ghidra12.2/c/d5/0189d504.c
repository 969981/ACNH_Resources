
void FUN_0189d504(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  uint *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  code *pcVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_24;
  
  puVar9 = &local_70;
  uVar14 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((long)param_1 + 0x284) = uVar14;
  plVar12 = (long *)param_1[9];
  uVar16 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x51) = uVar16;
  uVar17 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x4f) = uVar14;
  *(undefined4 *)((long)param_1 + 0x27c) = uVar16;
  *(undefined4 *)((long)param_1 + 0x28c) = uVar17;
  *(undefined4 *)(param_1 + 0x50) = uVar17;
  uVar14 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x54) = uVar14;
  *(undefined4 *)((long)param_1 + 0x2a4) = uVar14;
  *(undefined4 *)(param_1 + 0x55) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((long)param_1 + 0x2b4) = uVar14;
  *(undefined4 *)((long)param_1 + 0x2ac) = uVar14;
  *(undefined8 *)((long)param_1 + 0x2dc) = 0;
  *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  *(undefined8 *)((long)param_1 + 0x2d4) = 0;
  if (((*PTR_DAT_04bb3fc8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3fc8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3fc0 = PTR_DAT_04bb3fd0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3fc8);
  }
  if ((plVar12 == (long *)0x0) ||
     (uVar4 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fc0), (uVar4 & 1) == 0)) {
    param_1[0x5d] = 0;
    return;
  }
  param_1[0x5d] = (long)plVar12;
  plVar12 = *(long **)(plVar12[0x5a] + 0x3d0);
  if (plVar12 == (long *)0x0) {
    return;
  }
  iVar2 = (**(code **)(*plVar12 + 0x158))(plVar12);
  if (iVar2 == 4) {
    lVar11 = ((long *)plVar12[7])[6];
    if (*(int *)(lVar11 + 0x58) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = **(undefined8 **)(lVar11 + 0x60);
    }
    local_48 = 0;
    local_50 = 0;
    lVar11 = *(long *)plVar12[7];
    if (*(int *)(lVar11 + 0x58) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = **(long **)(lVar11 + 0x60);
    }
    pcVar5 = (char *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
    if (*pcVar5 == '\0') {
LAB_0189d750:
      puVar7 = (undefined8 *)(**(code **)(*(long *)(lVar11 + 0x90) + 0xf0))((long *)(lVar11 + 0x90))
      ;
      local_48 = *(undefined4 *)(puVar7 + 1);
      local_50 = *puVar7;
    }
    else {
      plVar12 = (long *)(lVar11 + 0x60);
      puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
      puVar1 = PTR_DAT_04bb5ce0;
      if (((0x3f < *puVar6) || (*(long *)PTR_DAT_04bb5ce0 == 0)) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar6 * 0x14 + 0xc) == '\0'))
      goto LAB_0189d750;
      puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
      uVar3 = *puVar6;
      if (((uVar3 < 0x40) && (*(long *)puVar1 != 0)) &&
         (lVar11 = *(long *)puVar1 + 0xc, *(char *)(lVar11 + (ulong)uVar3 * 0x14) != '\0')) {
        lVar11 = lVar11 + (ulong)uVar3 * 0x14;
        local_50 = *(undefined8 *)(lVar11 + 4);
        local_48 = *(undefined4 *)(lVar11 + 0xc);
      }
    }
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_01913260(*(undefined4 *)((long)param_1 + 0x27c),uVar13,&local_60,&local_70,&local_50);
    uVar3 = FUN_006f0400((float)local_68 - (float)local_58,(float)local_60 - (float)local_70);
    local_60 = 0;
    local_58 = 0;
    local_24 = (undefined4)(long)((float)uVar3 * -1.4629181e-09 * 6.8356525e+08);
    FUN_019135a0(*(undefined4 *)((long)param_1 + 0x27c),uVar13,&local_60,&local_50);
    uVar14 = FUN_006f0400(local_60._4_4_ - *(float *)(param_1 + 0x4f),
                          local_58._4_4_ - *(float *)(param_1 + 0x50));
    local_70 = CONCAT44(local_70._4_4_,uVar14);
    (**(code **)(*param_1 + 0x158))(param_1,&local_24);
    lVar11 = *param_1;
  }
  else {
    iVar2 = (**(code **)(*plVar12 + 0x158))(plVar12);
    if (iVar2 != 2) {
      local_60 = CONCAT44(local_60._4_4_,0xc0000000);
      (**(code **)(*param_1 + 0x158))(param_1,&local_60);
      if (*(int *)(*(long *)plVar12[7] + 0x58) == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = **(long **)(*(long *)plVar12[7] + 0x60);
      }
      pcVar5 = (char *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
      if (*pcVar5 == '\0') {
LAB_0189d9e0:
        pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x90) + 0xf0))((long *)(lVar11 + 0x90));
LAB_0189d9f0:
        fVar18 = *pfVar8;
        fVar15 = pfVar8[2];
      }
      else {
        plVar12 = (long *)(lVar11 + 0x60);
        puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
        puVar1 = PTR_DAT_04bb5ce0;
        if (((0x3f < *puVar6) || (*(long *)PTR_DAT_04bb5ce0 == 0)) ||
           (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar6 * 0x14 + 0xc) == '\0'))
        goto LAB_0189d9e0;
        puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
        uVar3 = *puVar6;
        fVar15 = 0.0;
        if ((uVar3 < 0x40) && (*(long *)puVar1 != 0)) {
          lVar11 = *(long *)puVar1 + 0xc;
          fVar18 = 0.0;
          if (*(char *)(lVar11 + (ulong)uVar3 * 0x14) == '\0') goto LAB_0189d9f8;
          pfVar8 = (float *)(lVar11 + (ulong)uVar3 * 0x14 + 4);
          goto LAB_0189d9f0;
        }
        fVar18 = 0.0;
      }
LAB_0189d9f8:
      uVar14 = FUN_006f0400(*(float *)(param_1 + 0x4f) - fVar18,*(float *)(param_1 + 0x50) - fVar15)
      ;
      puVar9 = &local_60;
      local_60 = CONCAT44(local_60._4_4_,uVar14) ^ 0x80000000;
      pcVar10 = *(code **)(*param_1 + 0x160);
      goto LAB_0189da20;
    }
    local_60 = CONCAT44(local_60._4_4_,0xc0000000);
    (**(code **)(*param_1 + 0x158))(param_1,&local_60);
    if (*(int *)(*(long *)plVar12[7] + 0x58) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = **(long **)(*(long *)plVar12[7] + 0x60);
    }
    pcVar5 = (char *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
    if (*pcVar5 == '\0') {
LAB_0189d8dc:
      pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x90) + 0xf0))((long *)(lVar11 + 0x90));
LAB_0189d8ec:
      fVar18 = *pfVar8;
      fVar15 = pfVar8[2];
    }
    else {
      plVar12 = (long *)(lVar11 + 0x60);
      puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
      puVar1 = PTR_DAT_04bb5ce0;
      if (((0x3f < *puVar6) || (*(long *)PTR_DAT_04bb5ce0 == 0)) ||
         (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar6 * 0x14 + 0xc) == '\0'))
      goto LAB_0189d8dc;
      puVar6 = (uint *)(**(code **)(*plVar12 + 0xf0))(plVar12);
      uVar3 = *puVar6;
      fVar15 = 0.0;
      if ((uVar3 < 0x40) && (*(long *)puVar1 != 0)) {
        lVar11 = *(long *)puVar1 + 0xc;
        fVar18 = 0.0;
        if (*(char *)(lVar11 + (ulong)uVar3 * 0x14) == '\0') goto LAB_0189d8f4;
        pfVar8 = (float *)(lVar11 + (ulong)uVar3 * 0x14 + 4);
        goto LAB_0189d8ec;
      }
      fVar18 = 0.0;
    }
LAB_0189d8f4:
    uVar14 = FUN_006f0400(fVar18 - *(float *)(param_1 + 0x4f),fVar15 - *(float *)(param_1 + 0x50));
    lVar11 = *param_1;
    puVar9 = &local_60;
    local_60 = CONCAT44(local_60._4_4_,uVar14);
  }
  (**(code **)(lVar11 + 0x160))(param_1,puVar9);
  pcVar10 = *(code **)(*param_1 + 0x168);
  puVar9 = (undefined8 *)PTR_DAT_04bb2ce0;
LAB_0189da20:
  (*pcVar10)(param_1,puVar9);
  return;
}

