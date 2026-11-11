
void FUN_0049cf80(long *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((int)param_1[1] < param_2) {
    iVar1 = (int)param_1[1] * 2;
    if (param_2 <= iVar1) {
      param_2 = iVar1;
    }
    lVar4 = FUN_00438750((long)(param_2 << 4),0);
    if ((lVar4 != 0) && (lVar6 = *param_1, lVar6 != 0)) {
      if (*(int *)((long)param_1 + 0x14) != 0) {
        iVar1 = *(int *)((long)param_1 + 0xc);
        iVar3 = (int)param_1[2];
        if (iVar1 < iVar3) {
          lVar6 = lVar6 + (long)iVar1 * 0x10;
          lVar5 = lVar4;
          iVar3 = *(int *)((long)param_1 + 0x14);
        }
        else {
          iVar2 = (int)param_1[1] - iVar1;
          FUN_0043a3b0(lVar4,lVar6 + (long)iVar1 * 0x10,iVar2 * 0x10);
          lVar6 = *param_1;
          lVar5 = lVar4 + (long)iVar2 * 0x10;
        }
        FUN_0043a3b0(lVar5,lVar6,iVar3 << 4);
      }
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((long)param_1 + 0x14);
    }
    if ((int)param_1[1] != 0) {
      FUN_004387b0(*param_1,(long)(int)param_1[1] << 4);
      *(undefined4 *)(param_1 + 1) = 0;
      *param_1 = 0;
    }
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = param_2;
  }
  return;
}

