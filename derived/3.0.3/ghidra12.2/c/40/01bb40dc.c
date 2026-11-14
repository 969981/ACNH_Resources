
/* WARNING: Removing unreachable block (ram,0x01bb4178) */

long FUN_01bb40dc(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_2c;
  undefined4 local_24;
  
  lVar4 = 0;
  if (param_1 != 0) {
    local_2c = 0x8000000c6;
    local_24 = *param_2;
    puVar2 = (undefined8 *)FUN_01bc06e0(param_1,&local_2c,1);
    if (((*PTR_DAT_04bc0b20 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0b20), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc0b18 = PTR_DAT_04bc0ab8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc0b20);
    }
    if (((puVar2 == (undefined8 *)0x0) ||
        (uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc0b18), (uVar3 & 1) == 0)) ||
       (*(char *)(puVar2 + 0x23) != '\0')) {
      lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x8678;
    }
    else {
      lVar4 = 0;
    }
  }
  return lVar4;
}

