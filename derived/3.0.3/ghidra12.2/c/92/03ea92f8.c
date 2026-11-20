
uint FUN_03ea92f8(undefined8 *param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)param_1[1];
  if ((puVar2 == (uint *)0x0) || ((*puVar2 & 0xfe) != 0xc0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *puVar2 >> 8;
    if (*(short *)*param_1 == 0x5942) {
      return uVar1 & 0xff00 | *puVar2 >> 0x18 | (uVar1 & 0xff) << 0x10;
    }
  }
  return uVar1;
}

