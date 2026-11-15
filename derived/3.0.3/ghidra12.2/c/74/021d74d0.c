
ulong FUN_021d74d0(undefined8 param_1,byte *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  byte local_34 [4];
  
  lVar5 = FUN_0265c2a0();
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_34,1);
  uVar10 = 0xffffffff;
  if ((lVar5 != 0) && (lVar6 != 0)) {
    if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar7)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar5 + 8);
    lVar2 = *(long *)(lVar5 + 0x10);
    if ((*(long **)(lVar6 + 0x17bb0) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17bb0), puVar7 == (undefined8 *)0x0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = (**(code **)*puVar7)();
      uVar4 = uVar4 ^ 1;
    }
    uVar8 = 0;
    plVar9 = (long *)(lVar2 + lVar1 + 0x2fa4);
    uVar10 = 0xffffffff;
    lVar1 = *(long *)(lVar6 + 0x17b98) + *(long *)(lVar6 + 0x17b90);
    do {
      if ((*(int *)((long)plVar9 + -4) == *(int *)(lVar1 + 0x1c)) &&
         ((*(long *)(lVar1 + 0x20) == *plVar9 && *(long *)(lVar1 + 0x28) == plVar9[1]) &&
          *(int *)(lVar1 + 0x30) == (int)plVar9[2])) {
        uVar10 = uVar8 & 0xffffffff;
        break;
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 0x2b;
    } while (uVar8 != 0xa0);
    if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17bb0) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17bb0) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  return uVar10;
}

