
void FUN_03d5e2e4(long param_1)

{
  undefined4 *puVar1;
  
  if ((*(long *)(param_1 + 0x240) == 0) ||
     (puVar1 = *(undefined4 **)(param_1 + 0x248), puVar1 == (undefined4 *)0x0)) {
    return;
  }
  FUN_03d4ac08(*puVar1,puVar1[1]);
  return;
}

