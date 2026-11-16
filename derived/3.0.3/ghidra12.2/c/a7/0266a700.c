
uint FUN_0266a700(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte local_28 [4];
  byte local_24 [4];
  
  local_24[0] = *param_2;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar4 = FUN_02583354(DAT_055021a0,local_24,1);
  uVar3 = 0;
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x161a8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x161a8), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    bVar2 = *(byte *)(*(long *)(lVar4 + 0x16190) + *(long *)(lVar4 + 0x16188));
    bVar1 = bVar2;
    if (7 < bVar2) {
      bVar1 = 0xff;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x161a8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x161a8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (bVar2 < 8) {
      local_28[0] = *param_2;
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
      uVar3 = FUN_0266a460(param_1,local_28,(int)(char)bVar1);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3 & 1;
}

