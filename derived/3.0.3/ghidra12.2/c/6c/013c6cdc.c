
undefined8 FUN_013c6cdc(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint local_64;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  uVar12 = *(uint *)PTR_DAT_04bbc940;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 0;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_013c6dac;
      uVar12 = 5U >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013c6dac:
    uVar12 = 1;
  }
  if (plVar11 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar11[0x2a];
  uVar2 = *(uint *)(plVar11 + 0x49);
  if (((*PTR_DAT_04bbc928 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbc920 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc928);
  }
  uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc920);
  if ((int)lVar10 != 1) {
    return 0;
  }
  if (uVar12 != 0 || ((uVar6 ^ 1) & 1) != 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x580)) {
    return 0;
  }
  local_64 = 0;
  iVar5 = FUN_01411e70(plVar11,&local_64,param_1 + 0x2e0,param_1 + 0x554);
  if (iVar5 == -1) {
    *(undefined1 *)(param_1 + 0x568) = 0;
    return 0;
  }
  if (local_64 == 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x564) == local_64) {
    return 0;
  }
  lVar10 = *(long *)puVar3;
  *(uint *)(param_1 + 0x564) = local_64;
  if (lVar10 == 0) {
    return 0;
  }
  plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                      ((ulong)(local_64 >> 0x11) & 0x7ff8));
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != local_64)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar8 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
      goto LAB_013c6f1c;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto LAB_013c6f1c;
    }
  }
  uVar12 = 0;
LAB_013c6f1c:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    uVar2 = *(uint *)(plVar11 + 0x49);
    if (((*PTR_DAT_04bb4050 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4050), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb4048 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4050);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb4048);
    puVar4 = PTR_DAT_04bbc9a0;
    puVar3 = PTR_DAT_04bbc998;
    if ((((int)lVar10 == 1) && ((uVar6 & uVar12) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      if ((long *)plVar11[0x16] != plVar11 + 0x15) {
        lVar10 = (long)*(int *)((long)plVar11 + 0xbc);
        plVar8 = (long *)(plVar11[0x16] - lVar10);
        puVar1 = PTR_DAT_04bbc950 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar8 != (long *)0x0) &&
             (uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar3), (uVar9 & 1) != 0)) {
            fVar14 = *(float *)(plVar8 + 0x53);
            fVar15 = *(float *)((long)plVar8 + 0x28c);
            uVar7 = FUN_006f0400(*(float *)((long)plVar8 + 0x294) - *(float *)(plVar8 + 0x51),
                                 *(float *)((long)plVar8 + 0x29c) - *(float *)(plVar8 + 0x52));
            *(undefined4 *)(param_1 + 0x560) = uVar7;
            fVar13 = (float)FUN_013bc8b0(param_1);
            *(undefined1 *)(param_1 + 0x568) = 1;
            *(float *)(param_1 + 0x34c) = fVar13 * 1.6;
            if (fVar15 <= fVar14) {
              fVar14 = fVar15;
            }
            *(float *)(param_1 + 0x55c) = fVar14;
            return 1;
          }
          plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
        } while (plVar8 != (long *)((long)(plVar11 + 0x15) - lVar10));
      }
    }
  }
  return 0;
}

