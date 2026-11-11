
undefined4 FUN_00467120(ulong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined4 uVar4;
  char *pcVar6;
  char *pcVar5;
  
  pcVar1 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  if (pcVar2 <= pcVar1) {
    return 5;
  }
  pcVar6 = pcVar1;
  while (pcVar5 = pcVar6 + 1, *pcVar6 != '#') {
    pcVar6 = pcVar5;
    if (pcVar2 <= pcVar5) {
      return 5;
    }
  }
  uVar3 = FUN_0043a700(pcVar1,(long)pcVar2 - (long)pcVar1,"-1.#INF00");
  if ((uVar3 & 1) != 0) {
    return 0;
  }
  uVar3 = FUN_0043a700(*param_1,param_1[1] - *param_1,"1.#INF00");
  if ((uVar3 & 1) != 0) {
    return 1;
  }
  uVar3 = FUN_0043a700(*param_1,param_1[1] - *param_1,"-1.#QNAN0");
  if ((uVar3 & 1) != 0) {
    return 2;
  }
  uVar3 = FUN_0043a700(*param_1,param_1[1] - *param_1,"1.#QNAN0");
  if ((uVar3 & 1) != 0) {
    return 3;
  }
  uVar3 = FUN_0043a700(*param_1,param_1[1] - *param_1,"-1.#IND00");
  uVar4 = 4;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

