
undefined4 FUN_01521878(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  uVar3 = FUN_015039ac();
  puVar1 = PTR_DAT_04bb27c0;
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar8 = *param_1;
    if ((((uVar8 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                             ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar2 = (**(code **)(*plVar4 + 0x60))();
      if (iVar2 < 0x11) {
        uVar3 = 1;
        uVar8 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_0152194c;
        uVar3 = 0x101000100 >> (((ulong)*(uint *)(lVar6 + 0x5e8) & 7) << 3);
        uVar8 = (uint)uVar3;
      }
    }
    else {
LAB_0152194c:
      uVar3 = 0;
      uVar8 = 0;
    }
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb5928 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb5928);
      }
      uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb5920);
      uVar5 = 0;
      if ((uVar3 & 1) == 0) {
        uVar8 = 0;
      }
      uVar3 = (ulong)uVar8;
      goto LAB_0152199c;
    }
  }
  uVar5 = 1;
LAB_0152199c:
  if ((uVar3 & 0xff) == 0) {
    uVar5 = 1;
  }
  return uVar5;
}

