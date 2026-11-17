
uint FUN_03088364(undefined8 param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 auStack_2d7a [2];
  undefined1 local_2d78 [5792];
  undefined1 local_16d8 [6];
  undefined1 auStack_16d2 [2];
  undefined1 auStack_16d0 [5792];
  
  uVar3 = FUN_007ef180();
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar2 = 1;
  switch(*param_2) {
  case 0:
    goto switchD_030883b0_caseD_0;
  case 1:
    FUN_007ef010(local_16d8,param_1);
    FUN_007e4920(auStack_16d0,local_16d8);
    uVar2 = FUN_007e68d0(auStack_16d0);
    uVar4 = 0xe001fc;
    bVar1 = 0x17 < uVar2;
    break;
  case 2:
    FUN_007ef010(local_16d8,param_1);
    FUN_007e4920(auStack_16d0,local_16d8);
    uVar2 = FUN_007e68d0(auStack_16d0);
    uVar4 = 0x1c7e00;
    bVar1 = 0x14 < uVar2;
    break;
  case 3:
    FUN_007ef010(local_16d8,param_1);
    FUN_007e4920(auStack_16d0,local_16d8);
    uVar2 = FUN_007e68d0(auStack_16d0);
    goto LAB_03088500;
  case 4:
    FUN_007ef010(auStack_2d7a,param_1);
    FUN_007e4920(local_2d78,auStack_2d7a);
    uVar3 = FUN_007e4bb0(local_2d78);
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    uVar3 = FUN_0344ca60(param_1);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
    FUN_007ef010(auStack_16d2,param_1);
    FUN_007e4920(auStack_16d0,auStack_16d2);
    uVar2 = FUN_007e68d0(auStack_16d0);
LAB_03088500:
    bVar1 = 0x19 < uVar2;
    uVar4 = 0x3038000;
    break;
  default:
    uVar2 = 0;
    goto switchD_030883b0_caseD_0;
  }
  uVar2 = (uint)!bVar1 & uVar4 >> (ulong)(uVar2 & 0x1f);
switchD_030883b0_caseD_0:
  return uVar2;
}

