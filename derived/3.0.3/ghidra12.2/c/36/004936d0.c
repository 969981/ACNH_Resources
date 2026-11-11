
void FUN_004936d0(undefined8 *param_1)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [64];
  void **local_78;
  void *local_70;
  void *pvStack_68;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_04866a20;
  if (*(int *)(param_1 + 0x3f) == 1) {
    FUN_00446070(&local_70,param_1 + 0x39);
    local_c8 = auStack_b8;
    local_c0 = -0x7ffffff000000000;
    local_78 = &local_70;
    FUN_0049f670(&local_c8,0,0x54434d30);
    FUN_0049f670(&local_c8,1,0x54434944);
    if (0 < *(int *)(param_1 + 0x3e)) {
      lVar3 = 0;
      do {
        local_28 = *(undefined8 *)(param_1[0x3d] + lVar3 * 8);
        pvVar1 = (void *)((long)local_70 + 8);
        if (pvStack_68 < pvVar1) {
          FUN_004462a0(&local_70,&local_28,8);
        }
        else {
          memcpy(local_70,&local_28,8);
          local_70 = pvVar1;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x3e));
    }
    FUN_0049f780(&local_c8);
    FUN_00493920(param_1,&local_c8,&local_70);
    FUN_0049f780(&local_c8);
    lVar3 = local_c0;
    puVar4 = PTR_DAT_048607b8;
    uVar2 = local_c0._4_4_;
    local_c0 = (ulong)local_c0._4_4_ << 0x20;
    if ((-1 < lVar3) && (local_c8 != (undefined1 *)0x0)) {
      FUN_00421f90(PTR_DAT_048607b8,local_c8,4,uVar2 & 0x3fffffff);
    }
    FUN_00446180(&local_70);
  }
  else {
    puVar4 = PTR_DAT_048607b8;
  }
  FUN_00454810(param_1 + 0x61);
  FUN_0043d280(param_1 + 0x5f);
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2f4)) && (param_1[0x5d] != 0)) {
    FUN_00421f90(puVar4,param_1[0x5d],4,*(uint *)((long)param_1 + 0x2f4) & 0x3fffffff);
  }
  param_1[0x5d] = 0;
  *(undefined4 *)((long)param_1 + 0x2f4) = 0x80000000;
  FUN_004516b0(param_1 + 0x59);
  FUN_00451010(param_1 + 0x54);
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 8))();
  }
  FUN_004617b0(param_1 + 0x45);
  FUN_0049c0f0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 500)) && (param_1[0x3d] != 0)) {
    FUN_00421f90(puVar4,param_1[0x3d],8,*(uint *)((long)param_1 + 500) & 0x3fffffff);
  }
  param_1[0x3d] = 0;
  *(undefined4 *)((long)param_1 + 500) = 0x80000000;
  if (param_1[0x39] != 0) {
    FUN_004435c0();
  }
  FUN_0049a9f0(param_1 + 0x2c);
  FUN_0049ab40(param_1 + 3);
  *(undefined4 *)(param_1 + 2) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    FUN_00421f90(puVar4,param_1[1],1,*(uint *)((long)param_1 + 0x14) & 0x3fffffff);
  }
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0x80000000;
  return;
}

