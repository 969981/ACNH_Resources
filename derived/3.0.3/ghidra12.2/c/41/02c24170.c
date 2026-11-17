
void FUN_02c24170(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04aae780;
  param_1[0x46] = (long)(puVar2 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4b,0,0x1bf30);
  lVar10 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x4b,0);
    *(undefined4 *)(plVar4 + 0x76) = 0x40;
    lVar10 = lVar10 + -1;
    plVar4[0x75] = (long)plVar4 + 0x3b4;
    *(undefined1 *)((long)plVar4 + 0x3f3) = 0;
    *(undefined1 *)((long)plVar4 + 0x3b4) = 0;
    plVar4[0x74] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0x7f) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 0x3833) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  param_1[0x3838] = 0;
  *(undefined4 *)(param_1 + 0x3839) = 0;
  param_1[0x3835] = 0;
  param_1[0x3836] = 0;
  param_1[0x3831] = (long)(puVar1 + 0x10);
  param_1[0x3832] = -1;
  param_1[0x383a] = (long)&PTR_LAB_04aae9b8;
  puVar1 = PTR_DAT_04bbba70 + 0x10;
  param_1[0x3846] = 0;
  *(undefined8 *)((long)param_1 + 0x1c23c) = 0xffffffffffffffff;
  param_1[0x384a] = 0;
  *(undefined4 *)(param_1 + 0x384b) = 0;
  param_1[0x384c] = 0;
  *(undefined4 *)(param_1 + 0x384d) = 0;
  *(undefined1 *)((long)param_1 + 0x1c26c) = 0;
  *(undefined1 *)(param_1 + 0x384e) = 0;
  param_1[0x383e] = (long)puVar1;
  param_1[0x3842] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x3847) = 0xffff;
  *(undefined8 *)((long)param_1 + 0x1c244) = 0xffffffff;
  puVar1 = PTR_DAT_04bb2698;
  *(undefined4 *)((long)param_1 + 0x1c274) = 0;
  *(undefined4 *)(param_1 + 0x384f) = 0;
  lVar10 = *(long *)puVar1;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  if (lVar10 == 0) {
    puVar5 = malloc(0x90);
joined_r0x02c243e8:
    if (puVar5 != (undefined8 *)0x0) {
      iVar7 = 3;
      *puVar5 = 0;
      puVar5[1] = 0xffffffffffffffff;
      puVar5[2] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 3) = 0;
      puVar5[4] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x1c) = 0;
      *(undefined1 *)(puVar5 + 5) = 0;
      puVar5[8] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 9) = 0;
      puVar5[10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x4c) = 0;
      *(undefined1 *)(puVar5 + 0xb) = 0;
      puVar5[0xe] = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      puVar5[0x10] = 0xffffffffffffffff;
      *(undefined1 *)((long)puVar5 + 0x7c) = 0;
      *(undefined1 *)(puVar5 + 0x11) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0xffffffffffffffff;
      puVar5[0xc] = 0;
      puVar5[0xd] = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x3849) = 3;
      param_1[0x384a] = (long)puVar5;
      goto LAB_02c243f8;
    }
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar10 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x90,8);
      goto joined_r0x02c243e8;
    }
  }
  iVar7 = (int)param_1[0x3849];
  if (iVar7 == 0) {
    return;
  }
  puVar5 = (undefined8 *)param_1[0x384a];
LAB_02c243f8:
  iVar8 = 0;
  do {
    puVar9 = puVar5 + (long)iVar8 * 6;
    iVar8 = iVar8 + 1;
    *puVar9 = 0;
    puVar9[1] = 0xffffffffffffffff;
    puVar9[2] = 0xffffffffffffffff;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((long)puVar9 + 0x1c) = 0;
    *(undefined1 *)(puVar9 + 5) = 0;
  } while (iVar7 != iVar8);
  return;
}

