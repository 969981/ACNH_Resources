
void FUN_03eb32b0(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (param_1 != (long *)0x0) {
    uVar8 = (**(code **)(*param_1 + 0x10))(param_1,PTR_DAT_04bbdb60);
    puVar4 = PTR_DAT_04bb3350;
    puVar3 = PTR_DAT_04bb2698;
    if ((uVar8 & 1) != 0) {
      lVar12 = *(long *)PTR_DAT_04bb2698;
      if (lVar12 == 0) {
        plVar10 = malloc(0x60);
      }
      else {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar12 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)0x0;
        }
        else {
          plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x60,8);
        }
      }
      *(undefined4 *)(plVar10 + 8) = 0x41200000;
      puVar6 = PTR_DAT_04bb41a0;
      puVar5 = PTR_DAT_04bb2f80;
      *(undefined8 *)((long)plVar10 + 0x44) = 0;
      *(undefined8 *)((long)plVar10 + 0x4c) = 0;
      *plVar10 = (long)(puVar6 + 0x10);
      lVar12 = *(long *)(puVar5 + 0x10);
      lVar1 = *(long *)(puVar5 + 0x18);
      lVar9 = *(long *)(puVar5 + 0x20);
      plVar10[6] = *(long *)(puVar5 + 0x28);
      plVar10[7] = 0;
      plVar10[4] = lVar1;
      plVar10[5] = lVar9;
      lVar9 = *(long *)(puVar5 + 8);
      plVar10[1] = *(long *)puVar5;
      plVar10[2] = lVar9;
      plVar10[3] = lVar12;
      *(undefined8 *)((long)plVar10 + 0x54) = 0x3f800000;
      FUN_038e4634(plVar10);
      param_1[0xf] = (long)plVar10;
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        plVar10 = malloc(0xc0);
      }
      else {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        puVar13 = (undefined8 *)(lVar12 + 8);
        if (lVar9 != 0) {
          puVar13 = (undefined8 *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)(**(code **)(*(long *)*puVar13 + 0x30))((long *)*puVar13,0xc0,8);
      }
      puVar4 = PTR_DAT_04bd0eb0;
      *(undefined4 *)(plVar10 + 0x16) = 0x3faaaaab;
      plVar10[0x14] = 0x3ec3ef163f490fdb;
      plVar10[0x15] = 0x3ed413cd3f6c835e;
      *(undefined2 *)(plVar10 + 1) = 0x101;
      plVar10[0x13] = 0x47c350003f800000;
      puVar3 = PTR_DAT_04bbd858;
      uVar14 = *(undefined4 *)puVar4;
      uVar16 = *(undefined4 *)PTR_DAT_04bd0eb8;
      uVar2 = *(undefined4 *)PTR_DAT_04bd0ea8;
      *(undefined8 *)((long)plVar10 + 0xb4) = 0;
      *(undefined4 *)((long)plVar10 + 0x8c) = uVar2;
      *(undefined4 *)(plVar10 + 0x12) = uVar14;
      *(undefined4 *)((long)plVar10 + 0x94) = uVar16;
      *plVar10 = (long)(puVar3 + 0x10);
      fVar15 = *(float *)(param_1 + 7);
      fVar17 = *(float *)((long)param_1 + 0x3c);
      fVar18 = *(float *)(param_1 + 6);
      fVar19 = *(float *)((long)param_1 + 0x34);
      *(undefined1 *)(plVar10 + 1) = 1;
      *(float *)(plVar10 + 0x16) = (fVar15 - fVar18) / (fVar17 - fVar19);
      param_1[0x10] = (long)plVar10;
      return;
    }
  }
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar10 = malloc(0x60);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar12 + 8);
    if (lVar9 != 0) {
      plVar11 = (long *)(lVar9 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    plVar10 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      plVar10 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x60,8);
    }
  }
  puVar4 = PTR_DAT_04bb2f80;
  lVar12 = *(long *)(PTR_DAT_04bb2f80 + 0x10);
  lVar9 = *(long *)(PTR_DAT_04bb2f80 + 0x20);
  lVar1 = *(long *)(PTR_DAT_04bb2f80 + 0x28);
  plVar10[4] = *(long *)(PTR_DAT_04bb2f80 + 0x18);
  plVar10[5] = lVar9;
  lVar9 = *(long *)puVar4;
  plVar10[2] = *(long *)(puVar4 + 8);
  plVar10[3] = lVar12;
  puVar4 = PTR_DAT_04bb41a0;
  plVar10[6] = lVar1;
  plVar10[7] = 0;
  *(undefined8 *)((long)plVar10 + 0x44) = 0;
  *(undefined8 *)((long)plVar10 + 0x4c) = 0;
  *plVar10 = (long)(puVar4 + 0x10);
  plVar10[1] = lVar9;
  lVar12 = *(long *)puVar3;
  *(undefined4 *)(plVar10 + 8) = 0x41200000;
  *(undefined8 *)((long)plVar10 + 0x54) = 0x3f800000;
  param_1[0xf] = (long)plVar10;
  if (lVar12 == 0) {
    plVar10 = malloc(0xc0);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar13 = (undefined8 *)(lVar12 + 8);
    if (lVar9 != 0) {
      puVar13 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar13 + 0x30))((long *)*puVar13,0xc0,8);
  }
  puVar6 = PTR_DAT_04bd0eb8;
  puVar5 = PTR_DAT_04bd0eb0;
  *(undefined4 *)(plVar10 + 0x16) = 0x3faaaaab;
  plVar10[0x13] = 0x461c40003f800000;
  plVar10[0x14] = 0x3ec3ef163f490fdb;
  plVar10[0x15] = 0x3ed413cd3f6c835e;
  *(undefined2 *)(plVar10 + 1) = 0x101;
  puVar4 = PTR_DAT_04bd0ea8;
  puVar3 = PTR_DAT_04bbd858;
  uVar14 = *(undefined4 *)puVar5;
  uVar16 = *(undefined4 *)puVar6;
  *(undefined8 *)((long)plVar10 + 0xb4) = 0;
  uVar2 = *(undefined4 *)puVar4;
  *plVar10 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar10 + 0x12) = uVar14;
  *(undefined4 *)((long)plVar10 + 0x94) = uVar16;
  *(undefined4 *)((long)plVar10 + 0x8c) = uVar2;
  param_1[0x10] = (long)plVar10;
  plVar10 = (long *)param_1[0xf];
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb6208 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
    uVar8 = (**(code **)*plVar10)(plVar10,PTR_DAT_04bb6200);
    if ((uVar8 & 1) != 0) {
      fVar15 = *(float *)((long)param_1 + 0x3c);
      fVar17 = *(float *)((long)param_1 + 0x34);
      fVar18 = *(float *)(PTR_DAT_04bb2d00 + 0xe0);
      fVar19 = *(float *)(PTR_DAT_04bb2d00 + 0xe4);
      fVar20 = *(float *)(PTR_DAT_04bb2d00 + 0xe8);
      fVar21 = *(float *)(PTR_DAT_04bb2d00 + 0xec);
      plVar10[7] = 0;
      *(undefined8 *)((long)plVar10 + 0x44) = 0;
      *(undefined8 *)((long)plVar10 + 0x4c) = 0;
      *(undefined8 *)((long)plVar10 + 0x54) = 0x3f800000;
      *(float *)(plVar10 + 8) =
           ((fVar15 - fVar17) * 0.5) /
           ((fVar18 + fVar19 * 0.22222233) / (fVar20 + fVar21 * 0.22222233));
      (**(code **)(*plVar10 + 0x20))(plVar10,plVar10 + 1);
    }
  }
  puVar13 = (undefined8 *)param_1[0x10];
  if (puVar13 != (undefined8 *)0x0) {
    if (((*PTR_DAT_04bb6230 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6230);
    }
    uVar8 = (**(code **)*puVar13)(puVar13,PTR_DAT_04bb6228);
    if ((uVar8 & 1) != 0) {
      *(undefined4 *)(puVar13 + 0x13) = 0x3f800000;
      *(undefined4 *)((long)puVar13 + 0x9c) = 0x461c4000;
      *(undefined4 *)(puVar13 + 0x14) = 0x3f32b8c2;
      fVar15 = sinf(0.34906584);
      *(float *)((long)puVar13 + 0xa4) = fVar15;
      fVar15 = cosf(0.34906584);
      *(float *)(puVar13 + 0x15) = fVar15;
      fVar15 = tanf(0.34906584);
      *(float *)((long)puVar13 + 0xac) = fVar15;
      *(undefined1 *)(puVar13 + 1) = 1;
      fVar15 = *(float *)(param_1 + 7);
      fVar17 = *(float *)((long)param_1 + 0x3c);
      fVar18 = *(float *)(param_1 + 6);
      fVar19 = *(float *)((long)param_1 + 0x34);
      *(undefined1 *)(puVar13 + 1) = 1;
      *(float *)(puVar13 + 0x16) = (fVar15 - fVar18) / (fVar17 - fVar19);
    }
  }
  return;
}

