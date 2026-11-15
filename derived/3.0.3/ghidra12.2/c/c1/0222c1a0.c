
undefined4 FUN_0222c1a0(float param_1,long param_2,float *param_3,float *param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_84;
  
  puVar6 = PTR_DAT_04bc2cb0;
  puVar5 = PTR_DAT_04bc2ca8;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if (param_3 == (float *)0x0) {
    local_84 = 0;
  }
  else {
    local_84 = 0;
    fVar21 = *param_4;
    fVar15 = param_4[2];
    puVar1 = PTR_DAT_04bb2e50 + 0x10;
    uVar13 = 0;
    fVar20 = param_1;
    do {
      uVar14 = *(uint *)(param_2 + 0x2cc + (-(uVar13 >> 0x1f) & 0xfffffffc00000000 | uVar13 << 2));
      if ((uVar14 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if ((plVar12 == (long *)0x0) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar11 = *(long *)puVar3;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if (iVar8 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar11 + 0x5e8);
            if (4 < uVar14) goto LAB_0222c2d8;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_0222c2d8:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0x2a];
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          uVar10 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar5);
          uVar2 = 0;
          if ((int)lVar11 == 1) {
            uVar2 = uVar14;
          }
          if (((uVar10 & 1) != 0) && (uVar2 != 0)) {
            lVar11 = plVar12[0xd];
            fVar16 = *(float *)(lVar11 + 0x280);
            if (fVar16 <= fVar15 + 10.0) {
              fVar18 = *(float *)(lVar11 + 0x278);
              fVar19 = fVar16 - (fVar15 + 10.0);
              fVar17 = fVar18 - fVar21;
              fVar17 = SQRT(fVar19 * fVar19 + fVar17 * fVar17);
              bVar7 = false;
              if ((fVar17 < param_1) && (bVar7 = false, !NAN(fVar17) && !NAN(fVar20))) {
                bVar7 = fVar17 < fVar20;
              }
              if (bVar7) {
                fVar20 = *(float *)(lVar11 + 0x27c);
                param_3[2] = fVar16;
                local_84 = 1;
                *param_3 = fVar18;
                param_3[1] = fVar20;
                fVar20 = fVar17;
              }
            }
          }
        }
      }
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar14;
    } while (uVar14 != 7);
  }
  return local_84;
}

