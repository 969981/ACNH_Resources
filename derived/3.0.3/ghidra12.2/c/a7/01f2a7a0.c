
/* WARNING: Removing unreachable block (ram,0x01f2aab8) */
/* WARNING: Removing unreachable block (ram,0x01f2aa2c) */
/* WARNING: Removing unreachable block (ram,0x01f2a9fc) */
/* WARNING: Removing unreachable block (ram,0x01f2a8f8) */
/* WARNING: Removing unreachable block (ram,0x01f2a90c) */
/* WARNING: Removing unreachable block (ram,0x01f2aa14) */
/* WARNING: Removing unreachable block (ram,0x01f2aa44) */
/* WARNING: Removing unreachable block (ram,0x01f2aae0) */

void FUN_01f2a7a0(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_01e9dbb0();
  param_1[0x15e9] = 0;
  param_1[0x15ea] = 0;
  *(undefined1 *)(param_1 + 0x15ec) = 0;
  *(undefined8 *)((long)param_1 + 0xaf64) = 0;
  *(undefined8 *)((long)param_1 + 0xaf6c) = 0;
  puVar2 = PTR_DAT_04bc2a60;
  *param_1 = &PTR_LAB_04a65328;
  param_1[0x15eb] = 0xfffe;
  param_1[0x15e7] = puVar2 + 0x10;
  param_1[0x15e8] = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x50c);
  *(undefined4 *)(param_1 + 0x1624) = 0;
  param_1[0x15ef] = &PTR_LAB_04a65698;
  param_1[0x15f3] = &PTR_LAB_04a65698;
  param_1[0x15f7] = &PTR_LAB_04a656e8;
  param_1[0x15fb] = &PTR_LAB_04a656e8;
  param_1[0x15ff] = &PTR_LAB_04a656e8;
  param_1[0x1603] = &PTR_LAB_04a656e8;
  *(undefined4 *)((long)param_1 + 0xaf74) = uVar1;
  param_1[0x1608] = 0;
  param_1[0x1609] = 0;
  param_1[0x160c] = 0;
  param_1[0x160d] = 0;
  param_1[0x160a] = 0;
  param_1[0x160b] = &PTR_LAB_04a65698;
  param_1[0x1610] = 0;
  param_1[0x1611] = 0;
  param_1[0x160e] = 0;
  param_1[0x160f] = &PTR_LAB_04a65698;
  param_1[0x1614] = 0;
  param_1[0x1615] = 0;
  param_1[0x1612] = 0;
  param_1[0x1613] = &PTR_LAB_04a65698;
  param_1[0x1618] = 0;
  param_1[0x1619] = 0;
  param_1[0x1616] = 0;
  param_1[0x1617] = &PTR_LAB_04a65698;
  param_1[0x161c] = 0;
  param_1[0x161d] = 0;
  param_1[0x161a] = 0;
  param_1[0x161b] = &PTR_LAB_04a65698;
  param_1[0x1620] = 0;
  param_1[0x1621] = 0;
  param_1[0x161e] = 0;
  param_1[0x161f] = &PTR_LAB_04a656e8;
  param_1[0x1622] = 0;
  param_1[0x1623] = 0;
  puVar2 = PTR_LAB_04bc1e20;
  param_1[0x15f2] = 0;
  param_1[0x15fa] = 0;
  param_1[0x15fe] = 0;
  param_1[0x1602] = 0;
  param_1[0x15f0] = param_1;
  param_1[0x15f1] = puVar2;
  param_1[0x15f4] = param_1;
  param_1[0x15f5] = 0x88;
  param_1[0x15f6] = 1;
  param_1[0x15f8] = param_1;
  param_1[0x15f9] = FUN_01f2aafc;
  param_1[0x15fc] = param_1;
  param_1[0x15fd] = &LAB_01f2ab80;
  param_1[0x1600] = param_1;
  param_1[0x1601] = &LAB_01f2ab8c;
  param_1[0x1604] = param_1;
  param_1[0x1605] = &LAB_01f2acc8;
  param_1[0x1606] = 0;
  param_1[0x1607] = &PTR_LAB_04a65698;
  param_1[0x158b] = param_1 + 0x15ef;
  param_1[0x1592] = param_1 + 0x15f3;
  iVar3 = *(int *)(param_1 + 0x1599);
  iVar4 = *(int *)((long)param_1 + 0xaccc);
  if (iVar3 < iVar4) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x15f7;
    iVar4 = *(int *)((long)param_1 + 0xaccc);
    iVar3 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar3;
  }
  if (iVar3 < iVar4) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x15fb;
    iVar4 = *(int *)((long)param_1 + 0xaccc);
    iVar3 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar3;
  }
  if (iVar3 < iVar4) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x15ff;
    iVar4 = *(int *)((long)param_1 + 0xaccc);
    iVar3 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar3;
  }
  if (iVar3 < iVar4) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar3 * 8) = param_1 + 0x1603;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  puVar2 = PTR_FUN_04bc1df8;
  param_1[0x1608] = param_1;
  param_1[0x1609] = puVar2;
  puVar2 = PTR_FUN_04bc1e18;
  param_1[0x160a] = 0;
  param_1[0x160e] = 0;
  param_1[0x160c] = param_1;
  param_1[0x160d] = puVar2;
  puVar2 = PTR_LAB_04bc2128;
  param_1[0x1612] = 0;
  param_1[0x1610] = param_1;
  param_1[0x1611] = puVar2;
  puVar2 = PTR_LAB_04bc1df0;
  param_1[0x1620] = param_1;
  param_1[0x1621] = puVar2;
  puVar2 = PTR_FUN_04bc1e28;
  param_1[0x1622] = 0;
  param_1[0x161a] = 0;
  param_1[0x1618] = param_1;
  param_1[0x1619] = puVar2;
  param_1[0x158e] = param_1 + 0x1607;
  param_1[0x158d] = param_1 + 0x160b;
  param_1[0x158f] = param_1 + 0x160f;
  param_1[0x1595] = param_1 + 0x1617;
  if (*(int *)(param_1 + 0x1599) < *(int *)((long)param_1 + 0xaccc)) {
    *(undefined8 **)(param_1[0x159a] + (long)*(int *)(param_1 + 0x1599) * 8) = param_1 + 0x161f;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  puVar2 = PTR_FUN_04bc1648;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    param_1[0x1616] = 0;
    param_1[0x1614] = param_1;
    param_1[0x1615] = puVar2;
    param_1[0x1596] = param_1 + 0x1613;
    puVar2 = PTR_LAB_04bc1650;
    param_1[0x161e] = 0;
    param_1[0x161c] = param_1;
    param_1[0x161d] = puVar2;
    param_1[0x1598] = param_1 + 0x161b;
  }
  return;
}

