
void FUN_0328479c(long param_1,uint param_2,short param_3,uint param_4)

{
  short *psVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *local_c0;
  ulong *puStack_b8;
  undefined *local_b0;
  undefined2 *puStack_a8;
  undefined *local_a0;
  undefined2 *local_98;
  undefined4 local_90;
  undefined2 local_8c [31];
  undefined2 local_4e;
  short local_48 [2];
  uint local_44;
  undefined *local_40;
  undefined *puStack_38;
  ulong local_18;
  
  psVar1 = (short *)(param_1 + 0x500) + param_2;
  if (10 < param_2) {
    psVar1 = (short *)(param_1 + 0x500);
  }
  *psVar1 = param_3;
  local_44 = param_4;
  if (param_3 == 0) {
    local_18 = local_18 & 0xffffffffffff0000;
    puStack_b8 = &local_18;
    plVar3 = (long *)(param_1 + 0x4a0) + param_2;
    if (10 < param_2) {
      plVar3 = (long *)(param_1 + 0x4a0);
    }
    local_c0 = &DAT_04b17748;
    local_a0 = &DAT_04b177a8;
    local_98 = (undefined2 *)&DAT_040c1e5f;
    local_40 = *(undefined **)(*(long *)(*plVar3 + 0x20) + 0x18);
    local_a0 = (undefined *)FUN_0328b6d0(&local_40,&local_a0,0);
    FUN_032d67f0(&local_a0,&local_c0);
  }
  else {
    local_48[1] = 0;
    local_98 = local_8c;
    local_90 = 0x20;
    local_4e = 0;
    local_8c[0] = 0;
    local_a0 = PTR_DAT_04bc0840 + 0x10;
    local_48[0] = param_3;
    FUN_038d1340(&local_a0,&DAT_04169b80,local_48);
    plVar3 = (long *)(param_1 + 0x4a0) + param_2;
    if (10 < param_2) {
      plVar3 = (long *)(param_1 + 0x4a0);
    }
    local_b0 = &DAT_04b17748;
    puStack_a8 = local_98;
    local_40 = &DAT_04b177a8;
    puStack_38 = &DAT_040c1e5f;
    local_18 = *(ulong *)(*(long *)(*plVar3 + 0x20) + 0x18);
    local_40 = (undefined *)FUN_0328b6d0(&local_18,&local_40,0);
    FUN_032d67f0(&local_40,&local_b0);
    if (local_44 < 3) {
      puVar2 = (undefined8 *)(param_1 + 0x448) + param_2;
      if (10 < param_2) {
        puVar2 = (undefined8 *)(param_1 + 0x448);
      }
      FUN_032c8150(*(undefined4 *)(&DAT_04184648 + (long)(int)local_44 * 4),*puVar2,0,0);
    }
  }
  return;
}

