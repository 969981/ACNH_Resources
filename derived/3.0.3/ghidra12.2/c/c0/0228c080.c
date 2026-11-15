
undefined8 FUN_0228c080(long param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  
  puVar5 = PTR_DAT_04bbe9d8;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  if ((param_3 & 1) != 0) {
    lVar13 = 0;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    do {
      uVar14 = *(uint *)(param_1 + lVar13 + 0x364);
      if ((uVar14 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if ((plVar12 == (long *)0x0) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar11 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar8 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0228c188;
            uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0228c188:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0x2a];
          if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
            *(undefined **)puVar5 = PTR_DAT_04bb3290 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbe9e0);
          }
          uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar5);
          uVar2 = 0;
          if ((int)lVar11 == 1) {
            uVar2 = uVar14;
          }
          if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
            fVar16 = *(float *)(plVar12[0xd] + 0x278);
            fVar15 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
            bVar6 = false;
            if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar16) &&
               (bVar6 = false, !NAN(fVar16) && !NAN(fVar15))) {
              bVar6 = fVar16 < fVar15;
            }
            if (((bVar6) &&
                (fVar15 = *(float *)(plVar12[0xd] + 0x280),
                (float)*(int *)(param_2 + 0x14) * 5.0 <= fVar15)) &&
               (fVar15 < (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0)) goto LAB_0228c6b4;
          }
        }
      }
      uVar14 = *(uint *)(param_1 + lVar13 + 0x368);
      if ((uVar14 != 0) && (lVar11 = *(long *)puVar3, lVar11 != 0)) {
        plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8));
        if ((plVar12 == (long *)0x0) ||
           (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
          plVar12 = (long *)0x0;
        }
        if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
          plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
          lVar11 = *(long *)puVar3;
          iVar7 = (**(code **)(*plVar8 + 0x60))();
          if (iVar7 < 0x11) {
            uVar14 = 1;
          }
          else {
            if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_0228c2d8;
            uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0228c2d8:
          uVar14 = 0;
        }
        if (plVar12 != (long *)0x0) {
          lVar11 = plVar12[0x2a];
          if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(PTR_DAT_04bbe9e0);
          }
          uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,puVar5);
          uVar2 = 0;
          if ((int)lVar11 == 1) {
            uVar2 = uVar14;
          }
          if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
            fVar16 = *(float *)(plVar12[0xd] + 0x278);
            fVar15 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
            bVar6 = false;
            if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar16) &&
               (bVar6 = false, !NAN(fVar16) && !NAN(fVar15))) {
              bVar6 = fVar16 < fVar15;
            }
            if (((bVar6) &&
                (fVar15 = *(float *)(plVar12[0xd] + 0x280),
                (float)*(int *)(param_2 + 0x14) * 5.0 <= fVar15)) &&
               (fVar15 < (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0)) goto LAB_0228c6b4;
          }
        }
      }
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0x60);
  }
  uVar14 = *(uint *)(param_1 + 0x308);
  if ((uVar14 == 0) || (lVar13 = *(long *)puVar3, lVar13 == 0)) {
LAB_0228c508:
    uVar14 = *(uint *)(param_1 + 0x340);
    if ((uVar14 != 0) && (lVar13 = *(long *)puVar3, lVar13 != 0)) {
      plVar12 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                          ((ulong)(uVar14 >> 0x11) & 0x7ff8));
      if ((plVar12 == (long *)0x0) ||
         (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
        plVar12 = (long *)0x0;
      }
      if (*(int *)(lVar13 + 0x288) == 1 || *(int *)(lVar13 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar13 = *(long *)puVar3;
        iVar7 = (**(code **)(*plVar8 + 0x60))();
        if (iVar7 < 0x11) {
          uVar14 = 1;
        }
        else {
          if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0228c5a4;
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228c5a4:
        uVar14 = 0;
      }
      if (plVar12 != (long *)0x0) {
        lVar13 = plVar12[0x2a];
        if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe9d8);
        uVar2 = 0;
        if ((int)lVar13 == 1) {
          uVar2 = uVar14;
        }
        if (((uVar9 & 1) != 0) && (uVar2 != 0)) {
          fVar15 = *(float *)(plVar12[0xd] + 0x278);
          if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar15) &&
             (((fVar15 < (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0 &&
               (fVar15 = *(float *)(plVar12[0xd] + 0x280),
               (float)*(int *)(param_2 + 0x14) * 5.0 <= fVar15)) &&
              (fVar15 < (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0)))) goto LAB_0228c6b4;
        }
      }
    }
    uVar10 = 0;
  }
  else {
    plVar12 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                        ((ulong)(uVar14 >> 0x11) & 0x7ff8));
    if ((plVar12 == (long *)0x0) ||
       (((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar12 + 0x46) != uVar14)))) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar13 + 0x288) != 1 && *(int *)(lVar13 + 0x288) != -1) {
LAB_0228c480:
      uVar14 = 0;
      if (plVar12 != (long *)0x0) goto LAB_0228c494;
      goto LAB_0228c508;
    }
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar3;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar14 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0228c480;
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar12 == (long *)0x0) goto LAB_0228c508;
LAB_0228c494:
    lVar13 = plVar12[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bbe9d8);
    uVar2 = 0;
    if ((int)lVar13 == 1) {
      uVar2 = uVar14;
    }
    if (((uVar9 & 1) == 0) || (uVar2 == 0)) goto LAB_0228c508;
    fVar16 = *(float *)(plVar12[0xd] + 0x278);
    fVar15 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
    bVar6 = false;
    if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar16) &&
       (bVar6 = false, !NAN(fVar16) && !NAN(fVar15))) {
      bVar6 = fVar16 < fVar15;
    }
    if (((!bVar6) ||
        (fVar15 = *(float *)(plVar12[0xd] + 0x280), fVar15 < (float)*(int *)(param_2 + 0x14) * 5.0))
       || ((float)*(int *)(param_2 + 0x24) * 5.0 + 5.0 <= fVar15)) goto LAB_0228c508;
LAB_0228c6b4:
    uVar10 = 1;
  }
  return uVar10;
}

