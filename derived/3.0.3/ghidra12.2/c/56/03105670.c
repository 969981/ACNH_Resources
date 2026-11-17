
void FUN_03105670(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  long *plVar8;
  long lVar9;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar4 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar4 + 0x10);
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
  *param_1 = (long)&PTR_LAB_04b004c8;
  puVar1 = PTR_DAT_04bb3170;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  uVar3 = *(undefined2 *)puVar1;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  param_1[0x3e] = -1;
  *(undefined1 *)(param_1 + 0x46) = 1;
  param_1[0x4e] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined1 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)(param_1 + 0x43) = uVar3;
  *(undefined2 *)(param_1 + 0x47) = uVar3;
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
    plVar8 = *(long **)(param_3 + 0x20);
    if (plVar8 == (long *)0x0) {
      lVar9 = *(long *)PTR_DAT_04bb2698;
      if (lVar9 == 0) {
        plVar8 = malloc(0x1bf58);
      }
      else {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar8 = (long *)(lVar9 + 8);
        if (lVar5 != 0) {
          plVar8 = (long *)(lVar5 + 0xa8);
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1bf58,8);
        }
      }
      *plVar8 = (long)(PTR_DAT_04bc9be0 + 0x10);
      memset(plVar8 + 1,0,0x1bf30);
      lVar9 = 0x10e;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      lVar5 = 0;
      do {
        FUN_03463544((long)plVar8 + lVar5 + 8,0);
        lVar9 = lVar9 + -1;
        *(undefined4 *)((long)plVar8 + lVar5 + 0x160) = 0x40;
        *(undefined1 *)((long)plVar8 + lVar5 + 0x1a3) = 0;
        *(undefined1 *)((long)plVar8 + lVar5 + 0x164) = 0;
        *(undefined4 *)((long)plVar8 + lVar5 + 0x1a8) = 0;
        *(undefined **)((long)plVar8 + lVar5 + 0x150) = puVar1;
        *(long *)((long)plVar8 + lVar5 + 0x158) = (long)plVar8 + lVar5 + 0x164;
        puVar4 = PTR_DAT_04bc8e10;
        lVar5 = lVar5 + 0x1a8;
      } while (lVar9 != 0);
      *(undefined4 *)(plVar8 + 0x37e9) = 0;
      *(undefined4 *)(plVar8 + 0x37ea) = 0;
      plVar8[0x37e7] = (long)(puVar4 + 0x10);
      plVar8[0x37e8] = -1;
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    param_1[0x4c] = (long)plVar8;
    *(undefined1 *)(param_1 + 0x4d) = uVar7;
    cVar2 = *(char *)(param_3 + 0x28);
    *(char *)(param_1 + 0x46) = cVar2;
    if (cVar2 == '\0') {
      return;
    }
  }
  param_1[0x45] = (long)(param_1 + 0x47);
  return;
}

