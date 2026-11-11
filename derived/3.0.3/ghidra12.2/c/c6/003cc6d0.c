
void FUN_003cc6d0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  lVar1 = *(long *)(param_1 + 0x20);
  while (lVar1 != param_1 + 0x18) {
    pcVar5 = (char *)(lVar1 + -0x317);
    lVar4 = *(long *)(lVar1 + 8);
    lVar3 = lVar1 + -0x3d8;
    if ((*pcVar5 == '\0') ||
       (((plVar2 = (long *)(lVar1 + -0x248), *plVar2 == 0 ||
         (lVar1 = lVar4, *(int *)(*plVar2 + 0x278) == 0)) &&
        (FUN_003befcc(lVar3,1), lVar1 = lVar4, *pcVar5 == '\0')))) {
      FUN_003bfa90(lVar3,0);
      FUN_003cc49c(param_1,lVar3);
      lVar1 = lVar4;
    }
  }
  return;
}

