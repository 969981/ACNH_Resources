
void FUN_01bfee60(long *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      param_1[1] = *plVar6;
    }
    *plVar6 = (long)&PTR_LAB_04a3e538;
    plVar6[3] = 0;
    plVar6[4] = 0;
    plVar6[1] = 0;
    plVar6[2] = 0;
    lVar5 = *param_3;
    lVar3 = param_3[1];
    plVar6[7] = (long)param_1;
    plVar6[5] = lVar5;
    plVar6[6] = lVar3;
    *(uint *)(plVar6 + 4) = *param_2;
    *(uint *)((long)plVar6 + 0x24) = param_2[1];
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar5 = FUN_01bad090(param_1,*param_1,plVar6);
    *param_1 = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 1;
  }
  else {
    lVar5 = *param_1;
    if (lVar5 != 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      do {
        uVar4 = *(uint *)(lVar5 + 0x20);
        if ((uVar1 < uVar4) ||
           (((uVar1 == uVar4 && (uVar2 < *(uint *)(lVar5 + 0x24))) &&
            (*(uint *)(lVar5 + 0x24) != 0xffffffff)))) {
          plVar6 = (long *)(lVar5 + 8);
        }
        else {
          if ((uVar1 <= uVar4) && ((uVar2 == 0xffffffff || (uVar2 <= *(uint *)(lVar5 + 0x24))))) {
            lVar3 = param_3[1];
            *(long *)(lVar5 + 0x28) = *param_3;
            *(long *)(lVar5 + 0x30) = lVar3;
            return;
          }
          plVar6 = (long *)(lVar5 + 0x10);
        }
        lVar5 = *plVar6;
      } while (lVar5 != 0);
    }
  }
  return;
}

