
void FUN_028c8c68(long *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  puVar11 = (undefined8 *)*param_1;
  if ((puVar11 != (undefined8 *)0x0) && (param_1[1] != 0)) {
    plVar13 = (long *)*puVar11;
    lVar12 = param_1[2];
    if (plVar13 == (long *)0x0 || lVar12 == 0) {
      iVar1 = 3;
    }
    else {
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      iVar1 = FUN_027b78b0(lVar12,DAT_05573f4c);
      if (iVar1 == -1) {
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        FUN_03ea9348(&local_78,lVar12 + 8,iVar1);
        lVar15 = 0;
        if (local_78 != 0) {
          lVar15 = local_70;
        }
        lVar14 = local_78;
      }
      uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (*(int *)(lVar12 + 0x2c) == 1) {
        local_a0 = 0;
        local_c0 = lVar12;
        local_b8 = lVar14;
        local_b0 = lVar15;
        local_a8 = uVar8;
      }
      local_78 = 0;
      local_84 = 0x8b37691;
      local_7c = 0;
      local_60 = 0;
      local_58 = 0;
      local_98[0] = 1;
      local_70 = 0;
      local_68 = 0;
      local_90 = &local_84;
      FUN_0272d760(&local_c0,&local_78,local_98);
      uVar7 = FUN_028c90c0(&local_78);
      local_60 = 0;
      local_58 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_84 = 0x68cb8460;
      local_7c = 0;
      local_98[0] = 1;
      local_90 = &local_84;
      FUN_0272d760(&local_c0,&local_78,local_98);
      uVar2 = FUN_028c90c0(&local_78);
      puVar11 = (undefined8 *)*param_1;
      iVar1 = 1;
      if (((uVar7 | uVar2) & 1) != 0) {
        iVar1 = 2;
      }
    }
    plVar13 = (long *)puVar11[1];
    iVar3 = 3;
    if ((plVar13 != (long *)0x0) && (lVar12 = param_1[3], lVar12 != 0)) {
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar3 = FUN_027b78b0(lVar12,DAT_05573f50);
      if (iVar3 == -1) {
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        FUN_03ea9348(&local_c0,lVar12 + 8,iVar3);
        lVar15 = 0;
        if (local_c0 != 0) {
          lVar15 = local_b8;
        }
        lVar14 = local_c0;
      }
      uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (*(int *)(lVar12 + 0x2c) == 1) {
        local_58 = 0;
        local_78 = lVar12;
        local_70 = lVar14;
        local_68 = lVar15;
        local_60 = uVar8;
      }
      uVar9 = FUN_028c90c0(&local_78);
      iVar3 = 1;
      if ((uVar9 & 1) != 0) {
        iVar3 = 2;
      }
      puVar11 = (undefined8 *)*param_1;
    }
    plVar13 = (long *)puVar11[2];
    iVar4 = 3;
    if ((plVar13 != (long *)0x0) && (lVar12 = param_1[4], lVar12 != 0)) {
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar4 = FUN_027b78b0(lVar12,DAT_05573f54);
      if (iVar4 == -1) {
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        FUN_03ea9348(&local_c0,lVar12 + 8,iVar4);
        lVar15 = 0;
        if (local_c0 != 0) {
          lVar15 = local_b8;
        }
        lVar14 = local_c0;
      }
      uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (*(int *)(lVar12 + 0x2c) == 1) {
        local_58 = 0;
        local_78 = lVar12;
        local_70 = lVar14;
        local_68 = lVar15;
        local_60 = uVar8;
      }
      uVar9 = FUN_028c90c0(&local_78);
      iVar4 = 1;
      if ((uVar9 & 1) != 0) {
        iVar4 = 2;
      }
      puVar11 = (undefined8 *)*param_1;
    }
    plVar13 = (long *)puVar11[3];
    iVar5 = 3;
    if ((plVar13 != (long *)0x0) && (lVar12 = param_1[5], lVar12 != 0)) {
      local_78 = 0;
      local_60 = 0;
      local_58 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar5 = FUN_027b78b0(lVar12,DAT_05573f58);
      if (iVar5 == -1) {
        lVar15 = 0;
        lVar14 = 0;
      }
      else {
        FUN_03ea9348(&local_c0,lVar12 + 8,iVar5);
        lVar15 = 0;
        if (local_c0 != 0) {
          lVar15 = local_b8;
        }
        lVar14 = local_c0;
      }
      uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
      if (*(int *)(lVar12 + 0x2c) == 1) {
        local_58 = 0;
        local_78 = lVar12;
        local_70 = lVar14;
        local_68 = lVar15;
        local_60 = uVar8;
      }
      uVar9 = FUN_028c90c0(&local_78);
      iVar5 = 1;
      if ((uVar9 & 1) != 0) {
        iVar5 = 2;
      }
    }
    if (*(char *)(param_1[1] + 1) == '\0') {
      if (iVar5 != 3 && (iVar4 != 3 && (iVar1 != 3 && iVar3 != 3))) {
        if (iVar5 == 2 || (iVar4 == 2 || (iVar1 == 2 || iVar3 == 2))) {
LAB_028c903c:
          uVar10 = 2;
          goto LAB_028c9084;
        }
LAB_028c90ac:
        uVar10 = 1;
        goto LAB_028c9084;
      }
    }
    else {
      plVar13 = *(long **)(*param_1 + 0x20);
      if ((plVar13 != (long *)0x0) && (lVar12 = param_1[6], lVar12 != 0)) {
        local_78 = 0;
        local_60 = 0;
        local_58 = 0;
        local_70 = 0;
        local_68 = 0;
        iVar6 = FUN_027b78b0(lVar12,DAT_05573f60);
        if (iVar6 == -1) {
          lVar15 = 0;
          lVar14 = 0;
        }
        else {
          FUN_03ea9348(&local_c0,lVar12 + 8,iVar6);
          lVar15 = 0;
          if (local_c0 != 0) {
            lVar15 = local_b8;
          }
          lVar14 = local_c0;
        }
        uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
        if (*(int *)(lVar12 + 0x2c) == 1) {
          local_58 = 0;
          local_78 = lVar12;
          local_70 = lVar14;
          local_68 = lVar15;
          local_60 = uVar8;
        }
        uVar7 = FUN_028c90c0(&local_78);
        if (iVar5 != 3 && (iVar4 != 3 && (iVar1 != 3 && iVar3 != 3))) {
          if ((iVar5 == 2 || (iVar4 == 2 || (iVar1 == 2 || iVar3 == 2))) || (uVar7 & 1) != 0)
          goto LAB_028c903c;
          goto LAB_028c90ac;
        }
      }
    }
  }
  uVar10 = 3;
LAB_028c9084:
  *(undefined4 *)(param_1 + 8) = uVar10;
  return;
}

