
ulong FUN_00422b30(long *param_1,char param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar2 = (int)param_1[1] + -1;
  if (param_4 <= iVar2) {
    iVar2 = param_4;
  }
  uVar3 = (long)iVar2;
  do {
    if ((long)uVar3 <= (long)param_3) {
      return 0xffffffff;
    }
    uVar4 = uVar3 - 1;
    lVar1 = *param_1 + uVar3;
    uVar3 = uVar4;
  } while (*(char *)(lVar1 + -1) != param_2);
  return uVar4 & 0xffffffff;
}

