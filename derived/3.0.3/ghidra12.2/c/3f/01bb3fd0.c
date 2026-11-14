
long FUN_01bb3fd0(long param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (param_1 == 0) {
    return 0;
  }
  local_2c = 0x4000000c6;
  local_24 = *param_2;
  puVar2 = (undefined8 *)FUN_01bc06e0(param_1,&local_2c,1);
  if (((*PTR_DAT_04bc0b20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0b20), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0b18 = PTR_DAT_04bc0ab8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0b20);
  }
  if (((puVar2 == (undefined8 *)0x0) ||
      (uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc0b18), (uVar3 & 1) == 0)) ||
     (*(char *)(puVar2 + 0x23) != '\0')) {
    if (param_3 == 0) {
      uVar5 = 0x4b;
    }
    else {
      if (param_3 != 1) goto LAB_01bb4068;
      uVar5 = 0x4c;
    }
    lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x29f8 + (ulong)uVar5 * 0x128;
    if (0x50 < uVar5) {
      lVar4 = *(long *)PTR_DAT_04bb28f8 + 0x29f8;
    }
  }
  else {
LAB_01bb4068:
    lVar4 = 0;
  }
  return lVar4;
}

