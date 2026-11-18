
/* WARNING: Removing unreachable block (ram,0x033db534) */

void FUN_033db4e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x60);
  if (((*PTR_DAT_04bc99f0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc99f0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc99e8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc99f0);
  }
  if ((puVar3 == (undefined8 *)0x0) ||
     (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc99e8), (uVar2 & 1) == 0)) {
    return;
  }
  uVar2 = (**(code **)(puVar3[0x5b] + 0x10))(puVar3 + 0x5b);
  if ((uVar2 & 1) != 0) {
    puVar3[0x5b] = &PTR_LAB_04b26850;
  }
  FUN_033db610(puVar3,param_1,param_2,param_3,param_4 & 1);
  return;
}

