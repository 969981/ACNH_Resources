
undefined8 * FUN_03c935ac(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x180,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b0f0c8(puVar2,param_2,param_3);
    puVar2[0x2e] = 0;
    puVar2[0x2f] = param_2 + 0x160;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2c;
    *puVar2 = &PTR_LAB_04b87a00;
    ppuVar3 = &PTR_LAB_04b87bc8;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b0f0c8(puVar2,param_2,param_3);
    puVar2[0x2e] = 0;
    puVar2[0x2f] = param_2 + 0x160;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2c;
    *puVar2 = &PTR_LAB_04b877d8;
    ppuVar3 = &PTR_LAB_04b879a8;
  }
  puVar2[0x2c] = ppuVar3;
  puVar2[0x2d] = 0;
  return puVar2;
}

