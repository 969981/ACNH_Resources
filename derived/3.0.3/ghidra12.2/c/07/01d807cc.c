
undefined8 FUN_01d807cc(long *param_1,uint param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_4 == (int)param_1[1]) {
    lVar1 = param_1[2];
    uVar2 = (**(code **)(*param_1 + 0x68))();
    if ((char)lVar1 == '\0') {
      if (uVar2 < param_2) goto LAB_01d80824;
    }
    else if (uVar2 != param_2) goto LAB_01d80824;
    uVar3 = 1;
    *(uint *)((long)param_1 + 0xc) = param_2;
  }
  else {
LAB_01d80824:
    uVar3 = 0;
  }
  return uVar3;
}

