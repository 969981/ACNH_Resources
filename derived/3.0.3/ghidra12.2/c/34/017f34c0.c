
uint FUN_017f34c0(int param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined4 local_28 [2];
  
  if (param_1 < 0x2922957e) {
    if (((param_1 == 0x80e20d8) || (param_1 == 0xb6a5301)) || (param_1 == 0x1490248c))
    goto LAB_017f3548;
  }
  else if (((param_1 == 0x2922957e) || (param_1 == 0x7a616e2f)) || (param_1 == 0x51b9e069)) {
LAB_017f3548:
    lVar2 = FUN_02642ea0();
    if (lVar2 == 0) {
      uVar1 = 8;
    }
    else if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
            (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      if (8 < uVar1) {
        uVar1 = 0;
      }
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      if (8 < uVar1) {
        uVar1 = 0;
      }
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    return uVar1;
  }
  local_28[0] = 0;
  uVar4 = FUN_02b5f400(local_28);
  uVar1 = 0;
  if ((uVar4 & 1) != 0) {
    uVar1 = FUN_0266ca90(local_28[0]);
  }
  return uVar1;
}

