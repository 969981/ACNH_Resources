
undefined4 FUN_00429ab0(long *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  char *__s1;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == (char *)0x0) {
    pcVar6 = (char *)0x0;
    __s1 = (char *)*param_1;
    if (__s1 == (char *)0x0) goto LAB_00429b40;
  }
  else {
    sVar3 = strlen(param_2);
    pcVar6 = param_2 + sVar3;
    __s1 = (char *)*param_1;
    if (__s1 == param_2) {
LAB_00429b40:
      uVar4 = 1;
      if ((char *)param_1[1] < pcVar6) {
        uVar4 = 0xffffffff;
      }
      uVar5 = 0;
      if ((char *)param_1[1] != pcVar6) {
        uVar5 = uVar4;
      }
      return uVar5;
    }
  }
  uVar7 = param_1[1] - (long)__s1;
  uVar8 = (long)pcVar6 - (long)param_2;
  sVar3 = uVar7;
  if (uVar8 <= uVar7) {
    sVar3 = uVar8;
  }
  iVar2 = memcmp(__s1,param_2,sVar3);
  uVar4 = 1;
  if (iVar2 < 0) {
    uVar4 = 0xffffffff;
  }
  uVar5 = 1;
  if (uVar7 < uVar8) {
    uVar5 = 0xffffffff;
  }
  uVar1 = 0;
  if (uVar7 != uVar8) {
    uVar1 = uVar5;
  }
  if (iVar2 == 0) {
    uVar4 = uVar1;
  }
  return uVar4;
}

