
void FUN_002ac9c0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_DAT_04bce0e0;
  puVar3 = (undefined8 *)param_1[0xd];
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = FUN_00285e00(puVar3);
    if (0x6af < uVar2) {
      uVar2 = uVar2 / 0x6b0;
      puVar4 = puVar3;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar2 = uVar2 - 1;
        puVar4 = puVar4 + 0xd6;
      } while (uVar2 != 0);
    }
    FUN_00285dc0(puVar3);
    param_1[0xd] = 0;
  }
  thunk_FUN_002aa8b4(param_1);
  return;
}

