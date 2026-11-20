
void FUN_03f587e8(int param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  lVar2 = DAT_05ae7600;
  if (param_1 == 0x1074) {
    if (DAT_05ae7600 == 0) {
      plVar5 = malloc(0xd0);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xd0,8);
    }
    plVar5[0xd] = 0;
    plVar5[1] = 0xdf00000000000;
    plVar5[2] = 0;
    plVar5[2] = (long)&DAT_0407ebb1;
    plVar5[3] = 0;
    plVar5[0x16] = 0;
    plVar5[0x17] = 0;
    plVar5[0xc] = 0;
    *(undefined1 *)((long)plVar5 + 100) = 0xff;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    plVar5[0x12] = 0;
    plVar5[0x13] = 0;
    plVar5[0x10] = 0;
    plVar5[0x11] = 0;
    plVar5[0xe] = 0;
    plVar5[0xf] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    *(undefined1 *)(plVar5 + 9) = 1;
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    plVar5[10] = 0;
    plVar5[0xb] = 0;
    *(undefined4 *)(plVar5 + 0xc) = 0;
    *(undefined1 *)(plVar5 + 0x10) = 0;
    *(undefined1 *)((long)plVar5 + 0xbc) = 1;
    plVar5[0x11] = 0x38f00000000;
    plVar5[0x12] = 0;
    *(undefined4 *)(plVar5 + 0x13) = 100;
    plVar5[0x16] = 0xffffffff;
    *(undefined4 *)(plVar5 + 0x17) = 0xffffffff;
    plVar5[0x14] = 0;
    plVar5[0x15] = 0;
    puVar1 = PTR_DAT_04bdf200;
    plVar5[0x18] = 0xe000000000;
    plVar5[0x19] = 0;
    *plVar5 = (long)(puVar1 + 0x10);
    plVar5[7] = (long)(puVar1 + 0xa8);
    plVar5[0xe] = (long)(puVar1 + 0xf8);
    plVar5[0xf] = (long)(puVar1 + 0x120);
  }
  else if (param_1 == 0x1018) {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0x110);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x110,8);
    }
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[1] = 0xdf00000000000;
    puVar4[2] = 0;
    puVar4[2] = &DAT_0407ebb1;
    puVar4[3] = 0;
    *(undefined1 *)((long)puVar4 + 100) = 0xff;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 9) = 1;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *(undefined1 *)(puVar4 + 0x10) = 0;
    *(undefined1 *)((long)puVar4 + 0xbc) = 1;
    puVar4[0x11] = 0x38f00000000;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 100;
    puVar4[0x16] = 0xffffffff;
    *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x18] = 0xe000000000;
    puVar4[0x19] = 0;
    *puVar4 = &PTR_LAB_04baa708;
    puVar4[7] = &PTR_LAB_04baa7a8;
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    *(undefined1 *)((long)puVar4 + 0xe4) = 0;
    *(undefined4 *)(puVar4 + 0x1d) = 0;
    *(undefined1 *)((long)puVar4 + 0xec) = 0;
    *(undefined4 *)(puVar4 + 0x1e) = 0;
    *(undefined1 *)((long)puVar4 + 0xf4) = 0;
    *(undefined4 *)(puVar4 + 0x1f) = 0;
    *(undefined1 *)((long)puVar4 + 0xfc) = 0;
    *(undefined4 *)(puVar4 + 0x20) = 0;
    *(undefined1 *)((long)puVar4 + 0x104) = 0;
    *(undefined4 *)(puVar4 + 0x21) = 0;
    *(undefined1 *)((long)puVar4 + 0x10c) = 0;
    *(undefined8 *)((long)puVar4 + 0xd5) = 0;
    puVar4[0x1a] = 0;
    puVar4[0xe] = &PTR_LAB_04baa7f8;
    puVar4[0xf] = &PTR_LAB_04baa820;
  }
  else {
    if (DAT_05ae7600 == 0) {
      puVar4 = malloc(0xd0);
    }
    else {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = (undefined8 *)(lVar2 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xd0,8);
    }
    puVar4[0xd] = 0;
    puVar4[0xc] = 0;
    puVar4[1] = 0xdf00000000000;
    puVar4[2] = 0;
    puVar4[2] = &DAT_0407ebb1;
    puVar4[3] = 0;
    *(undefined1 *)((long)puVar4 + 100) = 0xff;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[8] = 0;
    *(undefined1 *)(puVar4 + 9) = 1;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    *(undefined4 *)(puVar4 + 0xc) = 0;
    *puVar4 = &PTR_LAB_04baa478;
    *(undefined1 *)(puVar4 + 0x10) = 0;
    *(undefined1 *)((long)puVar4 + 0xbc) = 1;
    puVar4[6] = 0;
    puVar4[7] = &PTR_LAB_04baa510;
    puVar4[0xe] = &PTR_FUN_04baa560;
    puVar4[0xf] = &PTR_LAB_04baa588;
    puVar4[0x11] = 0x38f00000000;
    puVar4[0x12] = 0;
    *(undefined4 *)(puVar4 + 0x13) = 100;
    puVar4[0x16] = 0xffffffff;
    *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x18] = 0xe000000000;
    puVar4[0x19] = 0;
  }
  return;
}

