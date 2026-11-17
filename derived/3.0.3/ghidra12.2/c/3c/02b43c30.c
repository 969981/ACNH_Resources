
undefined8 FUN_02b43c30(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar11 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x2680);
  if (uVar11 == 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_02b43cf8;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_02b43cf8:
    uVar11 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar10[0x2a];
  if (((*PTR_DAT_04bc4a20 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4a20), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bc4a18 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4a20);
  }
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bc4a18);
  uVar2 = 0;
  if ((int)lVar9 == 1) {
    uVar2 = uVar11;
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(plVar10 + (ulong)(*(uint *)(plVar10 + 0x51) & 1) * 0xb + 0x5b);
  if (uVar11 == 0) {
    return 0;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8))
  ;
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto LAB_02b43e04;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_02b43e04;
    }
  }
  uVar11 = 0;
LAB_02b43e04:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bc4a10 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4a10), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc4a08 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4a10);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bc4a08);
    puVar4 = PTR_DAT_04bc4420;
    puVar3 = PTR_DAT_04bc4418;
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar6 = (long *)(plVar10[0x16] - lVar9);
        puVar1 = PTR_DAT_04bb2e38 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar3), (uVar7 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02b43f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar8 = (**(code **)(*plVar6 + 0x100))(plVar6);
            return uVar8;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar9 + 8) - lVar9);
        } while (plVar6 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  return 0;
}

