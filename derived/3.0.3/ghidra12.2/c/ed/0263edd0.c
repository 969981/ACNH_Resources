
/* WARNING: Removing unreachable block (ram,0x0263f2cc) */
/* WARNING: Removing unreachable block (ram,0x0263eefc) */
/* WARNING: Removing unreachable block (ram,0x0263eeec) */
/* WARNING: Removing unreachable block (ram,0x0263f29c) */
/* WARNING: Removing unreachable block (ram,0x0263f2f0) */
/* WARNING: Removing unreachable block (ram,0x0263f2d4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0263edd0(undefined4 *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  
  local_80 = PTR_DAT_04bc35c0 + 0x10;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  iVar7 = FUN_0277d6c4(&local_78);
  if (3 < iVar7 - 0xf619U) {
    return 0;
  }
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar11 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar9 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar9 == 0) {
      return 0;
    }
    lVar9 = lVar9 + 0x70;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar11[0x26] == (long *)0x0) {
      return 0;
    }
    lVar9 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
    if (lVar9 == 0) {
      return 0;
    }
  }
  local_98 = PTR_DAT_04bbfe68 + 0x10;
  local_90 = 1;
  uStack_8c = DAT_0516b10c;
  local_88 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb27a8;
  local_88 = local_88 & 1;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    return 0;
  }
  if (*(long **)(lVar9 + 0x1bfdf8) == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    puVar11 = (undefined8 *)**(long **)(lVar9 + 0x1bfdf8);
    uVar10 = 0;
    if (puVar11 != (undefined8 *)0x0) {
      uVar10 = (**(code **)*puVar11)();
    }
  }
  lVar5 = *(long *)(lVar9 + 0x1bfde0) + *(long *)(lVar9 + 0x1bfdd8);
  fVar13 = *(float *)(lVar5 + 0x14) + -2.5;
  fVar14 = *(float *)(lVar5 + 0x1c) + -2.5;
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1bfdf8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x1bfdf8) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if (*(int *)(param_2 + 8) < iVar7 || iVar7 + 1 < *(int *)(param_2 + 8)) {
    bVar1 = false;
    plVar12 = *(long **)(lVar9 + 0x1c0798);
  }
  else {
    iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    bVar1 = iVar7 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar7 + 1;
    plVar12 = *(long **)(lVar9 + 0x1c0798);
  }
  if (plVar12 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    if ((undefined8 *)*plVar12 != (undefined8 *)0x0) {
      uVar10 = (*(code *)**(undefined8 **)*plVar12)();
    }
  }
  lVar5 = *(long *)(lVar9 + 0x1c0780) + *(long *)(lVar9 + 0x1c0778);
  fVar13 = *(float *)(lVar5 + 0x14) + -2.5;
  fVar14 = *(float *)(lVar5 + 0x1c) + -2.5;
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar9 + 0x1c0798) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x1c0798) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  if (*(int *)(param_2 + 8) < iVar7 || iVar7 + 1 < *(int *)(param_2 + 8)) {
    bVar2 = false;
    plVar12 = *(long **)(lVar9 + 0x1c1138);
  }
  else {
    iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    bVar2 = iVar7 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar7 + 1;
    plVar12 = *(long **)(lVar9 + 0x1c1138);
  }
  if ((plVar12 == (long *)0x0) || ((undefined8 *)*plVar12 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (*(code *)**(undefined8 **)*plVar12)();
    uVar8 = uVar8 ^ 1;
  }
  lVar5 = *(long *)(lVar9 + 0x1c1120) + *(long *)(lVar9 + 0x1c1118);
  fVar13 = *(float *)(lVar5 + 0x14) + -2.5;
  fVar14 = *(float *)(lVar5 + 0x1c) + -2.5;
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar9 + 0x1c1138) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x1c1138) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  bVar3 = false;
  if ((iVar7 <= *(int *)(param_2 + 8)) && (*(int *)(param_2 + 8) <= iVar7 + 1)) {
    iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    bVar3 = iVar7 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar7 + 1;
  }
  if ((*(long **)(lVar9 + 0x1c1ad8) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar9 + 0x1c1ad8), puVar11 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar11)();
    uVar8 = uVar8 ^ 1;
  }
  lVar5 = *(long *)(lVar9 + 0x1c1ac0) + *(long *)(lVar9 + 0x1c1ab8);
  fVar13 = *(float *)(lVar5 + 0x14) + -2.5;
  fVar14 = *(float *)(lVar5 + 0x1c) + -2.5;
  iVar7 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar9 + 0x1c1ad8) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x1c1ad8) + 8), puVar11 != (undefined8 *)0x0)) {
    (**(code **)*puVar11)();
  }
  bVar4 = false;
  if ((iVar7 <= *(int *)(param_2 + 8)) && (*(int *)(param_2 + 8) <= iVar7 + 1)) {
    iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    bVar4 = iVar7 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar7 + 1;
  }
  if ((((bVar1 || bVar2) || bVar3) || bVar4) ||
     (uVar10 = FUN_01a4f798(&local_98,0,param_2), (uVar10 & 1) == 0)) {
    return 0;
  }
  lVar9 = *(long *)(*(long *)(*(long *)puVar6 + 0x38) + 0xd0);
  if (lVar9 != 0) {
    FUN_012e5af4(lVar9,param_2);
  }
  return 1;
}

