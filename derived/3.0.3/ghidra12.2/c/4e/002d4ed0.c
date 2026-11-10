
void FUN_002d4ed0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined1 *local_180;
  long *local_178;
  long local_170;
  long **local_168;
  undefined8 uStack_160;
  
  FUN_003137a4(&local_180);
  FUN_0031450c(param_1 + 0x10,&local_180);
  FUN_002e73b4(&local_180);
  local_170 = 0;
  local_178 = (long *)&local_180;
  if (((undefined1 **)(param_1 + 0x160) != &local_180) &&
     (local_180 = (undefined1 *)&local_180, local_178 = (long *)&local_180,
     FUN_002e7620((undefined1 *)(param_1 + 0x160),&local_180,&local_180), local_170 != 0)) {
    lVar2 = *local_178;
    *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_180 + 8);
    **(long **)(local_180 + 8) = lVar2;
    local_170 = 0;
    plVar3 = local_178;
    if ((undefined1 **)local_178 != &local_180) {
      do {
        plVar3 = (long *)plVar3[1];
        FUN_00187e4c();
      } while ((undefined1 **)plVar3 != &local_180);
    }
  }
  puVar1 = PTR_DAT_04bc0ec8;
  local_168 = &local_178;
  *(undefined8 *)(param_1 + 0x178) = 0;
  local_178 = (long *)((ulong)local_178 & 0xffffffffffffff00);
  uStack_160 = 0x10;
  local_180 = puVar1 + 0x10;
  FUN_00189504(param_1 + 0x180,&local_180);
  local_180 = puVar1 + 0x10;
  FUN_0018b1a0(&local_180);
  *(undefined2 *)(param_1 + 0x1a8) = 1;
  return;
}

