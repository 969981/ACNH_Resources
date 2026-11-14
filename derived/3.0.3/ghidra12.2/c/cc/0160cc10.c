
long FUN_0160cc10(long *param_1,int param_2,long *param_3,int *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((((param_2 < 1) || (iVar3 = (**(code **)(*param_1 + 0x168))(param_1), iVar3 <= param_2)) ||
      (iVar3 = (**(code **)(*param_1 + 0x168))(param_1), iVar3 <= param_2)) ||
     (lVar4 = (**(code **)(*param_1 + 0x158))(param_1,param_2), lVar4 == 0)) {
    iVar3 = (**(code **)(*param_1 + 0x168))(param_1);
    if (0 < iVar3) {
      param_2 = 0;
      do {
        iVar3 = (**(code **)(*param_1 + 0x168))(param_1);
        if (param_2 < iVar3) {
          uVar5 = (**(code **)(*param_1 + 0x158))(param_1,param_2);
        }
        else {
          uVar5 = 0;
        }
        plVar6 = (long *)(**(code **)(*param_1 + 0x170))(param_1,uVar5);
        (**(code **)(*plVar6 + 0x18))();
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar8 = plVar6[1];
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar4 = param_3[1];
        if (lVar8 == lVar4) {
LAB_0160cde0:
          iVar3 = (**(code **)(*param_1 + 0x168))(param_1);
          if (param_2 < iVar3) {
            lVar4 = (**(code **)(*param_1 + 0x158))(param_1,param_2);
          }
          else {
            lVar4 = 0;
          }
          goto joined_r0x0160ce0c;
        }
        uVar7 = 0;
        bVar2 = true;
        do {
          lVar8 = plVar6[1] + 2 + uVar7;
          cVar1 = *(char *)(lVar8 + -2);
          if (cVar1 != *(char *)(lVar4 + uVar7)) break;
          if (cVar1 == '\0') {
            if (bVar2) goto LAB_0160cde0;
            break;
          }
          cVar1 = *(char *)(lVar8 + -1);
          if (cVar1 != *(char *)(lVar4 + uVar7 + 1)) break;
          if (cVar1 == '\0') goto LAB_0160cde0;
          cVar1 = *(char *)(plVar6[1] + 2 + uVar7);
          if (cVar1 != *(char *)(lVar4 + uVar7 + 2)) break;
          if (cVar1 == '\0') goto LAB_0160cde0;
          bVar2 = uVar7 < 0x7fffe;
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        param_2 = param_2 + 1;
        iVar3 = (**(code **)(*param_1 + 0x168))(param_1);
      } while (param_2 < iVar3);
    }
    param_2 = -1;
    lVar4 = 0;
  }
joined_r0x0160ce0c:
  if (param_4 != (int *)0x0) {
    *param_4 = param_2;
  }
  return lVar4;
}

