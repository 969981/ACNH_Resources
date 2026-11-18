
/* WARNING: Removing unreachable block (ram,0x0345a184) */
/* WARNING: Removing unreachable block (ram,0x0345a1e4) */

void FUN_0345a150(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  undefined8 *puVar6;
  
  puVar1 = PTR_DAT_04bb2230;
  puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x78);
  if (((*PTR_DAT_04bc78c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc78c8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc78c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc78c8);
  }
  if ((((puVar6 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc78c0), (uVar3 & 1) != 0)) &&
      (*(uint *)(puVar6 + 0x36) < 2)) && (lVar4 = *(long *)(*(long *)puVar1 + 0x78), lVar4 != 0)) {
    bVar5 = *PTR_DAT_04bb32e0;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(lVar4 + 0x1f8) = bVar5;
    *(undefined1 *)(lVar4 + 0x165) = 1;
    if ((6 < *(uint *)(lVar4 + 0xa8) || (1 << (ulong)(*(uint *)(lVar4 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar4 + 0x98) != 0)) {
      FUN_0386b090();
      return;
    }
  }
  return;
}

