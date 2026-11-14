
/* WARNING: Removing unreachable block (ram,0x015e5af0) */
/* WARNING: Removing unreachable block (ram,0x015e5b24) */

void FUN_015e5ac0(long param_1)

{
  long lVar1;
  long lVar2;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  lVar2 = *(long *)PTR_DAT_04bb2200;
  lVar1 = *(long *)(lVar2 + 0x50);
  if (*(long *)(lVar1 + 0x98) != 0) {
    *(undefined1 *)(*(long *)(lVar1 + 0x98) + 0x690) = 1;
    lVar1 = *(long *)(lVar2 + 0x50);
  }
  if (*(long *)(lVar1 + 0x3e0) != 0) {
    *(undefined1 *)(*(long *)(lVar1 + 0x3e0) + 0x690) = 1;
  }
  return;
}

