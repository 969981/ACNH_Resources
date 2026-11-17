
/* WARNING: Removing unreachable block (ram,0x02ef439c) */

undefined8 FUN_02ef436c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(*(long *)PTR_DAT_04bb2230 + 0x98) == 0) ||
     (uVar1 = FUN_02db5ff0(), (uVar1 & 1) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

