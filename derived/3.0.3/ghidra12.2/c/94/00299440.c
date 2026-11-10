
void FUN_00299440(ulong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_0021f454();
  puVar2 = (undefined8 *)FUN_00285d10((param_1 & 0xffffffff) * 0x94,uVar1);
  if (((uint)param_1 != 0) && (puVar2 != (undefined8 *)0x0)) {
    uVar3 = param_1 & 3;
    if ((uint)param_1 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      puVar5 = puVar2;
      do {
        *(undefined4 *)(puVar5 + 0x12) = 0;
        uVar4 = uVar4 + 4;
        puVar5[0x10] = 0;
        puVar5[0x11] = 0;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[8] = 0;
        puVar5[9] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined8 *)((long)puVar5 + 0x94) = 0;
        puVar5[0x36] = 0;
        puVar5[0x35] = 0;
        *(undefined4 *)((long)puVar5 + 0x124) = 0;
        *(undefined8 *)((long)puVar5 + 0x9c) = 0;
        *(undefined4 *)(puVar5 + 0x37) = 0;
        puVar5[0x34] = 0;
        puVar5[0x32] = 0;
        puVar5[0x31] = 0;
        puVar5[0x30] = 0;
        puVar5[0x2f] = 0;
        puVar5[0x2e] = 0;
        puVar5[0x2d] = 0;
        puVar5[0x2c] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x29] = 0;
        puVar5[0x28] = 0;
        puVar5[0x27] = 0;
        puVar5[0x26] = 0;
        puVar5[0x25] = 0;
        *(undefined4 *)((long)puVar5 + 0x24c) = 0;
        puVar5[0x33] = 0;
        *(undefined8 *)((long)puVar5 + 0x114) = 0;
        *(undefined8 *)((long)puVar5 + 0x11c) = 0;
        *(undefined8 *)((long)puVar5 + 0x104) = 0;
        *(undefined8 *)((long)puVar5 + 0x10c) = 0;
        *(undefined8 *)((long)puVar5 + 0xf4) = 0;
        *(undefined8 *)((long)puVar5 + 0xfc) = 0;
        *(undefined8 *)((long)puVar5 + 0xe4) = 0;
        *(undefined8 *)((long)puVar5 + 0xec) = 0;
        *(undefined8 *)((long)puVar5 + 0xd4) = 0;
        *(undefined8 *)((long)puVar5 + 0xdc) = 0;
        *(undefined8 *)((long)puVar5 + 0xc4) = 0;
        *(undefined8 *)((long)puVar5 + 0xcc) = 0;
        *(undefined8 *)((long)puVar5 + 0xb4) = 0;
        *(undefined8 *)((long)puVar5 + 0xbc) = 0;
        *(undefined8 *)((long)puVar5 + 0xa4) = 0;
        *(undefined8 *)((long)puVar5 + 0xac) = 0;
        *(undefined8 *)((long)puVar5 + 0x23c) = 0;
        *(undefined8 *)((long)puVar5 + 0x244) = 0;
        *(undefined8 *)((long)puVar5 + 0x22c) = 0;
        *(undefined8 *)((long)puVar5 + 0x234) = 0;
        *(undefined8 *)((long)puVar5 + 0x21c) = 0;
        *(undefined8 *)((long)puVar5 + 0x224) = 0;
        *(undefined8 *)((long)puVar5 + 0x20c) = 0;
        *(undefined8 *)((long)puVar5 + 0x214) = 0;
        *(undefined8 *)((long)puVar5 + 0x1fc) = 0;
        *(undefined8 *)((long)puVar5 + 0x204) = 0;
        *(undefined8 *)((long)puVar5 + 0x1ec) = 0;
        *(undefined8 *)((long)puVar5 + 500) = 0;
        *(undefined8 *)((long)puVar5 + 0x1dc) = 0;
        *(undefined8 *)((long)puVar5 + 0x1e4) = 0;
        *(undefined8 *)((long)puVar5 + 0x1cc) = 0;
        *(undefined8 *)((long)puVar5 + 0x1d4) = 0;
        *(undefined8 *)((long)puVar5 + 0x1bc) = 0;
        *(undefined8 *)((long)puVar5 + 0x1c4) = 0;
        puVar5 = puVar5 + 0x4a;
      } while ((param_1 & 0xfffffffc) != uVar4);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)((long)puVar2 + uVar4 * 0x94);
      do {
        *(undefined4 *)(puVar2 + 0x12) = 0;
        uVar3 = uVar3 - 1;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((long)puVar2 + 0x94);
      } while (uVar3 != 0);
    }
  }
  return;
}

