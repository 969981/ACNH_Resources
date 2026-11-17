
void FUN_02f785d8(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  byte bVar6;
  long lVar7;
  long *plVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
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
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
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
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04ae6e58;
  param_1[0x43] = -1;
  param_1[0x44] = -1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4b] = (long)(param_1 + 0x4a);
  param_1[0x4c] = (long)PTR_LAB_04bc98f8;
  puVar1 = PTR_DAT_04bc9908 + 0x10;
  param_1[0x4d] = 0;
  param_1[0x4a] = (long)puVar1;
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = -1;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  param_1[0x4e] = (long)puVar1;
  memset(param_1 + 0x5b,0,0xe88);
  FUN_02f78950(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  memset(param_1 + 0x22d,0,0x118);
  param_1[0x230] = -1;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined2 *)((long)param_1 + 0x118a) = 0;
  param_1[0x237] = -1;
  puVar1 = puVar1 + 0x10;
  *(undefined2 *)((long)param_1 + 0x11c2) = 0;
  param_1[0x23e] = -1;
  *(undefined2 *)((long)param_1 + 0x11fa) = 0;
  param_1[0x245] = -1;
  *(undefined2 *)((long)param_1 + 0x1232) = 0;
  param_1[0x24c] = -1;
  *(undefined2 *)((long)param_1 + 0x126a) = 0;
  param_1[0x250] = 0;
  param_1[0x251] = 0;
  *(undefined2 *)(param_1 + 0x252) = 0;
  param_1[0x22f] = (long)puVar1;
  param_1[0x236] = (long)puVar1;
  param_1[0x23d] = (long)puVar1;
  param_1[0x244] = (long)puVar1;
  param_1[0x24b] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x253) = 0;
  param_1[600] = 0;
  *(undefined4 *)(param_1 + 0x259) = 0;
  param_1[0x254] = (long)puVar1;
  puVar1 = PTR_DAT_04bc3880 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1314) = 0;
  *(undefined8 *)((long)param_1 + 0x131c) = 0;
  *(undefined8 *)((long)param_1 + 0x1324) = 0;
  *(undefined8 *)((long)param_1 + 0x132c) = 0;
  *(undefined8 *)((long)param_1 + 0x1334) = 0;
  *(undefined8 *)((long)param_1 + 0x133c) = 0;
  *(undefined8 *)((long)param_1 + 0x1344) = 0;
  *(undefined8 *)((long)param_1 + 0x134c) = 0;
  *(undefined4 *)(param_1 + 0x262) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1354) = 0;
  *(undefined2 *)(param_1 + 0x26b) = 999;
  *(undefined2 *)((long)param_1 + 0x135c) = 999;
  *(undefined1 *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x276) = 0;
  param_1[0x275] = 0;
  param_1[0x274] = 0;
  param_1[0x273] = 0;
  param_1[0x272] = 0;
  param_1[0x271] = 0;
  param_1[0x270] = 0;
  param_1[0x25a] = (long)puVar1;
  param_1[0x25e] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x135a) = 1;
  *(undefined2 *)((long)param_1 + 0x135e) = 1;
  param_1[0x26f] = 0;
  param_1[0x26e] = 0;
  param_1[0x26d] = 0;
  FUN_02f79150(param_1);
  puVar3 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = (undefined8 *)(lVar7 + 8);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)(lVar4 + 0xa8);
  }
  plVar8 = (long *)*puVar2;
  FUN_03399958(param_1 + 0x4a,plVar8,&LAB_00119000,&LAB_00119000);
  *(undefined1 *)(param_1 + 0x233) = 0;
  *(undefined1 *)(param_1 + 0x23a) = 0;
  *(undefined1 *)(param_1 + 0x241) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x24f) = 0;
  lVar4 = *(long *)puVar1;
  param_1[0x22d] = 0;
  param_1[0x22e] = 0;
  param_1[0x234] = 0;
  param_1[0x235] = 0;
  param_1[0x23b] = 0;
  param_1[0x23c] = 0;
  param_1[0x242] = 0;
  param_1[0x243] = 0;
  param_1[0x249] = 0;
  param_1[0x24a] = 0;
  if (lVar4 == 0) {
    pvVar5 = malloc(0x23000);
  }
  else {
    if (plVar8 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
      puVar2 = (undefined8 *)(lVar4 + 8);
      if (lVar7 != 0) {
        puVar2 = (undefined8 *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*puVar2;
      if (plVar8 == (long *)0x0) {
        pvVar5 = (void *)0x0;
        goto LAB_02f78934;
      }
    }
    pvVar5 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x23000,8);
  }
LAB_02f78934:
  param_1[0x250] = (long)pvVar5;
  return;
}

