
bool FUN_0014ee80(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  uVar4 = *(ulong *)(*(long *)(lVar3 + 0xd8) + 0x150);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar3 + 0xd8) + 0x18) << 2;
  }
  *param_1 = 0;
  plVar2 = (long *)0x0;
  if (uVar4 != 0) {
    uVar1 = FUN_0014e96c(lVar3);
    if (uVar4 < uVar1) {
      FUN_0014d430(lVar3,"Connection cache is full, closing the oldest one.\n");
      plVar2 = (long *)FUN_0014ef14(lVar3);
      if (plVar2 != (long *)0x0) {
        FUN_0014f784(lVar3,plVar2,0);
      }
    }
    else {
      plVar2 = (long *)0x0;
    }
  }
  return plVar2 != param_1;
}

