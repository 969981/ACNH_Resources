
void FUN_007d9508(undefined4 *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_007d9638;
  uVar9 = *(uint *)(param_2 + 4);
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_007d95c0;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_007d95c0:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3fe8);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      lVar7 = plVar8[0x57];
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      *(short *)param_1 = (short)lVar7;
      FUN_0277d4ac(param_1);
      return;
    }
  }
LAB_007d9638:
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar2;
  return;
}

