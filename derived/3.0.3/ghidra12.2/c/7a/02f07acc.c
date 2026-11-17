
/* WARNING: Removing unreachable block (ram,0x02f07afc) */

bool FUN_02f07acc(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar5 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc73c0), (uVar2 & 1) == 0)) {
    return true;
  }
  lVar6 = puVar5[0x52];
  lVar4 = *(long *)(lVar6 + 0x218);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x570), lVar4 != 0)) {
    plVar3 = *(long **)(lVar4 + 0x1b0);
    if (plVar3 == (long *)0x0) {
      return false;
    }
    uVar2 = (**(code **)(*plVar3 + 0x60))();
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  return *(int *)(lVar6 + 0x1b0) == 3;
}

