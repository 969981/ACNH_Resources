
undefined8 * FUN_00153994(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = (undefined8 *)FUN_001432f0(0x1c0);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = *param_1;
      memset(puVar2 + 2,0,0x1b0);
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      *puVar2 = uVar3;
      puVar2[1] = param_1;
      puVar1 = param_1;
      if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)param_1[3];
      }
      puVar1[2] = puVar2;
      param_1[3] = puVar2;
    }
  }
  return puVar2;
}

