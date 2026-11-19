
long FUN_03b114e0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  
  plVar7 = *(long **)(param_1 + 8);
  if ((plVar7 == (long *)0x0) ||
     (uVar6 = (**(code **)(*plVar7 + 0x40))(plVar7,param_2), (int)uVar6 < 0)) {
    lVar8 = *(long *)(param_1 + 0x38);
    if ((lVar8 == 0) || (iVar3 = *(int *)(lVar8 + 0x18), iVar3 == 0)) {
      lVar8 = 0;
    }
    else {
      lVar10 = *(long *)(lVar8 + 0x20);
      iVar11 = 0;
      do {
        plVar7 = (long *)(lVar10 + (long)iVar11 * 0x48);
        (**(code **)(*param_2 + 0x18))(param_2);
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar8 = param_2[1];
        (**(code **)(*plVar7 + 0x18))(plVar7);
        if (lVar8 == plVar7[1]) {
LAB_03b1163c:
          return lVar10 + (long)iVar11 * 0x48 + 0x10;
        }
        uVar9 = 0;
        lVar8 = plVar7[1] + 1;
        bVar5 = true;
        do {
          lVar1 = param_2[1] + 1 + uVar9;
          lVar2 = lVar8 + uVar9;
          cVar4 = *(char *)(lVar1 + -1);
          if (cVar4 != *(char *)(lVar2 + -1)) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_03b1163c;
            break;
          }
          cVar4 = *(char *)(param_2[1] + 1 + uVar9);
          if (cVar4 != *(char *)(lVar8 + uVar9)) break;
          if (cVar4 == '\0') goto LAB_03b1163c;
          cVar4 = *(char *)(lVar1 + 1);
          if (cVar4 != *(char *)(lVar2 + 1)) break;
          if (cVar4 == '\0') goto LAB_03b1163c;
          bVar5 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
        iVar11 = iVar11 + 1;
        lVar8 = 0;
      } while (iVar3 != iVar11);
    }
  }
  else {
    if (*(uint *)(param_1 + 0x10) <= uVar6) {
      uVar6 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x18) + (ulong)uVar6 * 0x108;
  }
  return lVar8;
}

