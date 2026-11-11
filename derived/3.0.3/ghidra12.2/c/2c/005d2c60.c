
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d2c60(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  uVar6 = (ulong)*(uint *)(param_1 + 4);
  *param_1 = &PTR_LAB_048df7d8;
  if (0 < (int)*(uint *)(param_1 + 4)) {
    lVar4 = 0;
    lVar7 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[3] + lVar4));
      uVar6 = (ulong)*(int *)(param_1 + 4);
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x70;
    } while (lVar7 < (long)uVar6);
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 0) {
    lVar7 = param_1[3] + (long)iVar5 * 0x70 + 0x10;
    *(undefined4 *)(param_1 + 4) = 0;
    do {
      FUN_004385d0(lVar7);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      lVar7 = lVar7 + 0x70;
    } while (uVar1 != 0);
  }
  else if (iVar5 != 0) {
    lVar7 = param_1[3] + (long)iVar5 * 0x70 + -0x60;
    *(undefined4 *)(param_1 + 4) = 0;
    do {
      FUN_004385e0(lVar7);
      uVar1 = (int)uVar6 - 1;
      uVar6 = (ulong)uVar1;
      lVar7 = lVar7 + -0x70;
    } while (uVar1 != 0);
  }
  uVar3 = DAT_0413f500;
  iVar5 = *(int *)(param_1 + 4);
  fVar8 = (float)DAT_0413f500;
  uVar6 = (ulong)DAT_0413f500 >> 0x20;
  fVar9 = (float)_DAT_0413f508;
  uVar2 = (ulong)_DAT_0413f508 >> 0x20;
  param_1[7] = _DAT_0413f508;
  param_1[6] = uVar3;
  param_1[9] = CONCAT44(-(float)uVar2,-fVar9);
  param_1[8] = CONCAT44(-(float)uVar6,-fVar8);
  if (0 < iVar5) {
    lVar7 = param_1[3] + (long)iVar5 * 0x70 + -0x60;
    do {
      FUN_004385e0(lVar7);
      iVar5 = iVar5 + -1;
      lVar7 = lVar7 + -0x70;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[3],0x70,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

