
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0255d2d4(undefined4 *param_1,undefined4 param_2,byte *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  byte local_14 [4];
  
  local_14[0] = *param_3;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  uVar1 = DAT_0558600c;
  if (lVar3 == 0) {
switchD_0255d344_default:
    *param_1 = _DAT_05586008;
    param_1[1] = uVar1;
    return;
  }
  switch(param_2) {
  case 1:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026e85f0(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 2:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026ea320(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 3:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026ea720(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 4:
  case 5:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_02814e30(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 6:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_028152a0(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 7:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026e9240(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 8:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026e9470(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  case 9:
    if ((*(long **)(lVar3 + 0x1aa0) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1aa0), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_02816430(*(long *)(lVar3 + 0x1a88) + *(long *)(lVar3 + 0x1a80));
    uVar1 = puVar5[1];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    if ((uVar2 & 1) != 0) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 0x1aa0);
    if (lVar3 == 0) {
      return;
    }
    goto LAB_0255d57c;
  case 10:
    if ((*(long **)(lVar3 + 0x178) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x178), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    puVar5 = (undefined4 *)FUN_026e96a0(*(long *)(lVar3 + 0x160) + *(long *)(lVar3 + 0x158));
    break;
  default:
    goto switchD_0255d344_default;
  }
  uVar1 = puVar5[1];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  if (((uVar2 & 1) == 0) && (lVar3 = *(long *)(lVar3 + 0x178), lVar3 != 0)) {
LAB_0255d57c:
    if (*(undefined8 **)(lVar3 + 8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(lVar3 + 8))();
    }
  }
  return;
}

