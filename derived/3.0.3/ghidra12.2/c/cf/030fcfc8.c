
void FUN_030fcfc8(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float local_40 [3];
  int local_34;
  
  lVar8 = *(long *)(param_1 + 8);
  if (((*(int *)(param_2 + 0xc) != 0) && ((*(byte *)(param_2 + 8) & 1) != 0)) &&
     (lVar9 = *(long *)(lVar8 + 0x328), lVar9 != 0)) {
    local_34 = FUN_02a8efb8(param_2);
    if (local_34 == 3) {
      local_40[0] = 0.0;
      FUN_02b677c0(local_40,*(undefined4 *)(param_2 + 0xc));
      plVar7 = (long *)(lVar8 + 0xc58) + (ulong)(uint)local_40[0] * 0xc;
      if (0xf < (uint)local_40[0]) {
        plVar7 = (long *)(lVar8 + 0xc58);
      }
      if (0x10 < (int)local_40[0]) {
        return;
      }
    }
    else {
      if (local_34 == 2) {
        local_40[0] = 0.0;
        FUN_02b67620(local_40);
        plVar5 = (long *)(lVar8 + 0x848);
        plVar7 = plVar5 + (ulong)(uint)local_40[0] * 0xd;
        bVar2 = 9 < (uint)local_40[0];
        bVar3 = SBORROW4((int)local_40[0],10);
        iVar1 = (int)local_40[0] - 10;
        bVar4 = local_40[0] == 1.4013e-44;
      }
      else {
        if (local_34 != 1) {
          return;
        }
        local_40[0] = 0.0;
        FUN_02b673a0(local_40);
        plVar5 = (long *)(lVar8 + 0x508);
        plVar7 = plVar5 + (ulong)(uint)local_40[0] * 0xd;
        bVar2 = 7 < (uint)local_40[0];
        bVar3 = SBORROW4((int)local_40[0],8);
        iVar1 = (int)local_40[0] - 8;
        bVar4 = local_40[0] == 1.12104e-44;
      }
      if (bVar2) {
        plVar7 = plVar5;
      }
      if (!bVar4 && iVar1 < 0 == bVar3) {
        return;
      }
    }
    uVar12 = 0x40200000;
    local_40[1] = 0.0;
    fVar11 = (float)*(int *)(param_2 + 0x1c);
    local_40[2] = fVar11 * 5.0 + 2.5;
    local_40[0] = (float)*(int *)(param_2 + 0x18) * 5.0 + 2.5;
    uVar10 = FUN_030f530c(lVar8,local_40);
    lVar8 = (*(long **)(lVar9 + 0x230))[1 < *(uint *)(lVar9 + 0x228)];
    lVar6 = **(long **)(lVar9 + 0x230);
    *(undefined4 *)(plVar7 + 6) = uVar10;
    *(float *)((long)plVar7 + 0x34) = fVar11;
    *(undefined4 *)(plVar7 + 7) = uVar12;
    plVar7[10] = lVar8;
    plVar7[8] = lVar9;
    plVar7[9] = lVar6;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  return;
}

