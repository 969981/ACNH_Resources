
int FUN_039e06b0(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_1 + 0x1d0);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x1d8);
    iVar8 = 0;
    do {
      lVar5 = lVar7 + (long)iVar8 * 0x910;
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      plVar6 = (long *)(lVar5 + 0xa0);
      lVar9 = param_2[1];
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar5 = *(long *)(lVar5 + 0xa8);
      if (lVar9 == lVar5) {
        return iVar8;
      }
      uVar4 = 0;
      bVar3 = true;
      do {
        lVar9 = param_2[1] + 2 + uVar4;
        cVar2 = *(char *)(lVar9 + -2);
        if (cVar2 != *(char *)(lVar5 + uVar4)) break;
        if (cVar2 == '\0') {
          if (bVar3) {
            return iVar8;
          }
          break;
        }
        cVar2 = *(char *)(lVar9 + -1);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 1)) break;
        if (cVar2 == '\0') {
          return iVar8;
        }
        cVar2 = *(char *)(param_2[1] + 2 + uVar4);
        if (cVar2 != *(char *)(lVar5 + uVar4 + 2)) break;
        if (cVar2 == '\0') {
          return iVar8;
        }
        bVar3 = uVar4 < 0x7fffe;
        uVar4 = uVar4 + 3;
      } while (uVar4 != 0x80001);
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return -1;
}

