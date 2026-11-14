
undefined8 FUN_01512760(undefined8 param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar9 = (ulong)(short)uVar4;
  if (uVar9 != 0xffffffffffffffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar9 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar2 >> 0x17 & 1) != 0) && ((*puVar2 >> 1 & 1) != 0)) {
      return 0;
    }
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b &&
      *(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    uVar3 = *(uint *)(DAT_0520f098 + 0x10);
    if ((((*(long *)PTR_DAT_04bb27c0 != 0 && uVar3 != 0) &&
         (plVar10 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                              ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar10 != (long *)0x0)) &&
        ((*(uint *)(plVar10 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar10 + 0x46) == uVar3)) {
      lVar12 = plVar10[0x2a];
      if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7d58);
      }
      uVar9 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
      puVar6 = PTR_DAT_04bbce88;
      puVar5 = PTR_DAT_04bbce80;
      if (((uVar9 & 1) != 0) && ((int)lVar12 == 1)) {
        if ((long *)plVar10[0x16] != plVar10 + 0x15) {
          lVar12 = (long)*(int *)((long)plVar10 + 0xbc);
          plVar11 = (long *)(plVar10[0x16] - lVar12);
          puVar1 = PTR_DAT_04bbce90 + 0x10;
          do {
            if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
              *(undefined **)puVar5 = puVar1;
              __cxa_guard_release(puVar6);
            }
            if ((plVar11 != (long *)0x0) &&
               (uVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,puVar5), (uVar9 & 1) != 0)) {
              uVar8 = FUN_0149ce8c(plVar11,param_1);
              return uVar8;
            }
            plVar11 = (long *)(*(long *)((long)plVar11 + lVar12 + 8) - lVar12);
          } while (plVar11 != (long *)((long)(plVar10 + 0x15) - lVar12));
        }
      }
    }
  }
  return 0;
}

