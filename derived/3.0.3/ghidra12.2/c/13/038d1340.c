
void FUN_038d1340(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_038d3ee0(lVar3,(long)iVar1,param_2,auStack_68 + 0x18);
  if ((iVar2 < 0) || (iVar1 <= iVar2)) {
    *(undefined2 *)(lVar3 + (long)(iVar1 + -1) * 2) = 0;
  }
  return;
}

