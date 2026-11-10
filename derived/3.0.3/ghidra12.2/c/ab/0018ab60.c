
uint FUN_0018ab60(uint *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *param_1;
  puVar1 = &LAB_01c68ad4;
  if ((int)uVar2 < 0) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 == (undefined1 *)0x0) {
    uVar4 = FUN_001872e0();
    uVar3 = (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) << 9;
    uVar4 = uVar3 | 0x132;
    if ((uVar2 & 0x7ff0000) == 0x720000) {
      uVar4 = uVar3 | 0x133;
    }
    return uVar4;
  }
  uVar4 = 0x3e8132;
  if (uVar2 != 0x10002) {
    uVar4 = 0;
  }
  return uVar4;
}

