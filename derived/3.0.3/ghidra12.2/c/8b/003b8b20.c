
undefined8
FUN_003b8b20(long *param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  uint uVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  long *__s;
  char acStack_2df [638];
  undefined1 local_61;
  
  if (*param_4 != '/') {
    sVar3 = strlen(param_4);
    __s = param_1 + 3;
    sVar4 = strlen((char *)__s);
    if (0x27e < sVar4 + sVar3) {
      return 0;
    }
    uVar2 = (uint)sVar4;
    if (uVar2 < 0x7fffffff) {
      if (0x27d < (int)uVar2) {
        uVar2 = 0x27e;
      }
      if (uVar2 == 0) {
        pcVar8 = acStack_2df;
      }
      else {
        pcVar7 = acStack_2df;
        do {
          lVar1 = *__s;
          pcVar8 = pcVar7;
          if ((char)lVar1 == '\0') break;
          __s = (long *)((long)__s + 1);
          uVar2 = uVar2 - 1;
          pcVar8 = pcVar7 + 1;
          *pcVar7 = (char)lVar1;
          pcVar7 = pcVar8;
        } while (uVar2 != 0);
      }
      *pcVar8 = '\0';
    }
    do {
      lVar1 = *__s;
      __s = (long *)((long)__s + 1);
    } while ((char)lVar1 != '\0');
    sVar5 = strlen(acStack_2df);
    sVar4 = 0x27e - sVar5;
    if (sVar5 + sVar3 + 1 < 0x27f) {
      sVar4 = sVar3 + 1;
    }
    strncat(acStack_2df,param_4,sVar4);
    param_4 = acStack_2df;
    local_61 = 0;
  }
  uVar6 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar6;
}

