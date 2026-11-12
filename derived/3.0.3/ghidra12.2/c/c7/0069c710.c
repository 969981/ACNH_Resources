
undefined8 FUN_0069c710(undefined8 *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 2);
  if (0 < (int)*(uint *)(param_1 + 2)) {
    plVar3 = (long *)*param_1;
    lVar5 = *param_3;
    lVar4 = 0xffffffff;
    do {
      if ((*plVar3 == lVar5) && (iVar1 = memcmp(plVar3 + 1,param_3 + 1,0x48), iVar1 == 0)) {
        if (lVar4 == 0) {
          return 0;
        }
        *param_2 = (int)plVar3[10];
        return 1;
      }
      lVar4 = lVar4 + -1;
      plVar3 = plVar3 + 0xb;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

