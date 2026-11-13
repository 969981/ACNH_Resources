
undefined8 FUN_014e5130(long param_1,undefined4 param_2,undefined4 param_3)

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
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar8 = *(uint *)(param_1 + 8);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x014e525c;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014e525c;
    }
  }
  uVar8 = 0;
joined_r0x014e525c:
  if (plVar7 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bbcf28 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbcf28), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbcf20 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbcf28);
  }
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bbcf20);
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
  FUN_014ca1bc(plVar7,param_2,param_3);
  return 1;
}

