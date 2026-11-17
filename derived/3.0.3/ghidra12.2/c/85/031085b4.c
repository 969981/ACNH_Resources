
void FUN_031085b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *local_40;
  char *pcStack_38;
  
  puVar1 = PTR_DAT_04bb2020;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "/L_Cursor_00";
  puVar4 = (undefined8 *)FUN_0386e6b0(param_1,&local_40);
  puVar2 = PTR_DAT_04bc4d18;
  if (((*PTR_DAT_04bc4d18 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d10);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x360) = puVar4;
  local_40 = puVar1 + 0x10;
  pcStack_38 = "/L_Stamp_00";
  puVar4 = (undefined8 *)FUN_0386e6b0(param_1,&local_40);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d10);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x368) = puVar4;
  local_40 = puVar1 + 0x10;
  pcStack_38 = "/L_Preview_00";
  puVar4 = (undefined8 *)FUN_0386e6b0(param_1,&local_40);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d10);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x370) = puVar4;
  local_40 = puVar1 + 0x10;
  pcStack_38 = "/L_Stamp_01";
  puVar4 = (undefined8 *)FUN_0386e6b0(param_1,&local_40);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4d18), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc4d10 = PTR_DAT_04bc4d20 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4d18);
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d10);
    if ((uVar5 & 1) == 0) {
      puVar4 = (undefined8 *)0x0;
    }
  }
  *(undefined8 **)(param_1 + 0x378) = puVar4;
  return;
}

