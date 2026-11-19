
undefined8 * FUN_03c9e8cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined *puVar4;
  undefined *puVar3;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  puVar2 = (undefined8 *)FUN_00367b14(0x150,0x10);
  if (cVar1 == '\0') {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_003986b0(puVar2,0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_2,param_3,param_4)
    ;
    puVar4 = PTR_DAT_04bd4308;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x26;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar3 = puVar4 + 0x120;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    FUN_003986b0(puVar2,0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_2,param_3,param_4)
    ;
    puVar4 = PTR_DAT_04bd4300;
    *(undefined8 **)((long)puVar2 + 0xc9) = puVar2 + 0x26;
    puVar2[0x28] = 0;
    puVar2[0x29] = 0;
    puVar3 = puVar4 + 0x128;
  }
  *puVar2 = puVar4 + 0x10;
  puVar2[0x26] = puVar3;
  puVar2[0x27] = 0;
  return puVar2;
}

