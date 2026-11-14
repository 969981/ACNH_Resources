
undefined8 FUN_01be8314(undefined4 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  
  switch(*param_1) {
  case 0:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d";
    break;
  case 1:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_%04d";
    goto LAB_01be8384;
  case 2:
  case 4:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_%04d_L";
    goto LAB_01be8384;
  case 3:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_%04d_R";
LAB_01be8384:
    FUN_038d1270(param_2,pcVar2,uVar1,*(undefined2 *)((long)param_1 + 6));
    return 1;
  case 5:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_SPACE_01";
    break;
  case 6:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_SPACE_02";
    break;
  case 7:
    uVar1 = *(undefined2 *)(param_1 + 1);
    pcVar2 = "%04d_SPACE_03";
    break;
  default:
    return 0;
  }
  FUN_038d1270(param_2,pcVar2,uVar1);
  return 1;
}

