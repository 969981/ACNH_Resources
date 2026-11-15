
/* WARNING: Type propagation algorithm not settling */

int FUN_022910b0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  local_24 = 0;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar4 = *(uint *)PTR_DAT_04bba4b8;
  if ((((uVar4 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar4)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x022911a0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x022911a0;
    }
  }
  uVar4 = 0;
joined_r0x022911a0:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bba4a8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bba4a8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bba4a0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bba4a8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bba4a0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar4;
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    uVar4 = FUN_0228a094(plVar8,param_2,&local_24);
    if (uVar4 != 0xffffffff) {
      if (param_3 == (undefined4 *)0x0) {
        return local_24;
      }
      if (local_24 == 0) {
        return 0;
      }
      lVar7 = (long)plVar8 + 0x2d4 + (ulong)uVar4 * 0x38;
      if (1 < uVar4) {
        lVar7 = (long)plVar8 + 0x2d4;
      }
      *param_3 = *(undefined4 *)(lVar7 + 0x34);
      return local_24;
    }
  }
  return 0;
}

