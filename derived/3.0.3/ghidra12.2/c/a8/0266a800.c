
uint FUN_0266a800(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  uVar2 = 0;
  if ((param_2 < 8) && (lVar3 != 0)) {
    lVar3 = lVar3 + (ulong)param_2 * 0x2450;
    if ((*(long **)(lVar3 + 0x3f60) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x3f60), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    FUN_026e85f0(*(long *)(lVar3 + 0x3f48) + *(long *)(lVar3 + 0x3f40));
    uVar5 = FUN_02665700();
    if ((uVar5 & 1) == 0) {
      FUN_026e8d10(*(long *)(lVar3 + 0x3f48) + *(long *)(lVar3 + 0x3f40));
      uVar2 = FUN_02665700();
    }
    else {
      uVar2 = 1;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x3f60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x3f60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

