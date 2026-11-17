
/* WARNING: Removing unreachable block (ram,0x02f083c8) */
/* WARNING: Removing unreachable block (ram,0x02f08424) */

bool FUN_02f08394(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04bb2230;
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x78);
  if (((*PTR_DAT_04bc78c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc78c8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc78c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc78c8);
  }
  if (((puVar5 == (undefined8 *)0x0) ||
      (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc78c0), (uVar4 & 1) == 0)) ||
     (*(char *)(puVar5 + 0x48) == '\0')) {
    bVar2 = true;
  }
  else {
    puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xa8);
    if (((*PTR_DAT_04bc73c8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc73c8);
    }
    if ((puVar5 == (undefined8 *)0x0) ||
       (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc73c0), (uVar4 & 1) == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(puVar5[0x48] + 0x230) == '\0';
    }
  }
  return bVar2;
}

