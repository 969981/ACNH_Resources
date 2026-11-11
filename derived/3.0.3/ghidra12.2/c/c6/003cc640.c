
void FUN_003cc640(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x20);
  while (lVar1 != param_1 + 0x18) {
    lVar4 = *(long *)(lVar1 + 8);
    lVar3 = lVar1 + -0x3d8;
    FUN_003befcc(lVar3,1);
    pcVar2 = (char *)(lVar1 + -0x317);
    lVar1 = lVar4;
    if (*pcVar2 == '\0') {
      FUN_003bfa90(lVar3,0);
      FUN_003cc49c(param_1,lVar3);
    }
  }
  return;
}

