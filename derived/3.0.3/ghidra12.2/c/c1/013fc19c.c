
void FUN_013fc19c(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0 && *(int *)(param_1 + 0x18) != 0) {
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
    if (((DAT_051b7218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b7218), iVar1 != 0)) {
      DAT_051b7210 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b7218);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,&DAT_051b7210), (uVar2 & 1) != 0)) {
      puVar3[0x1f] = &PTR_LAB_04997640;
      puVar3[0x20] = &LAB_013fc400;
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (1 < *(uint *)(param_1 + 0x18))) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
    if (((DAT_051b7218 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b7218), iVar1 != 0)) {
      DAT_051b7210 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b7218);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,&DAT_051b7210), (uVar2 & 1) != 0)) {
      puVar3[0x1f] = &PTR_LAB_04997640;
      puVar3[0x20] = &LAB_013fc520;
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (2 < *(uint *)(param_1 + 0x18))) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
    if (((DAT_051b72e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b72e0), iVar1 != 0)) {
      DAT_051b72d8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b72e0);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,&DAT_051b72d8), (uVar2 & 1) != 0)) {
      puVar3[0x1f] = &PTR_LAB_04997690;
      puVar3[0x20] = &LAB_013fc640;
    }
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (3 < *(uint *)(param_1 + 0x18))) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
    if (((DAT_051b72e0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051b72e0), iVar1 != 0)) {
      DAT_051b72d8 = PTR_DAT_04bb4a80 + 0x10;
      __cxa_guard_release(&DAT_051b72e0);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,&DAT_051b72d8), (uVar2 & 1) != 0)) {
      puVar3[0x1f] = &PTR_LAB_04997690;
      puVar3[0x20] = &LAB_013fc760;
    }
  }
  return;
}

