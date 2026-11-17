
void FUN_03090180(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  byte bVar6;
  long lVar7;
  
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
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04af92d8;
  param_1[0x42] = 0;
  FUN_03135560(param_1 + 0x43);
  param_1[0x66] = 0;
  *(undefined4 *)((long)param_1 + 0x344) = 0;
  *(undefined2 *)(param_1 + 0x69) = 0;
  puVar1 = PTR_DAT_04bc5170;
  *(undefined1 *)(param_1 + 0x68) = 1;
  *(undefined4 *)((long)param_1 + 0x34c) = 0xffffffff;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x67] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  puVar2 = PTR_DAT_04bb3350;
  param_1[0x6f] = 0;
  if (lVar7 == 0) {
    puVar5 = malloc(0x20);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_030902e8;
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x20,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[2] = 0xffffffffffffffff;
    puVar5[3] = 0xffffffffffffffff;
    *puVar5 = 0xffffffffffffffff;
    puVar5[1] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x6c) = 4;
    param_1[0x6d] = (long)puVar5;
  }
LAB_030902e8:
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar5 = malloc(0x1c8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x1c8,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 2) = 0xffffffff;
    *(undefined1 *)((long)puVar5 + 0x2c) = 0;
    puVar1 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar5 + 0x6b) = 0;
    *puVar5 = 4;
    *(undefined4 *)(puVar5 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar5[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar5[0xf] = puVar1;
    puVar5[0x1d] = puVar1;
    *(undefined1 *)((long)puVar5 + 0x9c) = 0;
    puVar5[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar5 + 0xdb) = 0;
    *(undefined4 *)(puVar5 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x14b) = 0;
    *(undefined1 *)((long)puVar5 + 0x10c) = 0;
    *(undefined4 *)(puVar5 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar5 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar5 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar5 + 0x17c) = 0;
    puVar5[3] = puVar2;
    puVar5[4] = (undefined1 *)((long)puVar5 + 0x2c);
    *(undefined1 *)(puVar5 + 0xe) = 1;
    *(undefined1 *)(puVar5 + 0x1c) = 1;
    *(undefined1 *)(puVar5 + 0x2a) = 1;
    *(undefined1 *)(puVar5 + 0x38) = 1;
    puVar5[0x11] = puVar2;
    puVar5[0x12] = (undefined1 *)((long)puVar5 + 0x9c);
    puVar5[0x1f] = puVar2;
    puVar5[0x20] = (long)puVar5 + 0x10c;
    puVar5[0x2d] = puVar2;
    puVar5[0x2e] = (long)puVar5 + 0x17c;
    *(undefined4 *)(param_1 + 0x6e) = 4;
    param_1[0x6f] = (long)(puVar5 + 1);
  }
  return;
}

