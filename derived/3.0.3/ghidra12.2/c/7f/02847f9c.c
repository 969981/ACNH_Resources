
void FUN_02847f9c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 local_38;
  
  *param_1 = 0xfffe;
  FUN_0277d4ac(param_1);
  lVar2 = FUN_0265c2a0((long)*(char *)(param_2 + 0x2c));
  if (lVar2 != 0) {
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      FUN_020fd7d8(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      FUN_020fd7d8(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  bVar1 = *(byte *)(param_2 + 0x2e);
  if (bVar1 < 2) {
    local_38 = 0x946;
  }
  else if (bVar1 == 2) {
    local_38 = 0x947;
  }
  else {
    if (bVar1 != 3) {
      return;
    }
    local_38 = 0x1532;
  }
  FUN_0277d4ac(&local_38);
  *(undefined4 *)param_1 = (undefined4)local_38;
  *(undefined4 *)((long)param_1 + 4) = local_38._4_4_;
  return;
}

