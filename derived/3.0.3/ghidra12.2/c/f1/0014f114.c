
void FUN_0014f114(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_0014f190();
  if (puVar1 != (undefined8 *)0x0) {
    do {
      *puVar1 = *(undefined8 *)(param_1 + 0x50);
      FUN_00158f30(puVar1,1);
      FUN_0014f784(*(undefined8 *)(param_1 + 0x50),puVar1,0);
      puVar1 = (undefined8 *)FUN_0014f190(param_1);
    } while (puVar1 != (undefined8 *)0x0);
  }
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 == 0) {
    return;
  }
  FUN_0014a930(lVar2,*(undefined8 *)(lVar2 + 200));
  FUN_0014f260(*(undefined8 *)(param_1 + 0x50));
  return;
}

