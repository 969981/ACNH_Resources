
undefined8 FUN_00157a78(long *param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xa9) = param_2;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar2 = 0;
    }
    else {
      lVar3 = *param_1;
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_0014b7c4(lVar3,3,2);
      }
      lVar2 = FUN_0014a41c(lVar3,param_3,param_1[0xa6],(int)param_1[0xa7]);
      if (*(long *)(lVar3 + 0xe8) != 0) {
        FUN_0014b80c(lVar3,3);
      }
      if (lVar2 != 0) goto LAB_00157a98;
      FUN_0014b378(param_3);
    }
    uVar1 = 0x1b;
  }
  else {
    lVar2 = 0;
LAB_00157a98:
    uVar1 = 0;
  }
  param_1[0xa8] = lVar2;
  *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 1;
  return uVar1;
}

