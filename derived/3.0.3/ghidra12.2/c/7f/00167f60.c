
undefined8 FUN_00167f60(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_1;
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) + -9;
  FUN_001674fc();
  FUN_001684dc(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(puVar1 + 1));
  *(long *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) + 2;
  FUN_0016b500(param_1,*puVar1,puVar1[1]);
  FUN_0016b500(param_1,puVar1[2],puVar1[3]);
  return 0;
}

