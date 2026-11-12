
void FUN_0090586c(long param_1,undefined8 param_2,long *param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  char *__dest;
  undefined *__dest_00;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar8 = malloc(0x2e8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar13 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_009058f0;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2e8,8);
  }
LAB_009058f0:
  FUN_00705c50(plVar8);
  puVar4 = PTR_DAT_04bb3078;
  __dest_00 = (undefined *)plVar8[0xc];
  plVar8[0x54] = (long)&DAT_3f8000003f800000;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  *(undefined4 *)(plVar8 + 0x55) = 0x3f800000;
  *plVar8 = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)plVar8 + 700) = 0;
  *(undefined8 *)((long)plVar8 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar8 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar8 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar8 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar8 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar8 + 0x2d4) = 0;
  if (__dest_00 != &DAT_040afd37) {
    iVar5 = 4;
    if ((int)plVar8[0xd] < 5) {
      iVar5 = (int)plVar8[0xd] + -1;
    }
    memcpy(__dest_00,&DAT_040afd37,(long)iVar5);
    __dest_00[iVar5] = 0;
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0 | 5;
  uVar14 = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((long)plVar8 + 0x284) = uVar14;
  uVar15 = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(plVar8 + 0x51) = uVar15;
  uVar17 = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(plVar8 + 0x4f) = uVar14;
  *(undefined4 *)((long)plVar8 + 0x27c) = uVar15;
  *(undefined4 *)((long)plVar8 + 0x28c) = uVar17;
  *(undefined4 *)(plVar8 + 0x50) = uVar17;
  uVar14 = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)(plVar8 + 0x54) = uVar14;
  *(undefined4 *)((long)plVar8 + 0x2a4) = uVar14;
  *(undefined4 *)(plVar8 + 0x55) = uVar14;
  *(undefined4 *)((long)plVar8 + 0x2b4) = *(undefined4 *)(param_1 + 0x170);
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    plVar8 = malloc(0x2e0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar2 = (undefined8 *)(lVar13 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar8 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_00905a48;
    }
    plVar8 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e0,8);
  }
LAB_00905a48:
  FUN_00705c50(plVar8);
  plVar8[0x4f] = 0;
  puVar3 = PTR_DAT_04bb3300;
  plVar8[0x50] = 0;
  plVar8[0x53] = -0x100000000;
  plVar8[0x52] = (long)(plVar8 + 0x51);
  plVar8[0x51] = (long)(plVar8 + 0x51);
  *plVar8 = (long)(puVar3 + 0x10);
  FUN_038e18e4(plVar8 + 0x54);
  __dest = (char *)plVar8[0xc];
  if (__dest != "Family") {
    iVar5 = 6;
    if ((int)plVar8[0xd] < 7) {
      iVar5 = (int)plVar8[0xd] + -1;
    }
    memcpy(__dest,"Family",(long)iVar5);
    __dest[iVar5] = '\0';
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar8 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  if (*(int *)(param_1 + 0x15c) == 0x45) {
    fVar16 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    *(char *)(param_1 + 0x2ce) = (char)*(undefined4 *)(param_1 + 0x174);
    uVar11 = (uint)(*(int *)(param_1 + 0x17c) != 0);
    uVar11 = ((uint)(*(int *)(param_1 + 0x180) != 0) << 2 |
             (uint)(*(int *)(param_1 + 0x178) != 0) | uVar11 << 1) - uVar11;
    uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
    uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
    uVar11 = uVar11 + (uVar11 >> 8);
    if ((uVar11 + (uVar11 >> 0x10) & 0x3f) == 3) {
      fVar18 = (float)*(int *)(param_1 + 0x178) * 0.5;
      fVar16 = (float)*(int *)(param_1 + 0x17c) * 0.5;
      fVar19 = (float)*(int *)(param_1 + 0x180) * 0.5;
    }
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(param_1 + 0x170) >> 0x14) & 0xff0));
    lVar13 = *(long *)(param_1 + 0x68);
    fVar22 = *pfVar1;
    fVar23 = pfVar1[1];
    fVar24 = pfVar1[2];
    fVar25 = pfVar1[3];
    fVar20 = (float)(*(uint *)(param_1 + 0x170) & 0xffffff) * 5.9604645e-08;
    *(undefined4 *)(param_1 + 0x280) = *(undefined4 *)(lVar13 + 0x278);
    fVar21 = fVar22 + fVar20 * fVar23;
    fVar24 = fVar24 + fVar20 * fVar25;
    *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(lVar13 + 0x27c);
    uVar14 = *(undefined4 *)(lVar13 + 0x280);
    *(float *)(param_1 + 0x2b4) = fVar16;
    *(float *)(param_1 + 0x2b0) = fVar18;
    *(float *)(param_1 + 0x2b8) = fVar19;
    fVar16 = fVar21 * 0.0;
    *(float *)(param_1 + 0x28c) = fVar24;
    *(float *)(param_1 + 0x2ac) = fVar24;
    *(undefined4 *)(param_1 + 0x288) = uVar14;
    *(float *)(param_1 + 0x290) = fVar24 * 0.0;
    *(float *)(param_1 + 0x298) = fVar16;
    *(float *)(param_1 + 0x2a0) = fVar24 * 0.0;
    *(float *)(param_1 + 0x2a8) = fVar16;
    *(float *)(param_1 + 0x294) = -(fVar23 * fVar20) - fVar22;
    *(float *)(param_1 + 0x2a4) = fVar21 + 0.0;
    *(float *)(param_1 + 0x29c) = fVar16 * 0.0 + 1.0;
    FUN_00906410(param_1);
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar11 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar11)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar9 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x00905cf4;
    }
    if (*(uint *)(lVar13 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00905cf4;
    }
  }
  uVar11 = 0;
joined_r0x00905cf4:
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    if ((uVar11 & uVar6) == 1) {
      if ((int)plVar8[0x52] < (int)plVar8[0x55]) {
        uVar14 = *(undefined4 *)(param_1 + 0x230);
        plVar9 = plVar8 + 0x50;
        plVar10 = (long *)plVar8[0x53];
        if (plVar10 != (long *)0x0) {
          plVar8[0x53] = *plVar10;
        }
        *(undefined4 *)plVar10 = uVar14;
        plVar10[2] = 0;
        plVar12 = plVar10 + 1;
        *plVar12 = 0;
        lVar13 = *plVar9;
        *plVar9 = (long)plVar12;
        plVar10[2] = (long)plVar9;
        *plVar12 = lVar13;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 8) = plVar12;
        }
        *(int *)(plVar8 + 0x52) = (int)plVar8[0x52] + 1;
      }
      *(undefined1 *)(param_1 + 0x2cf) = 1;
    }
  }
  return;
}

