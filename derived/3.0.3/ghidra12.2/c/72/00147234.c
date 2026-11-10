
undefined8 * FUN_00147234(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00143330(1,0x1e8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0xbab1e;
    iVar1 = FUN_0014a910(puVar2 + 0x10);
    if (((iVar1 == 0) &&
        (iVar1 = FUN_0014ae60(puVar2 + 0x17,param_1,&LAB_0014a03c,&LAB_0014a04c,&LAB_0014a060),
        iVar1 == 0)) && (iVar1 = FUN_0014e8d0(puVar2 + 0x1f,param_2), iVar1 == 0)) {
      FUN_00143a84(puVar2 + 4,&DAT_00147340);
      FUN_00143a84(puVar2 + 8,&DAT_00147340);
      puVar2[0x2d] = 5;
      puVar2[0x1d] = 2;
      puVar2[0x2a] = 0xffffffffffffffff;
    }
    else {
      FUN_0014b15c(puVar2 + 0x17);
      FUN_0014b15c(puVar2 + 0x10);
      FUN_0014e94c(puVar2 + 0x1f);
      FUN_00143b8c(puVar2 + 4,0);
      FUN_00143b8c(puVar2 + 8,0);
      FUN_00143300(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

