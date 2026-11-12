
uint FUN_0092ddf4(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined1 uStack_39;
  undefined1 local_38 [16];
  undefined1 *local_28;
  
  local_38 = FUN_02642bc0();
  uVar3 = local_38._8_8_ & 0xffffffff;
  if (uVar3 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_28 = &uStack_39;
  lVar1 = (*(code *)(&PTR_LAB_04a88310)[uVar3])(&local_28,local_38);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
    uVar4 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 4);
    if (3 < uVar4) {
      uVar4 = 0;
    }
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    uVar4 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 4);
    if (3 < uVar4) {
      uVar4 = 0;
    }
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return uVar4;
}

