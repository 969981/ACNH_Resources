
void FUN_03973f28(int *param_1,long param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_44;
  
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(uint *)(param_2 + 0x28);
  uVar5 = *(uint *)(param_2 + 0x30);
  uVar2 = *(undefined2 *)(param_2 + 0x16);
  uVar3 = FUN_0390c768(*(undefined4 *)(param_2 + 0x1c));
  switch(*(undefined1 *)(param_2 + 0x5c)) {
  case 0:
    uVar6 = 0;
    uVar4 = 1;
    goto LAB_0397407c;
  case 1:
    uVar6 = 1;
    goto LAB_0397407c;
  case 2:
    uVar5 = *(uint *)(param_2 + 0x2c);
    uVar6 = 2;
    break;
  case 3:
    uVar6 = 8;
    uVar5 = 6;
    break;
  case 4:
    uVar6 = 3;
    uVar4 = uVar5;
LAB_0397407c:
    uVar5 = 1;
    break;
  case 5:
    uVar6 = 4;
    break;
  default:
    goto switchD_03973f80_caseD_6;
  case 8:
    FUN_0390c1b8(param_1,uVar3,uVar1,uVar4,(ulong)uVar5 / 6,uVar2,0);
    goto switchD_03973f80_caseD_6;
  }
  FUN_0390a734(param_1,uVar6,uVar3,uVar1,uVar4,uVar5,uVar2,0,0,1);
switchD_03973f80_caseD_6:
  uVar7 = *(undefined8 *)(param_2 + 0x90);
  uVar6 = **(undefined8 **)(*(long *)(param_2 + 0x68) + 0x28);
  *param_1 = (**(int **)(param_2 + 0x70) - *(int *)(*(long *)(param_2 + 0x68) + 0x10)) + -0x10;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = uVar6;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_038fd1e0(param_1 + 0x14);
  local_44 = (undefined4)uVar7;
  FUN_038fd790(param_1 + 0x14,&local_44);
  return;
}

