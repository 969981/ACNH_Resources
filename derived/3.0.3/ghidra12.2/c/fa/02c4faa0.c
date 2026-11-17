
void FUN_02c4faa0(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  long lVar7;
  void *pvVar8;
  char cVar9;
  undefined4 uVar10;
  long lVar11;
  undefined **local_50;
  long *plStack_48;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar5 = *(byte *)(param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ab10d8;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  param_1[0x47] = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  if (lVar11 == 0) {
    pvVar8 = malloc(0x1f0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar11 + 8);
    if (lVar7 != 0) {
      puVar1 = (undefined8 *)(lVar7 + 0xa8);
    }
    pvVar8 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x1f0,8);
  }
  local_50 = &PTR_LAB_04ab1370;
  plStack_48 = param_1;
  FUN_0340c9e0(pvVar8,&local_50);
  param_1[0x46] = (long)pvVar8;
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
  }
  if (*(char *)(lVar11 + 0x1e20) == '\0') {
    bVar5 = 1;
  }
  else {
    bVar5 = (**(code **)(*(long *)(lVar11 + 0x1e18) + 0x18))(lVar11 + 0x1e18);
    *(char *)(lVar11 + 0x1e20) = '\0';
  }
  *(byte *)(lVar11 + 0x1e21) = bVar5 & 1;
  *(bool *)(param_1 + 0x48) = *(int *)(lVar11 + 0x1e24) != 0;
  uVar6 = FUN_0376f3e0();
  switch(uVar6) {
  case 1:
    uVar6 = 0;
    if ((char)param_1[0x48] != '\0') {
      uVar6 = 0xc;
    }
    goto LAB_02c4fd10;
  case 2:
    uVar6 = 0xd;
    if ((char)param_1[0x48] == '\0') {
      uVar6 = 1;
    }
    goto LAB_02c4fd10;
  case 3:
    cVar9 = (char)param_1[0x48];
    uVar6 = 2;
    goto LAB_02c4fca4;
  case 4:
    cVar9 = (char)param_1[0x48];
    uVar6 = 3;
LAB_02c4fca4:
    bVar4 = cVar9 == '\0';
    uVar10 = 0xd;
    goto LAB_02c4fd0c;
  case 5:
    cVar9 = (char)param_1[0x48];
    uVar6 = 4;
    break;
  case 6:
    cVar9 = (char)param_1[0x48];
    uVar6 = 5;
    break;
  case 7:
    cVar9 = (char)param_1[0x48];
    uVar6 = 7;
    goto LAB_02c4fd04;
  case 8:
    uVar6 = 9;
    bVar4 = (char)param_1[0x48] == '\0';
    uVar10 = 0x10;
    goto LAB_02c4fd0c;
  case 9:
    cVar9 = (char)param_1[0x48];
    uVar6 = 8;
LAB_02c4fd04:
    bVar4 = cVar9 == '\0';
    uVar10 = 0xf;
    goto LAB_02c4fd0c;
  case 10:
    cVar9 = (char)param_1[0x48];
    uVar6 = 6;
    break;
  default:
    uVar6 = 10;
    goto LAB_02c4fd10;
  }
  bVar4 = cVar9 == '\0';
  uVar10 = 0xe;
LAB_02c4fd0c:
  if (!bVar4) {
    uVar6 = uVar10;
  }
LAB_02c4fd10:
  *(undefined4 *)(param_1 + 0x47) = uVar6;
  return;
}

