
undefined8 FUN_008e4e10(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  undefined4 local_124;
  undefined *local_120;
  undefined *puStack_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  undefined *local_f8;
  float local_f0;
  undefined4 local_ec;
  float local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined *local_b0;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  undefined8 local_9c;
  float local_94;
  undefined4 uStack_90;
  float local_84 [5];
  
  iVar15 = *(int *)(param_3 + 0x20);
  iVar9 = *(int *)(param_3 + 0x24);
  iVar13 = *(int *)(param_3 + 0x10);
  iVar10 = *(int *)(param_3 + 0x14);
  iVar7 = *(int *)(param_2 + 0x20);
  iVar11 = *(int *)(param_2 + 0x24);
  iVar8 = *(int *)(param_2 + 0x10);
  iVar12 = *(int *)(param_2 + 0x14);
  iVar4 = iVar13;
  if (iVar8 <= iVar13) {
    iVar4 = iVar8;
  }
  iVar16 = iVar10;
  if (iVar12 <= iVar10) {
    iVar16 = iVar12;
  }
  iVar5 = iVar15;
  if (iVar15 <= iVar8) {
    iVar5 = iVar8;
  }
  iVar6 = iVar9;
  if (iVar9 <= iVar12) {
    iVar6 = iVar12;
  }
  if (iVar7 <= iVar4) {
    iVar4 = iVar7;
  }
  local_84[1] = 2.5;
  if (iVar11 <= iVar16) {
    iVar16 = iVar11;
  }
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  local_b0 = PTR_DAT_04bb59f0 + 0x10;
  local_a4 = 0x40200000;
  local_84[0] = ((float)iVar13 * 5.0 + (float)iVar15 * 5.0 + 5.0) * 0.5;
  local_94 = ((float)iVar10 * 5.0 + (float)iVar9 * 5.0 + 5.0) * 0.5;
  local_a8 = ((float)iVar8 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
  local_9c = CONCAT44(0x40200000,local_84[0]);
  if (iVar6 <= iVar11) {
    iVar6 = iVar11;
  }
  uStack_90 = 0x40200000;
  local_a0 = ((float)iVar12 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5;
  if (iVar6 + 1 != iVar16) {
    puVar1 = PTR_DAT_04bb3ea8 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    iVar15 = iVar4;
    local_84[2] = local_94;
    do {
      if ((((iVar15 < *(int *)(param_3 + 0x10) || *(int *)(param_3 + 0x20) < iVar15) ||
           (iVar16 < *(int *)(param_3 + 0x14))) || (*(int *)(param_3 + 0x24) < iVar16)) &&
         (((iVar15 < *(int *)(param_2 + 0x10) || (*(int *)(param_2 + 0x20) < iVar15)) ||
          ((iVar16 < *(int *)(param_2 + 0x14) || (*(int *)(param_2 + 0x24) < iVar16)))))) {
        local_e4 = 0x3f800000;
        local_d4 = 0x3f800000;
        local_c4 = 0x402000003f800000;
        local_ec = 0x40200000;
        local_dc = 0;
        local_cc = 0;
        local_f0 = (float)iVar15 * 5.0 + 2.5;
        local_e8 = (float)iVar16 * 5.0 + 2.5;
        local_bc = 0x4020000040200000;
        local_f8 = puVar1;
        uVar14 = FUN_03eafca0(&local_b0,&local_f8,0);
        if ((uVar14 & 1) != 0) {
          local_124 = 0x40c00000;
          local_120 = puVar2;
          puStack_118 = puVar3;
          local_110 = iVar15;
          iStack_10c = iVar16;
          local_108 = puVar3;
          local_100 = iVar15;
          iStack_fc = iVar16;
          iVar13 = FUN_008e465c(*param_1,&local_120,local_84,&local_124);
          local_120 = puVar2;
          if (iVar13 != 0) {
            return 1;
          }
        }
      }
      if (iVar15 < iVar5) {
        iVar15 = iVar15 + 1;
      }
      else {
        iVar16 = iVar16 + 1;
        iVar15 = iVar4;
      }
    } while ((iVar4 != iVar15) || (iVar6 + 1 != iVar16));
  }
  return 0;
}

