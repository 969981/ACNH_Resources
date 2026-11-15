
void FUN_021d7650(uint param_1,uint param_2,int param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb2020;
  if ((int)param_2 < 0) {
    return;
  }
  uVar9 = (ulong)param_2;
  if ((param_4 & 1) == 0) {
    if (((param_1 < 10) && (param_2 < 0xa0)) && (DAT_05574040 != 0)) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
        if (lVar4 != 0) {
          lVar4 = lVar4 + 0x70;
          goto LAB_021d7788;
        }
      }
      else if (((puVar5 != (undefined8 *)0x0) && ((long *)puVar5[0x26] != (long *)0x0)) &&
              (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 != 0)) {
LAB_021d7788:
        lVar6 = lVar4 + (ulong)param_1 * 0x10798 + uVar9 * 0xa8;
        lVar4 = lVar6 + 0x39f8;
        plVar7 = *(long **)(lVar6 + 0x3a20);
        if (plVar7 != (long *)0x0) {
          puVar5 = (undefined8 *)*plVar7;
          goto joined_r0x021d77b0;
        }
        goto LAB_021d781c;
      }
    }
LAB_021d77c8:
    uVar3 = 0;
  }
  else {
    if (((9 < param_1) || (7 < param_2)) || (DAT_05574040 == 0)) goto LAB_021d77c8;
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_021d77c8;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_021d77c8;
    lVar6 = lVar4 + (ulong)param_1 * 0x10798 + uVar9 * 0x700;
    lVar4 = lVar6 + 0x1c0;
    plVar7 = *(long **)(lVar6 + 0x1e8);
    if (plVar7 == (long *)0x0) {
LAB_021d781c:
      uVar2 = 1;
    }
    else {
      puVar5 = (undefined8 *)*plVar7;
joined_r0x021d77b0:
      if (puVar5 == (undefined8 *)0x0) goto LAB_021d781c;
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    local_70 = puVar1 + 0x10;
    pcStack_68 = "Friendship";
    uVar3 = FUN_02746e10(*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8),&local_70);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (0x1d < uVar3) {
      if (uVar3 < 0x3c) {
        uVar2 = 2;
      }
      else if (uVar3 < 100) {
        uVar2 = 3;
      }
      else if (uVar3 < 0x96) {
        uVar2 = 4;
      }
      else {
        uVar2 = 5;
        if (199 < uVar3) {
          uVar2 = 6;
        }
      }
      goto LAB_021d77d0;
    }
  }
  uVar2 = 1;
LAB_021d77d0:
  uVar3 = uVar3 + param_3;
  if (uVar3 < 0x1e) {
    uVar8 = 1;
  }
  else if (uVar3 < 0x3c) {
    uVar8 = 2;
  }
  else if (uVar3 < 100) {
    uVar8 = 3;
  }
  else if (uVar3 < 0x96) {
    uVar8 = 4;
  }
  else {
    uVar8 = 5;
    if (199 < uVar3) {
      uVar8 = 6;
    }
  }
  if (uVar8 < uVar2) {
    uVar3 = *(uint *)(&UNK_04179ca0 + (long)(int)(uVar2 - 1) * 4);
  }
  local_70 = puVar1 + 0x10;
  pcStack_68 = "Friendship";
  FUN_0265d830(param_1,uVar9,&local_70,uVar3,param_4 & 1);
  return;
}

