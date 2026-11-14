
void FUN_01b98884(long *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    plVar8 = (long *)0x0;
    bVar3 = false;
    uVar9 = 0;
    goto LAB_01b98984;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01b9895c;
      uVar9 = (uint)(0x101000100 >> (((ulong)*(uint *)(lVar7 + 0x5e8) & 7) << 3)) & 1;
    }
  }
  else {
LAB_01b9895c:
    uVar9 = 0;
  }
  if (plVar8 == (long *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = (int)plVar8[0x2a] == 1;
  }
LAB_01b98984:
  puVar1 = PTR_DAT_04bb37d8;
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  puVar2 = PTR_DAT_04bb37d0;
  if (((plVar8 != (long *)0x0) &&
      (uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0), (uVar6 & 1) != 0)) &&
     ((bVar3 && (uVar9 != 0)))) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)puVar2 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    *param_1 = (long)(plVar8 + 0xcc);
  }
  return;
}

