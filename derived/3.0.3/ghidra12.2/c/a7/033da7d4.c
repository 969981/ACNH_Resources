
void FUN_033da7d4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  FUN_02bf098c();
  param_1[0xae] = 0;
  *param_1 = &PTR_LAB_04b26360;
  if (((*PTR_DAT_04bc4e88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e88), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e80 = PTR_DAT_04bc4e90 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e88);
  }
  if ((param_3 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*param_3)(param_3,PTR_DAT_04bc4e80), (uVar2 & 1) != 0)) {
    puVar3 = (undefined8 *)param_3[6];
    if (((*PTR_DAT_04bc99f0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc99f0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc99e8 = PTR_DAT_04bb7c30 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc99f0);
    }
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc99e8);
      if ((uVar2 & 1) == 0) {
        puVar3 = (undefined8 *)0x0;
      }
    }
    param_1[0xaf] = puVar3;
  }
  return;
}

