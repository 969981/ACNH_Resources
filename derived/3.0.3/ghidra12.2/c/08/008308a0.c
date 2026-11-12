
void FUN_008308a0(uint *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined1 *)param_2[1] = 0;
  if (*param_1 == 0xffffffff) {
    return;
  }
  FUN_038d13f0(param_2,"Villager%u/Photograph/",*param_1 >> 0x10 & 7);
  uVar4 = *param_1;
  uVar5 = uVar4 >> 3 & 0x3ff;
  uVar2 = uVar4 & 7;
  uVar7 = uVar5;
  uVar8 = uVar2;
  switch(uVar4 >> 0xd & 7) {
  case 0:
    lVar3 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_00830a6c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00830a6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00830a6c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00830a6c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar7 = 3;
    if ((int)((int)param_2[2] - uVar2) < 4) {
      uVar7 = (int)param_2[2] + ~uVar2;
    }
    if (0 < (int)uVar7) {
      memcpy((void *)(lVar3 + (ulong)uVar2),&DAT_04080da9,(ulong)uVar7);
      *(undefined1 *)(lVar3 + (ulong)uVar7 + (ulong)uVar2) = 0;
    }
    uVar8 = 0;
    uVar7 = 0;
    if (uVar5 < 500) {
      uVar7 = uVar5;
    }
    break;
  case 1:
    lVar3 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_00830acc;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00830acc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00830acc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00830acc:
    uVar7 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar8 = 8;
    if ((int)((int)param_2[2] - uVar7) < 9) {
      uVar8 = (int)param_2[2] + ~uVar7;
    }
    if (0 < (int)uVar8) {
      memcpy((void *)(lVar3 + (ulong)uVar7),"facility",(ulong)uVar8);
      *(undefined1 *)(lVar3 + (ulong)uVar8 + (ulong)uVar7) = 0;
    }
    uVar7 = 0;
    if (uVar5 < 5) {
      uVar7 = uVar5;
    }
    goto LAB_00830bd8;
  case 2:
    lVar3 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_00830b28;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00830b28;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00830b28;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00830b28:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar4 = 5;
    if ((int)((int)param_2[2] - uVar2) < 6) {
      uVar4 = (int)param_2[2] + ~uVar2;
    }
    if ((int)uVar4 < 1) {
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      memcpy((void *)(lVar3 + (ulong)uVar2),"vroom",(ulong)uVar4);
      uVar7 = 0;
      uVar8 = 0;
      *(undefined1 *)(lVar3 + (ulong)uVar4 + (ulong)uVar2) = 0;
    }
    break;
  case 5:
    lVar3 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_00830b90;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00830b90;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00830b90;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00830b90:
    uVar7 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    uVar8 = 7;
    if ((int)((int)param_2[2] - uVar7) < 8) {
      uVar8 = (int)param_2[2] + ~uVar7;
    }
    if (0 < (int)uVar8) {
      memcpy((void *)(lVar3 + (ulong)uVar7),"suspend",(ulong)uVar8);
      *(undefined1 *)(lVar3 + (ulong)uVar8 + (ulong)uVar7) = 0;
    }
    uVar7 = 0;
LAB_00830bd8:
    uVar8 = 0;
    if (uVar2 < 2) {
      uVar8 = uVar2;
    }
  }
  FUN_038d13f0(param_2,"_%u_%u.dat",uVar7,uVar8);
  return;
}

