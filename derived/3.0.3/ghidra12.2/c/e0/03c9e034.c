
undefined8 * FUN_03c9e034(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x110,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b30bd0(puVar2,param_2,param_3);
    puVar2[0x20] = 0;
    puVar3 = &DAT_04b860c8;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    ppuVar4 = &PTR_LAB_04b861e8;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b30bd0(puVar2,param_2,param_3);
    puVar2[0x20] = 0;
    puVar3 = &DAT_04b85f58;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    ppuVar4 = &PTR_LAB_04b86080;
  }
  *puVar2 = puVar3 + 0x10;
  puVar2[0x1d] = ppuVar4;
  *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x1d;
  return puVar2;
}

