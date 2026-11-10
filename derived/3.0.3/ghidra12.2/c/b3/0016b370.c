
undefined8 FUN_0016b370(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_001689e8(param_3,0x30);
  *param_1 = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    lVar2 = *param_1;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar3 = FUN_0016b1d0((undefined8 *)(lVar2 + 8),param_2,param_3);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    FUN_001689f8(param_3,*param_1);
  }
  return 0xfffffc7b;
}

