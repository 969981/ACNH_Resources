
uint FUN_0266b0a0(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_025830c0(DAT_055021a0,local_14,1);
  uVar2 = 0;
  if ((param_2 < 8) && (lVar3 != 0)) {
    lVar3 = lVar3 + (ulong)param_2 * 0x2450;
    if ((*(long **)(lVar3 + 0x3f28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x3f28), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_026e9ac0(*(long *)(lVar3 + 0x3f10) + *(long *)(lVar3 + 0x3f08));
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x3f28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3f28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

