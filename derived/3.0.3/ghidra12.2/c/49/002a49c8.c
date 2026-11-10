
void FUN_002a49c8(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04bce070;
  puVar2 = (undefined8 *)param_1[0xe];
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00285dc0(puVar2);
    param_1[0xe] = 0;
  }
  FUN_002ac9c0(param_1);
  return;
}

