
void FUN_01513d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01513de8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01513de8;
    }
  }
  uVar11 = 0;
joined_r0x01513de8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar2 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
    puVar4 = PTR_DAT_04bbce88;
    puVar3 = PTR_DAT_04bbce80;
    if ((((uVar6 & uVar11) == 1) && ((int)lVar9 == 1)) && ((uVar2 >> 4 & 1) != 0)) {
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar7 = (long *)(plVar10[0x16] - lVar9);
        puVar1 = PTR_DAT_04bbce90 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar7 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar3), (uVar8 & 1) != 0)) {
            FUN_0149bf80(plVar7,param_1,param_2,param_3);
            return;
          }
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
        } while (plVar7 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  return;
}

