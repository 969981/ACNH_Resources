
void FUN_03213f20(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_FUN_04b10620;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  FUN_03135560(param_1 + 0x45);
  *(undefined4 *)(param_1 + 0x68) = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  param_1[0x69] = 0;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = (long)(puVar2 + 0x10);
  param_1[0x6f] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x70,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  lVar3 = 0;
  do {
    FUN_03463544((long)param_1 + lVar3 + 0x380,0);
    lVar7 = lVar7 + -1;
    *(undefined4 *)((long)param_1 + lVar3 + 0x4d8) = 0x40;
    *(long *)((long)param_1 + lVar3 + 0x4d0) = (long)param_1 + lVar3 + 0x4dc;
    *(undefined1 *)((long)param_1 + lVar3 + 0x51b) = 0;
    *(undefined1 *)((long)param_1 + lVar3 + 0x4dc) = 0;
    *(undefined **)((long)param_1 + lVar3 + 0x4c8) = puVar1;
    *(undefined4 *)((long)param_1 + lVar3 + 0x520) = 0;
    lVar3 = lVar3 + 0x1a8;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x3858) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined1 *)(param_1 + 0x385c) = 1;
  *(undefined4 *)(param_1 + 0x3859) = 0;
  *(undefined4 *)(param_1 + 0x385a) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1c2e4) = 0;
  *(undefined2 *)(param_1 + 0x385d) = 0x101;
  param_1[0x3856] = (long)(puVar1 + 0x10);
  param_1[0x3857] = -1;
  puVar1 = PTR_DAT_04bc5d60 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1c314) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x3864) = 0;
  param_1[0x3865] = 0;
  param_1[0x385b] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x1c2ec) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c2f4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c2fc) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c304) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x1c30c) = 0xffffffffffffffff;
  FUN_0321e450(param_1 + 0x3866);
  FUN_02cde8f4(param_1 + 0x387d);
  *(undefined1 *)(param_1 + 0x3898) = 0;
  *(undefined8 *)((long)param_1 + 0x1c4c4) = 0;
  *(undefined4 *)((long)param_1 + 0x1c4cc) = 0;
  param_1[0x389b] = (long)param_1;
  param_1[0x389c] = (long)FUN_032141cc;
  param_1[0x389d] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x389a] = (long)&PTR_LAB_04b10868;
  param_1[0x389e] = 0;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar5 = malloc(0x40);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x40,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = 0;
    puVar5[1] = 0;
    *(undefined4 *)(param_1 + 0x3864) = 8;
    param_1[0x3865] = (long)puVar5;
  }
  return;
}

