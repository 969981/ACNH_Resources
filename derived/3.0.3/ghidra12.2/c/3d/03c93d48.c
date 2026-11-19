
undefined8 * FUN_03c93d48(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x110,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_00382afc(puVar2,param_2);
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    ppuVar3 = &PTR_LAB_04b8f128;
    puVar2[0x21] = param_2 + 0xf0;
    puVar2[0x1e] = &PTR_LAB_04b8f240;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_00382afc(puVar2,param_2);
    ppuVar3 = &PTR_LAB_04b88bd8;
    puVar2[0x21] = param_2 + 0xf0;
    puVar2[0x1e] = &PTR_LAB_04b88cf8;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
  }
  *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x1e;
  *puVar2 = ppuVar3;
  return puVar2;
}

