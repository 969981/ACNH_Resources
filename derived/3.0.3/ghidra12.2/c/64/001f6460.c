
undefined8 FUN_001f6460(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = (undefined8 *)FUN_001f4e40(0x10);
  if (puVar2 == (undefined8 *)0x0) {
    return 0xfffffe0c;
  }
  lVar3 = *(long *)(param_1 + 8);
  *puVar2 = param_2;
  puVar2[1] = 0;
  lVar1 = param_1;
  if (lVar3 != 0) {
    lVar1 = lVar3;
  }
  *(undefined8 **)(lVar1 + 8) = puVar2;
  *(undefined8 **)(param_1 + (ulong)(lVar3 != 0) * 8) = puVar2;
  return 0;
}

