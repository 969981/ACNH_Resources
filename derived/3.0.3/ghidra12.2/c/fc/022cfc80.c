
uint FUN_022cfc80(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined1 local_154 [2];
  undefined8 local_152;
  undefined2 local_14a;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  undefined1 local_142;
  undefined1 local_141;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  byte local_ec;
  undefined2 local_e8 [4];
  undefined *local_e0;
  undefined *puStack_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined2 local_b8;
  undefined4 local_b6;
  undefined1 local_b2;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined2 local_9c;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_60 = 0;
  local_70 = PTR_DAT_04bc0510 + 0x10;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((long)param_3 + 4);
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_3);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8), lVar6 != 0)) {
        local_60 = lVar6;
      }
    }
  }
  local_88 = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_98 = puVar1;
  puStack_90 = puVar2;
  local_80 = puVar2;
  FUN_01afb480(&local_70,&local_98);
  iVar3 = *(int *)(param_3 + 2);
  iVar4 = *(int *)((long)param_3 + 0x14);
  local_b0 = 0xffffffffffffffff;
  local_a4 = 0x41200000;
  local_d0 = (int)local_88 + iVar3;
  iStack_cc = local_88._4_4_ + iVar4;
  local_c0 = (int)local_78 + iVar3;
  iStack_bc = local_78._4_4_ + iVar4;
  local_88 = CONCAT44(iStack_cc,local_d0);
  local_78 = CONCAT44(iStack_bc,local_c0);
  local_b6 = 0;
  local_b2 = 0;
  local_a8 = 0;
  local_9c = 0xff00;
  local_e8[0] = *(undefined2 *)PTR_DAT_04bb6298;
  local_b8 = 0xff00;
  local_f0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_154[0] = 5;
  local_14a = (undefined2)iVar3;
  local_148 = (undefined2)iVar4;
  local_141 = (undefined1)*param_2;
  local_152 = *param_3;
  local_146 = (undefined1)*(undefined4 *)((long)param_3 + 0x24);
  local_144 = (undefined1)*(undefined4 *)(param_3 + 3);
  local_145 = (undefined1)*(undefined4 *)(param_3 + 4);
  local_143 = (undefined1)*(undefined4 *)((long)param_3 + 0x1c);
  local_54 = *(undefined4 *)((long)param_3 + 0x2c);
  local_ec = *(byte *)(param_1 + 0x10);
  local_142 = (undefined1)local_54;
  if (7 < local_ec) {
    local_ec = 0xff;
  }
  local_e0 = puVar1;
  puStack_d8 = puVar2;
  local_c8 = puVar2;
  uVar5 = FUN_022ccd80(param_1,local_e8,local_154);
  return uVar5 & 1;
}

