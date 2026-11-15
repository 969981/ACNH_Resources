
/* WARNING: Removing unreachable block (ram,0x01f515a8) */
/* WARNING: Removing unreachable block (ram,0x01f51578) */
/* WARNING: Removing unreachable block (ram,0x01f51590) */
/* WARNING: Removing unreachable block (ram,0x01f515c0) */

void FUN_01f5143c(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  FUN_01e9dbb0();
  param_1[0x15e8] = 0;
  *param_1 = &PTR_LAB_04a66be8;
  param_1[0x15e9] = 0;
  param_1[0x15ea] = 0;
  param_1[0x15e7] = &PTR_LAB_04a66f70;
  param_1[0x15ec] = 0;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  param_1[0x15eb] = &PTR_LAB_04a66f70;
  param_1[0x15f0] = 0;
  param_1[0x15f1] = 0;
  param_1[0x15f2] = 0;
  param_1[0x15ef] = &PTR_LAB_04a66f70;
  param_1[0x15f4] = 0;
  param_1[0x15f5] = 0;
  param_1[0x15f6] = 0;
  param_1[0x15f3] = &PTR_LAB_04a66f70;
  param_1[0x15f8] = 0;
  param_1[0x15f9] = 0;
  param_1[0x15fa] = 0;
  param_1[0x15f7] = &PTR_LAB_04a66fc0;
  param_1[0x15fe] = 0;
  param_1[0x15fd] = 0;
  param_1[0x15fc] = 0;
  param_1[0x15fb] = &PTR_LAB_04a66fc0;
  param_1[0x15ff] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x15ff);
  param_1[0x1600] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1600);
  param_1[0x1601] = 0xfffe;
  FUN_0277d4ac(param_1 + 0x1601);
  *(undefined2 *)(param_1 + 0x1602) = 0;
  param_1[0x15e8] = param_1;
  puVar1 = PTR_LAB_04bc2148;
  param_1[0x15ea] = 0;
  param_1[0x15ec] = param_1;
  param_1[0x15e9] = puVar1;
  param_1[0x15ee] = 0;
  param_1[0x15ed] = FUN_01ee4ad0;
  param_1[0x15f0] = param_1;
  param_1[0x15f2] = 0;
  param_1[0x15f4] = param_1;
  param_1[0x15f1] = FUN_01ee50c4;
  param_1[0x15f6] = 0;
  param_1[0x15f5] = FUN_01ee6628;
  param_1[0x158b] = param_1 + 0x15e7;
  param_1[0x158e] = param_1 + 0x15eb;
  param_1[0x158d] = param_1 + 0x15ef;
  param_1[0x1595] = param_1 + 0x15f3;
  param_1[0x15f8] = param_1;
  param_1[0x15fa] = 0;
  param_1[0x15f9] = &LAB_01eebd70;
  iVar2 = *(int *)(param_1 + 0x1599);
  iVar3 = *(int *)((long)param_1 + 0xaccc);
  if (iVar2 < iVar3) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar2 * 8) = param_1 + 0x15f7;
    iVar3 = *(int *)((long)param_1 + 0xaccc);
    iVar2 = *(int *)(param_1 + 0x1599) + 1;
    *(int *)(param_1 + 0x1599) = iVar2;
  }
  param_1[0x15fc] = param_1;
  param_1[0x15fd] = FUN_01f5165c;
  param_1[0x15fe] = 0;
  if (iVar2 < iVar3) {
    *(undefined8 **)(param_1[0x159a] + (long)iVar2 * 8) = param_1 + 0x15fb;
    *(int *)(param_1 + 0x1599) = *(int *)(param_1 + 0x1599) + 1;
  }
  *(undefined1 *)(param_1[3] + 0x804) = 1;
  return;
}

