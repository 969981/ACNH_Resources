
ulong FUN_01512308(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar8 = (ulong)(short)uVar4;
  if (uVar8 != 0xffffffffffffffff) {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
    if (0xff < uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x11 & 1) != 0) {
      return 0;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar8 & 0xffffffff) * 8);
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
         (plVar9 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                             ((ulong)(uVar3 >> 0x11) & 0x7ff8)), plVar9 != (long *)0x0)) &&
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) == 0)) && (*(uint *)(plVar9 + 0x46) == uVar3)) {
      lVar11 = plVar9[0x2a];
      if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7d58);
      }
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb7d50);
      puVar6 = PTR_DAT_04bbce88;
      puVar5 = PTR_DAT_04bbce80;
      if (((uVar8 & 1) != 0) && ((int)lVar11 == 1)) {
        if ((long *)plVar9[0x16] == plVar9 + 0x15) {
          return 0;
        }
        lVar11 = (long)*(int *)((long)plVar9 + 0xbc);
        plVar10 = (long *)(plVar9[0x16] - lVar11);
        puVar1 = PTR_DAT_04bbce90 + 0x10;
        while( true ) {
          if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar6), iVar7 != 0)) {
            *(undefined **)puVar5 = puVar1;
            __cxa_guard_release(puVar6);
          }
          if ((plVar10 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,puVar5), (uVar8 & 1) != 0)) break;
          plVar10 = (long *)(*(long *)((long)plVar10 + lVar11 + 8) - lVar11);
          if (plVar10 == (long *)((long)(plVar9 + 0x15) - lVar11)) {
            return 0;
          }
        }
        uVar8 = FUN_0149cd20(plVar10 + 0x50,param_1);
        return uVar8;
      }
    }
    if (*(char *)(DAT_0520f098 + 200) != '\0') {
      uVar3 = *(uint *)(param_1 + 8);
      if (0x11f < uVar3) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xc) < 0x100) {
        return (ulong)(*(uint *)(DAT_0520f098 +
                                 ((ulong)uVar3 + (ulong)*(uint *)(param_1 + 0xc) * 0x120 >> 3 &
                                 0x7ffffffffc) + 0xd8) >> (ulong)(uVar3 & 0x1f) & 1);
      }
      return 0;
    }
  }
  return 0;
}

