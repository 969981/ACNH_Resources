
void FUN_0018b8f0(long param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = *(char **)(param_1 + 0x18);
  sVar2 = strlen(param_2);
  uVar3 = sVar2 + 1;
  pcVar7 = pcVar6;
  if (uVar3 < 2) {
LAB_0018b934:
    if (uVar3 == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *param_2;
      pcVar7 = pcVar6;
      if (cVar1 == '\0') goto LAB_0018b934;
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 1;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar7;
    } while (uVar3 != 1);
  }
  uVar4 = uVar3 - 1;
  uVar5 = uVar3 & 3;
  if (uVar5 != 0) {
    uVar3 = uVar3 & 0xfffffffffffffffc;
    pcVar6 = pcVar7;
    do {
      uVar5 = uVar5 - 1;
      pcVar7 = pcVar6 + 1;
      *pcVar6 = '\0';
      pcVar6 = pcVar7;
    } while (uVar5 != 0);
  }
  if (2 < uVar4) {
    do {
      uVar3 = uVar3 - 4;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    } while (uVar3 != 0);
  }
  return;
}

