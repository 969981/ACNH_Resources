
void FUN_016f9e60(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  undefined *__dest;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar5 = malloc(0x2e8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_016f9eec;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2e8,8);
  }
LAB_016f9eec:
  FUN_00705c50(plVar5);
  puVar2 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar5[0xc];
  plVar5[0x54] = (long)&DAT_3f8000003f800000;
  plVar5[0x4f] = 0;
  plVar5[0x50] = 0;
  plVar5[0x51] = 0;
  plVar5[0x52] = 0;
  plVar5[0x53] = 0;
  *(undefined4 *)(plVar5 + 0x55) = 0x3f800000;
  *plVar5 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)plVar5 + 700) = 0;
  *(undefined8 *)((long)plVar5 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar5 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar5 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar5 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar3 = 4;
    if ((int)plVar5[0xd] < 5) {
      iVar3 = (int)plVar5[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar3);
    __dest[iVar3] = 0;
  }
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 5;
  uVar10 = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((long)plVar5 + 0x284) = uVar10;
  uVar12 = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(plVar5 + 0x51) = uVar12;
  uVar14 = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(plVar5 + 0x4f) = uVar10;
  *(undefined4 *)((long)plVar5 + 0x27c) = uVar12;
  *(undefined4 *)((long)plVar5 + 0x28c) = uVar14;
  *(undefined4 *)(plVar5 + 0x50) = uVar14;
  uVar10 = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(plVar5 + 0x54) = uVar10;
  *(undefined4 *)((long)plVar5 + 0x2a4) = uVar10;
  *(undefined4 *)(plVar5 + 0x55) = uVar10;
  *(undefined4 *)((long)plVar5 + 0x2b4) = *(undefined4 *)(param_1 + 0x170);
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x3a8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        param_3 = (long *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x3a8,8);
  }
  FUN_00938950(*(undefined4 *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x284),pvVar6,param_2 + 8,
               1);
  FUN_006f9fc0(param_1,pvVar6,0xffffffff);
  lVar9 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar9 + 0x2a0) + 0xf0))(lVar9 + 0x2a0);
  fVar11 = *pfVar7;
  *(undefined4 *)(param_1 + 0x284) = 0x41700000;
  plVar5 = *(long **)(param_1 + 0x90);
  *(float *)(param_1 + 0x280) = fVar11 * 0.95;
  if (plVar5 != (long *)0x0) {
    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5b58);
    }
    uVar8 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb5b50);
    if ((uVar8 & 1) != 0) {
      *(uint *)(plVar5 + 0x2f) = *(uint *)(plVar5 + 0x2f) & 0xfffffffe;
      *(undefined4 *)(plVar5[0x4f] + 0x40) = 0x201;
      fVar11 = *(float *)(param_1 + 0x280);
      fVar13 = *(float *)(param_1 + 0x288);
      fVar15 = *(float *)(param_1 + 0x284);
      *(undefined4 *)(plVar5 + 0x73) = 0;
      plVar5[0x72] = 0;
      *(float *)((long)plVar5 + 0x39c) = fVar11 * fVar13;
      *(float *)(plVar5 + 0x74) = fVar13 * fVar15;
      *(uint *)(plVar5[0x4f] + 0x68) = *(uint *)(plVar5[0x4f] + 0x68) & 0xfef807fc;
      *(uint *)(plVar5[0x4f] + 0x68) = *(uint *)(plVar5[0x4f] + 0x68) | 0x800;
      *(uint *)(plVar5[0x4f] + 0x68) = *(uint *)(plVar5[0x4f] + 0x68) | 0x1000;
    }
  }
  return;
}

