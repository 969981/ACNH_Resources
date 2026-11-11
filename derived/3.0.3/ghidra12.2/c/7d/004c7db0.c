
void FUN_004c7db0(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  
  lVar3 = (long)(int)param_1[1] + -1;
  lVar4 = 0;
  do {
    cVar2 = *(char *)(*param_1 + lVar4);
    lVar1 = lVar4 + 1;
    if (lVar3 <= lVar4) break;
    lVar4 = lVar1;
  } while (cVar2 == ' ' || cVar2 == '\t');
  iVar5 = (int)param_1[1] + -2;
  uVar6 = 0xffffffffffffffff;
  do {
    cVar2 = *(char *)(*param_1 + (long)iVar5);
    lVar4 = lVar1 + uVar6;
    uVar6 = uVar6 + 1;
    if (lVar3 <= lVar4) break;
    iVar5 = iVar5 + -1;
  } while (cVar2 == ' ' || cVar2 == '\t');
  FUN_004236e0(param_1);
  FUN_00423740(param_1,uVar6 & 0xffffffff);
  FUN_004236e0(param_1,1);
  FUN_00423740(param_1,1);
  return;
}

