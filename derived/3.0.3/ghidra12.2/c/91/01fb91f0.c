
void FUN_01fb91f0(long *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  void *pvVar15;
  void *__src;
  float fVar16;
  float fVar17;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_23c [4];
  undefined *local_238;
  undefined *puStack_230;
  int local_228;
  int iStack_224;
  undefined *local_220;
  int local_218;
  int iStack_214;
  undefined4 local_210 [10];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined2 local_1a8;
  uint local_1a0;
  int local_124;
  void *local_f8;
  int local_f0;
  
  puVar4 = PTR_DAT_04bb27c0;
  if ((int)param_1[0x15f1] != 1) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) goto LAB_01fb9378;
  uVar14 = *param_2;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar4;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01fb92d0;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fb92d0:
    uVar14 = 0;
  }
  if (plVar13 == (long *)0x0) {
LAB_01fb9378:
                    /* WARNING: Could not recover jumptable at 0x01fb93a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x538))(param_1);
    return;
  }
  lVar11 = plVar13[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
  uVar2 = 0;
  if ((int)lVar11 == 1) {
    uVar2 = uVar14;
  }
  if (((uVar9 & 1) == 0) || (uVar2 == 0)) goto LAB_01fb9378;
  *(undefined1 *)(param_1 + 0xf0f) = 1;
  plVar8 = param_1 + 0x245b;
  *(undefined4 *)((long)param_1 + 0xaf8c) = 7;
  if (*(char *)((long)param_1 + 0x12334) == '\0') {
    FUN_02085a50(param_1[3],0,0);
  }
  else {
    uVar14 = *param_2;
    if (*(uint *)((long)param_1 + 0x1233c) != 0) {
      uVar14 = *(uint *)((long)param_1 + 0x1233c);
    }
    FUN_02085e20(param_1[3],0,uVar14,PTR_DAT_04bb6928,0);
  }
  FUN_01e63f1c(local_210);
  local_210[0] = 0x48;
  (**(code **)(*plVar8 + 0x18))(plVar8);
  pvVar15 = (void *)param_1[0x245c];
  if (local_f8 != pvVar15) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
    lVar11 = 0;
    do {
      if (*(char *)(param_1[0x245c] + lVar11) == '\0') goto LAB_01fb9440;
      lVar1 = param_1[0x245c] + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01fb9440;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01fb9440;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01fb9440:
    iVar7 = (int)lVar11;
    if (local_f0 <= (int)lVar11) {
      iVar7 = local_f0 + -1;
    }
    memcpy(local_f8,pvVar15,(long)iVar7);
    *(undefined1 *)((long)local_f8 + (long)iVar7) = 0;
  }
  local_1a0 = *param_2;
  pvVar15 = (void *)param_1[0x2402];
  local_1a8 = 0x101;
  (**(code **)(plVar13[0x7c] + 0x18))(plVar13 + 0x7c);
  __src = (void *)plVar13[0x7d];
  if (pvVar15 != __src) {
    (**(code **)(plVar13[0x7c] + 0x18))(plVar13 + 0x7c);
    lVar11 = 0;
    do {
      if (*(char *)(plVar13[0x7d] + lVar11) == '\0') goto LAB_01fb94f0;
      lVar1 = plVar13[0x7d] + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01fb94f0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01fb94f0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01fb94f0:
    iVar7 = (int)lVar11;
    if ((int)param_1[0x2403] <= (int)lVar11) {
      iVar7 = (int)param_1[0x2403] + -1;
    }
    memcpy(pvVar15,__src,(long)iVar7);
    *(undefined1 *)((long)pvVar15 + (long)iVar7) = 0;
  }
  puVar5 = PTR_DAT_04bbc1a0;
  plVar8 = param_1 + 0x1619;
  local_1a0 = *param_2;
  if (*(int *)(param_1[1] + 0x750) != 0) goto LAB_01fb9540;
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    bVar6 = false;
    plVar12 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)((long)param_1 + 0x1233c);
    if ((((uVar14 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar14)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar4;
      iVar7 = (**(code **)(*plVar10 + 0x60))();
      if (iVar7 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_01fb971c;
        uVar14 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3)) & 1;
      }
    }
    else {
LAB_01fb971c:
      uVar14 = 0;
    }
    if (plVar12 == (long *)0x0) {
      bVar6 = false;
    }
    else {
      bVar6 = (int)plVar12[0x2a] == 1;
    }
  }
  bVar3 = false;
  if (plVar12 != (long *)0x0) {
    bVar3 = bVar6;
  }
  if (!(bool)(uVar14 != 0 & bVar3)) {
    plVar12 = plVar13;
  }
  lVar11 = plVar12[0xd];
  if (*(char *)((long)param_1 + 0x12335) != '\0') {
    local_1d8 = *(undefined8 *)(lVar11 + 0x278);
    local_1d0 = *(undefined4 *)(lVar11 + 0x280);
    local_1b0 = 1;
  }
  if (*(char *)((long)param_1 + 0x12336) != '\0') {
    local_238 = puVar5 + 0x10;
    local_23c[0] = 0;
    fVar16 = *(float *)(lVar11 + 0x278) + -2.5;
    fVar17 = *(float *)(lVar11 + 0x280) + -2.5;
    puStack_230 = PTR_DAT_04bb2010 + 0x10;
    local_228 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iStack_224 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    local_218 = local_228 + 1;
    iStack_214 = iStack_224 + 1;
    local_220 = puStack_230;
    uVar9 = FUN_021fffa0(0,local_23c,param_1 + 0x31,param_1[1],&local_238,1);
    if ((uVar9 & 1) != 0) {
      local_240 = 0;
      local_248 = 0;
      local_24c = 0;
      FUN_02201470(&local_248,&local_24c,lVar11 + 0x278,*(long *)(param_1[1] + 0x68) + 0x278,
                   local_23c);
      local_1b8 = 1;
      local_1e8 = local_248;
      local_1e0 = local_240;
      local_1b4 = 0x1c2;
    }
  }
LAB_01fb9540:
  plVar13 = param_1 + 0x197d;
  if (0 < (int)param_1[0x2467]) {
    local_124 = (int)param_1[0x2467];
  }
  (**(code **)(*param_1 + 0x548))(param_1,local_210);
  if (0 < (int)*plVar8) {
    lVar11 = 0;
    do {
      plVar12 = *(long **)(param_1[0x161a] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      plVar12[0xf] = (long)(puVar5 + 0x10);
      *plVar12 = param_1[0x161b];
      param_1[0x161b] = (long)plVar12;
    } while (lVar11 < (int)*plVar8);
  }
  *(int *)plVar8 = 0;
  if ((int)*plVar13 < 1) {
    iVar7 = 0;
  }
  else {
    lVar11 = 0;
    do {
      plVar12 = *(long **)(param_1[0x197e] + lVar11 * 8);
      lVar11 = lVar11 + 1;
      plVar12[0xf] = (long)(puVar5 + 0x10);
      *plVar12 = param_1[0x197f];
      param_1[0x197f] = (long)plVar12;
    } while (lVar11 < (int)*plVar13);
    iVar7 = (int)*plVar8;
  }
  *(int *)plVar13 = 0;
  *(undefined1 *)((long)param_1 + 0xe724) = 0;
  param_1[0x1ce1] = 0;
  param_1[0x1ce2] = 0;
  param_1[0x1ce3] = 0;
  if (iVar7 < *(int *)((long)param_1 + 0xb0cc)) {
    FUN_021920b0(plVar8,local_210);
  }
  FUN_02192850(param_1 + 0x1617,0,0);
  return;
}

