
void FUN_022766e0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (8 < *(uint *)(param_1 + 0x2a4)) {
    return;
  }
  fVar10 = 0.0;
  if ((1 << (ulong)(*(uint *)(param_1 + 0x2a4) & 0x1f) & 0x1e1U) == 0)
  goto switchD_0227683c_default;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *(uint *)PTR_DAT_04bba4b8;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_022767c8;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_022767c8:
    uVar9 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bba4a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bba4a8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bba4a0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bba4a8);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bba4a0);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x2c4)) {
  case 0:
    lVar7 = FUN_0228e9bc(plVar8);
    plVar8 = (long *)(lVar7 + 0xf8);
    break;
  case 1:
    lVar7 = FUN_0228e9bc(plVar8);
    plVar8 = (long *)(lVar7 + 0x198);
    break;
  case 2:
    lVar7 = FUN_0228e9bc(plVar8);
    plVar8 = (long *)(lVar7 + 0x238);
    break;
  case 3:
    lVar7 = FUN_0228e9bc(plVar8);
    plVar8 = (long *)(lVar7 + 0x2d8);
    break;
  default:
    goto switchD_0227683c_default;
  }
  pfVar6 = (float *)(**(code **)(*plVar8 + 0xf0))();
  fVar10 = *pfVar6 * *(float *)(param_1 + 0x2c8);
switchD_0227683c_default:
  *(float *)(param_1 + 0x3a4) = fVar10;
  return;
}

