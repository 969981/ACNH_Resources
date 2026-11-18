
uint FUN_034f5208(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined *local_30;
  undefined4 local_28;
  
  lVar1 = param_1 + 0x1c1d8;
  if (*(char *)(param_1 + 0x1ce00) == '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x238) + 0x570);
    local_40 = 0;
    local_38 = 0;
    local_50 = PTR_DAT_04bc8e10 + 0x10;
    local_48 = -1;
    if (*(int *)(lVar3 + 0x208) < 1) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)**(undefined8 **)(lVar3 + 0x210);
    }
    if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
       (param_1 = __cxa_guard_acquire(PTR_DAT_04bc4d98), (int)param_1 != 0)) {
      *(undefined **)PTR_DAT_04bc4d90 = PTR_DAT_04bc4da0 + 0x10;
      param_1 = __cxa_guard_release(PTR_DAT_04bc4d98);
    }
    uVar2 = (uint)param_1;
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4d90);
      if ((((uVar2 & 1) != 0) &&
          (plVar5 = *(long **)(puVar4[0x5a] + (ulong)(2 < *(uint *)(puVar4 + 0x59)) * 0x10),
          plVar5 != (long *)0x0)) && (plVar5[1] != 0)) {
        local_30 = PTR_DAT_04bc0cb8 + 0x10;
        local_28 = 0x1f;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_30);
        uVar2 = (**(code **)(plVar5[3] + 0x210))(&local_50,plVar5[1],0,0);
      }
    }
    lVar3 = local_48;
    if (local_48 != -1) {
      local_28 = 0;
      local_30 = (undefined *)&local_50;
      uVar2 = FUN_03465d00(lVar1,&local_30);
    }
    uVar2 = lVar3 != -1 & uVar2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

