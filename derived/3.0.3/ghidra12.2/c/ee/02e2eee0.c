
void FUN_02e2eee0(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_30;
  undefined4 local_28;
  
  if (param_2 == 1) {
    if (((*PTR_DAT_04bc6a88 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6a88), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc6a80 = PTR_DAT_04bc6a68 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6a88);
    }
    pcVar4 = *(code **)*param_1;
    puVar3 = PTR_DAT_04bc6a80;
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (((*PTR_DAT_04bc6a60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc6a60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc6a58 = PTR_DAT_04bc6a68 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc6a60);
    }
    pcVar4 = *(code **)*param_1;
    puVar3 = PTR_DAT_04bc6a58;
  }
  uVar2 = (*pcVar4)(param_1,puVar3);
  if ((uVar2 & 1) == 0) {
    param_1 = (undefined8 *)0x0;
  }
  puVar5 = *(undefined8 **)param_1[0x7f];
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
  if ((uVar2 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  plVar6 = *(long **)puVar5[0x45];
  if (plVar6 != (long *)0x0) {
    if (param_3 == 1) {
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_30);
      uVar7 = 0x3f800000;
    }
    else {
      if (param_3 != 0) {
        return;
      }
      local_30 = PTR_DAT_04bc4f00 + 0x10;
      local_28 = 0x14;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_30);
      uVar7 = 0;
    }
    (**(code **)(plVar6[3] + 0x158))(uVar7,plVar6[1]);
  }
  return;
}

