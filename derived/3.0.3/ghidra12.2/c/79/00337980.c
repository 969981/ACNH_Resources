
bool FUN_00337980(int *param_1,long *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = param_4;
  *(long *)(param_1 + 2) = (long)param_4 * 0xa0;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,(long)param_4 * 0xa0,0x80);
  *(long *)(param_1 + 6) = lVar2;
  if (lVar2 == 0) {
    FUN_0032c410("[Stripe] Heap does not have enough memory for stripe array.\n");
    return false;
  }
  if (0 < *param_1) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar5 = lVar5 + 1;
      *(undefined1 *)(*(long *)(param_1 + 6) + lVar4 + 0x90) = 0;
      *(undefined4 *)(*(long *)(param_1 + 6) + lVar4 + 0x70) = 0;
      lVar1 = *(long *)(param_1 + 6) + lVar4;
      lVar4 = lVar4 + 0xa0;
      *(undefined8 *)(lVar1 + 0x68) = 0;
    } while (lVar5 < *param_1);
  }
  uVar3 = FUN_0033c2c0(param_3,param_2);
  *(undefined8 *)(param_1 + 8) = uVar3;
  return lVar2 != 0;
}

