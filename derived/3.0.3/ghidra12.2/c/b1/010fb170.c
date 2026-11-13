
long FUN_010fb170(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != param_1 + 8) {
    lVar6 = lVar9 + -0x158;
    do {
      plVar7 = (long *)(lVar6 + 0x38);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(lVar6 + 0x40);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      if (lVar8 == lVar4) {
LAB_010fb284:
        plVar7 = (long *)(lVar6 + 0x90);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar8 = *(long *)(lVar6 + 0x98);
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar4 = param_3[1];
        if (lVar8 == lVar4) {
          return lVar6;
        }
        uVar5 = 0;
        bVar3 = true;
        lVar8 = *(long *)(lVar6 + 0x98) + 2;
        do {
          lVar1 = lVar8 + uVar5;
          cVar2 = *(char *)(lVar1 + -2);
          if (cVar2 != *(char *)(lVar4 + uVar5)) break;
          if (cVar2 == '\0') {
            if (bVar3) {
              return lVar6;
            }
            break;
          }
          cVar2 = *(char *)(lVar1 + -1);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 1)) break;
          if (cVar2 == '\0') {
            return lVar6;
          }
          cVar2 = *(char *)(lVar8 + uVar5);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 2)) break;
          if (cVar2 == '\0') {
            return lVar6;
          }
          bVar3 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
      else {
        uVar5 = 0;
        bVar3 = true;
        lVar8 = *(long *)(lVar6 + 0x40) + 2;
        do {
          lVar1 = lVar8 + uVar5;
          cVar2 = *(char *)(lVar1 + -2);
          if (cVar2 != *(char *)(lVar4 + uVar5)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_010fb284;
            break;
          }
          cVar2 = *(char *)(lVar1 + -1);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 1)) break;
          if (cVar2 == '\0') goto LAB_010fb284;
          cVar2 = *(char *)(lVar8 + uVar5);
          if (cVar2 != *(char *)(lVar4 + uVar5 + 2)) break;
          if (cVar2 == '\0') goto LAB_010fb284;
          bVar3 = uVar5 < 0x7fffe;
          uVar5 = uVar5 + 3;
        } while (uVar5 != 0x80001);
      }
      lVar9 = *(long *)(lVar9 + 8);
      lVar6 = lVar9 + -0x158;
    } while (lVar6 != param_1 + -0x150);
  }
  return 0;
}

