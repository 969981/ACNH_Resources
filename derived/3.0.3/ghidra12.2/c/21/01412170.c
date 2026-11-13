
undefined8 FUN_01412170(long param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  float fVar16;
  
  puVar7 = PTR_DAT_04bbc990;
  puVar6 = PTR_DAT_04bbc988;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  uVar15 = 0;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  puVar2 = PTR_DAT_04bbc950 + 0x10;
  do {
    uVar12 = *(ulong *)(param_1 + 0xa10 + (-(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar15 << 3));
    if (((uVar12 & 0xff0000000000) != 0 && (uVar12 & 0xffffffff) != 0) &&
       (lVar11 = *(long *)puVar4, lVar11 != 0)) {
      if (((int)uVar12 == 0) ||
         (((plVar14 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                                (uVar12 >> 0x14 & 0xfff) * 8), plVar14 == (long *)0x0 ||
           ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || ((int)plVar14[0x46] != (int)uVar12)))) {
        plVar14 = (long *)0x0;
      }
      if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
        plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        lVar11 = *(long *)puVar4;
        iVar8 = (**(code **)(*plVar10 + 0x60))();
        if (iVar8 < 0x11) {
          uVar13 = 1;
        }
        else {
          uVar13 = *(uint *)(lVar11 + 0x5e8);
          if (4 < uVar13) goto LAB_014122d8;
          uVar13 = 0x1aU >> (ulong)(uVar13 & 0x1f) & 1;
        }
      }
      else {
LAB_014122d8:
        uVar13 = 0;
      }
      if (plVar14 != (long *)0x0) {
        lVar11 = plVar14[0x2a];
        uVar3 = *(uint *)(plVar14 + 0x49);
        if (((*PTR_DAT_04bb4050 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar8 != 0)) {
          *(undefined **)PTR_DAT_04bb4048 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb4050);
        }
        uVar9 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb4048);
        if ((((int)lVar11 == 1) && ((uVar9 & uVar13) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
          if ((long *)plVar14[0x16] != plVar14 + 0x15) {
            lVar11 = (long)*(int *)((long)plVar14 + 0xbc);
            plVar10 = (long *)(plVar14[0x16] - lVar11);
            do {
              if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
                *(undefined **)puVar6 = puVar2;
                __cxa_guard_release(puVar7);
              }
              if ((plVar10 != (long *)0x0) &&
                 (uVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar6), (uVar12 & 1) != 0)) {
                fVar16 = param_2[1] - *(float *)((long)plVar10 + 0x2e4);
                if (SQRT(fVar16 * fVar16 +
                         (*param_2 - *(float *)(plVar10 + 0x5c)) *
                         (*param_2 - *(float *)(plVar10 + 0x5c)) +
                         (param_2[2] - *(float *)(plVar10 + 0x5d)) *
                         (param_2[2] - *(float *)(plVar10 + 0x5d))) <
                    *(float *)((long)plVar10 + 0x554)) {
                  return 1;
                }
                break;
              }
              plVar10 = (long *)(*(long *)((long)plVar10 + lVar11 + 8) - lVar11);
            } while (plVar10 != (long *)((long)(plVar14 + 0x15) - lVar11));
          }
        }
      }
    }
    uVar13 = (int)uVar15 + 1;
    uVar15 = (ulong)uVar13;
    if (uVar13 == 100) {
      return 0;
    }
  } while( true );
}

