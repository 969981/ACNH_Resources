
void FUN_03581db8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (DAT_05771228 == param_4) {
    lVar3 = 0;
  }
  else if (DAT_05771298 == param_4) {
    lVar3 = 1;
  }
  else if (DAT_05771308 == param_4) {
    lVar3 = 2;
  }
  else if (DAT_05771378 == param_4) {
    lVar3 = 3;
  }
  else if (DAT_057713e8 == param_4) {
    lVar3 = 4;
  }
  else if (DAT_05771458 == param_4) {
    lVar3 = 5;
  }
  else if (DAT_057714c8 == param_4) {
    lVar3 = 6;
  }
  else if (DAT_05771538 == param_4) {
    lVar3 = 7;
  }
  else if (DAT_057715a8 == param_4) {
    lVar3 = 8;
  }
  else if (DAT_05771618 == param_4) {
    lVar3 = 9;
  }
  else {
    if (DAT_05771688 != param_4) {
      uVar2 = 0;
      *param_2 = 0;
      goto LAB_03581f20;
    }
    lVar3 = 10;
  }
  lVar1 = FUN_033d0598(&DAT_0548e140);
  lVar1 = lVar1 + lVar3 * 8;
  *param_2 = *(undefined4 *)(lVar1 + 0x338);
  uVar2 = *(undefined4 *)(lVar1 + 0x33c);
LAB_03581f20:
  *param_3 = uVar2;
  return;
}

