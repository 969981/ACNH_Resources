
uint FUN_033fe650(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  uVar4 = 0;
  if (lVar7 == 0) goto LAB_033fe774;
  uVar4 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar4 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar4 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar4)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar5 + 0x60))();
    if (iVar2 < 0x11) {
      uVar4 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_033fe708;
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_033fe708:
    uVar4 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    if (((uVar4 & uVar3) == 1) && (uVar6 = FUN_00901910(plVar8), (uVar6 & 1) != 0)) {
      uVar4 = FUN_00901ab4(plVar8);
      uVar4 = uVar4 ^ 1;
      goto LAB_033fe774;
    }
  }
  uVar4 = 0;
LAB_033fe774:
  return uVar4 & 1;
}

