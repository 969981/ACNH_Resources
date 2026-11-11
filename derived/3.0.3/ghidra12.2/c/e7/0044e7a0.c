
undefined8 FUN_0044e7a0(long *param_1,int *param_2,long param_3,int param_4)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((-1 < *param_2) && (0 < param_4)) {
    lVar3 = *(long *)(*param_1 + 0x18) + (long)*param_2 * 0x18;
    puVar4 = (uint *)(lVar3 + 0x10);
    uVar5 = (ulong)*puVar4;
    iVar2 = 0;
    do {
      if (0 < (int)uVar5) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          plVar1 = (long *)(*(long *)(lVar3 + 8) + lVar6);
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x10;
          *(long *)(*plVar1 + param_3) = plVar1[1];
          uVar5 = (ulong)(int)*puVar4;
        } while (lVar7 < (long)uVar5);
      }
      iVar2 = iVar2 + 1;
      param_3 = param_2[1] + param_3;
    } while (iVar2 != param_4);
  }
  return 0;
}

