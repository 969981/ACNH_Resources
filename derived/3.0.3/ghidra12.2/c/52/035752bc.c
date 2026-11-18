
void FUN_035752bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  FUN_03597c30();
  param_1[0x3861] = 0;
  *param_1 = &PTR_LAB_04b3bd00;
  *(undefined2 *)(param_1 + 0x3862) = 0;
  *(undefined4 *)(param_1 + 0x3860) = 0;
  param_1[0x385e] = 0;
  param_1[0x385f] = 0;
  lVar3 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(0x628);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar5 = (long *)(lVar3 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x628,8);
  }
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar6 + 0x6b) = 0;
    *(undefined1 *)((long)puVar6 + 0x2c) = 0;
    puVar1 = PTR_DAT_04bc4ee8;
    *puVar6 = 0xe;
    *(undefined4 *)(puVar6 + 2) = 0xffffffff;
    *(undefined4 *)(puVar6 + 5) = 0x40;
    puVar1 = puVar1 + 0x10;
    puVar6[1] = puVar1;
    puVar2 = PTR_DAT_04bb2bc0;
    puVar6[0xf] = puVar1;
    puVar6[0x1d] = puVar1;
    *(undefined1 *)((long)puVar6 + 0x9c) = 0;
    puVar6[0x2b] = puVar1;
    puVar2 = puVar2 + 0x10;
    puVar6[0x39] = puVar1;
    puVar6[0x47] = puVar1;
    puVar6[0x55] = puVar1;
    puVar6[99] = puVar1;
    puVar6[0x71] = puVar1;
    puVar6[0x7f] = puVar1;
    puVar6[0x8d] = puVar1;
    puVar6[0x9b] = puVar1;
    puVar6[0xa9] = puVar1;
    puVar6[0xb7] = puVar1;
    *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x13) = 0x40;
    *(undefined1 *)((long)puVar6 + 0xdb) = 0;
    *(undefined4 *)(puVar6 + 0x1e) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x21) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x14b) = 0;
    *(undefined1 *)((long)puVar6 + 0x10c) = 0;
    *(undefined4 *)(puVar6 + 0x2c) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x2f) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x1bb) = 0;
    *(undefined1 *)((long)puVar6 + 0x17c) = 0;
    *(undefined4 *)(puVar6 + 0x3a) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x3d) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x22b) = 0;
    *(undefined1 *)((long)puVar6 + 0x1ec) = 0;
    *(undefined4 *)(puVar6 + 0x48) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x4b) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x29b) = 0;
    *(undefined1 *)((long)puVar6 + 0x25c) = 0;
    puVar6[0x49] = puVar2;
    *(undefined4 *)(puVar6 + 0x56) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x59) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x30b) = 0;
    *(undefined1 *)((long)puVar6 + 0x2cc) = 0;
    puVar6[0x57] = puVar2;
    *(undefined4 *)(puVar6 + 100) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x67) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x37b) = 0;
    *(undefined1 *)((long)puVar6 + 0x33c) = 0;
    puVar6[0x65] = puVar2;
    *(undefined4 *)(puVar6 + 0x72) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x75) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x3eb) = 0;
    *(undefined1 *)((long)puVar6 + 0x3ac) = 0;
    puVar6[0x73] = puVar2;
    *(undefined4 *)(puVar6 + 0x80) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x83) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x45b) = 0;
    *(undefined1 *)((long)puVar6 + 0x41c) = 0;
    puVar6[0x81] = puVar2;
    *(undefined4 *)(puVar6 + 0x8e) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x91) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x4cb) = 0;
    *(undefined1 *)((long)puVar6 + 0x48c) = 0;
    puVar6[0x8f] = puVar2;
    *(undefined4 *)(puVar6 + 0x9c) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0x9f) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x53b) = 0;
    *(undefined1 *)((long)puVar6 + 0x4fc) = 0;
    puVar6[0x9d] = puVar2;
    *(undefined4 *)(puVar6 + 0xaa) = 0xffffffff;
    *(undefined4 *)(puVar6 + 0xad) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x5ab) = 0;
    *(undefined1 *)((long)puVar6 + 0x56c) = 0;
    puVar6[0xab] = puVar2;
    *(undefined4 *)(puVar6 + 0xb8) = 0xffffffff;
    puVar6[0xba] = (long)puVar6 + 0x5dc;
    *(undefined4 *)(puVar6 + 0xbb) = 0x40;
    *(undefined1 *)((long)puVar6 + 0x61b) = 0;
    *(undefined1 *)((long)puVar6 + 0x5dc) = 0;
    puVar6[0xb9] = puVar2;
    puVar6[0x11] = puVar2;
    puVar6[0x12] = (undefined1 *)((long)puVar6 + 0x9c);
    puVar6[0x1f] = puVar2;
    puVar6[0x20] = (long)puVar6 + 0x10c;
    puVar6[0x2d] = puVar2;
    puVar6[0x2e] = (long)puVar6 + 0x17c;
    puVar6[0x3b] = puVar2;
    puVar6[0x3c] = (long)puVar6 + 0x1ec;
    puVar6[0x4a] = (long)puVar6 + 0x25c;
    puVar6[0x58] = (long)puVar6 + 0x2cc;
    puVar6[0x66] = (long)puVar6 + 0x33c;
    puVar6[0x74] = (long)puVar6 + 0x3ac;
    puVar6[0x82] = (long)puVar6 + 0x41c;
    puVar6[0x90] = (long)puVar6 + 0x48c;
    puVar6[0x9e] = (long)puVar6 + 0x4fc;
    puVar6[0xac] = (long)puVar6 + 0x56c;
    puVar6[3] = puVar2;
    puVar6[4] = (undefined1 *)((long)puVar6 + 0x2c);
    *(undefined1 *)(puVar6 + 0xe) = 1;
    *(undefined1 *)(puVar6 + 0x1c) = 1;
    *(undefined1 *)(puVar6 + 0x2a) = 1;
    *(undefined1 *)(puVar6 + 0x38) = 1;
    *(undefined1 *)(puVar6 + 0x46) = 1;
    *(undefined1 *)(puVar6 + 0x54) = 1;
    *(undefined1 *)(puVar6 + 0x62) = 1;
    *(undefined1 *)(puVar6 + 0x70) = 1;
    *(undefined1 *)(puVar6 + 0x7e) = 1;
    *(undefined1 *)(puVar6 + 0x8c) = 1;
    *(undefined1 *)(puVar6 + 0x9a) = 1;
    *(undefined1 *)(puVar6 + 0xa8) = 1;
    *(undefined1 *)(puVar6 + 0xb6) = 1;
    *(undefined1 *)(puVar6 + 0xc4) = 1;
    *(undefined4 *)(param_1 + 0x3860) = 0xe;
    param_1[0x3861] = puVar6 + 1;
  }
  return;
}

