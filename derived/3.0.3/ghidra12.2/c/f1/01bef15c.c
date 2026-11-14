
void FUN_01bef15c(long param_1)

{
  ushort uVar1;
  undefined7 uVar2;
  undefined1 uVar3;
  undefined7 *puVar4;
  short *psVar5;
  undefined7 local_128;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined4 local_11c;
  ushort local_118;
  short *local_110;
  short *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined4 local_f7;
  undefined3 uStack_f3;
  undefined *local_f0;
  undefined2 *puStack_e8;
  undefined4 local_e0;
  undefined2 local_dc [63];
  undefined2 local_5e;
  undefined **local_58;
  undefined2 *puStack_50;
  undefined4 local_48;
  undefined2 local_44 [15];
  undefined2 local_26;
  
  local_f8 = 1;
  local_100 = *(undefined8 *)(param_1 + 0x208);
  local_e0 = 0x40;
  puStack_e8 = local_dc;
  local_f7 = 0;
  uStack_f3 = 0;
  local_5e = 0;
  local_dc[0] = 0;
  local_26 = 0;
  local_44[0] = 0;
  local_f0 = &DAT_04a3e0d0;
  puStack_50 = local_44;
  local_48 = 0x10;
  local_58 = &PTR_LAB_049ae4f8;
  if (*(long *)(param_1 + 0x210) == 0) {
    psVar5 = *(short **)(param_1 + 0x238);
    if (psVar5 == (short *)0x0) {
      return;
    }
    local_11c = 0;
    local_118 = 0;
    local_128 = 0;
    uVar2 = local_128;
    uStack_121 = 0;
    uVar3 = uStack_121;
    uStack_120 = 0;
    uStack_11f = 0;
    uStack_11e = 0;
    local_110 = (short *)0x0;
    local_108 = (short *)0x0;
    uStack_121 = (undefined1)((ulong)psVar5 >> 0x38);
    local_128 = SUB87(psVar5,0);
    if (*psVar5 == 0xf) {
      local_108 = psVar5 + 3;
      local_11c = *(undefined4 *)(psVar5 + 1);
      uStack_11e = 1;
      uVar2 = local_128;
      uVar3 = uStack_121;
    }
    else if (*psVar5 == 0xe) {
      uVar1 = psVar5[3];
      if ((uVar1 & 1) == 0) {
        local_11c = *(undefined4 *)(psVar5 + 1);
        local_110 = psVar5 + 4;
        uStack_11f = 1;
        local_108 = (short *)((long)local_110 + ((ulong)uVar1 & 0xfffe));
        uVar2 = local_128;
        uVar3 = uStack_121;
        local_118 = uVar1;
      }
    }
    else {
      uStack_120 = 1;
    }
    uStack_121 = uVar3;
    local_128 = uVar2;
    puVar4 = &local_128;
  }
  else {
    if ((*(short *)(param_1 + 0x21c) == 0x28) && (*(short *)(param_1 + 0x21e) == 0)) {
      return;
    }
    puVar4 = (undefined7 *)(param_1 + 0x210);
  }
  FUN_01bef314(&local_100,puVar4);
  FUN_01bef540(&local_100);
  *(undefined1 *)(param_1 + 0x240) = 1;
  return;
}

