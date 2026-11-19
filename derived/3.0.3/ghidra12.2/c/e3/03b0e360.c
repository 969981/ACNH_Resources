
long FUN_03b0e360(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    iVar8 = 0;
    do {
      plVar6 = (long *)(lVar7 + (long)iVar8 * 0x48);
      (**(code **)(*param_2 + 0x18))(param_2);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar9 = param_2[1];
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar4 = plVar6[1];
      if (lVar9 == lVar4) {
LAB_03b0e470:
        return lVar7 + (long)iVar8 * 0x48 + 0x10;
      }
      uVar5 = 0;
      bVar3 = true;
      do {
        lVar9 = param_2[1] + 2 + uVar5;
        cVar2 = *(char *)(lVar9 + -2);
        if (cVar2 != *(char *)(lVar4 + uVar5)) break;
        if (cVar2 == '\0') {
          if (bVar3) goto LAB_03b0e470;
          break;
        }
        cVar2 = *(char *)(lVar9 + -1);
        if (cVar2 != *(char *)(lVar4 + uVar5 + 1)) break;
        if (cVar2 == '\0') goto LAB_03b0e470;
        cVar2 = *(char *)(param_2[1] + 2 + uVar5);
        if (cVar2 != *(char *)(lVar4 + uVar5 + 2)) break;
        if (cVar2 == '\0') goto LAB_03b0e470;
        bVar3 = uVar5 < 0x7fffe;
        uVar5 = uVar5 + 3;
      } while (uVar5 != 0x80001);
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  return 0;
}

