
int FUN_00422b80(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = strstr((char *)*param_1,param_2);
  if (pcVar1 == (char *)0x0) {
    return -1;
  }
  do {
    pcVar2 = pcVar1;
    uVar3 = *param_1;
    pcVar1 = strstr(pcVar2 + 1,param_2);
  } while (pcVar1 != (char *)0x0);
  return (int)pcVar2 - (int)uVar3;
}

