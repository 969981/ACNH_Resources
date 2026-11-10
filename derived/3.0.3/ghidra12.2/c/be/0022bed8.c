
int FUN_0022bed8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [4];
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  undefined4 local_68 [2];
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    FUN_00228480(auStack_2c,0);
    FUN_00228460(auStack_28,*(undefined8 *)(param_1 + 6));
    *(long *)(param_1 + 6) = *(long *)(param_1 + 6) + 1;
    FUN_00228460(auStack_3c,*(undefined8 *)(param_1 + 8));
    FUN_00228460(auStack_34,*(undefined8 *)(param_1 + 10));
    local_68[0] = 1;
    local_58 = 0xc;
    local_48 = 0x10;
    local_60 = auStack_2c;
    local_50 = auStack_3c;
    FUN_0028d4cc(auStack_78);
    FUN_0028d564(auStack_78,param_1[8],param_1[9],param_1[10],param_1[0xb]);
    uVar4 = FUN_0028d5ac(auStack_78);
    FUN_00228480(auStack_88,uVar4);
    uVar4 = FUN_0028d5ac(auStack_78);
    FUN_00228480(auStack_84,uVar4);
    uVar4 = FUN_0028d5ac(auStack_78);
    FUN_00228480(auStack_80,uVar4);
    uVar4 = FUN_0028d5ac(auStack_78);
    FUN_00228480(auStack_7c,uVar4);
    memset(auStack_98,0,0x10);
    FUN_00221dc8(auStack_a8,auStack_98,auStack_88,0x10,0,0,local_68);
    iVar5 = FUN_00228490(auStack_98);
    iVar7 = *param_1;
    iVar6 = param_1[1];
    param_1[(ulong)(iVar7 + iVar6 & 3) + 2] = iVar5;
    if (iVar7 == 4) {
      param_1[1] = iVar6 + 1U & 3;
    }
    else {
      *param_1 = iVar7 + 1;
    }
    iVar5 = FUN_00228490(auStack_94);
    iVar7 = *param_1;
    iVar6 = param_1[1];
    param_1[(ulong)(iVar7 + iVar6 & 3) + 2] = iVar5;
    if (iVar7 == 4) {
      param_1[1] = iVar6 + 1U & 3;
    }
    else {
      *param_1 = iVar7 + 1;
    }
    iVar5 = FUN_00228490(auStack_90);
    iVar7 = *param_1;
    iVar6 = param_1[1];
    param_1[(ulong)(iVar7 + iVar6 & 3) + 2] = iVar5;
    if (iVar7 == 4) {
      param_1[1] = iVar6 + 1U & 3;
    }
    else {
      *param_1 = iVar7 + 1;
    }
    iVar6 = FUN_00228490(auStack_8c);
    iVar7 = *param_1;
    uVar2 = param_1[1];
    uVar1 = iVar7 + uVar2;
    bVar3 = iVar7 != 4;
    if (bVar3) {
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar2 + 1 & 3;
    if (bVar3) {
      uVar8 = uVar2;
    }
    param_1[(ulong)(uVar1 & 3) + 2] = iVar6;
  }
  else {
    uVar8 = param_1[1];
  }
  *param_1 = iVar7 + -1;
  param_1[1] = uVar8 + 1 & 3;
  return param_1[(ulong)(uVar8 & 3) + 2];
}

