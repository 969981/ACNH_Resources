
void FUN_021259a0(int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*param_1 < param_1[1]) {
    puVar3 = *(undefined8 **)(param_1 + 4);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 4) = *puVar3;
    }
    *puVar3 = &PTR_LAB_04a74eb0;
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    puVar3[1] = *(undefined8 *)(param_2 + 8);
    puVar3[2] = uVar2;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)((long)puVar3 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)((long)puVar3 + 0x24) = uVar2;
    *(undefined4 *)((long)puVar3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(puVar3 + 7) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((long)puVar3 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    uVar2 = *(undefined8 *)(param_2 + 0x48);
    puVar3[8] = *(undefined8 *)(param_2 + 0x40);
    puVar3[9] = uVar2;
    *(undefined4 *)(puVar3 + 10) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((long)puVar3 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x5c);
    *(undefined8 *)((long)puVar3 + 100) = *(undefined8 *)(param_2 + 100);
    *(undefined8 *)((long)puVar3 + 0x5c) = uVar2;
    *(undefined4 *)((long)puVar3 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(puVar3 + 0xe) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((long)puVar3 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    uVar2 = *(undefined8 *)(param_2 + 0x80);
    puVar3[0xf] = *(undefined8 *)(param_2 + 0x78);
    puVar3[0x10] = uVar2;
    *(undefined4 *)(puVar3 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)((long)puVar3 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(puVar3 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x94);
    *(undefined8 *)((long)puVar3 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
    *(undefined8 *)((long)puVar3 + 0x94) = uVar2;
    *(undefined4 *)((long)puVar3 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(puVar3 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)((long)puVar3 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    uVar2 = *(undefined8 *)(param_2 + 0xb8);
    puVar3[0x16] = *(undefined8 *)(param_2 + 0xb0);
    puVar3[0x17] = uVar2;
    *(undefined4 *)(puVar3 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((long)puVar3 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)(puVar3 + 0x19) = *(undefined4 *)(param_2 + 200);
    uVar2 = *(undefined8 *)(param_2 + 0xcc);
    *(undefined8 *)((long)puVar3 + 0xd4) = *(undefined8 *)(param_2 + 0xd4);
    *(undefined8 *)((long)puVar3 + 0xcc) = uVar2;
    *(undefined4 *)((long)puVar3 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(puVar3 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)((long)puVar3 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    FUN_02125f20(puVar3 + 0x1d,param_2 + 0xe8);
    *(undefined1 *)(puVar3 + 0x3b) = *(undefined1 *)(param_2 + 0x1d8);
    iVar1 = *param_1;
    if ((-1 < iVar1) && (iVar1 < param_1[1])) {
      if (iVar1 != 0) {
        memmove((void *)((long)*(void **)(param_1 + 2) + 8),*(void **)(param_1 + 2),(long)iVar1 << 3
               );
      }
      **(undefined8 **)(param_1 + 2) = puVar3;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

