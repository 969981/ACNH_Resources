
void FUN_02df52e4(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *local_70;
  char *local_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  byte local_50;
  undefined8 *local_48;
  
  if (((*PTR_DAT_04bc66e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc66e8), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc66e0 = PTR_DAT_04bc4c70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc66e8);
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = (**(code **)*param_2)(param_2,PTR_DAT_04bc66e0);
    puVar1 = PTR_DAT_04bc4e60;
    if ((uVar3 & 1) != 0) {
      lVar4 = param_2[0xaf];
      if (lVar4 != 0) {
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0xffffffffffffffff;
        local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
        puVar5 = *(undefined8 **)param_2[0x7f];
        local_70 = param_2;
        if ((*PTR_DAT_04bc4e60 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
          if (iVar2 != 0) {
            *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4e60);
          }
        }
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
          if ((uVar3 & 1) == 0) {
            puVar5 = (undefined8 *)0x0;
          }
        }
        local_60 = puVar5;
        FUN_03863fe0(lVar4,&local_70);
      }
      lVar4 = param_2[0xb0];
      if (lVar4 != 0) {
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0xffffffffffffffff;
        local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
        puVar5 = *(undefined8 **)param_2[0x7f];
        local_70 = param_2;
        if ((*puVar1 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
          if (iVar2 != 0) {
            *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc4e60);
          }
        }
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4e58);
          if ((uVar3 & 1) == 0) {
            puVar5 = (undefined8 *)0x0;
          }
        }
        local_60 = puVar5;
        FUN_03863fe0(lVar4,&local_70);
      }
      puVar5 = (undefined8 *)param_2[0xae];
      if (((*PTR_DAT_04bc4f40 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bc4f38 = PTR_DAT_04bc4f48 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4f40);
      }
      if ((puVar5 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc4f38), (uVar3 & 1) != 0)) {
        local_50 = *(byte *)(param_1 + 0x1f8);
        local_70 = (undefined8 *)(PTR_DAT_04bb2020 + 0x10);
        if (7 < local_50) {
          local_50 = 0xff;
        }
        local_68 = "DateInput";
        uStack_58 = DAT_056908b8;
        local_60 = local_70;
        local_48 = param_2;
        FUN_030debc0(puVar5,&local_70);
      }
    }
  }
  return;
}

