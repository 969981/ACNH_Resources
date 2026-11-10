
int FUN_001582ec(long param_1,int param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + (ulong)param_3 * 4;
  iVar2 = *(int *)(lVar1 + 0x260);
  *(undefined4 *)(lVar1 + 0x260) = 0xffffffff;
  if (param_2 == 0) {
    plVar7 = (long *)(param_1 + (ulong)param_3 * 8 + 0x78);
    lVar5 = *plVar7;
    if ((lVar5 != 0) && (lVar6 = *(long *)(lVar5 + 0x28), lVar6 != 0)) {
      iVar3 = *(int *)(lVar5 + 4);
      do {
        if (*(long *)(param_1 + (ulong)(param_3 ^ 1) * 8 + 0x78) != 0) {
          while (*(int *)(lVar6 + 4) != iVar3) {
            lVar6 = *(long *)(lVar6 + 0x28);
            if (lVar6 == 0) goto LAB_0015831c;
          }
        }
        iVar4 = FUN_001585c4(param_1,lVar6,lVar1 + 0x260);
        if (iVar4 != 7) {
          *plVar7 = lVar6;
          break;
        }
        lVar6 = *(long *)(lVar6 + 0x28);
      } while (lVar6 != 0);
      goto LAB_00158320;
    }
  }
LAB_0015831c:
  iVar4 = 7;
LAB_00158320:
  if (iVar2 != -1) {
    FUN_00158430(param_1,iVar2);
  }
  return iVar4;
}

