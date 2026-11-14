
undefined8 * FUN_01d8a1a4(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(DAT_05aec400 + 0x3d0);
  if (((DAT_053756f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_053756f8), iVar1 != 0)) {
    DAT_053756f0 = &PTR_LAB_04a5abf8;
    __cxa_guard_release(&DAT_053756f8);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,&DAT_053756f0);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  return puVar3;
}

