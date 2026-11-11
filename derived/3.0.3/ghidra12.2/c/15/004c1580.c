
void FUN_004c1580(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined1 local_2c0 [16];
  ulong local_2b0;
  undefined8 local_2a8;
  int local_2a0;
  ulong local_238;
  undefined8 local_1a0;
  undefined8 uStack_198;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = -0x8000000000000000;
  if (*(int *)(param_1 + 6) == 0) {
    uVar10 = 0;
  }
  else {
    plVar13 = (long *)param_1[5];
    uVar11 = *(undefined8 *)PTR_PTR_04bd4d20;
    lVar14 = (long)*(int *)(param_1 + 6) << 3;
    do {
      if (1 < *(ulong *)*plVar13) {
        if (*(int *)(*plVar13 + 0x1c) == 2) {
          *(undefined1 *)(param_1 + 0x13) = 1;
        }
        FUN_00451ea0(&local_2a8);
        lVar2 = FUN_004c0890(param_1,*plVar13,*param_1);
        FUN_00452260(&local_2a8,lVar2);
        uVar8 = *(ulong *)*plVar13;
        uVar3 = FUN_00428440(lVar2);
        uVar5 = 0;
        if ((uVar3 & 0x1f) == 1 && lVar2 != 0) {
          uVar5 = 0x11;
        }
        FUN_00453b70(&local_2a8,uVar8 & 0xfffffffffffffffe,0,uVar5);
        local_1a0 = param_1[10];
        local_238 = local_238 | 0xc0000;
        uStack_198 = 0;
        if ((*(byte *)(*plVar13 + 0x20) >> 1 & 1) != 0) {
          puVar4 = (undefined8 *)FUN_00438810(8);
          *puVar4 = 0;
          uVar1 = *(uint *)(param_1 + 0x12);
          if (uVar1 == (*(uint *)((long)param_1 + 0x94) & 0x3fffffff)) {
            FUN_00426990(uVar11,param_1 + 0x11,8);
            uVar1 = *(uint *)(param_1 + 0x12);
          }
          uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
          *(undefined8 **)(param_1[0x11] + uVar3) = puVar4;
          *(uint *)(param_1 + 0x12) = uVar1 + 1;
          lVar2 = *(long *)(param_1[0x11] + uVar3);
          FUN_0043c080(lVar2,*plVar13);
          local_2c0._8_8_ = 0;
          local_2b0 = 0;
          if (lVar2 == 0) {
            local_2c0 = ZEXT816(0);
            local_2b0 = 0;
          }
          else {
            local_2c0 = FUN_00446e00(lVar2,&DAT_04c172e8);
            uVar3 = local_2b0;
            if (local_2c0._8_8_ == 0) {
              local_2b0 = 0;
              uVar8 = local_2b0;
            }
            else {
              uVar8 = FUN_00428370(local_2c0._8_8_);
              uVar3 = local_2b0;
              if ((uVar8 & 1) != 0) {
                FUN_0043dd30(uVar8 & 0xfffffffffffffffe);
                uVar3 = local_2b0;
              }
            }
            local_2b0 = uVar8;
            if ((uVar3 & 1) != 0) {
              FUN_0043dd50(uVar3 & 0xfffffffffffffffe);
            }
          }
          FUN_00452380(&local_2a8,local_2c0);
          if ((local_2b0 & 1) != 0) {
            FUN_0043dd50(local_2b0 & 0xfffffffffffffffe);
          }
        }
        uVar5 = (*(code *)**(undefined8 **)*param_1)();
        uVar5 = FUN_004535c0(&local_2a8,uVar5);
        if ((uint)local_70 == (local_70._4_4_ & 0x3fffffff)) {
          FUN_00426990(uVar11,&local_78,8);
        }
        *(undefined8 *)(local_78 + (long)(int)local_70 * 8) = uVar5;
        local_70 = CONCAT44(local_70._4_4_,(int)local_70 + 1);
        FUN_00451fa0(&local_2a8);
      }
      plVar13 = plVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
    uVar10 = (uint)local_70;
  }
  lVar14 = local_78;
  uVar11 = (*(code *)**(undefined8 **)*param_1)();
  uVar11 = FUN_00428650(lVar14,uVar10,0,uVar11);
  puVar4 = (undefined8 *)FUN_00426d40(param_1[10],0x800000);
  *puVar4 = uVar11;
  if (*(int *)(param_1 + 0xe) != 0) {
    uVar3 = 0;
    lVar14 = (long)*(int *)(param_1 + 0xe) * 0x28;
    pbVar9 = (byte *)(param_1[0xd] + 0x20);
    do {
      uVar3 = ((ulong)(*pbVar9 >> 1 ^ 0xffffffff) & 1) + (uVar3 & 0xffffffff);
      lVar14 = lVar14 + -0x28;
      pbVar9 = pbVar9 + 0x28;
    } while (lVar14 != 0);
    plVar13 = (long *)(*(code *)**(undefined8 **)*param_1)();
    puVar4 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,uVar3 * 0x10 + 0x10,0);
    *puVar4 = 0;
    puVar4[1] = uVar3;
    param_1[0x14] = puVar4;
    if (*(int *)(param_1 + 0xe) != 0) {
      iVar12 = 0;
      pbVar9 = (byte *)(param_1[0xd] + 0x20);
      lVar14 = (long)*(int *)(param_1 + 0xe) * 0x28;
      do {
        while ((*pbVar9 >> 1 & 1) == 0) {
          FUN_004225b0(&local_2a8);
          if ((*pbVar9 & 1) == 0) {
            puVar7 = &DAT_040f7cb0;
          }
          else {
            puVar7 = &DAT_0407f988;
          }
          FUN_00423880(&local_2a8,puVar7,0xffffffff);
          FUN_00423880(&local_2a8,*(ulong *)(pbVar9 + -0x20) & 0xfffffffffffffffe,0xffffffff);
          uVar11 = FUN_004adce0(local_2a8,local_2a0 + -1);
          *(undefined8 *)(param_1[0x14] + (long)iVar12 * 0x10 + 0x18) = uVar11;
          if ((*pbVar9 & 1) == 0) {
            uVar11 = FUN_004c0890(param_1,*(undefined8 *)(pbVar9 + -0x18),*param_1);
            *(undefined8 *)(pbVar9 + -8) = uVar11;
          }
          else {
            uVar11 = *(undefined8 *)(pbVar9 + -0x10);
          }
          *(undefined8 *)(param_1[0x14] + (long)iVar12 * 0x10 + 0x10) = uVar11;
          iVar12 = iVar12 + 1;
          FUN_00422550(&local_2a8);
          lVar14 = lVar14 + -0x28;
          pbVar9 = pbVar9 + 0x28;
          if (lVar14 == 0) goto LAB_004c1994;
        }
        if ((*pbVar9 & 1) == 0) {
          uVar11 = FUN_004c0890(param_1,*(undefined8 *)(pbVar9 + -0x18),*param_1);
          *(undefined8 *)(pbVar9 + -8) = uVar11;
        }
        lVar14 = lVar14 + -0x28;
        pbVar9 = pbVar9 + 0x28;
      } while (lVar14 != 0);
LAB_004c1994:
      puVar4 = (undefined8 *)param_1[0x14];
    }
    puVar6 = (undefined8 *)FUN_00426d40(param_1[10],0x8000);
    *puVar6 = puVar4;
  }
  lVar14 = local_70;
  uVar1 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_78 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_78,8,uVar1 & 0x3fffffff);
  }
  return;
}

