
undefined8 FUN_007d4458(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *(uint *)(param_1 + 8);
  if (uVar8 == 0) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8));
  if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x007d45a8;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x007d45a8;
    }
  }
  uVar8 = 0;
joined_r0x007d45a8:
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  uVar1 = *(uint *)(plVar7 + 0x49);
  if (((*PTR_DAT_04bb4b28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb4b28), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb4b20 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb4b28);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb4b20);
  if ((uVar4 & uVar8) != 1) {
    return 0;
  }
  if ((int)lVar6 != 1) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  lVar6 = (**(code **)(*(long *)plVar7[0xd] + 0xf8))();
  *(float *)(lVar6 + 4) = *(float *)(lVar6 + 4) + -0.5;
  *(undefined1 *)(plVar7 + 0x5a) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return 1;
}

