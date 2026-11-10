
undefined8 FUN_001f64c0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_001f4e40(0x10);
  if (puVar3 == (undefined8 *)0x0) {
    return 0xfffffe0c;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = (long)puVar3;
  *puVar3 = param_2;
  puVar3[1] = lVar1;
  if (lVar2 == 0) {
    param_1[1] = (long)puVar3;
    return 0;
  }
  return 0;
}

