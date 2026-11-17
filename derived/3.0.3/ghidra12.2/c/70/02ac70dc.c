
undefined8 FUN_02ac70dc(long param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  if (param_2 == (undefined2 *)0x0) {
    return 0;
  }
  uVar4 = FUN_02ac6f0c(param_1,PTR_DAT_04bb37e0);
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  *param_2 = *(undefined2 *)(param_1 + 0x3c0);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x3c2);
  *(undefined1 *)((long)param_2 + 3) = *(undefined1 *)(param_1 + 0x3c3);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x3c4);
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 1;
  }
  uVar8 = *(uint *)(param_1 + ((ulong)*(uint *)(param_1 + 0x300) & 1) * 0x20 + 0x318);
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x02ac7250;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02ac7250;
    }
  }
  uVar8 = 0;
joined_r0x02ac7250:
  if (plVar7 == (long *)0x0) {
    return 1;
  }
  lVar6 = plVar7[0x2a];
  if (((*PTR_DAT_04bc4710 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4710), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4708 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4710);
  }
  uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc4708);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar8;
  }
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  if (uVar1 == 0) {
    return 1;
  }
  *(undefined4 *)((long)plVar7 + 0x27c) = 2;
  return 1;
}

