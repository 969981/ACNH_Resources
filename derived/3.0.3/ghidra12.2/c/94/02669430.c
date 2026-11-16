
bool FUN_02669430(byte *param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_34,1);
  if (lVar6 == 0) {
    return false;
  }
  if ((*(long **)(lVar6 + 0x17be8) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x17be8), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  if (*(int *)(*(long *)(lVar6 + 0x17bd0) + *(long *)(lVar6 + 0x17bc8)) == 0) {
    bVar3 = true;
    goto LAB_02669544;
  }
  if (DAT_05574040 == 0) {
LAB_02669540:
    bVar3 = false;
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar8 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar8 == 0) goto LAB_02669540;
      lVar8 = lVar8 + 0x70;
    }
    else if (((puVar7 == (undefined8 *)0x0) || ((long *)puVar7[0x26] == (long *)0x0)) ||
            (lVar8 = (**(code **)(*(long *)puVar7[0x26] + 0x38))(), lVar8 == 0)) goto LAB_02669540;
    if ((*(long **)(lVar8 + 0xe7290) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar8 + 0xe7290), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    piVar1 = (int *)(*(long *)(lVar8 + 0xe7278) + *(long *)(lVar8 + 0xe7270));
    piVar2 = (int *)(*(long *)(lVar6 + 0x17bd0) + *(long *)(lVar6 + 0x17bc8));
    if (((short)piVar1[1] == 0) || ((short)piVar2[1] == 0)) {
      bVar3 = *piVar1 == *piVar2;
    }
    else if (*piVar1 == *piVar2) {
      bVar3 = (*(long *)(piVar2 + 1) == *(long *)(piVar1 + 1) &&
              *(long *)(piVar2 + 3) == *(long *)(piVar1 + 3)) && piVar2[5] == piVar1[5];
    }
    else {
      bVar3 = false;
    }
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0xe7290) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0xe7290) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
LAB_02669544:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0x17be8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x17be8) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return bVar3;
}

