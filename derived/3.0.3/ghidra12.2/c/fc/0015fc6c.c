
void FUN_0015fc6c(long param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar3 = *(char **)(param_1 + 0x170);
  iVar1 = strncmp(pcVar3,"HTTP",4);
  if (((iVar1 != 0) || (pcVar3 = strchr(pcVar3,0x20), pcVar3 == (char *)0x0)) ||
     (pcVar3 = pcVar3 + 1, *pcVar3 == '\0')) {
LAB_0015fc9c:
    FUN_0014d5f8(param_1,"The requested URL returned error: %d",*(undefined4 *)(param_1 + 0x180));
    return;
  }
  cVar4 = '\r';
  pcVar2 = strchr(pcVar3,0xd);
  if (pcVar2 == (char *)0x0) {
    cVar4 = '\n';
    pcVar2 = strchr(pcVar3,10);
    if (pcVar2 == (char *)0x0) goto LAB_0015fc9c;
  }
  *pcVar2 = '\0';
  FUN_0014d5f8(param_1,"The requested URL returned error: %s",pcVar3);
  *pcVar2 = cVar4;
  return;
}

