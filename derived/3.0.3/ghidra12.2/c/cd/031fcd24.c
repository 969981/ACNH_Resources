
void FUN_031fcd24(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_24 [4];
  
  if (*(int *)(param_1 + 0x3e0) <= (int)param_2) {
    return;
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x218) + 0x5b8);
  plVar5 = plVar9 + param_2;
  if (0x17 < param_2) {
    plVar5 = plVar9;
  }
  lVar7 = *plVar5;
  if (lVar7 == 0) {
    return;
  }
  plVar9 = *(long **)(*(long *)(lVar7 + 0x2f0) + (ulong)(1 < *(uint *)(lVar7 + 0x2e8)) * 8);
  if (plVar9 == (long *)0x0) {
    return;
  }
  local_24[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar7 = FUN_02583354(DAT_055021a0,local_24,1);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = lVar7 + 0x194b0;
  if (*(long *)(lVar7 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar7 = *(long *)(lVar10 + 0x28);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      lVar7 = *(long *)(lVar10 + 0x28);
      uVar4 = uVar4 & 0xffffffff;
      if (lVar7 == 0) goto LAB_031fce38;
    }
    plVar5 = *(long **)(lVar7 + 0x20);
    if (plVar5 != (long *)0x0) {
      local_58 = *(undefined **)(lVar10 + 8);
      local_50 = *(undefined8 *)(lVar10 + 0x10);
      local_48 = 0x3ce60;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_58);
    }
  }
LAB_031fce38:
  if (param_2 < *(uint *)(param_1 + 0x3e0)) {
    puVar8 = *(uint **)(*(long *)(param_1 + 1000) + (long)(int)param_2 * 8);
  }
  else {
    puVar8 = (uint *)0x0;
  }
  lVar7 = *(long *)(lVar10 + 8);
  lVar1 = *(long *)(lVar10 + 0x10);
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  uVar2 = *puVar8;
  if (DAT_0523c4b0 <= uVar2) {
    uVar2 = 0;
  }
  if ((param_2 == 0) ||
     ((*(uint *)(lVar1 + lVar7 + 0x38c84) &
      1 << (ulong)(*(uint *)(DAT_0523c4b8 + (long)(int)uVar2 * 4) & 0x1f)) != 0)) {
    local_58 = PTR_DAT_04bc4e68 + 0x10;
    local_50 = CONCAT44(local_50._4_4_,6);
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_58);
    puVar6 = (undefined8 *)(plVar9[3] + 0x1b8);
  }
  else {
    local_58 = PTR_DAT_04bc4e68 + 0x10;
    local_50 = CONCAT44(local_50._4_4_,7);
    (**(code **)(*plVar9 + 0x18))(plVar9,&local_58);
    puVar6 = (undefined8 *)(plVar9[3] + 0x1c0);
  }
  (*(code *)*puVar6)(plVar9[1]);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

