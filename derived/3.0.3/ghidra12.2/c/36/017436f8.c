
undefined4 FUN_017436f8(long param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    plVar6 = (long *)0x0;
    uVar8 = 0;
    goto LAB_01743804;
  }
  uVar7 = *(uint *)(param_1 + 0x234);
  if ((((uVar7 == 0) ||
       (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
      ((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar6 + 0x46) != uVar7)) {
    plVar6 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_017437bc;
      uVar8 = 0x101000100 >> (((ulong)*(uint *)(lVar5 + 0x5e8) & 7) << 3);
      uVar7 = (uint)uVar8;
    }
  }
  else {
LAB_017437bc:
    uVar8 = 0;
    uVar7 = 0;
  }
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bbe260 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe260), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe258 = PTR_DAT_04bbe250 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe260);
    }
    uVar8 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bbe258);
    if ((uVar8 & 1) == 0) {
      uVar7 = 0;
    }
    uVar8 = (ulong)uVar7;
  }
LAB_01743804:
  puVar1 = (undefined4 *)((long)plVar6 + 0x234);
  if ((uVar8 & 0xff) == 0 || plVar6 == (long *)0x0) {
    puVar1 = (undefined4 *)PTR_DAT_04bb3238;
  }
  return *puVar1;
}

