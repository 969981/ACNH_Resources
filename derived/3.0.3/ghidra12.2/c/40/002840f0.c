
undefined8 FUN_002840f0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if ((param_2 != 0) && (*(uint *)((long)param_1 + 0x5f4) != 0)) {
    uVar3 = 0;
    do {
      if (*(int *)(param_1[2] + uVar3 * 4) == param_2) {
        lVar1 = *param_1;
        lVar2 = param_1[1];
        *(undefined4 *)(param_1[2] + uVar3 * 4) = 0;
        *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
        *(undefined8 *)(lVar1 + uVar3 * 8) = 0;
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)((long)param_1 + 0x5f4) != uVar3);
  }
  return 0;
}

