
void FUN_03449670(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar1 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar1 != 0) {
    lVar4 = lVar1 + 0x194b0;
    if (*(long *)(lVar1 + 0x194b8) == 0) {
      lVar4 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar4 + 0x8448) == (long *)0x0) ||
       (puVar2 = (undefined8 *)**(long **)(lVar4 + 0x8448), puVar2 == (undefined8 *)0x0)) {
      (**(code **)*param_2)(param_2,*(long *)(lVar4 + 0x8430) + *(long *)(lVar4 + 0x8428));
    }
    else {
      uVar3 = (**(code **)*puVar2)();
      (**(code **)*param_2)(param_2,*(long *)(lVar4 + 0x8430) + *(long *)(lVar4 + 0x8428));
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar4 + 0x8448) != 0)) &&
         (puVar2 = *(undefined8 **)(*(long *)(lVar4 + 0x8448) + 8), puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)();
      }
    }
  }
  return;
}

