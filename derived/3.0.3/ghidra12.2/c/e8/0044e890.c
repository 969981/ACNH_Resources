
undefined8 FUN_0044e890(long *param_1,int *param_2,long param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if ((-1 < *param_2) && (0 < param_5)) {
    lVar2 = *(long *)(*param_1 + 0x38) + (long)*param_2 * 0x18;
    iVar1 = *(int *)(lVar2 + 0x10);
    if (0 < iVar1) {
      lVar2 = *(long *)(lVar2 + 8);
      iVar3 = 0;
      do {
        puVar4 = (undefined8 *)(lVar2 + (long)iVar1 * 0x10 + -8);
        lVar5 = (long)iVar1;
        do {
          lVar5 = lVar5 + -1;
          (*(code *)*puVar4)(puVar4[-1] + param_3);
          puVar4 = puVar4 + -2;
        } while (0 < lVar5);
        iVar3 = iVar3 + 1;
        param_3 = param_2[1] + param_3;
      } while (iVar3 != param_5);
    }
  }
  return 0;
}

