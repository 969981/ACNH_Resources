
void FUN_039b6f90(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  undefined *local_70;
  char *pcStack_68;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "gsys_invalid";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x24,param_2,param_3,&local_70);
  pcStack_68 = "gsys_context";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x25,param_2,param_3,&local_70);
  pcStack_68 = "gsys_skeleton";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x26,param_2,param_3,&local_70);
  pcStack_68 = "gsys_skeleton_ex";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x27,param_2,param_3,&local_70);
  pcStack_68 = "gsys_shape";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x28,param_2,param_3,&local_70);
  pcStack_68 = "gsys_shape_ex";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x29,param_2,param_3,&local_70);
  pcStack_68 = "gsys_environment";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2a,param_2,param_3,&local_70);
  pcStack_68 = "gsys_res_material";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2b,param_2,param_3,&local_70);
  pcStack_68 = "gsys_material";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2c,param_2,param_3,&local_70);
  pcStack_68 = "gsys_shader_option";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2d,param_2,param_3,&local_70);
  pcStack_68 = "gsys_scene_material";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2e,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user0";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x2f,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user1";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x30,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user2";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x31,param_2,param_3,&local_70);
  pcStack_68 = "gsys_material_ffl";
  local_70 = puVar1;
  FUN_03973b40(param_1 + 0x32,param_2,param_3,&local_70);
  pcStack_68 = "gsys_invalid";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x33,param_2,param_3,&local_70);
  pcStack_68 = "gsys_environment";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x34,param_2,param_3,&local_70);
  pcStack_68 = "gsys_material";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x35,param_2,param_3,&local_70);
  pcStack_68 = "gsys_scene_material";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x36,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user0";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x37,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user1";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x38,param_2,param_3,&local_70);
  pcStack_68 = "gsys_user2";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x39,param_2,param_3,&local_70);
  pcStack_68 = "gsys_analyze_buffer";
  local_70 = puVar1;
  FUN_03973c90(param_1 + 0x3a,param_2,param_3,&local_70);
  lVar4 = 0;
  uVar5 = 0;
  do {
    pcStack_68 = (char *)((long)&DAT_041b40b0 + (long)*(int *)((long)&DAT_041b40b0 + lVar4));
    local_70 = puVar1;
    FUN_03973de0((long)param_1 + ((long)((ulong)uVar5 << 0x20) >> 0x1e) + 0x10,param_2,param_3,
                 &local_70);
    lVar4 = lVar4 + 4;
    uVar5 = uVar5 + 1;
  } while (lVar4 != 0x80);
  uVar5 = 0xffffffff;
  lVar4 = 0x10;
  do {
    pbVar2 = (byte *)((long)param_1 + lVar4);
    lVar4 = lVar4 + 4;
    uVar3 = crc32b(uVar5,(uint)*pbVar2,0x4c11db7);
    uVar3 = crc32b(uVar3,(uint)pbVar2[1],0x4c11db7);
    uVar3 = crc32b(uVar3,(uint)pbVar2[2],0x4c11db7);
    uVar5 = crc32b(uVar3,(uint)pbVar2[3],0x4c11db7);
  } while ((int)lVar4 != 0x90);
  param_1[1] = ~uVar5;
  lVar4 = 0x90;
  uVar5 = 0xffffffff;
  do {
    pbVar2 = (byte *)((long)param_1 + lVar4);
    lVar4 = lVar4 + 4;
    uVar3 = crc32b(uVar5,(uint)*pbVar2,0x4c11db7);
    uVar3 = crc32b(uVar3,(uint)pbVar2[1],0x4c11db7);
    uVar3 = crc32b(uVar3,(uint)pbVar2[2],0x4c11db7);
    uVar5 = crc32b(uVar3,(uint)pbVar2[3],0x4c11db7);
  } while ((int)lVar4 != 0xcc);
  *param_1 = ~uVar5;
  uVar3 = crc32b(0xffffffff,(uint)(byte)param_1[0x33],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xcd),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xce),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xcf),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x34],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd1),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd2),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd3),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x35],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd5),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd6),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd7),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x36],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xd9),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xda),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xdb),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x37],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xdd),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xde),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xdf),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x38],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe1),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe2),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe3),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x39],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe5),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe6),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe7),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)(byte)param_1[0x3a],0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xe9),0x4c11db7);
  uVar3 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xea),0x4c11db7);
  uVar5 = crc32b(uVar3,(uint)*(byte *)((long)param_1 + 0xeb),0x4c11db7);
  param_1[2] = ~uVar5;
  param_1[3] = (uint)(param_1[4] != 0xffffffff) | (uint)(param_1[5] != 0xffffffff) << 1 |
               (uint)(param_1[6] != 0xffffffff) << 2 | (uint)(param_1[7] != 0xffffffff) << 3 |
               (uint)(param_1[8] != 0xffffffff) << 4 | (uint)(param_1[9] != 0xffffffff) << 5 |
               (uint)(param_1[10] != 0xffffffff) << 6 | (uint)(param_1[0xb] != 0xffffffff) << 7 |
               (uint)(param_1[0xc] != 0xffffffff) << 8 | (uint)(param_1[0xd] != 0xffffffff) << 9 |
               (uint)(param_1[0xe] != 0xffffffff) << 10 | (uint)(param_1[0xf] != 0xffffffff) << 0xb
               | (uint)(param_1[0x10] != 0xffffffff) << 0xc |
               (uint)(param_1[0x11] != 0xffffffff) << 0xd |
               (uint)(param_1[0x12] != 0xffffffff) << 0xe |
               (uint)(param_1[0x13] != 0xffffffff) << 0xf |
               (uint)(param_1[0x14] != 0xffffffff) << 0x10 |
               (uint)(param_1[0x15] != 0xffffffff) << 0x11 |
               (uint)(param_1[0x16] != 0xffffffff) << 0x12 |
               (uint)(param_1[0x17] != 0xffffffff) << 0x13 |
               (uint)(param_1[0x18] != 0xffffffff) << 0x14 |
               (uint)(param_1[0x19] != 0xffffffff) << 0x15 |
               (uint)(param_1[0x1a] != 0xffffffff) << 0x16 |
               (uint)(param_1[0x1b] != 0xffffffff) << 0x17 |
               (uint)(param_1[0x1c] != 0xffffffff) << 0x18 |
               (uint)(param_1[0x1d] != 0xffffffff) << 0x19 |
               (uint)(param_1[0x1e] != 0xffffffff) << 0x1a |
               (uint)(param_1[0x1f] != 0xffffffff) << 0x1b |
               (uint)(param_1[0x20] != 0xffffffff) << 0x1c |
               (uint)(param_1[0x21] != 0xffffffff) << 0x1d |
               (uint)(param_1[0x22] != 0xffffffff) << 0x1e |
               (uint)(param_1[0x23] != 0xffffffff) << 0x1f;
  return;
}

