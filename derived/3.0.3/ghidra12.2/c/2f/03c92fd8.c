
undefined8 * FUN_03c92fd8(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x140,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b33034(puVar2,param_2,param_3);
    puVar2[0x26] = 0;
    puVar2[0x27] = param_2 + 0x120;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x24;
    *puVar2 = &PTR_FUN_04b86680;
    ppuVar3 = &PTR_LAB_04b86798;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b33034(puVar2,param_2,param_3);
    puVar2[0x26] = 0;
    puVar2[0x27] = param_2 + 0x120;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x24;
    *puVar2 = &PTR_FUN_04b86508;
    ppuVar3 = &PTR_LAB_04b86628;
  }
  puVar2[0x24] = ppuVar3;
  puVar2[0x25] = 0;
  return puVar2;
}

