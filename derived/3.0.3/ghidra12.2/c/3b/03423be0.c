
undefined8 FUN_03423be0(byte *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar3 != 0) {
    if ((*(long **)(lVar3 + 0x108) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x108), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    FUN_028160a8(*(long *)(lVar3 + 0xf0) + *(long *)(lVar3 + 0xe8));
    iVar2 = FUN_0277d6c4();
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x108) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x108) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
    if (iVar2 == 0x3a2c) {
      return 0;
    }
  }
  return 1;
}

