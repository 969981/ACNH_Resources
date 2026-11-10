
void FUN_0033e460(long param_1,int param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_64 [4];
  
  lVar4 = *(long *)(param_1 + 0x1c8);
  lVar3 = lVar4 + (long)param_2 * 0x7d8;
  iVar2 = *(int *)(lVar3 + 2000);
  if (iVar2 != 0) {
    piVar1 = (int *)(lVar3 + 2000);
    lVar5 = lVar4 + (long)param_2 * 0x7d8;
    lVar3 = *(long *)(lVar5 + 0x7c8);
    FUN_0033f350(lVar3,lVar3 + (long)iVar2 * 0x10,auStack_64,LZCOUNT((long)iVar2) * -2 + 0x7e,1);
    if (param_2 < *(int *)(param_1 + 0x1c0)) {
      lVar3 = (long)param_2 * 0x30;
      *(undefined4 *)(*(long *)(param_1 + 0x1d0) + lVar3 + 0x10) =
           *(undefined4 *)(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8);
      *(undefined4 *)(*(long *)(param_1 + 0x1d0) + lVar3 + 0x14) =
           *(undefined4 *)(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 8);
      *(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar3 + 0x18) =
           *(undefined8 *)(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x7a8);
      *(undefined8 *)(*(long *)(param_1 + 0x1d0) + lVar3 + 0x20) =
           *(undefined8 *)(*(long *)(param_1 + 0x1c8) + (long)param_2 * 0x7d8 + 0x7b0);
      lVar3 = *(long *)(param_1 + 0x1d0) + lVar3;
      iVar2 = *piVar1;
    }
    else {
      lVar3 = 0;
      iVar2 = *piVar1;
    }
    if (0 < iVar2) {
      lVar7 = 0;
      lVar6 = 0;
      do {
        FUN_00322430(*(undefined8 *)(*(long *)(lVar5 + 0x7c8) + lVar7),param_3,
                     *(undefined4 *)(lVar4 + (long)param_2 * 0x7d8 + 4),param_4 & 1,param_5,lVar3,
                     *(undefined8 *)(param_1 + 0x15d8),*(undefined8 *)(param_1 + 0x15c8));
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar6 < *piVar1);
    }
    *piVar1 = 0;
  }
  *(undefined4 *)(lVar4 + (long)param_2 * 0x7d8 + 4) = 0;
  return;
}

