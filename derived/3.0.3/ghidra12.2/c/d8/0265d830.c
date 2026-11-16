
void FUN_0265d830(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  byte local_34 [4];
  
  uVar7 = (ulong)param_2;
  if ((param_5 & 1) == 0) {
    if (9 < param_1) {
      return;
    }
    if (0x9f < param_2) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    lVar6 = lVar3 + (ulong)param_1 * 0x10798 + uVar7 * 0xa8;
    lVar3 = lVar6 + 0x39f8;
    lVar6 = *(long *)(lVar6 + 0x3a20);
  }
  else {
    if (9 < param_1) {
      return;
    }
    if (7 < param_2) {
      return;
    }
    if (DAT_05574040 == 0) {
      return;
    }
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    lVar6 = lVar3 + (ulong)param_1 * 0x10798 + uVar7 * 0x700;
    lVar3 = lVar6 + 0x1c0;
    lVar6 = *(long *)(lVar6 + 0x1e8);
  }
  if ((lVar6 == 0) || (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar1 = uVar1 ^ 1;
  }
  FUN_0265d140(local_34,param_1,uVar7,param_5 & 1);
  if ((*(long *)(lVar3 + 0x28) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
    local_68 = *(undefined8 *)(lVar3 + 8);
    uStack_60 = *(undefined8 *)(lVar3 + 0x10);
    local_58 = 0x100;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
  }
  FUN_02747170(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_3,param_4);
  if (local_34[0] < 8) {
    if ((*(long *)(lVar3 + 0x28) != 0) &&
       (plVar4 = *(long **)(*(long *)(lVar3 + 0x28) + 0x20), plVar4 != (long *)0x0)) {
      local_68 = *(undefined8 *)(lVar3 + 8);
      uStack_60 = *(undefined8 *)(lVar3 + 0x10);
      local_58 = 0x100;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_68);
    }
    uVar2 = FUN_02746e10(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8),param_3);
    FUN_020ec080(param_1,local_34,param_3,uVar2);
    if (local_34[0] < 8) {
      uVar7 = (ulong)param_1;
      if (9 < param_1) {
        uVar7 = 0;
      }
      *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) =
           *(uint *)((long)&DAT_0555fbc8 + uVar7 * 4) | 1 << (ulong)(local_34[0] & 0x1f);
    }
  }
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

