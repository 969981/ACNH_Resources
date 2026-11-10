
void FUN_00383514(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  FUN_0037ccc0();
  lVar1 = *(long *)(param_1 + 0xd8);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x49) & 1) == 0)) {
    FUN_00377968(lVar1,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_00367b50(puVar2);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(byte *)(param_1 + 0xf0) < 4) {
    FUN_0036477c();
    return;
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    return;
  }
  lVar1 = FUN_003b49b0(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  if (lVar1 != 0) {
    FUN_00367b50();
  }
  lVar1 = FUN_003b49a8(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
  if (lVar1 != 0) {
    FUN_00367b50();
  }
  puVar2 = *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2);
    FUN_00367b50(puVar2);
    if (*(long *)(param_1 + 0xf8) == 0) goto LAB_003835e0;
  }
  FUN_00367b50();
LAB_003835e0:
  *(undefined8 *)(param_1 + 0xf8) = 0;
  return;
}

