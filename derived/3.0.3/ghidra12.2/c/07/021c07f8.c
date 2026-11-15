
void FUN_021c07f8(long param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  long lVar2;
  
  lVar2 = 0x55e60;
  if ((param_3 & 1) == 0) {
    lVar2 = 0x55eb0;
  }
  puVar1 = (undefined2 *)(param_1 + lVar2);
  *(undefined4 *)(puVar1 + 0x26) = *(undefined4 *)(puVar1 + 0x22);
  *(undefined8 *)(puVar1 + 0x22) = *(undefined8 *)(puVar1 + 0x1e);
  *(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(puVar1 + 0x1c);
  *(undefined8 *)(puVar1 + 0x1c) = *(undefined8 *)(puVar1 + 0x18);
  *(undefined4 *)(puVar1 + 0x18) = *(undefined4 *)(puVar1 + 0x14);
  *(undefined4 *)(puVar1 + 0x1a) = *(undefined4 *)(puVar1 + 0x16);
  *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar1 + 0x10);
  puVar1[0x10] = puVar1[0xc];
  *(undefined1 *)(puVar1 + 0x11) = *(undefined1 *)(puVar1 + 0xd);
  *(undefined1 *)((long)puVar1 + 0x23) = *(undefined1 *)((long)puVar1 + 0x1b);
  *(undefined4 *)(puVar1 + 0x12) = *(undefined4 *)(puVar1 + 0xe);
  puVar1[0xc] = puVar1[8];
  *(undefined1 *)(puVar1 + 0xd) = *(undefined1 *)(puVar1 + 9);
  *(undefined1 *)((long)puVar1 + 0x1b) = *(undefined1 *)((long)puVar1 + 0x13);
  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar1 + 10);
  puVar1[8] = puVar1[4];
  *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(puVar1 + 5);
  *(undefined1 *)((long)puVar1 + 0x13) = *(undefined1 *)((long)puVar1 + 0xb);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(puVar1 + 6);
  puVar1[4] = *puVar1;
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(puVar1 + 1);
  *(undefined1 *)((long)puVar1 + 0xb) = *(undefined1 *)((long)puVar1 + 3);
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar1 + 2);
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  return;
}

