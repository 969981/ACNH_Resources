
void FUN_00c01f64(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  uVar3 = FUN_00c02500(*(undefined8 *)(param_1 + 8),*param_2);
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_00c02088;
  if ((((uVar3 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar3 >> 0x14) * 8),
       plVar8 == (long *)0x0)) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar3)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar3 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_00c02028;
      uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00c02028:
    uVar3 = 0;
  }
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb4160 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4160), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb4158 = PTR_DAT_04bb3b50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4160);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb4158);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar3;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      *(uint *)(plVar8 + 0x83) = *(uint *)(plVar8 + 0x83) | 4;
    }
  }
LAB_00c02088:
  if (*(int *)(param_1 + 0x10) - 3U < 3) {
    FUN_020f153c(2,*param_2,PTR_DAT_04bb32e0);
    return;
  }
  return;
}

