
undefined8 FUN_01490160(undefined4 param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (1 < *param_3) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar11 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01490258;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01490258;
    }
  }
  uVar11 = 0;
joined_r0x01490258:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
    puVar3 = PTR_DAT_04bbce88;
    puVar2 = PTR_DAT_04bbce80;
    if ((((int)lVar9 == 1) && ((uVar5 & uVar11) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar6 = (long *)(plVar10[0x16] - lVar9);
        do {
          if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar3), iVar4 != 0)) {
            *(undefined ***)puVar2 = &PTR_LAB_049a5a90;
            __cxa_guard_release(puVar3);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar2), (uVar7 & 1) != 0)) {
            uVar8 = FUN_0149bc40(param_1,plVar6,param_2,param_3);
            return uVar8;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar9 + 8) - lVar9);
        } while (plVar6 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  return 0;
}

