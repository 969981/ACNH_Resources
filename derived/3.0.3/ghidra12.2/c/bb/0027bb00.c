
void FUN_0027bb00(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar2 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_04bcdbd0 + 0x10);
  if (lVar2 != 0) {
    uVar1 = FUN_00285e00(lVar2);
    if (0x2f < uVar1) {
      uVar1 = uVar1 / 0x30;
      lVar4 = lVar2;
      do {
        FUN_00220f6c(lVar4);
        uVar1 = uVar1 - 1;
        lVar4 = lVar4 + 0x30;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(lVar2);
  }
  puVar3 = (undefined8 *)param_1[0x15];
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar3);
    if (0x7f < uVar1) {
      uVar1 = uVar1 >> 7;
      puVar5 = puVar3;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar1 = uVar1 - 1;
        puVar5 = puVar5 + 0x10;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar3);
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  puVar3 = (undefined8 *)param_1[0x18];
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar3);
    if (0x7f < uVar1) {
      uVar1 = uVar1 >> 7;
      puVar5 = puVar3;
      do {
        (**(code **)*puVar5)(puVar5);
        uVar1 = uVar1 - 1;
        puVar5 = puVar5 + 0x10;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar3);
  }
  lVar2 = param_1[0x19];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  lVar2 = param_1[0x1a];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  lVar2 = param_1[0x1d];
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
  }
  FUN_00220f6c(param_1 + 0x22);
  thunk_FUN_00221120(param_1);
  return;
}

