
void FUN_002d4cc0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *local_180;
  undefined8 local_178;
  long local_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  
  FUN_003137a4(&local_180);
  FUN_0031450c(param_1 + 0x10,&local_180);
  FUN_002e73b4(&local_180);
  local_170 = 0;
  local_178 = &local_180;
  if (((undefined1 **)(param_1 + 0x160) != &local_180) &&
     (local_180 = (undefined1 *)&local_180, local_178 = &local_180,
     FUN_002e7620((undefined1 *)(param_1 + 0x160),&local_180,&local_180), local_170 != 0)) {
    lVar3 = (long)*local_178;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_180 + 8);
    **(long **)(local_180 + 8) = lVar3;
    local_170 = 0;
    plVar4 = (long *)local_178;
    if (local_178 != &local_180) {
      do {
        plVar4 = (long *)plVar4[1];
        FUN_00187e4c();
      } while ((undefined1 **)plVar4 != &local_180);
    }
  }
  puVar2 = PTR_DAT_04bc0ec8;
  local_168 = &local_178;
  *(undefined8 *)(param_1 + 0x178) = 0;
  local_178 = (undefined1 **)((ulong)local_178 & 0xffffffffffffff00);
  uStack_160 = 0x10;
  local_180 = puVar2 + 0x10;
  FUN_00189504(param_1 + 0x180,&local_180);
  local_180 = puVar2 + 0x10;
  FUN_0018b1a0(&local_180);
  local_170 = 0;
  if (((undefined1 **)(param_1 + 0x1b0) != &local_180) &&
     (local_180 = (undefined1 *)&local_180, local_178 = &local_180,
     FUN_002e7760((undefined1 *)(param_1 + 0x1b0),&local_180,&local_180), local_170 != 0)) {
    lVar3 = (long)*local_178;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_180 + 8);
    **(long **)(local_180 + 8) = lVar3;
    local_170 = 0;
    plVar4 = (long *)local_178;
    if (local_178 != &local_180) {
      do {
        plVar5 = (long *)plVar4[1];
        (**(code **)plVar4[2])();
        FUN_00187e4c(plVar4);
        plVar4 = plVar5;
      } while ((undefined1 **)plVar5 != &local_180);
    }
  }
  local_170 = 0;
  local_178 = &local_180;
  if (((undefined1 **)(param_1 + 0x1c8) != &local_180) &&
     (local_180 = (undefined1 *)&local_180, local_178 = &local_180,
     FUN_002e74a0((undefined1 *)(param_1 + 0x1c8),&local_180,&local_180), local_170 != 0)) {
    lVar3 = (long)*local_178;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(local_180 + 8);
    **(long **)(local_180 + 8) = lVar3;
    local_170 = 0;
    plVar4 = (long *)local_178;
    if (local_178 != &local_180) {
      do {
        plVar4 = (long *)plVar4[1];
        FUN_00187e4c();
      } while ((undefined1 **)plVar4 != &local_180);
    }
  }
  puVar2 = PTR_DAT_04bce928;
  uVar1 = (uint)local_178;
  *(undefined2 *)(param_1 + 0x1a8) = 1;
  local_180 = puVar2 + 0x10;
  local_178 = (undefined1 **)CONCAT44(3,uVar1 & 0xffffff00);
  FUN_00315694(param_1 + 0x1e0,&local_180);
  return;
}

