
undefined4 * FUN_03d17da4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  
  uVar2 = (**(code **)(**(long **)(param_1 + 0xc9) + 0x38))();
  switch(uVar2) {
  case 1:
    if (((DAT_05af3c40 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af3c40), iVar3 == 0)) {
      return &DAT_05af35d8;
    }
    FUN_03d18888();
    puVar5 = &DAT_05af35d8;
    puVar4 = &DAT_05af3c40;
    break;
  case 2:
    if (((DAT_05af42b0 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af42b0), iVar3 == 0)) {
      return &DAT_05af3c48;
    }
    FUN_03d1aa84();
    puVar5 = &DAT_05af3c48;
    puVar4 = &DAT_05af42b0;
    break;
  case 3:
    if (((DAT_05af4920 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af4920), iVar3 == 0)) {
      return &DAT_05af42b8;
    }
    FUN_03d1b708();
    puVar5 = &DAT_05af42b8;
    puVar4 = &DAT_05af4920;
    break;
  case 4:
    if (((DAT_05af4f90 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af4f90), iVar3 == 0)) {
      return &DAT_05af4928;
    }
    FUN_03d1baa0();
    puVar5 = &DAT_05af4928;
    puVar4 = &DAT_05af4f90;
    break;
  case 5:
    if (((DAT_05af5600 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af5600), iVar3 == 0)) {
      return &DAT_05af4f98;
    }
    FUN_03d1bf68();
    puVar5 = &DAT_05af4f98;
    puVar4 = &DAT_05af5600;
    break;
  case 6:
    if (((DAT_05af5c70 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af5c70), iVar3 == 0)) {
      return &DAT_05af5608;
    }
    FUN_03d1c010();
    puVar5 = &DAT_05af5608;
    puVar4 = &DAT_05af5c70;
    break;
  case 7:
    if (((DAT_05af62e0 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af62e0), iVar3 == 0)) {
      return &DAT_05af5c78;
    }
    FUN_03d1c0fc();
    puVar5 = &DAT_05af5c78;
    puVar4 = &DAT_05af62e0;
    break;
  case 8:
    if (((DAT_05af6950 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af6950), iVar3 == 0)) {
      return &DAT_05af62e8;
    }
    FUN_03d1c168();
    puVar5 = &DAT_05af62e8;
    puVar4 = &DAT_05af6950;
    break;
  case 9:
    if (((DAT_05af6fc0 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af6fc0), iVar3 == 0)) {
      return &DAT_05af6958;
    }
    FUN_03d1c320();
    puVar5 = &DAT_05af6958;
    puVar4 = &DAT_05af6fc0;
    break;
  case 10:
    if (((DAT_05af7630 & 1) != 0) || (iVar3 = __cxa_guard_acquire(&DAT_05af7630), iVar3 == 0)) {
      return &DAT_05af6fc8;
    }
    FUN_03d1c418();
    puVar5 = &DAT_05af6fc8;
    puVar4 = &DAT_05af7630;
    break;
  default:
    if ((*PTR_DAT_04bd3ef8 & 1) != 0) {
      return (undefined4 *)PTR_DAT_04bd3ef0;
    }
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3ef8);
    puVar5 = (undefined4 *)PTR_DAT_04bd3ef0;
    if (iVar3 == 0) {
      return (undefined4 *)PTR_DAT_04bd3ef0;
    }
    FUN_03c7fd94(PTR_DAT_04bd3ef0);
    puVar1 = PTR_LAB_04bd3ed8;
    puVar4 = PTR_LAB_04bd3ed0;
    *(undefined **)((long)puVar5 + 0x650) = PTR_LAB_04bd3ec8;
    *(undefined **)((long)puVar5 + 0x658) = puVar4;
    *(undefined **)((long)puVar5 + 0x660) = puVar1;
    puVar4 = PTR_DAT_04bd3ef8;
  }
  __cxa_guard_release(puVar4);
  return puVar5;
}

