
undefined4 FUN_0308cdd0(void)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
    }
    else {
      uVar8 = *(uint *)(lVar6 + 0x5e8);
      if (4 < uVar8) goto LAB_0308ce90;
      uVar8 = 0x1aU >> (ulong)(uVar8 & 0x1f) & 1;
    }
  }
  else {
LAB_0308ce90:
    uVar8 = 0;
  }
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
  uVar5 = 0;
  if ((int)lVar6 == 1) {
    uVar5 = uVar8;
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  if (uVar5 == 0) {
    return 0;
  }
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    uVar8 = *(uint *)((long)plVar7 + 0x274);
    uVar5 = 0;
    if (uVar8 == 0) goto LAB_0308cf8c;
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if (((plVar7 != (long *)0x0) && ((*(uint *)(plVar7 + 0x49) >> 1 & 1) == 0)) &&
       (*(uint *)(plVar7 + 0x46) == uVar8)) {
      if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32b8);
      if ((uVar4 & 1) != 0) {
        uVar5 = *(int *)((long)plVar7 + 0x315d4) + 0x20000000U >> 0x1e;
        goto LAB_0308cf8c;
      }
    }
  }
  uVar5 = 0;
LAB_0308cf8c:
  iVar2 = uVar5 + 2;
  if (2 < uVar5 - 1) {
    iVar2 = 2;
  }
  if (iVar2 - 2U < 4) {
    return (&DAT_041022e0)[(int)(iVar2 - 2U)];
  }
  return 2;
}

