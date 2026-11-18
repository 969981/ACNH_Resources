
void FUN_03363bc0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar4 = *(int *)((long)param_1 + 0xc);
  if (iVar4 != 0) {
    iVar2 = iVar4 - param_2;
    if (param_3 + param_2 <= iVar4) {
      iVar2 = param_3;
    }
    iVar1 = iVar2 + param_2;
    uVar3 = iVar4 - iVar1;
    if (0 < (int)uVar3) {
      if (uVar3 == 1) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        lVar6 = (long)iVar1 * 2;
        lVar7 = (long)param_2 * 2;
        do {
          lVar8 = uVar5 * 2;
          uVar5 = uVar5 + 2;
          *(undefined2 *)(*param_1 + lVar7 + lVar8) = *(undefined2 *)(*param_1 + lVar6 + lVar8);
          *(undefined2 *)(*param_1 + lVar7 + lVar8 + 2) =
               *(undefined2 *)(*param_1 + lVar6 + lVar8 + 2);
        } while (((ulong)uVar3 & 0xfffffffe) != uVar5);
      }
      if ((uVar3 & 1) != 0) {
        *(undefined2 *)(*param_1 + (uVar5 + (long)param_2) * 2) =
             *(undefined2 *)(*param_1 + (uVar5 + (long)iVar1) * 2);
      }
      iVar4 = *(int *)((long)param_1 + 0xc);
    }
    *(int *)((long)param_1 + 0xc) = iVar4 - iVar2;
    *(undefined2 *)(*param_1 + (long)(iVar4 - iVar2) * 2) = 0;
  }
  return;
}

