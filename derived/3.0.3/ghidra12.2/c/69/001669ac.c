
undefined8 FUN_001669ac(undefined8 *param_1,long param_2)

{
  undefined2 uVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(param_2 + 0x18) != 0) {
    FUN_00143b8c(param_2,0);
  }
  if (param_1 != (undefined8 *)0x0) {
    FUN_00143a84(param_2,&LAB_00166a9c);
    pcVar2 = (char *)*param_1;
    while (pcVar2 != (char *)0x0) {
      sVar3 = strlen(pcVar2);
      lVar4 = FUN_001432f0(sVar3 + 0x20);
      if (lVar4 == 0) {
        FUN_00143b8c(param_2,0);
        return 3;
      }
      pcVar2 = strcpy((char *)(lVar4 + 0x1a),(char *)*param_1);
      pcVar2 = strchr(pcVar2,0x3a);
      if (pcVar2 == (char *)0x0) {
        uVar1 = 0x50;
      }
      else {
        *pcVar2 = '\0';
        lVar5 = strtol(pcVar2 + 1,(char **)0x0,10);
        uVar1 = (undefined2)lVar5;
      }
      *(undefined2 *)(lVar4 + 0x18) = uVar1;
      FUN_00143a90(param_2,*(undefined8 *)(param_2 + 8),lVar4,lVar4);
      pcVar2 = (char *)param_1[1];
      param_1 = param_1 + 1;
    }
  }
  return 0;
}

