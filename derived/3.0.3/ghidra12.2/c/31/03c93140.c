
undefined8 * FUN_03c93140(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(400,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b0f0c8(puVar2,param_2,param_3);
    *(undefined1 *)((long)puVar2 + 0x15c) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2e;
    *puVar2 = &PTR_thunk_FUN_00388f10_04b875b8;
    ppuVar3 = &PTR_LAB_04b87780;
    puVar2[0x31] = param_2 + 0x170;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_03b0f0c8(puVar2,param_2,param_3);
    *(undefined1 *)((long)puVar2 + 0x15c) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x2e;
    puVar2[0x31] = param_2 + 0x170;
    *puVar2 = &PTR_thunk_FUN_00388f10_04b87390;
    ppuVar3 = &PTR_LAB_04b87560;
  }
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = ppuVar3;
  return puVar2;
}

