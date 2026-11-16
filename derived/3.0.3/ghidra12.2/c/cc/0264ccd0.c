
uint FUN_0264ccd0(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_24,1);
  if ((lVar3 == 0) || (uVar1 = FUN_01b00960(param_2), uVar1 == 0xffffffff)) {
    return 0;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
    plVar5 = *(long **)(lVar6 + 0x1100);
  }
  else {
    plVar5 = *(long **)(lVar3 + 0x1a5b0);
  }
  if ((plVar5 == (long *)0x0) || ((undefined8 *)*plVar5 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (*(code *)**(undefined8 **)*plVar5)();
    uVar2 = uVar2 ^ 1;
  }
  if (uVar1 >> 7 < 0x7d) {
    uVar1 = *(uint *)(*(long *)(lVar6 + 0x10e8) + *(long *)(lVar6 + 0x10e0) +
                     (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1;
  }
  else {
    uVar1 = 0;
  }
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x1100) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x1100) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return uVar1;
}

