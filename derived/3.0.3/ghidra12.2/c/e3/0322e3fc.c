
undefined8 * FUN_0322e3fc(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (((*param_1 & 1) == 0) || (lVar3 = *(long *)(param_1 + 8), lVar3 == 0)) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    if ((*(byte *)(lVar3 + 8) & 10) != 2) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bc8b38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8b38), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc8b30 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8b38);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc8b30);
    if ((uVar2 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  return puVar4;
}

