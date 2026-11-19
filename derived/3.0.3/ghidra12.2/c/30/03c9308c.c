
undefined8 * FUN_03c9308c(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x170,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b35e0c(puVar2,param_2,param_3);
    puVar2[0x2c] = 0;
    puVar2[0x2d] = param_2 + 0x150;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2a;
    *puVar2 = &PTR_FUN_04b881e8;
    ppuVar3 = &PTR_LAB_04b882f8;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b35e0c(puVar2,param_2,param_3);
    puVar2[0x2c] = 0;
    puVar2[0x2d] = param_2 + 0x150;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2a;
    *puVar2 = &PTR_FUN_04b88078;
    ppuVar3 = &PTR_LAB_04b88190;
  }
  puVar2[0x2a] = ppuVar3;
  puVar2[0x2b] = 0;
  return puVar2;
}

