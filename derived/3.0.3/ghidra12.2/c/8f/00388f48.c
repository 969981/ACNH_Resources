
void FUN_00388f48(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_0037ccc0();
  lVar1 = param_1[0x28];
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x49) & 1) == 0)) {
    FUN_00377968(lVar1,param_2);
    puVar2 = (undefined8 *)param_1[0x28];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_00367b50(puVar2);
    }
    param_1[0x28] = 0;
  }
  (**(code **)(*param_1 + 0xf8))(param_1,param_2);
  if (param_1[0x27] != 0) {
    FUN_00367b50(*(undefined8 *)(param_1[0x27] + 8));
    FUN_00367b50(*(undefined8 *)param_1[0x27]);
    FUN_00367b50(param_1[0x27]);
    param_1[0x27] = 0;
  }
  if (param_1[0x2a] != 0) {
    FUN_00367b50();
    param_1[0x2a] = 0;
  }
  return;
}

