
undefined8 FUN_0074fa14(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  lVar2 = FUN_0074eb00();
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x18) >> 1 & 1) != 0)) {
    uVar3 = FUN_03f2d924(lVar2 + 0x10);
    if ((uVar3 & 1) != 0) {
      puVar4 = (undefined8 *)FUN_03f2d7f0(lVar2 + 0x10);
      if (((*PTR_DAT_04bb4e40 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb4e40), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bb4e38 = PTR_DAT_04bb4e48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4e40);
      }
      if ((puVar4 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb4e38), (uVar3 & 1) != 0)) {
        return puVar4[0xb];
      }
    }
  }
  return 0;
}

