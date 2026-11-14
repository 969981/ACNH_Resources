
undefined8 * FUN_01950d30(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*param_2 == 1) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)(param_1 + 0x18) < 2) {
      return (undefined8 *)0x0;
    }
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
    if (((DAT_052cbb88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbb88), iVar1 != 0)) {
      DAT_052cbb80 = &PTR_LAB_049e1a00;
      __cxa_guard_release(&DAT_052cbb88);
    }
  }
  else {
    if (*param_2 != 0) {
      return (undefined8 *)0x0;
    }
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)**(long **)(param_1 + 0x20);
    if (((DAT_052cbb88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052cbb88), iVar1 != 0)) {
      DAT_052cbb80 = &PTR_LAB_049e1a00;
      __cxa_guard_release(&DAT_052cbb88);
    }
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,&DAT_052cbb80);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

