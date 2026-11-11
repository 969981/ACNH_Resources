
void FUN_004486a0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_04861500;
  lVar3 = (long)*(int *)(param_1 + 0xd);
  if (0 < *(int *)(param_1 + 0xd)) {
    do {
      lVar5 = lVar3 + -1;
      FUN_0044cbd0(*(undefined8 *)(param_1[0xc] + lVar3 * 8 + -8));
      lVar3 = lVar5;
    } while (0 < lVar5);
  }
  FUN_0043d280(param_1 + 0x14);
  puVar2 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    FUN_00421f90(puVar2,param_1[0x12],8,*(uint *)((long)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_0043cfb0(param_1 + 0x10);
  if (0 < *(int *)((long)param_1 + 0x7c)) {
    lVar3 = 0;
    uVar4 = (ulong)(*(int *)((long)param_1 + 0x7c) + 1);
    do {
      if (*(long *)(param_1[0xe] + lVar3) != -1) {
        *(undefined8 *)(param_1[0xe] + lVar3) = 0xffffffffffffffff;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar4 != 0);
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = uVar1 & 0x80000000;
  if ((-1 < (int)uVar1) && (param_1[0xe] != 0)) {
    (**(code **)(*(long *)puVar2 + 0x18))
              (puVar2,param_1[0xe],(long)(*(int *)((long)param_1 + 0x7c) * 0x10 + 0x10));
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_00421f90(puVar2,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar2,param_1[10],8,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 6));
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar2,param_1[4],8,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_0046b6c0(param_1);
  return;
}

