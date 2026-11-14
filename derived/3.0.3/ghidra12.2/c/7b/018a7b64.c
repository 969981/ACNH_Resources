
ulong FUN_018a7b64(ulong param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar1 = PTR_DAT_04bb27c0;
  if ((int)param_1 == 0) {
    return param_1;
  }
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    uVar8 = 0;
    uVar4 = 0;
    goto LAB_018a7c6c;
  }
  plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) + (param_1 >> 0x14 & 0xfff) * 8);
  if (((plVar6 == (long *)0x0) || ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar6[0x46] != (int)param_1)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar3 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar3 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_018a7c1c;
      uVar8 = 0x101000100 >> (((ulong)*(uint *)(lVar5 + 0x5e8) & 7) << 3);
      uVar7 = (uint)uVar8;
    }
  }
  else {
LAB_018a7c1c:
    uVar8 = 0;
    uVar7 = 0;
  }
  if (plVar6 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb3fe8);
    uVar4 = 1;
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
    }
    uVar8 = (ulong)uVar7;
  }
LAB_018a7c6c:
  uVar7 = 0;
  if ((uVar8 & 0xff) != 0) {
    uVar7 = uVar4;
  }
  return (ulong)uVar7;
}

