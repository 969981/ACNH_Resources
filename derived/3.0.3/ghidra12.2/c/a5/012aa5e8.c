
/* WARNING: Removing unreachable block (ram,0x012aa9c8) */
/* WARNING: Removing unreachable block (ram,0x012aa978) */
/* WARNING: Removing unreachable block (ram,0x012aa928) */
/* WARNING: Removing unreachable block (ram,0x012aa8d8) */
/* WARNING: Removing unreachable block (ram,0x012aa888) */
/* WARNING: Removing unreachable block (ram,0x012aa838) */
/* WARNING: Removing unreachable block (ram,0x012aa7e8) */
/* WARNING: Removing unreachable block (ram,0x012aaa18) */

long * FUN_012aa5e8(long *param_1,long *param_2,uint *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 local_138 [4];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *local_110;
  undefined *puStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  uint local_54;
  
  if (param_2 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      plVar3 = malloc(0x2e0);
    }
    else {
      plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x2e0,8);
    }
    *(undefined1 *)(plVar3 + 1) = 0;
    local_110 = PTR_DAT_04bbc1a0;
    *plVar3 = (long)(PTR_DAT_04bbbcd8 + 0x10);
    puStack_108 = PTR_DAT_04bb2010;
    local_110 = local_110 + 0x10;
    plVar3[6] = 0;
    plVar3[7] = (long)local_110;
    puStack_108 = puStack_108 + 0x10;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    plVar3[2] = (long)local_110;
    plVar3[3] = (long)puStack_108;
    plVar3[4] = 0;
    plVar3[5] = (long)puStack_108;
    plVar3[8] = (long)puStack_108;
    plVar3[9] = 0;
    plVar3[10] = (long)puStack_108;
    plVar3[0xb] = 0;
    puVar1 = PTR_DAT_04bbc1f0 + 0x10;
    plVar3[0x18] = 0;
    plVar3[0x19] = (long)puVar1;
    plVar3[0x1a] = 0;
    plVar3[0x1b] = (long)puVar1;
    plVar3[0x1c] = 0;
    plVar3[0x1d] = (long)puVar1;
    plVar3[0x1e] = 0;
    plVar3[0x1f] = (long)puVar1;
    plVar3[0x20] = 0;
    plVar3[0x21] = (long)puVar1;
    plVar3[0x22] = 0;
    plVar3[0x23] = (long)puVar1;
    plVar3[0x24] = 0;
    plVar3[0x25] = (long)puVar1;
    puVar2 = PTR_DAT_04bc4400;
    *(undefined4 *)(plVar3 + 0x33) = 0;
    local_c0 = 0;
    plVar3[0x26] = 0;
    plVar3[0x27] = (long)puVar1;
    plVar3[0x28] = 0;
    plVar3[0x29] = (long)(puVar2 + 0x10);
    plVar3[0x2a] = 0;
    plVar3[0x2b] = (long)local_110;
    plVar3[0x2c] = (long)puStack_108;
    plVar3[0x2d] = 0;
    plVar3[0x2e] = (long)puStack_108;
    plVar3[0x2f] = 0;
    plVar3[0x30] = 0x244db4da;
    plVar3[0x31] = (long)plVar3 + 0x19c;
    plVar3[0x32] = 4;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_f8 = puStack_108;
    local_e8 = local_110;
    puStack_e0 = puStack_108;
    local_d0 = puStack_108;
    (**(code **)(*param_1 + 0x10))(local_138,param_1);
    local_100 = local_128;
    uStack_fc = uStack_124;
    local_f0 = local_118;
    uStack_ec = uStack_114;
    (**(code **)(*param_1 + 0x18))(local_138,param_1);
    local_138[0] = 0;
    local_98 = 0;
    local_90 = 0;
    local_d8 = local_128;
    uStack_d4 = uStack_124;
    local_c8 = local_118;
    uStack_c4 = uStack_114;
    local_58 = (undefined1)param_3[1];
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_54 = param_3[2];
    local_68 = 0;
    local_60 = 0;
    if ((*param_3 & 1) != 0) {
      local_98 = (**(code **)(*param_1 + 0x20))(param_1,param_2,0,param_3);
    }
    local_138[0] = 1;
    if ((*param_3 >> 1 & 1) != 0) {
      local_90 = (**(code **)(*param_1 + 0x20))(param_1,param_2,1,param_3);
    }
    local_138[0] = 2;
    if ((*param_3 >> 2 & 1) != 0) {
      local_88 = (**(code **)(*param_1 + 0x20))(param_1,param_2,2,param_3);
    }
    local_138[0] = 3;
    if ((*param_3 >> 3 & 1) != 0) {
      local_80 = (**(code **)(*param_1 + 0x20))(param_1,param_2,3,param_3);
    }
    local_138[0] = 4;
    if ((*param_3 >> 4 & 1) != 0) {
      local_78 = (**(code **)(*param_1 + 0x20))(param_1,param_2,4,param_3);
    }
    local_138[0] = 5;
    if ((*param_3 >> 5 & 1) != 0) {
      local_70 = (**(code **)(*param_1 + 0x20))(param_1,param_2,5,param_3);
    }
    local_138[0] = 6;
    if ((*param_3 >> 6 & 1) != 0) {
      local_68 = (**(code **)(*param_1 + 0x20))(param_1,param_2,6,param_3);
    }
    local_138[0] = 7;
    if ((*param_3 >> 7 & 1) != 0) {
      local_60 = (**(code **)(*param_1 + 0x20))(param_1,param_2,7,param_3);
    }
    local_b0 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    local_c0 = (**(code **)(*param_1 + 0x48))(param_1,param_2);
    local_b8 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
    local_a8 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    local_a0 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    FUN_01258ab0(plVar3,&local_110);
  }
  return plVar3;
}

