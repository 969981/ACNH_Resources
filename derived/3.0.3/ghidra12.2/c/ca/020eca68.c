
void FUN_020eca68(char *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  byte local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_4c[0] = param_1[2];
  cVar1 = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  uVar3 = FUN_02669430(local_4c);
  if ((uVar3 & 1) == 0) {
    bVar8 = param_1[2];
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar8);
    lVar4 = FUN_025830c0(DAT_055021a0,&local_48,1);
    if (lVar4 == 0) {
      return;
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    lVar6 = FUN_0265cc60((int)cVar1,*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc154);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (lVar6 == 0) {
      return;
    }
    if ((*(long *)(lVar6 + 0x28) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x10), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 & 0xffffffff;
    }
    if (param_1[1] == '\x01') {
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_48 = *(undefined8 *)(lVar6 + 8);
        uStack_40 = *(undefined8 *)(lVar6 + 0x10);
        local_38 = 0x158;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      }
      FUN_027a8e60(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    }
    else if (param_1[1] == '\0') {
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_48 = *(undefined8 *)(lVar6 + 8);
        uStack_40 = *(undefined8 *)(lVar6 + 0x10);
        local_38 = 0x158;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      }
      FUN_027a8ad0(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    }
  }
  else {
    bVar8 = param_1[2];
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar8);
    lVar4 = FUN_025830c0(DAT_055021a0,&local_48,1);
    if (lVar4 == 0) {
      return;
    }
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    lVar6 = FUN_0265ca50((int)cVar1,*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc154);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (lVar6 == 0) {
      return;
    }
    if ((*(long *)(lVar6 + 0x28) == 0) ||
       (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x10), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 & 0xffffffff;
    }
    if (param_1[1] == '\x01') {
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_48 = *(undefined8 *)(lVar6 + 8);
        uStack_40 = *(undefined8 *)(lVar6 + 0x10);
        local_38 = 0x5f0;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      }
      FUN_027b6820(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    }
    else if (param_1[1] == '\0') {
      if ((*(long *)(lVar6 + 0x28) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar6 + 0x28) + 0x20), plVar7 != (long *)0x0)) {
        local_48 = *(undefined8 *)(lVar6 + 8);
        uStack_40 = *(undefined8 *)(lVar6 + 0x10);
        local_38 = 0x5f0;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
      }
      FUN_027b6490(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
    }
  }
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

