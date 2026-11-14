
undefined8 FUN_01b3694c(undefined8 *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_05574040 == 0) ||
     (lVar5 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))(), lVar5 == 0))
  {
    return 0;
  }
  plVar1 = (long *)(lVar5 + 0x276d60);
  lVar16 = *(long *)(lVar5 + 0x276d80);
  if (lVar16 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar16 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar5 + 0x276d80) == 0) goto LAB_01b36a10;
      plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar5 + 0x276d68);
      uStack_48 = 0x1f2e0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
LAB_01b36a10:
  local_60._0_2_ = 0;
  local_60._6_1_ = 0;
  *(undefined8 *)((long)param_1 + 0x1a) =
       *(undefined8 *)(*(long *)(lVar5 + 0x276d68) + *plVar1 + 0x1f2d2);
  local_60._2_2_ = 0x101;
  local_60._4_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  bVar3 = FUN_02831f90(*(long *)(lVar5 + 0x276d68) + *plVar1,&local_60,param_1);
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar2 = *(undefined1 *)(*(long *)(lVar5 + 0x276d68) + *plVar1 + 0x1f2d0);
  puVar9 = &local_60;
  if ((bVar3 & 1) == 0) {
    puVar9 = param_1;
  }
  *(byte *)((long)param_1 + 0x2a) = bVar3 & 1;
  uVar17 = *puVar9;
  local_60._0_2_ = 0;
  local_60._2_2_ = 0;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar2;
  *(undefined8 *)((long)param_1 + 0x22) = uVar17;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar4 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  local_60._0_2_ = 1;
  local_60._2_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  local_60._0_2_ = 2;
  local_60._2_2_ = 0;
  uVar10 = 2;
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
  }
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  uVar18 = 4;
  if ((uVar8 & 1) == 0) {
    uVar18 = 0;
  }
  local_60._0_2_ = 3;
  local_60._2_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  local_60._0_2_ = 4;
  local_60._2_2_ = 0;
  uVar11 = 8;
  if ((uVar8 & 1) == 0) {
    uVar11 = 0;
  }
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  uVar12 = 0x10;
  if ((uVar8 & 1) == 0) {
    uVar12 = 0;
  }
  local_60._0_2_ = 5;
  local_60._2_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  uVar13 = 0x20;
  if ((uVar8 & 1) == 0) {
    uVar13 = 0;
  }
  local_60._0_2_ = 6;
  local_60._2_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  uVar14 = 0x40;
  if ((uVar8 & 1) == 0) {
    uVar14 = 0;
  }
  local_60._0_2_ = 7;
  local_60._2_2_ = 0;
  if ((*(long *)(lVar5 + 0x276d80) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
    local_58 = *plVar1;
    local_50 = *(undefined8 *)(lVar5 + 0x276d68);
    uStack_48 = 0x1f2e0;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  }
  uVar8 = FUN_01b38170(&local_60,*(long *)(lVar5 + 0x276d68) + *plVar1,param_1);
  uVar15 = 0x80;
  if ((uVar8 & 1) == 0) {
    uVar15 = 0;
  }
  uVar15 = uVar10 | uVar4 & 1 | uVar18 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15;
  *(uint *)((long)param_1 + 0x2c) = uVar15;
  if (((*(char *)((long)param_1 + 0x2a) == '\0') && (*(char *)((long)param_1 + 0x2b) == '\0')) &&
     (uVar15 == 0)) {
    uVar17 = 0;
  }
  else {
    FUN_01b35e10(DAT_0532d278);
    if ((*(long *)(lVar5 + 0x276d80) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x276d80) + 0x20), plVar7 != (long *)0x0)) {
      local_58 = *plVar1;
      local_50 = *(undefined8 *)(lVar5 + 0x276d68);
      uStack_48 = 0x1f2e0;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
    uVar17 = 1;
    *(undefined8 *)(*(long *)(lVar5 + 0x276d68) + *plVar1 + 0x1f2d2) = *param_1;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x276d80) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar5 + 0x276d80) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return uVar17;
}

