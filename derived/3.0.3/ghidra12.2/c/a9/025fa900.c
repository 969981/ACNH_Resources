
/* WARNING: Removing unreachable block (ram,0x025fa958) */

void FUN_025fa900(long param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined **local_88;
  char *pcStack_80;
  undefined8 *local_78;
  undefined8 local_68;
  
  FUN_02602950(param_1,0x83);
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (((lVar14 != 0) &&
      (local_88 = (undefined **)CONCAT44(local_88._4_4_,1),
      ((*(byte *)(lVar14 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar14 = (**(code **)(**(long **)(*(long *)(lVar14 + 0x10) + 0x188) + 0x38))(), lVar14 != 0))
  {
    if (*(long **)(&LAB_005d3d10 + lVar14) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(&LAB_005d3d10 + lVar14);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    uVar16 = 0;
    puVar2 = (uint *)(*(long *)(&DAT_005d3cf8 + lVar14) + *(long *)(&LAB_005d3cf0 + lVar14));
    uVar5 = *puVar2;
    if ((*(byte *)((long)puVar2 + 7) != 0 ||
         (((ulong)uVar5 != 0 || (ulong)(ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0))
       && ((uint)*(byte *)((long)puVar2 + 7) ==
           ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
      uVar16 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
      uVar16 = (uVar16 - (ushort)puVar2[1]) + 0x80e32b11 + (uVar16 >> 0x20);
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(&LAB_005d3d10 + lVar14) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3d10 + lVar14) + 8),
       puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    puVar4 = PTR_DAT_04bb2020;
    local_88 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    pcStack_80 = "CurHavePoki";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_88,uVar16 & 0xffffffff);
    }
    if (*(long **)(lVar14 + 0x5d3d48) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar14 + 0x5d3d48);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    uVar16 = 0;
    puVar2 = (uint *)(*(long *)(&LAB_005d3d30 + lVar14) + *(long *)(&LAB_005d3d28 + lVar14));
    uVar5 = *puVar2;
    if ((*(byte *)((long)puVar2 + 7) != 0 ||
         (((ulong)uVar5 != 0 || (ulong)(ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0))
       && ((uint)*(byte *)((long)puVar2 + 7) ==
           ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
      uVar16 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
      uVar16 = (uVar16 - (ushort)puVar2[1]) + 0x80e32b11 + (uVar16 >> 0x20);
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x5d3d48) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x5d3d48) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    local_88 = (undefined **)(puVar4 + 0x10);
    pcStack_80 = "CurSalaryPoki";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_88,uVar16 & 0xffffffff);
    }
    if ((*(long **)(lVar14 + 0x5d3d80) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x5d3d80), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    iVar6 = 0;
    puVar2 = (uint *)(*(long *)(lVar14 + 0x5d3d68) + *(long *)(lVar14 + 0x5d3d60));
    uVar3 = *puVar2;
    if ((*(byte *)((long)puVar2 + 7) != 0 ||
         (((ulong)uVar3 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar2 + 7) ==
        ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
      lVar15 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
      iVar6 = ((int)lVar15 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef + (int)((ulong)lVar15 >> 0x20);
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar14 + 0x5d3d80) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x5d3d80) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    ppuVar1 = (undefined **)(puVar4 + 0x10);
    pcStack_80 = "CurSavingPoki";
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = ppuVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_88,iVar6);
    }
    pcStack_80 = "CoordinatorGrade";
    local_88 = ppuVar1;
    iVar6 = FUN_02758850(&local_88);
    pcStack_80 = "PlannerGrade";
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = ppuVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)iVar6);
    }
    ppuVar1 = (undefined **)(puVar4 + 0x10);
    pcStack_80 = "CoordinatorRank";
    local_88 = ppuVar1;
    iVar6 = FUN_02758850(&local_88);
    pcStack_80 = "PlannerRank";
    local_88 = ppuVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)iVar6);
    }
    if ((*(long **)(lVar14 + 0x5d9500) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar14 + 0x5d9500), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    iVar6 = 0;
    uVar8 = 0;
    do {
      uVar16 = uVar8 << 4;
      uVar9 = uVar8 >> 0x1f;
      uVar3 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar3;
      if (*(long *)(*(long *)(lVar14 + 0x5d94e8) + *(long *)(lVar14 + 0x5d94e0) +
                   (-uVar9 & 0xfffffff000000000 | uVar16)) != 0) {
        iVar6 = iVar6 + 1;
      }
    } while (uVar3 != 100);
    ppuVar1 = (undefined **)(puVar4 + 0x10);
    pcStack_80 = "BlockUserNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_88 = ppuVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_88,iVar6);
    }
    local_68 = 0;
    pcStack_80 = (char *)((long)&local_68 + 4);
    local_88 = &PTR_FUN_04a86c20;
    local_78 = &local_68;
    FUN_02685630(&local_88);
    pcStack_80 = "NNPCHouseNum";
    *(undefined4 *)(param_1 + 0x28) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x2c) = (undefined4)local_68;
    local_88 = ppuVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_88);
      local_88 = (undefined **)(puVar4 + 0x10);
      pcStack_80 = "SNPCHouseNum";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_88,(long)*(int *)(param_1 + 0x2c));
      }
    }
    uVar8 = FUN_0377fb80(0);
    uVar16 = FUN_0377fb80(1);
    uVar9 = FUN_0377fb80(2);
    uVar10 = FUN_0377fb80(3);
    uVar11 = FUN_0377fb80(4);
    uVar12 = FUN_0377fb80(5);
    uVar13 = FUN_0377fb80(6);
    local_88 = (undefined **)(puVar4 + 0x10);
    pcStack_80 = "FacilityNum";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_88,
                   (uVar16 & 1) + (uVar8 & 1) + (uVar9 & 1) + (uVar10 & 1) +
                   (uVar11 & 1) + (uVar12 & 1) + (uVar13 & 1));
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar14 + 0x5d9500) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar14 + 0x5d9500) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return;
}

