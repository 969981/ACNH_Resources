
uint FUN_01b4b290(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  uVar2 = 1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar3 != 0) {
    lVar6 = lVar3 + 0x194b0;
    if (*(long *)(lVar3 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x8528) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x8528), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    lVar3 = *(long *)(lVar6 + 0x8510) + *(long *)(lVar6 + 0x8508);
    uVar5 = FUN_02829aa0(lVar3 + 0xdc18);
    if (((((uVar5 & 1) == 0) || (uVar5 = FUN_02829aa0(lVar3 + 0xdf04), (uVar5 & 1) == 0)) ||
        (uVar5 = FUN_02829aa0(lVar3 + 0xe1f0), (uVar5 & 1) == 0)) ||
       (uVar5 = FUN_02829aa0(lVar3 + 0xe4dc), (uVar5 & 1) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_02829aa0(lVar3 + 0xe7c8);
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar6 + 0x8528) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x8528) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

