
undefined8 FUN_03b16590(undefined8 *param_1,char *param_2,long param_3,undefined8 param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char *__dest;
  uint uVar4;
  
  if (param_2 == (char *)0x0) {
    lVar3 = FUN_0037e610(param_3,"LocalizeReplaceOn");
    if ((lVar3 == 0) || (*(char *)(lVar3 + 10) != '\0')) {
      param_3 = param_3 + 0xb0;
    }
    else {
      param_3 = lVar3 + (ulong)*(uint *)(lVar3 + 4);
    }
    FUN_03b15c30(param_1,param_3,param_4);
  }
  else {
    cVar2 = *param_2;
    if (cVar2 == '-') {
      return 0;
    }
    if (cVar2 == '@') {
      return 0;
    }
    if (cVar2 == '=') {
      FUN_03b15e20(param_1,param_2 + 1,param_4);
    }
    else {
      __dest = (char *)*param_1;
      if (__dest != param_2) {
        lVar3 = 0;
        do {
          pcVar1 = param_2 + lVar3;
          lVar3 = lVar3 + 1;
        } while (*pcVar1 != '\0');
        uVar4 = (int)lVar3 - 1;
        if (*(int *)((long)param_1 + 0xc) <= (int)uVar4) {
          uVar4 = *(int *)((long)param_1 + 0xc) - 1;
        }
        if ((int)uVar4 < 1) {
          uVar4 = 0;
        }
        else {
          memcpy(__dest,param_2,(ulong)uVar4);
          __dest = __dest + uVar4;
        }
        *__dest = '\0';
        *(uint *)(param_1 + 1) = uVar4;
        return 1;
      }
    }
  }
  return 1;
}

