
undefined8 FUN_0228e4c0(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x308);
  if ((uVar9 != 0) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if ((plVar8 == (long *)0x0) ||
       (((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0228e58c;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0228e58c:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      uVar1 = *(uint *)(plVar8 + 0x49);
      if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe9e0);
      }
      uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe9d8);
      if ((((int)lVar7 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
        lVar7 = plVar8[0xc];
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) & 0xfffffffe | param_2 & 1;
        }
        if ((param_2 & 1) == 0) {
          bVar6 = *(byte *)((long)plVar8 + 0x29e) | 2;
        }
        else {
          bVar6 = *(byte *)((long)plVar8 + 0x29e) & 0xfd;
        }
        *(byte *)((long)plVar8 + 0x29e) = bVar6;
      }
    }
  }
  uVar9 = *(uint *)(param_1 + 0x340);
  if (uVar9 == 0) {
    return 1;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return 1;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x0228e6fc;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0228e6fc;
    }
  }
  uVar9 = 0;
joined_r0x0228e6fc:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    uVar1 = *(uint *)(plVar8 + 0x49);
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbe9d8);
    if ((((int)lVar7 == 1) && ((uVar4 & uVar9) != 0)) && ((uVar1 >> 4 & 1) != 0)) {
      lVar7 = plVar8[0xc];
      if (lVar7 != 0) {
        *(uint *)(lVar7 + 0x11a0) = *(uint *)(lVar7 + 0x11a0) & 0xfffffffe | param_2 & 1;
      }
      if ((param_2 & 1) == 0) {
        bVar6 = *(byte *)((long)plVar8 + 0x29e) | 2;
      }
      else {
        bVar6 = *(byte *)((long)plVar8 + 0x29e) & 0xfd;
      }
      *(byte *)((long)plVar8 + 0x29e) = bVar6;
    }
  }
  return 1;
}

