
undefined8 * FUN_03c934f8(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x1b0,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03c83d80(puVar2,param_2,param_3);
    puVar2[0x34] = 0;
    puVar2[0x35] = param_2 + 400;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x32;
    *puVar2 = &PTR_LAB_04b87e50;
    ppuVar3 = &PTR_LAB_04b88020;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03c83d80(puVar2,param_2,param_3);
    puVar2[0x34] = 0;
    puVar2[0x35] = param_2 + 400;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x32;
    *puVar2 = &PTR_LAB_04b87c20;
    ppuVar3 = &PTR_LAB_04b87df8;
  }
  puVar2[0x32] = ppuVar3;
  puVar2[0x33] = 0;
  return puVar2;
}

