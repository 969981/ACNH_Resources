
void FUN_0026ebf0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(param_1 + 0xa0);
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar3);
    if (0x6af < uVar1) {
      uVar1 = uVar1 / 0x6b0;
      puVar4 = puVar3;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar1 = uVar1 - 1;
        puVar4 = puVar4 + 0xd6;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar3);
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  lVar2 = *(long *)(param_1 + 0xc0);
  *(undefined2 *)(param_1 + 0x8a) = 0;
  if (lVar2 != 0) {
    FUN_00285e00(lVar2);
    FUN_00285dc0(lVar2);
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined2 *)(param_1 + 0xba) = 0;
  return;
}

