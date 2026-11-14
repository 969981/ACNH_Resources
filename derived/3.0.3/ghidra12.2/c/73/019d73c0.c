
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_019d73c0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (*param_1 == 0xffffffff) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  if ((((DAT_052d0188 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(DAT_052d0188 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != DAT_052d0188)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_019d7498;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_019d7498:
    uVar8 = 0;
  }
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bbe9f0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe9f0), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbe9e8 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbe9f0);
  }
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbe9e8);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  uVar8 = *param_1;
  if (((int)uVar8 < 0) || ((int)plVar7[0xa7] <= (int)uVar8)) {
    if (*(uint *)(plVar7 + 0xa3) == 0) goto LAB_019d755c;
    plVar7 = (long *)plVar7[0xa4];
  }
  else {
    if (*(uint *)(plVar7 + 0xa3) <= uVar8) {
LAB_019d755c:
      lVar6 = 0;
      iVar3 = _DAT_000000c8;
      goto joined_r0x019d7530;
    }
    plVar7 = (long *)(plVar7[0xa4] + (ulong)uVar8 * 8);
  }
  lVar6 = *plVar7;
  iVar3 = *(int *)(lVar6 + 200);
joined_r0x019d7530:
  if (iVar3 == 0) {
    lVar6 = 0;
    iVar3 = _DAT_000000c8;
  }
  else {
    lVar6 = **(long **)(lVar6 + 0xd0);
    iVar3 = *(int *)(lVar6 + 200);
  }
  if (iVar3 == 0) {
    *(undefined4 *)(lVar6 + 200) = *param_2;
    return 1;
  }
  return 0;
}

