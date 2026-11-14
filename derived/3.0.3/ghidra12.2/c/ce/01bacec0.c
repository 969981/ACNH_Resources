
void FUN_01bacec0(long *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar8 = (long *)param_1[1];
    if (plVar8 != (long *)0x0) {
      param_1[1] = *plVar8;
    }
    *plVar8 = (long)&PTR_LAB_04a3a6f8;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    lVar7 = *param_3;
    lVar3 = param_3[1];
    lVar4 = param_3[3];
    plVar8[7] = param_3[2];
    plVar8[8] = lVar4;
    plVar8[5] = lVar7;
    plVar8[6] = lVar3;
    lVar7 = param_3[4];
    lVar4 = param_3[5];
    lVar3 = param_3[6];
    lVar5 = param_3[7];
    plVar8[0xd] = (long)param_1;
    plVar8[0xb] = lVar3;
    plVar8[0xc] = lVar5;
    plVar8[9] = lVar7;
    plVar8[10] = lVar4;
    *(uint *)(plVar8 + 4) = *param_2;
    *(uint *)((long)plVar8 + 0x24) = param_2[1];
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar7 = FUN_01bad090(param_1,*param_1,plVar8);
    *param_1 = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 1;
  }
  else {
    lVar7 = *param_1;
    if (lVar7 != 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      do {
        uVar6 = *(uint *)(lVar7 + 0x20);
        if ((uVar1 < uVar6) ||
           (((uVar1 == uVar6 && (uVar2 < *(uint *)(lVar7 + 0x24))) &&
            (*(uint *)(lVar7 + 0x24) != 0xffffffff)))) {
          plVar8 = (long *)(lVar7 + 8);
        }
        else {
          if ((uVar1 <= uVar6) && ((uVar2 == 0xffffffff || (uVar2 <= *(uint *)(lVar7 + 0x24))))) {
            lVar3 = *param_3;
            lVar4 = param_3[1];
            lVar5 = param_3[3];
            *(long *)(lVar7 + 0x38) = param_3[2];
            *(long *)(lVar7 + 0x40) = lVar5;
            *(long *)(lVar7 + 0x28) = lVar3;
            *(long *)(lVar7 + 0x30) = lVar4;
            lVar3 = param_3[4];
            lVar4 = param_3[5];
            lVar5 = param_3[7];
            *(long *)(lVar7 + 0x58) = param_3[6];
            *(long *)(lVar7 + 0x60) = lVar5;
            *(long *)(lVar7 + 0x48) = lVar3;
            *(long *)(lVar7 + 0x50) = lVar4;
            return;
          }
          plVar8 = (long *)(lVar7 + 0x10);
        }
        lVar7 = *plVar8;
      } while (lVar7 != 0);
    }
  }
  return;
}

