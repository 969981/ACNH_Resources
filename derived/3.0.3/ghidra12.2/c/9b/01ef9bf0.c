
/* WARNING: Removing unreachable block (ram,0x01ef9e14) */
/* WARNING: Removing unreachable block (ram,0x01ef9df0) */
/* WARNING: Removing unreachable block (ram,0x01ef9e04) */
/* WARNING: Removing unreachable block (ram,0x01ef9e7c) */

void FUN_01ef9bf0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_01f3bd44();
  *param_1 = &PTR_LAB_04a626f0;
  FUN_020634d4(param_1 + 0x1cf7,param_1,param_1 + 0x15e8);
  puVar2 = PTR_DAT_04bc2810;
  puVar1 = PTR_DAT_04bc1e38;
  param_1[0x1d7d] = param_1;
  param_1[0x1cf7] = puVar2 + 0x10;
  param_1[0x1d7e] = puVar1 + 0x10;
  FUN_01ffc430(param_1 + 0x1d7f,param_1[1]);
  FUN_02001978(param_1 + 0x2493);
  *(undefined4 *)(param_1 + 0x24ed) = 0;
  puVar1 = PTR_DAT_04bc24f0;
  param_1[0x24ef] = &PTR_LAB_04a62af8;
  param_1[0x24f0] = 0;
  param_1[0x24f3] = &PTR_LAB_04a62af8;
  param_1[0x24f7] = &PTR_LAB_04a62af8;
  param_1[0x1d7e] = puVar1 + 0x10;
  param_1[0x24fb] = &PTR_LAB_04a62af8;
  param_1[0x250a] = 0;
  param_1[0x24ff] = &PTR_LAB_04a62b48;
  param_1[0x2506] = 0;
  param_1[0x2504] = 0;
  param_1[0x2505] = 0;
  param_1[0x2502] = 0;
  param_1[0x2503] = &PTR_LAB_04a62b98;
  param_1[0x250f] = &PTR_LAB_04a62b98;
  param_1[0x2513] = 0x1000000000;
  param_1[0x24ee] = param_1;
  param_1[0x24f6] = 0;
  param_1[0x24fa] = 0;
  param_1[0x24fe] = 0;
  *(undefined4 *)(param_1 + 0x2514) = 0;
  param_1[0x15ab] = param_1[0x15ab] & 0xfffffffffffffeff;
  param_1[0x2508] = 0;
  param_1[0x2509] = 0;
  param_1[0x2507] = &PTR_LAB_04a62be8;
  param_1[0x250e] = 0;
  param_1[0x250c] = 0;
  param_1[0x250d] = 0;
  param_1[0x250b] = &PTR_LAB_04a62c38;
  param_1[0x2512] = 0;
  param_1[0x24f1] = 0;
  param_1[0x24f2] = 0;
  param_1[0x24f4] = 0;
  param_1[0x24f5] = 0;
  param_1[0x24f8] = 0;
  param_1[0x24f9] = 0;
  param_1[0x24fc] = 0;
  param_1[0x24fd] = 0;
  param_1[0x2500] = 0;
  param_1[0x2501] = 0;
  param_1[0x2510] = 0;
  param_1[0x2511] = 0;
  *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
  *(byte *)((long)param_1 + 0xad54) = *(byte *)((long)param_1 + 0xad54) | 1;
  puVar1 = PTR_FUN_04bc1df8;
  param_1[0x24f2] = 0;
  param_1[0x24f0] = param_1;
  param_1[0x24f1] = puVar1;
  puVar1 = PTR_FUN_04bc1e18;
  param_1[0x24f4] = param_1;
  param_1[0x24f5] = puVar1;
  puVar1 = PTR_LAB_04bc2128;
  param_1[0x24f6] = 0;
  param_1[0x24fa] = 0;
  param_1[0x24f8] = param_1;
  param_1[0x24f9] = puVar1;
  puVar1 = PTR_LAB_04bc1df0;
  param_1[0x2502] = 0;
  param_1[0x2500] = param_1;
  param_1[0x2501] = puVar1;
  param_1[0x158e] = param_1 + 0x24ef;
  param_1[0x158d] = param_1 + 0x24f3;
  param_1[0x158f] = param_1 + 0x24f7;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x24ff;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  puVar1 = PTR_FUN_04bc1648;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x24fe] = 0;
    param_1[0x24fc] = param_1;
    param_1[0x24fd] = puVar1;
    param_1[0x1596] = param_1 + 0x24fb;
  }
  return;
}

