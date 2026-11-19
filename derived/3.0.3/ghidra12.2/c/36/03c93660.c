
undefined8 * FUN_03c93660(long param_1,long param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x100,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_00370964(puVar2,param_2);
    ppuVar3 = &PTR_LAB_04b88a70;
    ppuVar4 = &PTR_LAB_04b88b80;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_00370964(puVar2,param_2);
    ppuVar3 = &PTR_LAB_04b88900;
    ppuVar4 = &PTR_LAB_04b88a18;
  }
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = param_2 + 0xd8;
  *puVar2 = ppuVar3;
  puVar2[0x1b] = ppuVar4;
  *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x1b;
  return puVar2;
}

