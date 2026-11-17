
/* WARNING: Removing unreachable block (ram,0x02f4eedc) */

void FUN_02f4eea4(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x70);
  if (((*PTR_DAT_04bc97d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc97d0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc97c8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc97d0);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc97c8);
    if ((uVar2 & 1) == 0) {
      puVar3 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x218) = puVar3;
  return;
}

