
void FUN_03129ce4(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "/L_New_00";
  puVar2 = (undefined8 *)FUN_0386e6b0(param_1,&local_30);
  if (((*PTR_DAT_04bc4d18 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar3 = (**(code **)*puVar2)(puVar2,PTR_DAT_04bc4d10);
    if ((uVar3 & 1) == 0) {
      puVar2 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x568) = puVar2;
  FUN_03401330(param_1 + 800,param_1);
  return;
}

