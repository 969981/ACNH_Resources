
/* WARNING: Removing unreachable block (ram,0x01ef5678) */
/* WARNING: Removing unreachable block (ram,0x01ef5648) */
/* WARNING: Removing unreachable block (ram,0x01ef5618) */
/* WARNING: Removing unreachable block (ram,0x01ef5630) */
/* WARNING: Removing unreachable block (ram,0x01ef5660) */
/* WARNING: Removing unreachable block (ram,0x01ef569c) */

void FUN_01ef5370(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  uint uVar11;
  undefined *local_78;
  char *local_70;
  undefined4 local_64;
  
  FUN_01e9dbb0();
  param_1[0x15ef] = 0;
  *param_1 = &PTR_LAB_04a62290;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0;
  *(undefined2 *)((long)param_1 + 0xaf3c) = 0xff00;
  param_1[0x15fc] = &PTR_LAB_04a62628;
  param_1[0x1602] = 0;
  param_1[0x1603] = 0;
  param_1[0x1601] = 0;
  lVar7 = param_1[2];
  param_1[0x15e8] = &PTR_LAB_04a62628;
  param_1[0x15e9] = 0;
  param_1[0x15ec] = &PTR_LAB_04a62628;
  param_1[0x15f0] = &PTR_LAB_04a62628;
  param_1[0x15f4] = &PTR_LAB_04a62628;
  param_1[0x15f8] = &PTR_LAB_04a62628;
  param_1[0x15f3] = 0;
  param_1[0x15f7] = 0;
  param_1[0x15f9] = 0;
  param_1[0x15ea] = 0;
  param_1[0x15eb] = 0;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  param_1[0x15f1] = 0;
  param_1[0x15f2] = 0;
  param_1[0x15f5] = 0;
  param_1[0x15f6] = 0;
  param_1[0x15fa] = 0;
  param_1[0x15fb] = 0;
  param_1[0x15ff] = 0;
  param_1[0x1600] = &PTR_LAB_04a62678;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "cCommonStandWaitGst";
  param_1[0x15fd] = 0;
  param_1[0x15fe] = 0;
  uVar11 = 0;
  do {
    pcVar10 = "";
    if (uVar11 < 0x36) {
      pcVar10 = (&PTR_s_cDefault_04a5da08)[uVar11];
    }
    (**(code **)(local_78 + 0x18))(&local_78);
    if (pcVar10 == local_70) {
LAB_01ef553c:
      *(uint *)(lVar7 + 0x56c) = uVar11;
      break;
    }
    if (*pcVar10 == *local_70) {
      if (*pcVar10 == '\0') goto LAB_01ef553c;
      lVar9 = 0x7fffe;
      pcVar8 = local_70;
      while( true ) {
        if (pcVar10[1] != pcVar8[1]) break;
        if (pcVar10[1] == '\0') goto LAB_01ef553c;
        if (pcVar10[2] != pcVar8[2]) break;
        if (pcVar10[2] == '\0') goto LAB_01ef553c;
        if ((lVar9 == 0) || (cVar2 = pcVar10[3], cVar2 != pcVar8[3])) break;
        lVar9 = lVar9 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar10 = pcVar10 + 3;
        if (cVar2 == '\0') goto LAB_01ef553c;
      }
    }
    uVar6 = 0x36;
    if ((int)uVar11 < 0x36) {
      uVar6 = uVar11 + 1;
    }
    uVar11 = uVar6;
  } while (uVar6 != 0x36);
  lVar7 = param_1[2];
  local_64 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "cNpcMoveGst";
  local_78 = puVar1;
  uVar5 = FUN_01e5fa8c(&local_64,&local_78);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(lVar7 + 0x568) = local_64;
  }
  lVar7 = param_1[2];
  local_64 = 0;
  local_70 = "cNpcTurnGst";
  local_78 = puVar1;
  uVar5 = FUN_01e5fde8(&local_64,&local_78);
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(lVar7 + 0x570) = local_64;
  }
  param_1[0x15ef] = 0;
  param_1[0x15ed] = param_1;
  param_1[0x15ee] = &LAB_01ef56f8;
  param_1[0x15eb] = 0;
  param_1[0x15f3] = 0;
  param_1[0x15f7] = 0;
  param_1[0x15fb] = 0;
  param_1[0x15ff] = 0;
  param_1[0x15e9] = param_1;
  param_1[0x15ea] = FUN_01ee50c4;
  param_1[0x15f1] = param_1;
  param_1[0x15f2] = &LAB_01ef5a9c;
  param_1[0x15f5] = param_1;
  param_1[0x15f6] = &LAB_01ef5e70;
  param_1[0x15f9] = param_1;
  param_1[0x15fa] = &LAB_01ef5e88;
  param_1[0x15fd] = param_1;
  param_1[0x15fe] = &LAB_01ef5ea0;
  param_1[0x158b] = param_1 + 0x15ec;
  param_1[0x158d] = param_1 + 0x15e8;
  param_1[0x158e] = param_1 + 0x15f0;
  param_1[0x1595] = param_1 + 0x15f4;
  param_1[0x1596] = param_1 + 0x15f8;
  param_1[0x1598] = param_1 + 0x15fc;
  uVar4 = DAT_053e0cf8;
  *(undefined4 *)((long)param_1 + 0xaa34) = DAT_053e0cf4;
  uVar3 = DAT_053e0cec;
  *(undefined8 *)((long)param_1 + 0xaa24) = DAT_053e0ce4;
  *(undefined8 *)((long)param_1 + 0xaa2c) = uVar3;
  *(undefined4 *)(param_1 + 0x1547) = uVar4;
  *(undefined4 *)((long)param_1 + 0xaa3c) = DAT_053e0cfc;
  *(undefined4 *)(param_1 + 0x1548) = DAT_053e0d00;
  return;
}

