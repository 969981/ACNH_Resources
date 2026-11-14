
bool FUN_01ce5a60(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*param_2 == '\0') {
    uVar5 = 0;
  }
  else if (param_2[1] == '\0') {
    uVar5 = 1;
  }
  else if (param_2[2] == '\0') {
    uVar5 = 2;
  }
  else if (param_2[3] == '\0') {
    uVar5 = 3;
  }
  else if (param_2[4] == '\0') {
    uVar5 = 4;
  }
  else if (param_2[5] == '\0') {
    uVar5 = 5;
  }
  else if (param_2[6] == '\0') {
    uVar5 = 6;
  }
  else {
    uVar5 = 7;
    if (param_2[7] != '\0') {
      uVar5 = 0xffffffffffffffff;
    }
  }
  uVar4 = 0;
  if ((int)uVar5 != -1) {
    uVar4 = uVar5;
  }
  if (*param_1 == '\0') {
    uVar5 = 0;
  }
  else if (param_1[1] == '\0') {
    uVar5 = 1;
  }
  else if (param_1[2] == '\0') {
    uVar5 = 2;
  }
  else if (param_1[3] == '\0') {
    uVar5 = 3;
  }
  else if (param_1[4] == '\0') {
    uVar5 = 4;
  }
  else if (param_1[5] == '\0') {
    uVar5 = 5;
  }
  else if (param_1[6] == '\0') {
    uVar5 = 6;
  }
  else {
    uVar5 = 7;
    if (param_1[7] != '\0') {
      uVar5 = 0xffffffffffffffff;
    }
  }
  uVar7 = 0;
  if ((int)uVar5 != -1) {
    uVar7 = uVar5;
  }
  if (uVar7 != uVar4) {
    return false;
  }
  if (uVar4 == 0) {
    return true;
  }
  uVar5 = 1;
  uVar7 = 0;
  do {
    uVar6 = uVar5;
    pcVar1 = param_1 + uVar7;
    pcVar2 = param_2 + uVar7;
    bVar3 = *pcVar1 != *pcVar2;
    uVar5 = (ulong)((int)uVar6 + 1);
    uVar7 = uVar6;
  } while ((!bVar3 && uVar6 <= uVar4) && (bVar3 || uVar4 != uVar6));
  return *pcVar1 == *pcVar2;
}

