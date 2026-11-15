
/* WARNING: Removing unreachable block (ram,0x01eb156c) */
/* WARNING: Removing unreachable block (ram,0x01eb1544) */
/* WARNING: Removing unreachable block (ram,0x01eb1528) */
/* WARNING: Removing unreachable block (ram,0x01eb1554) */
/* WARNING: Removing unreachable block (ram,0x01eb15b8) */

void FUN_01eb1328(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_01f3bd44();
  puVar1 = PTR_DAT_04bc1e38;
  *param_1 = &PTR_LAB_04a5f530;
  param_1[0x1cf7] = puVar1 + 0x10;
  FUN_01ffc430(param_1 + 0x1cf8,param_1[1]);
  FUN_02001978(param_1 + 0x240c);
  puVar1 = PTR_DAT_04bc24d0;
  *(undefined4 *)(param_1 + 0x2466) = 0;
  param_1[0x2467] = param_1;
  param_1[0x1cf7] = puVar1 + 0x10;
  FUN_020634d4(param_1 + 0x2468,param_1,param_1 + 0x15e8);
  puVar1 = PTR_DAT_04bc2658;
  param_1[0x24ee] = param_1;
  *(undefined1 *)(param_1 + 0x24ef) = 0;
  param_1[0x24f1] = param_2;
  param_1[0x24f4] = 0xfffe;
  param_1[0x24f2] = 0;
  param_1[0x24f3] = 0;
  *(undefined1 *)(param_1 + 0x24f5) = 0;
  *(undefined8 *)((long)param_1 + 0x127ac) = 0;
  param_1[0x2468] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bc1e30 + 0x10;
  param_1[0x2500] = &PTR_LAB_04a5f980;
  param_1[0x2504] = &PTR_LAB_04a5f980;
  param_1[0x2508] = &PTR_LAB_04a5f980;
  param_1[0x250c] = &PTR_LAB_04a5f980;
  param_1[0x2510] = &PTR_LAB_04a5f980;
  *(undefined8 *)((long)param_1 + 0x127b4) = 0;
  param_1[0x2509] = 0;
  param_1[0x250a] = 0;
  param_1[0x250b] = 0;
  param_1[0x24f9] = param_1;
  param_1[0x24fa] = &LAB_01eb1624;
  param_1[0x24f0] = puVar1;
  param_1[0x24f8] = &PTR_LAB_04a5f930;
  param_1[0x24fc] = &PTR_LAB_04a5f930;
  param_1[0x24fb] = 0;
  param_1[0x24fd] = param_1;
  puVar1 = PTR_LAB_04bc1df0;
  param_1[0x24ff] = 0;
  param_1[0x24fe] = puVar1;
  puVar1 = PTR_FUN_04bc1df8;
  param_1[0x2501] = param_1;
  param_1[0x2503] = 0;
  param_1[0x2505] = param_1;
  param_1[0x2502] = puVar1;
  puVar1 = PTR_FUN_04bc1e18;
  param_1[0x2507] = 0;
  param_1[0x250d] = param_1;
  param_1[0x2506] = puVar1;
  puVar1 = PTR_LAB_04bc1e20;
  param_1[0x250f] = 0;
  param_1[0x250e] = puVar1;
  puVar1 = PTR_FUN_04bc1e28;
  param_1[0x2511] = param_1;
  param_1[0x2513] = 0;
  param_1[0x2512] = puVar1;
  iVar2 = *(int *)(param_1 + 0x1599);
  iVar3 = *(int *)((long)param_1 + 0xaccc);
  if (iVar2 < iVar3) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar2 * 8) = param_1 + 0x24f8;
    iVar3 = *(int *)((long)param_1 + 0xaccc);
    iVar2 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar2;
  }
  if (iVar2 < iVar3) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar2 * 8) = param_1 + 0x24fc;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  param_1[0x158e] = param_1 + 0x2500;
  param_1[0x158d] = param_1 + 0x2504;
  param_1[0x158b] = param_1 + 0x250c;
  param_1[0x1595] = param_1 + 0x2510;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x2509] = param_1;
    puVar1 = PTR_FUN_04bc1648;
    param_1[0x250b] = 0;
    param_1[0x250a] = puVar1;
    param_1[0x1596] = param_1 + 0x2508;
  }
  *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) | 0x1000000;
  *(byte *)((long)param_1 + 0xad54) = *(byte *)((long)param_1 + 0xad54) | 0x20;
  *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) | 0x30000;
  return;
}

