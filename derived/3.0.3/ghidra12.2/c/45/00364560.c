
bool FUN_00364560(char *param_1,char *param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  char *pcVar4;
  
  sVar2 = strlen(param_2);
  pcVar3 = param_1;
  pcVar4 = param_2;
  if (*param_2 != '\0') {
    pcVar3 = param_1 + 1;
    *param_1 = *param_2;
    pcVar4 = param_2 + 1;
    if (*pcVar4 != '\0') {
      param_1[1] = *pcVar4;
      pcVar4 = param_2 + 2;
      if (*pcVar4 == '\0') {
        pcVar3 = param_1 + 2;
      }
      else {
        param_1[2] = *pcVar4;
        pcVar4 = param_2 + 3;
        if (*pcVar4 == '\0') {
          pcVar3 = param_1 + 3;
        }
        else {
          param_1[3] = *pcVar4;
          pcVar4 = param_2 + 4;
          cVar1 = *pcVar4;
          if (cVar1 == '\0') {
            pcVar3 = param_1 + 4;
          }
          else {
            pcVar4 = param_2 + 5;
            param_1[4] = cVar1;
            pcVar3 = param_1 + 5;
          }
        }
      }
    }
  }
  *pcVar3 = '\0';
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  return sVar2 - 1 < 5;
}

