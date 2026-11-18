
void FUN_0357e480(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar1 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar1 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b3cab0;
  param_1[0x42] = 0;
  FUN_03135560(param_1 + 0x43);
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  puVar2 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  puVar1 = PTR_DAT_04bb3350;
  param_1[0x6e] = 0;
  if (lVar12 == 0) {
    puVar7 = malloc(0xf28);
joined_r0x0357e5bc:
    if (puVar7 != (undefined8 *)0x0) {
      lVar12 = 0;
      *puVar7 = 0xb;
      do {
        puVar9 = (undefined8 *)((long)puVar7 + lVar12 + 8);
        *puVar9 = 0;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0xc0);
        *puVar10 = 0;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0xb8);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0xb0);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0xa8);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0xa0);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x98);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x90);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x88);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x80);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x78);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x70);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x68);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x60);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x58);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x50);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x48);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x40);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x38);
        *puVar11 = puVar10;
        puVar10 = (undefined8 *)((long)puVar7 + lVar12 + 0x30);
        *puVar10 = puVar11;
        puVar11 = (undefined8 *)((long)puVar7 + lVar12 + 0x28);
        *puVar11 = puVar10;
        lVar5 = (long)puVar7 + lVar12 + 200;
        *(undefined8 *)((long)puVar7 + lVar12 + 0x10) = 0;
        *(undefined8 **)((long)puVar7 + lVar12 + 0x18) = puVar11;
        *(undefined8 **)((long)puVar7 + lVar12 + 0x20) = puVar11;
        if (lVar5 != 0) {
          *(long *)((long)puVar7 + lVar12 + 0x10) = lVar5;
          *(undefined4 *)puVar9 = 0;
          *(undefined4 *)((long)puVar7 + lVar12 + 0xc) = 0x14;
        }
        lVar12 = lVar12 + 0x160;
      } while (lVar12 != 0xf20);
      *(undefined4 *)(param_1 + 0x68) = 0xb;
      param_1[0x69] = (long)(puVar7 + 1);
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xf28,8);
      goto joined_r0x0357e5bc;
    }
  }
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    puVar7 = malloc(0xb0);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_0357e78c;
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0xb0,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    param_1[0x6d] = (long)puVar7;
    puVar7[10] = 0;
    puVar7[9] = puVar7 + 10;
    puVar7[8] = puVar7 + 9;
    puVar7[7] = puVar7 + 8;
    puVar7[6] = puVar7 + 7;
    puVar7[5] = puVar7 + 6;
    puVar7[4] = puVar7 + 5;
    puVar7[3] = puVar7 + 4;
    puVar7[2] = puVar7 + 3;
    puVar7[1] = puVar7 + 2;
    *puVar7 = puVar7 + 1;
    param_1[0x6e] = (long)puVar7;
    if (puVar7 + 0xb != (undefined8 *)0x0) {
      param_1[0x6c] = (long)(puVar7 + 0xb);
      param_1[0x6b] = 0xb00000000;
    }
  }
