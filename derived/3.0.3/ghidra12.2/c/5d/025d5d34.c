
void FUN_025d5d34(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined *local_48;
  char *pcStack_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    FUN_02602d90(param_1);
    if ((*(long **)(lVar5 + 0x1c24e8) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c24e8), puVar6 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar6)();
      uVar2 = uVar2 ^ 1;
    }
    local_36 = 0;
    local_34 = 0;
    local_38 = *(undefined2 *)(*(long *)(lVar5 + 0x1c24d0) + *(long *)(lVar5 + 0x1c24c8) + 0x900);
    FUN_0277d4ac(&local_38);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x1c24e8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c24e8) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
    puVar1 = PTR_DAT_04bb2020;
    local_48 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "SpecialityFruit";
    uVar3 = FUN_0277d6c4(&local_38);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_48,uVar3);
    }
    if ((*(long **)(lVar5 + 0x1c2520) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x1c2520), puVar6 == (undefined8 *)0x0)) {
      uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
    }
    else {
      uVar4 = (**(code **)*puVar6)();
      uVar7 = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0x1c2520) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x1c2520) + 8), puVar6 != (undefined8 *)0x0))
      {
        (**(code **)*puVar6)();
      }
    }
    local_48 = puVar1 + 0x10;
    pcStack_40 = "VillageLotId";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_48,uVar7);
    }
  }
  return;
}

