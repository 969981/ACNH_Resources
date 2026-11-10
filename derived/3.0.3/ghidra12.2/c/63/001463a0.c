
long FUN_001463a0(undefined1 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar2 = FUN_0014654c(*param_1);
  if (iVar2 != 0) {
    iVar2 = 0;
    pcVar1 = param_1 + 1;
    do {
      pcVar4 = pcVar1;
      iVar2 = (uint)(byte)pcVar4[-1] + iVar2 * 10 + -0x30;
      iVar3 = FUN_0014654c(*pcVar4);
      pcVar1 = pcVar4 + 1;
    } while (iVar3 != 0);
    if ((iVar2 != 0) && (*pcVar4 == '$')) {
      *param_2 = pcVar4 + 1;
      return (long)iVar2;
    }
  }
  return 0;
}

