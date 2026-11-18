
uint FUN_03529394(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined *local_30;
  undefined4 local_28;
  
  local_40 = (undefined1 *)0x0;
  local_38 = 0;
  puVar4 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58);
  if ((uVar3 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  plVar5 = *(long **)puVar4[0x41];
  if (plVar5 != (long *)0x0) {
    local_50 = 0;
    local_48 = 0;
    local_60 = PTR_DAT_04bc8e10 + 0x10;
    uStack_58 = 0xffffffffffffffff;
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 0x1f;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
    (**(code **)(plVar5[3] + 0x210))(&local_60,plVar5[1],0,0);
    local_40 = (undefined1 *)&local_60;
  }
  uVar1 = FUN_03465d00(param_1 + 0x1c1b0,&local_40);
  return uVar1 & 1;
}

