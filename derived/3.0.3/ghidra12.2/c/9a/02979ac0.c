
void FUN_02979ac0(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bc2318;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar10 = 1;
      goto joined_r0x02979b8c;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02979b8c;
    }
  }
  uVar10 = 0;
joined_r0x02979b8c:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    if (((*PTR_DAT_04bc2308 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc2308), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bc2300 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2308);
    }
    uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bc2300);
    puVar4 = PTR_DAT_04bc3c98;
    puVar3 = PTR_DAT_04bc3c90;
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar10;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      if ((long *)plVar9[0x16] != plVar9 + 0x15) {
        lVar8 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar6 = (long *)(plVar9[0x16] - lVar8);
        puVar1 = PTR_DAT_04bbca00 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar3), (uVar7 & 1) != 0)) {
            FUN_02972610(plVar6,param_1);
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar9 + 0x15) - lVar8));
      }
    }
  }
  return;
}

