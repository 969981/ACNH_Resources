
undefined8 * FUN_03c9e1b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x100,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_0037bc10(puVar2,param_2,param_3);
    puVar2[0x1e] = 0;
    puVar3 = &DAT_04b85580;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    ppuVar4 = &PTR_LAB_04b85698;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_0037bc10(puVar2,param_2,param_3);
    puVar2[0x1e] = 0;
    puVar3 = &DAT_04b85418;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    ppuVar4 = &PTR_LAB_04b85538;
  }
  *puVar2 = puVar3 + 0x10;
  puVar2[0x1b] = ppuVar4;
  *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x1b;
  return puVar2;
}

