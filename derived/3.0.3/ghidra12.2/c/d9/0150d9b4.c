
/* WARNING: Type propagation algorithm not settling */

int FUN_0150d9b4(undefined2 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_14;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    return 0;
  }
  uVar7 = *(uint *)(DAT_0520f098 + 0x10);
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
      goto joined_r0x0150da78;
    }
    if (*(uint *)(lVar5 + 0x5e8) < 5) {
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0150da78;
    }
  }
  uVar7 = 0;
joined_r0x0150da78:
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7d58);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb7d50);
    if ((uVar4 & 1) != 0) {
      local_14 = 0;
      if (uVar7 == 0) {
        return 0;
      }
      FUN_01491790(plVar6,&local_14,param_1);
      if (local_14 != 9) {
        return local_14;
      }
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0950 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_054f0950);
          puVar8 = &DAT_054f0948;
          if (iVar2 != 0) {
            DAT_054f0948 = *(undefined4 *)PTR_DAT_04bb37e0;
            DAT_054f094c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            __cxa_guard_release(&DAT_054f0950);
          }
        }
        else {
          puVar8 = &DAT_054f0948;
        }
      }
      else {
        uVar4 = (ulong)*(byte *)(param_1 + 0x14);
        puVar8 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + 0x244);
        if (uVar4 < 8) {
          puVar8 = puVar8 + uVar4 * 2;
        }
      }
      *(undefined2 *)puVar8 = *param_1;
      *(undefined1 *)((long)puVar8 + 2) = *(undefined1 *)(param_1 + 1);
      *(undefined1 *)((long)puVar8 + 3) = *(undefined1 *)((long)param_1 + 3);
      puVar8[1] = *(undefined4 *)(param_1 + 2);
      FUN_0254e2cc(param_1 + 0x14);
      return local_14;
    }
  }
  return 0;
}

