
uint FUN_022bf264(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *local_c8;
  uint local_c0;
  uint uStack_bc;
  undefined2 local_b8 [4];
  undefined *local_b0;
  undefined *puStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined *local_98;
  uint local_90;
  uint uStack_8c;
  undefined2 local_88;
  undefined4 local_86;
  undefined1 local_82;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined2 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  undefined1 local_4b;
  undefined1 local_46;
  undefined4 local_44;
  
  local_44 = 0;
  local_4b = 0;
  local_64 = 0;
  local_4d = *(byte *)(param_1 + 0x10);
  local_4e = 0x1d;
  local_46 = 0;
  uVar2 = *(uint *)(param_2 + 8) & 0xfffffffe;
  uVar3 = *(uint *)(param_2 + 0xc) & 0xfffffffe;
  local_90 = *(uint *)(param_2 + 8) | 1;
  if (7 < local_4d) {
    local_4d = 0xff;
  }
  local_58 = (undefined2)uVar2;
  local_56 = (undefined2)uVar3;
  local_b8[0] = *(undefined2 *)PTR_DAT_04bb6298;
  local_60 = *(undefined8 *)PTR_DAT_04bb37e0;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  uStack_8c = *(uint *)(param_2 + 0xc) | 1;
  local_86 = 0;
  local_82 = 0;
  local_78 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0xffffffffffffffff;
  local_88 = 0xff00;
  local_74 = 0x41200000;
  local_6c = 0xff00;
  puStack_a8 = puVar1;
  local_a0 = uVar2;
  uStack_9c = uVar3;
  local_98 = puVar1;
  local_50 = local_b8[0];
  uVar4 = FUN_022ab010(param_1,local_b8,&local_64);
  if ((uVar4 & 1) != 0) {
    local_c8 = puVar1;
    local_c0 = uVar2;
    uStack_bc = uVar3;
    FUN_022ab224(param_1,local_4e,PTR_DAT_04bb37e0,&local_c8,0);
  }
  return uVar4 & 1;
}

