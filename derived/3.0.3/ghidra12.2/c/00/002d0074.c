
void thunk_FUN_00263110(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = (long)(PTR_DAT_04bcd9f8 + 0x10);
  FUN_00221064(param_1[0xc]);
  FUN_00220f24(param_1[0xc]);
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    FUN_00220f6c(lVar2);
    FUN_00285dc0(lVar2);
  }
  puVar3 = (undefined8 *)param_1[0xe];
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar3);
    if (0x7f < uVar1) {
      uVar1 = uVar1 >> 7;
      puVar4 = puVar3;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar1 = uVar1 - 1;
        puVar4 = puVar4 + 0x10;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar3);
  }
  lVar2 = param_1[0xf];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  lVar2 = param_1[0x10];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  lVar2 = param_1[0x13];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  FUN_00220f6c(param_1 + 0x19);
  thunk_FUN_00221120(param_1);
  return;
}

