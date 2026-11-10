
void FUN_00273ea0(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_1[0x2b];
  *param_1 = (long)(PTR_DAT_04bcdb28 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar2);
    if (0x7f < uVar1) {
      uVar1 = uVar1 >> 7;
      puVar3 = puVar2;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar1 = uVar1 - 1;
        puVar3 = puVar3 + 0x10;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar2);
    param_1[0x2b] = 0;
  }
  FUN_002b4980(param_1);
  return;
}