LAB_0357e78c:
  param_1[0x70] = -1;
  param_1[0x6f] = -1;
  *(undefined4 *)(param_1 + 0x71) = 0xffffffff;
  param_1[0x72] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x73,0,0x1bf30);
  puVar3 = PTR_DAT_04bb2bc0;
  lVar12 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x73,0);
    *(undefined4 *)(plVar6 + 0x9e) = 0x40;
    lVar12 = lVar12 + -1;
    plVar6[0x9d] = (long)plVar6 + 0x4f4;
    *(undefined1 *)((long)plVar6 + 0x533) = 0;
    *(undefined1 *)((long)plVar6 + 0x4f4) = 0;
    plVar6[0x9c] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0xa7) = 0;
    puVar4 = PTR_DAT_04bc8e10;
    plVar6 = plVar6 + 0x35;
  } while (lVar12 != 0);
  *(undefined4 *)(param_1 + 0x385b) = 0;
  *(undefined4 *)(param_1 + 0x385c) = 0;
  *(undefined4 *)(param_1 + 0x385d) = 0;
  param_1[0x385e] = 0;
  param_1[0x3859] = (long)(puVar4 + 0x10);
  param_1[0x385a] = -1;
  puVar1 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x385f) = 0;
  param_1[0x3860] = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3865) = 1;
  *(undefined2 *)(param_1 + 0x3866) = 0x101;
  puVar1 = PTR_DAT_04bc61b0;
  *(undefined4 *)((long)param_1 + 0x1c32c) = 0;
  *(undefined8 *)((long)param_1 + 0x1c334) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x1c33c) = 0;
  param_1[0x3864] = (long)(puVar1 + 0x10);
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    puVar7 = malloc(0x4d8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar12 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x4d8,8);
  }
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 2) = 0xffffffff;
    puVar2 = PTR_DAT_04bc4ee8;
    *(undefined1 *)((long)puVar7 + 0x9c) = 0;
    *(undefined1 *)((long)puVar7 + 0x2c) = 0;
    *(undefined1 *)((long)puVar7 + 0x6b) = 0;
    puVar2 = puVar2 + 0x10;
    puVar3 = puVar3 + 0x10;
    *puVar7 = 0xb;
    puVar7[0x11] = puVar3;
    puVar7[0x12] = (undefined1 *)((long)puVar7 + 0x9c);
    puVar7[0x1f] = puVar3;
    puVar7[0x20] = (long)puVar7 + 0x10c;
    puVar7[1] = puVar2;
    puVar7[0xf] = puVar2;
    puVar7[0x1d] = puVar2;
    puVar7[0x2b] = puVar2;
    puVar7[0x39] = puVar2;
    puVar7[0x47] = puVar2;
    puVar7[0x55] = puVar2;
    puVar7[99] = puVar2;
    puVar7[0x71] = puVar2;
    puVar7[0x7f] = puVar2;
    puVar7[0x8d] = puVar2;
    *(undefined4 *)(puVar7 + 5) = 0x40;
    *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar7 + 0xdb) = 0;
    *(undefined4 *)(puVar7 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x14b) = 0;
    *(undefined1 *)((long)puVar7 + 0x10c) = 0;
    *(undefined4 *)(puVar7 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar7 + 0x17c) = 0;
    *(undefined4 *)(puVar7 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x22b) = 0;
    *(undefined1 *)((long)puVar7 + 0x1ec) = 0;
    *(undefined4 *)(puVar7 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x29b) = 0;
    *(undefined1 *)((long)puVar7 + 0x25c) = 0;
    puVar7[0x49] = puVar3;
    *(undefined4 *)(puVar7 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x30b) = 0;
    *(undefined1 *)((long)puVar7 + 0x2cc) = 0;
    puVar7[0x57] = puVar3;
    *(undefined4 *)(puVar7 + 100) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x37b) = 0;
    *(undefined1 *)((long)puVar7 + 0x33c) = 0;
    puVar7[0x65] = puVar3;
    *(undefined4 *)(puVar7 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar7 + 0x3ac) = 0;
    puVar7[0x73] = puVar3;
    *(undefined4 *)(puVar7 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar7 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x45b) = 0;
    *(undefined1 *)((long)puVar7 + 0x41c) = 0;
    puVar7[0x81] = puVar3;
    *(undefined4 *)(puVar7 + 0x8e) = 0xffffffff;
    puVar7[0x90] = (long)puVar7 + 0x48c;
    *(undefined4 *)(puVar7 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar7 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar7 + 0x48c) = 0;
    puVar7[0x8f] = puVar3;
    puVar7[0x2d] = puVar3;
    puVar7[0x2e] = (long)puVar7 + 0x17c;
    puVar7[0x3b] = puVar3;
    puVar7[0x3c] = (long)puVar7 + 0x1ec;
    puVar7[0x4a] = (long)puVar7 + 0x25c;
    puVar7[0x58] = (long)puVar7 + 0x2cc;
    puVar7[0x66] = (long)puVar7 + 0x33c;
    puVar7[0x74] = (long)puVar7 + 0x3ac;
    puVar7[0x82] = (long)puVar7 + 0x41c;
    puVar7[3] = puVar3;
    puVar7[4] = (undefined1 *)((long)puVar7 + 0x2c);
    *(undefined1 *)(puVar7 + 0xe) = 1;
    *(undefined1 *)(puVar7 + 0x1c) = 1;
    *(undefined1 *)(puVar7 + 0x2a) = 1;
    *(undefined1 *)(puVar7 + 0x38) = 1;
    *(undefined1 *)(puVar7 + 0x46) = 1;
    *(undefined1 *)(puVar7 + 0x54) = 1;
    *(undefined1 *)(puVar7 + 0x62) = 1;
    *(undefined1 *)(puVar7 + 0x70) = 1;
    *(undefined1 *)(puVar7 + 0x7e) = 1;
    *(undefined1 *)(puVar7 + 0x8c) = 1;
    *(undefined1 *)(puVar7 + 0x9a) = 1;
    *(undefined4 *)(param_1 + 0x66) = 0xb;
    param_1[0x67] = (long)(puVar7 + 1);
  }
  return;
}

