
void FUN_0311d710(undefined8 param_1,byte *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar1 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar1 != 0) {
    if ((*(long **)(lVar1 + 0x3278) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x3278), puVar2 == (undefined8 *)0x0)) {
      FUN_0311d5d0(param_1,*(long *)(lVar1 + 0x3260) + *(long *)(lVar1 + 0x3258));
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      FUN_0311d5d0(param_1,*(long *)(lVar1 + 0x3260) + *(long *)(lVar1 + 0x3258));
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x3278) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x3278) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  return;
}

