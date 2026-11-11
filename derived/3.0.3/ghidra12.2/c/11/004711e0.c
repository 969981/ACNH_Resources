
long FUN_004711e0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = (long)param_2 + -1;
  lVar3 = (long)param_2 << 0x20;
  lVar2 = (long)param_2 * 0x18;
  do {
    lVar3 = lVar3 + 0x100000000;
    lVar2 = lVar2 + 0x18;
    lVar1 = lVar1 + 1;
    if (*(int *)((long)param_1 + 0xc) <= lVar1) break;
  } while (*(long *)(*param_1 + lVar2) == -1);
  return lVar3 >> 0x20;
}

