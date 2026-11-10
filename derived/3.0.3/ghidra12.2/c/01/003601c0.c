
int FUN_003601c0(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(param_2 + 0x20);
  param_2 = param_2 + 0x18;
  if (lVar6 != param_2) {
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != 0) {
      iVar4 = 0;
      do {
        if ((lVar3 == 0) || (*(short *)(lVar3 + 0xe) == 0)) {
          iVar7 = 0;
        }
        else {
          uVar8 = 0;
          iVar7 = 0;
          plVar5 = *(long **)(lVar6 + 0x10);
          lVar1 = lVar3 + (ulong)*(uint *)(lVar3 + 0x10);
          do {
            lVar3 = lVar3 + (ulong)*(uint *)(lVar1 + uVar8 * 4);
            lVar2 = 0xc;
            if (*(char *)(lVar3 + 0x1d) != '\0') {
              lVar2 = 0xe;
            }
            lVar2 = (**(code **)(*plVar5 + lVar2 * 8))(plVar5,lVar3,param_3 & 1);
            lVar3 = *(long *)(param_1 + 8);
            uVar8 = uVar8 + 1;
            if (lVar2 != 0) {
              iVar7 = iVar7 + 1;
            }
          } while (uVar8 < *(ushort *)(lVar3 + 0xe));
        }
        lVar6 = *(long *)(lVar6 + 8);
        iVar4 = iVar7 + iVar4;
      } while (lVar6 != param_2);
      return iVar4;
    }
    do {
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != param_2);
  }
  return 0;
}

