
undefined8 FUN_0228ba90(long param_1,int param_2,float *param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  
  puVar5 = PTR_DAT_04bbe9e0;
  puVar4 = PTR_DAT_04bb3350;
  puVar3 = PTR_DAT_04bb27c0;
  lVar12 = 0;
  puVar1 = PTR_DAT_04bb3290 + 0x10;
  do {
    uVar10 = *(uint *)(param_1 + lVar12 + 0x364);
    if ((uVar10 != 0) && (lVar9 = *(long *)puVar3, lVar9 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar10)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar9 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0228bb98;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228bb98:
        uVar10 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar9 = plVar11[0x2a];
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(puVar5);
        }
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
        uVar2 = 0;
        if ((int)lVar9 == 1) {
          uVar2 = uVar10;
        }
        if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
           (fVar13 = *param_3 - *(float *)(plVar11[0xd] + 0x278),
           fVar14 = param_3[2] - *(float *)(plVar11[0xd] + 0x280),
           SQRT(fVar14 * fVar14 + fVar13 * fVar13) <= *(float *)((long)plVar11 + 0x2cc))) {
          return 1;
        }
      }
    }
    uVar10 = *(uint *)(param_1 + lVar12 + 0x368);
    if ((uVar10 != 0) && (lVar9 = *(long *)puVar3, lVar9 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar10)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar9 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_0228bcb8;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228bcb8:
        uVar10 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar9 = plVar11[0x2a];
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = puVar1;
          __cxa_guard_release(puVar5);
        }
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
        uVar2 = 0;
        if ((int)lVar9 == 1) {
          uVar2 = uVar10;
        }
        if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
           (fVar13 = *param_3 - *(float *)(plVar11[0xd] + 0x278),
           fVar14 = param_3[2] - *(float *)(plVar11[0xd] + 0x280),
           SQRT(fVar14 * fVar14 + fVar13 * fVar13) <= *(float *)((long)plVar11 + 0x2cc))) {
          return 1;
        }
      }
    }
    lVar12 = lVar12 + 0x18;
  } while (lVar12 != 0x60);
  if (param_2 != 0) {
    uVar10 = *(uint *)(param_1 + 0x308);
    if ((uVar10 != 0) && (lVar12 = *(long *)puVar3, lVar12 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                          ((ulong)(uVar10 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar10)))) {
        plVar11 = (long *)0x0;
      }
      if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
        lVar12 = *(long *)puVar3;
        iVar6 = (**(code **)(*plVar7 + 0x60))();
        if (iVar6 < 0x11) {
          uVar10 = 1;
        }
        else {
          if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0228be34;
          uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_0228be34:
        uVar10 = 0;
      }
      if (plVar11 != (long *)0x0) {
        lVar12 = plVar11[0x2a];
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe9e0);
        }
        uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
        uVar2 = 0;
        if ((int)lVar12 == 1) {
          uVar2 = uVar10;
        }
        if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
           (fVar13 = *param_3 - *(float *)(plVar11[0xd] + 0x278),
           fVar14 = param_3[2] - *(float *)(plVar11[0xd] + 0x280),
           SQRT(fVar14 * fVar14 + fVar13 * fVar13) <= *(float *)((long)plVar11 + 0x2cc))) {
          return 1;
        }
      }
    }
    if (param_2 == 1) {
      return 0;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x340);
  if (uVar10 == 0) {
    return 0;
  }
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    return 0;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar10 >> 0x11) & 0x7ff8)
                      );
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar10)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    lVar12 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0228bf68;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0228bf68;
    }
  }
  uVar10 = 0;
joined_r0x0228bf68:
  if (plVar11 != (long *)0x0) {
    lVar12 = plVar11[0x2a];
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbe9d8);
    uVar2 = 0;
    if ((int)lVar12 == 1) {
      uVar2 = uVar10;
    }
    if ((((uVar8 & 1) != 0) && (uVar2 != 0)) &&
       (fVar13 = *param_3 - *(float *)(plVar11[0xd] + 0x278),
       fVar14 = param_3[2] - *(float *)(plVar11[0xd] + 0x280),
       SQRT(fVar14 * fVar14 + fVar13 * fVar13) <= *(float *)((long)plVar11 + 0x2cc))) {
      return 1;
    }
  }
  return 0;
}

