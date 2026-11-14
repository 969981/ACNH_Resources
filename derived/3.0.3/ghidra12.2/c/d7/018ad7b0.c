
void FUN_018ad7b0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  uint *puVar12;
  float *pfVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined *local_b8;
  long local_b0;
  undefined1 local_a8;
  byte local_a7;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return;
  }
  uVar20 = *(uint *)PTR_DAT_04bbea10;
  if ((((uVar20 == 0) ||
       (plVar19 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar19 == (long *)0x0)) ||
      ((*(uint *)(plVar19 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar19 + 0x46) != uVar20)) {
    plVar19 = (long *)0x0;
  }
  if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
    plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar7;
    iVar9 = (**(code **)(*plVar11 + 0x60))();
    if (iVar9 < 0x11) {
      uVar20 = 1;
      goto joined_r0x018ad898;
    }
    if (*(uint *)(lVar15 + 0x5e8) < 5) {
      uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x018ad898;
    }
  }
  uVar20 = 0;
joined_r0x018ad898:
  if (plVar19 != (long *)0x0) {
    if (((*PTR_DAT_04bbe9f0 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9f0);
    }
    uVar10 = (**(code **)(*plVar19 + 0x20))(plVar19,PTR_DAT_04bbe9e8);
    if (((uVar20 & uVar10) == 1) && (lVar15 = *(long *)PTR_DAT_04bb46b0, lVar15 != 0)) {
      puVar16 = *(undefined8 **)(lVar15 + 0x10);
      if ((*(byte *)(lVar15 + 0x453) & 1) == 0) {
        lVar15 = (**(code **)(*(long *)*puVar16 + 0x38))();
        if (lVar15 == 0) {
          return;
        }
        lVar15 = lVar15 + 0x70;
      }
      else {
        if (puVar16 == (undefined8 *)0x0) {
          return;
        }
        if ((long *)puVar16[0x26] == (long *)0x0) {
          return;
        }
        lVar15 = (**(code **)(*(long *)puVar16[0x26] + 0x38))();
        if (lVar15 == 0) {
          return;
        }
      }
      local_b0 = lVar15 + 0x1bf190;
      local_a8 = 1;
      plVar11 = *(long **)(lVar15 + 0x1bf1b8);
      if ((plVar11 == (long *)0x0) ||
         (puVar16 = (undefined8 *)*plVar11, puVar16 == (undefined8 *)0x0)) {
        local_a7 = 0;
        local_b8 = PTR_DAT_04bb64a8 + 0x10;
        FUN_018af900(param_1,&local_b8,param_2);
      }
      else {
        bVar8 = (**(code **)*puVar16)();
        local_a7 = bVar8 & 1;
        local_b8 = PTR_DAT_04bb64a8 + 0x10;
        FUN_018af900(param_1,&local_b8,param_2);
        if ((((bVar8 & 1) != 0) && (lVar15 = *(long *)(lVar15 + 0x1bf1b8), lVar15 != 0)) &&
           (puVar16 = *(undefined8 **)(lVar15 + 8), puVar16 != (undefined8 *)0x0)) {
          (**(code **)*puVar16)();
        }
      }
      *(bool *)(param_1 + 0x314) = 1 < *(uint *)(param_1 + 0x310);
      uVar20 = *(uint *)(param_1 + 0x2c0);
      if (uVar20 == 0) {
        uVar20 = 0;
      }
      else {
        lVar15 = *(long *)(param_1 + 0x2c8);
        uVar10 = 0;
        do {
          *(undefined1 *)(lVar15 + ((long)((ulong)uVar10 << 0x20) >> 0x1b) + 0x1c) = 0;
          uVar10 = uVar10 + 1;
        } while (uVar20 != uVar10);
        uVar20 = (uint)*(char *)(param_1 + 0x2c0);
      }
      puVar12 = (uint *)(**(code **)(plVar19[0xd5] + 0xf0))(plVar19 + 0xd5);
      uVar10 = *puVar12;
      uVar2 = *(uint *)(param_1 + 0x318);
      *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
      uVar2 = uVar2 ^ uVar2 << 0xb;
      if ((int)uVar20 <= (int)uVar10) {
        uVar10 = uVar20;
      }
      *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
      uVar14 = *(uint *)(param_1 + 0x324);
      *(uint *)(param_1 + 800) = uVar14;
      uVar2 = uVar2 >> 8 ^ uVar14 >> 0x13 ^ uVar2 ^ uVar14;
      *(uint *)(param_1 + 0x324) = uVar2;
      cVar6 = (char)uVar10 + (char)((ulong)uVar2 * (ulong)(uVar20 - uVar10) >> 0x20);
      *(char *)(param_1 + 0x2a1) = cVar6;
      uVar10 = (uint)cVar6;
      if (*(char *)(param_1 + 0x314) != '\0') {
        uVar20 = uVar20 - 2;
        uVar10 = uVar10 - 2;
        *(undefined1 *)
         (*(long *)(param_1 + 0x2c8) + (ulong)(4 < *(uint *)(param_1 + 0x2c0)) * 0x80 + 0x1c) = 1;
        *(undefined1 *)(*(long *)(param_1 + 0x2c8) + 0x1c) = 1;
      }
      uVar2 = *(uint *)(param_1 + 0x2c0);
      if (uVar2 != 0) {
        lVar15 = *(long *)(param_1 + 0x2c8);
        uVar14 = 0;
        do {
          if ((uVar20 == 0) || (uVar10 == 0)) break;
          if (((uVar14 & 0xfb) != 0) || (*(char *)(param_1 + 0x314) == '\0')) {
            uVar3 = *(uint *)(param_1 + 0x318);
            *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
            uVar3 = uVar3 ^ uVar3 << 0xb;
            *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
            uVar4 = *(uint *)(param_1 + 0x324);
            *(uint *)(param_1 + 800) = uVar4;
            uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
            *(uint *)(param_1 + 0x324) = uVar3;
            uVar18 = (ulong)uVar20;
            uVar20 = uVar20 - 1;
            if ((float)(uVar3 >> 9 | 0x3f800000) + -1.0 < (float)uVar10 / (float)uVar18) {
              uVar10 = uVar10 - 1;
              *(undefined1 *)(lVar15 + ((long)((ulong)uVar14 << 0x20) >> 0x1b) + 0x1c) = 1;
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar2 != uVar14);
      }
      puVar16 = (undefined8 *)(**(code **)(plVar19[0xdb] + 0xf0))(plVar19 + 0xdb);
      uVar17 = *puVar16;
      *(undefined4 *)(param_1 + 0x2ac) = *(undefined4 *)(puVar16 + 1);
      *(undefined8 *)(param_1 + 0x2a4) = uVar17;
      uVar5 = *(undefined4 *)(puVar16 + 1);
      *(undefined8 *)(param_1 + 0x2b0) = *puVar16;
      *(undefined4 *)(param_1 + 0x2b8) = uVar5;
      pfVar13 = (float *)(**(code **)(plVar19[0xe2] + 0xf0))(plVar19 + 0xe2);
      iVar9 = *(int *)(param_1 + 0x2c0);
      *(float *)(param_1 + 0x2b8) = *pfVar13 + *(float *)(param_1 + 0x2b8);
      pfVar13 = (float *)(**(code **)(plVar19[0xe8] + 0xf0))(plVar19 + 0xe8);
      fVar39 = *pfVar13;
      pfVar13 = (float *)(**(code **)(plVar19[0xe2] + 0xf0))(plVar19 + 0xe2);
      puVar7 = PTR_DAT_04bb2d00;
      uVar20 = *(uint *)(param_1 + 0x2c0);
      if (uVar20 != 0) {
        fVar27 = *pfVar13;
        lVar15 = *(long *)(param_1 + 0x2c8);
        uVar10 = 0;
        plVar11 = plVar19 + 0xee;
        plVar19 = plVar19 + 0xf4;
        fVar30 = fVar27 * 6.2831855;
        fVar39 = (float)((long)(fVar39 * 0.5 * 11930465.0) & 0xffffffff) * 1.4629181e-09;
        do {
          if (*(char *)(lVar15 + ((long)((ulong)uVar10 << 0x20) >> 0x1b) + 0x1c) != '\0') {
            uVar21 = (ulong)(((float)((long)(((float)(int)uVar10 / (float)iVar9) * 6.2831855 *
                                            6.8356525e+08) & 0xffffffff) * 1.4629181e-09 + 4.712389)
                            * 6.8356525e+08);
            uVar18 = uVar21 >> 0x18 & 0xff;
            uVar14 = (uint)(long)(fVar39 * (*(float *)(puVar7 + uVar18 * 0x10 + 8) +
                                           *(float *)(puVar7 + uVar18 * 0x10 + 0xc) *
                                           (float)((uint)uVar21 & 0xffffff) * 5.9604645e-08) *
                                 6.8356525e+08);
            uVar2 = uVar14 + 0xc0000000 >> 0x18;
            fVar43 = fVar30 * (fVar39 / 6.2831855) *
                     (*(float *)(puVar7 + (ulong)uVar2 * 0x10 + 8) +
                     *(float *)(puVar7 + (ulong)uVar2 * 0x10 + 0xc) * (float)(uVar14 & 0xffffff) *
                     5.9604645e-08);
            pfVar13 = (float *)(**(code **)(*plVar11 + 0xf0))(plVar11);
            fVar42 = *pfVar13;
            fVar25 = sinf((float)(uVar21 & 0xffffffff) * 1.4629181e-09);
            fVar42 = fVar42 * fVar25;
            (**(code **)(*plVar11 + 0xf0))(plVar11);
            fVar26 = SQRT(fVar42 * fVar42 + fVar43 * fVar43);
            fVar25 = fVar43;
            fVar41 = fVar42;
            if (0.0 < fVar26) {
              fVar26 = 1.0 / fVar26;
              fVar25 = fVar43 * fVar26;
              fVar41 = fVar42 * fVar26;
            }
            uVar18 = (ulong)(((fVar43 / fVar30) * 6.2831855 + 4.712389) * 6.8356525e+08);
            fVar31 = (float)((uint)uVar18 & 0xffffff);
            pfVar13 = (float *)(puVar7 + (uVar18 >> 0x18 & 0xff) * 0x10);
            fVar26 = pfVar13[2];
            fVar28 = pfVar13[3];
            fVar29 = *pfVar13;
            fVar35 = pfVar13[1];
            fVar32 = *(float *)(param_1 + 0x2a4);
            fVar22 = *(float *)(param_1 + 0x2a8);
            fVar23 = *(float *)(param_1 + 0x2ac);
            pfVar13 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
            fVar40 = *pfVar13;
            pfVar13 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
            fVar24 = *pfVar13;
            uVar2 = *(uint *)(param_1 + 0x318);
            *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x31c);
            uVar2 = uVar2 ^ uVar2 << 0xb;
            *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 800);
            uVar14 = *(uint *)(param_1 + 0x324);
            *(uint *)(param_1 + 800) = uVar14;
            uVar2 = uVar2 >> 8 ^ uVar14 >> 0x13 ^ uVar2 ^ uVar14;
            *(uint *)(param_1 + 0x324) = uVar2;
            fVar40 = (fVar40 + fVar24) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0) - fVar40;
            uVar18 = (ulong)((((fVar43 + fVar25 * fVar40) / fVar30) * 6.2831855 + 4.712389) *
                            6.8356525e+08);
            fVar36 = (float)((uint)uVar18 & 0xffffff);
            pfVar13 = (float *)(puVar7 + (uVar18 >> 0x18 & 0xff) * 0x10);
            fVar43 = pfVar13[2];
            fVar33 = pfVar13[3];
            fVar34 = *pfVar13;
            fVar38 = pfVar13[1];
            fVar37 = *(float *)(param_1 + 0x2a4);
            fVar24 = *(float *)(param_1 + 0x2a8);
            fVar25 = *(float *)(param_1 + 0x2ac);
            (**(code **)(*plVar19 + 0xf0))(plVar19);
            (**(code **)(*plVar19 + 0xf0))(plVar19);
            lVar1 = lVar15 + (long)(int)uVar10 * 0x20;
            *(float *)(lVar1 + 0xc) = fVar23 - fVar27 * (fVar29 + fVar35 * fVar31 * 5.9604645e-08);
            *(float *)(lVar1 + 0x10) = fVar37 + fVar27 * (fVar43 + fVar33 * fVar36 * 5.9604645e-08);
            *(float *)(lVar1 + 0x14) = fVar24 + fVar42 + fVar41 * fVar40;
            *(float *)(lVar1 + 0x18) = fVar25 - fVar27 * (fVar34 + fVar38 * fVar36 * 5.9604645e-08);
            *(undefined1 *)(lVar1 + 0x1d) = 0;
            *(float *)(lVar1 + 4) = fVar32 + fVar27 * (fVar26 + fVar28 * fVar31 * 5.9604645e-08);
            *(float *)(lVar1 + 8) = fVar42 + fVar22;
          }
          uVar10 = uVar10 + 1;
        } while (uVar20 != uVar10);
      }
    }
  }
  return;
}

