
uint FUN_033c0e18(long param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar9 = *(uint *)(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x70) != 3 || uVar9 == 0) {
    return 1;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8))
    ;
    if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar8 + 0x46) != uVar9)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_033c0ef0;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_033c0ef0:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bc99b8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc99b8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc99b0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc99b8);
      }
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bc99b0);
      uVar4 = 1;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        uVar4 = FUN_0368e4ec(plVar8,param_2,param_3);
        uVar4 = uVar4 ^ 1;
      }
      goto LAB_033c0f60;
    }
  }
  uVar4 = 1;
LAB_033c0f60:
  return uVar4 & 1;
}

