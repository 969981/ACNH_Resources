
void FUN_002aca60(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_00285e00(puVar2);
    if (0x6af < uVar1) {
      uVar1 = uVar1 / 0x6b0;
      puVar3 = puVar2;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar1 = uVar1 - 1;
        puVar3 = puVar3 + 0xd6;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(puVar2);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}

