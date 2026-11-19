
long FUN_03c0d4b0(long param_1,long *param_2,long *param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    uVar9 = 0;
    do {
      if (uVar9 < (uVar4 & 0xffffffff)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x18) + uVar9 * 8);
      }
      else {
        lVar6 = 0;
      }
      plVar7 = (long *)(lVar6 + 0x20);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      lVar8 = *(long *)(lVar6 + 0x28);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = param_2[1];
      if (lVar8 == lVar5) {
LAB_03c0d5e0:
        plVar7 = (long *)(lVar6 + 0x58);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        lVar8 = *(long *)(lVar6 + 0x60);
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar5 = param_3[1];
        if (lVar8 == lVar5) {
LAB_03c0d690:
          if (param_4 == (undefined4 *)0x0) {
            return lVar6;
          }
          *param_4 = (int)uVar9;
          return lVar6;
        }
        uVar4 = 0;
        bVar3 = true;
        lVar8 = *(long *)(lVar6 + 0x60) + 2;
        do {
          lVar1 = lVar8 + uVar4;
          cVar2 = *(char *)(lVar1 + -2);
          if (cVar2 != *(char *)(lVar5 + uVar4)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_03c0d690;
            break;
          }
          cVar2 = *(char *)(lVar1 + -1);
          if (cVar2 != *(char *)(lVar5 + uVar4 + 1)) break;
          if (cVar2 == '\0') goto LAB_03c0d690;
          cVar2 = *(char *)(lVar8 + uVar4);
          if (cVar2 != *(char *)(lVar5 + uVar4 + 2)) break;
          if (cVar2 == '\0') goto LAB_03c0d690;
          bVar3 = uVar4 < 0x7fffe;
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
      }
      else {
        uVar4 = 0;
        bVar3 = true;
        lVar8 = *(long *)(lVar6 + 0x28) + 2;
        do {
          lVar1 = lVar8 + uVar4;
          cVar2 = *(char *)(lVar1 + -2);
          if (cVar2 != *(char *)(lVar5 + uVar4)) break;
          if (cVar2 == '\0') {
            if (bVar3) goto LAB_03c0d5e0;
            break;
          }
          cVar2 = *(char *)(lVar1 + -1);
          if (cVar2 != *(char *)(lVar5 + uVar4 + 1)) break;
          if (cVar2 == '\0') goto LAB_03c0d5e0;
          cVar2 = *(char *)(lVar8 + uVar4);
          if (cVar2 != *(char *)(lVar5 + uVar4 + 2)) break;
          if (cVar2 == '\0') goto LAB_03c0d5e0;
          bVar3 = uVar4 < 0x7fffe;
          uVar4 = uVar4 + 3;
        } while (uVar4 != 0x80001);
      }
      uVar4 = (ulong)*(int *)(param_1 + 0x10);
      uVar9 = uVar9 + 1;
    } while ((long)uVar9 < (long)uVar4);
  }
  return 0;
}

