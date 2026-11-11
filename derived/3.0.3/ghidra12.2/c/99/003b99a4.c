
void FUN_003b99a4(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (((*param_2 == 0x52415346) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] - 0x10000U < 0x10501)) {
    uVar1 = *(undefined8 *)param_2;
    uVar3 = *(undefined8 *)(param_2 + 4);
    param_1[1] = *(undefined8 *)(param_2 + 2);
    param_1[2] = uVar3;
    *param_1 = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 6);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    param_1[5] = *(undefined8 *)(param_2 + 10);
    param_1[6] = uVar2;
    param_1[3] = uVar1;
    param_1[4] = uVar3;
  }
  return;
}

