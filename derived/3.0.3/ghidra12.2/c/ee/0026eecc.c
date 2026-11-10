
void FUN_0026eecc(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined1 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_2 + 0xb9) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  lVar2 = FUN_002ba7a0(*(undefined8 *)PTR_DAT_04bc1510);
  bVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x48))();
  *(byte *)(param_2 + 200) = bVar1 & 1;
  bVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x50))();
  *(byte *)(param_2 + 0xc9) = bVar1 & 1;
  bVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x58))();
  local_34 = 0;
  *(undefined4 *)(param_2 + 0x74) = 1000;
  *(byte *)(param_2 + 0xca) = bVar1 & 1;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

