
undefined8 * FUN_00153910(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001432f0(0x68);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[6] = 0x2d2d2d2d2d2d2d2d;
    *puVar2 = param_1;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0x2d2d2d2d2d2d2d2d;
    puVar2[5] = 0x2d2d2d2d2d2d2d2d;
    iVar1 = FUN_00154eb0(param_1,puVar2 + 7,0x11);
    if (iVar1 == 0) {
      *(undefined4 *)(puVar2 + 10) = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
    }
    else {
      FUN_00143300(puVar2);
      puVar2 = (undefined8 *)0x0;
    }
  }
  return puVar2;
}

