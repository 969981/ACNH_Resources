
bool FUN_0092decc(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 uStack_39;
  undefined1 local_38 [16];
  undefined1 *local_28;
  
  local_38 = FUN_02642bc0();
  uVar4 = local_38._8_8_ & 0xffffffff;
  if (uVar4 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00d72dc0();
  }
  local_28 = &uStack_39;
  lVar2 = (*(code *)(&PTR_LAB_04a88310)[uVar4])(&local_28,local_38);
  if (lVar2 != 0) {
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 4);
    }
    else {
      uVar4 = (**(code **)*puVar3)();
      uVar1 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8) + 4);
      if ((((uVar4 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    if (uVar1 < 4) {
      return (uVar1 & 1) == 0;
    }
  }
  return true;
}

