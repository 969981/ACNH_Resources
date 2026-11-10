
void FUN_0028d670(long *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  undefined1 *__dest;
  
  plVar5 = param_1 + 1;
  *plVar5 = (long)(PTR_DAT_04bcdc88 + 0x10);
  *param_1 = (long)(PTR_DAT_04bcdd88 + 0x10);
  param_1[2] = (long)param_1 + 0x1c;
  *(undefined4 *)(param_1 + 3) = 0x80;
  FUN_0028a8cc(plVar5);
  __dest = (undefined1 *)param_1[2];
  *plVar5 = (long)(PTR_DAT_04bcdcc0 + 0x10);
  if (__dest != &DAT_040dcdd6) {
    cVar2 = *PTR_DAT_04bcdcc8;
    lVar4 = 0;
    cVar3 = DAT_040dcdd6;
    while (cVar3 != cVar2) {
      if (lVar4 == 0x80000) {
        lVar4 = 0;
        break;
      }
      if ((&DAT_040dcdd7)[lVar4] == cVar2) {
        lVar4 = lVar4 + 1;
        break;
      }
      cVar3 = (&DAT_040dcdd8)[lVar4];
      lVar4 = lVar4 + 2;
    }
    iVar1 = (int)lVar4;
    if ((int)param_1[3] <= (int)lVar4) {
      iVar1 = (int)param_1[3] + -1;
    }
    memcpy(__dest,&DAT_040dcdd6,(long)iVar1);
    __dest[iVar1] = cVar2;
  }
  *plVar5 = (long)(PTR_DAT_04bcdca0 + 0x10);
  return;
}

