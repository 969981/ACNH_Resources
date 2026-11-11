
void FUN_00451fa0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  ulong *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04861a58;
  if (*(int *)(param_1 + 0x3d) != 0) {
    lVar2 = param_1[0x3c];
    lVar7 = (long)*(int *)(param_1 + 0x3d) << 3;
    do {
      puVar4 = *(undefined8 **)(lVar2 + -8 + lVar7);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4);
        (**(code **)(param_1[1] + 0x18))(param_1 + 1,puVar4,0x230);
      }
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  puVar1 = PTR_DAT_048607c0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x21c)) && (param_1[0x42] != 0)) {
    FUN_00421f90(puVar1,param_1[0x42],8,*(uint *)((long)param_1 + 0x21c) & 0x3fffffff);
  }
  param_1[0x42] = 0;
  *(undefined4 *)((long)param_1 + 0x21c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ec)) && (param_1[0x3c] != 0)) {
    FUN_00421f90(puVar1,param_1[0x3c],8,*(uint *)((long)param_1 + 0x1ec) & 0x3fffffff);
  }
  param_1[0x3c] = 0;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1dc)) && (param_1[0x3a] != 0)) {
    FUN_00421f90(puVar1,param_1[0x3a],0x10,*(uint *)((long)param_1 + 0x1dc) & 0x3fffffff);
  }
  param_1[0x3a] = 0;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    FUN_00421f90(puVar1,param_1[0x34],0x10,*(uint *)((long)param_1 + 0x1ac) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  iVar3 = *(int *)(param_1 + 0x33);
  param_1[0x34] = 0;
  if (0 < iVar3) {
    puVar5 = (uint *)(param_1[0x32] + (long)iVar3 * 0x38 + -0xc);
    do {
      puVar5[-1] = 0;
      if ((-1 < (int)*puVar5) && (*(long *)(puVar5 + -3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar5 + -3),8,*puVar5 & 0x3fffffff);
      }
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      iVar3 = iVar3 + -1;
      *puVar5 = 0x80000000;
      puVar5 = puVar5 + -0xe;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x19c)) && (param_1[0x32] != 0)) {
    FUN_00421f90(puVar1,param_1[0x32],0x38,*(uint *)((long)param_1 + 0x19c) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0x31);
  *(undefined4 *)((long)param_1 + 0x19c) = 0x80000000;
  param_1[0x32] = 0;
  if (0 < iVar3) {
    puVar6 = (ulong *)(param_1[0x30] + (long)iVar3 * 0x18 + -8);
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_0043dd50(*puVar6 & 0xfffffffffffffffe);
      }
      iVar3 = iVar3 + -1;
      puVar6 = puVar6 + -3;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x31) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x18c)) && (param_1[0x30] != 0)) {
    FUN_00421f90(puVar1,param_1[0x30],0x18,*(uint *)((long)param_1 + 0x18c) & 0x3fffffff);
  }
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0x80000000;
  FUN_00454810(param_1 + 1);
  return;
}

