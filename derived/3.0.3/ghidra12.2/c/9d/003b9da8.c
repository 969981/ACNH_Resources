
bool FUN_003b9da8(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_003b9208(*(undefined8 *)(param_1 + 0x40));
  if (puVar2 != (undefined4 *)0x0) {
    *param_3 = *puVar2;
    uVar1 = FUN_003b9910(puVar2);
    param_3[1] = uVar1;
    *(undefined1 *)(param_3 + 2) = *(undefined1 *)(puVar2 + 1);
  }
  return puVar2 != (undefined4 *)0x0;
}

