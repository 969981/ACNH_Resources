
undefined8 FUN_03951588(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((iVar1 == iVar2) && ((int)param_1[1] == (int)param_2[1])) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

