
void FUN_02cdeb4c(long param_1,byte *param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  byte local_34 [4];
  
  FUN_02cded9c();
  local_34[0] = *param_2;
  if (local_34[0] < 8) {
    lVar2 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
    if (lVar2 != 0) {
      if ((*(long **)(lVar2 + 0x178) == (long *)0x0) ||
         (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x178), puVar3 == (undefined8 *)0x0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = (**(code **)*puVar3)();
        uVar1 = uVar1 ^ 1;
      }
      puVar4 = (undefined2 *)FUN_026e85f0(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 8) = *puVar4;
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_026e88f0(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 0x10) = *puVar4;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_026e8b00(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 0x18) = *puVar4;
      *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_02815540(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      uVar5 = FUN_02cd92f0();
      if ((uVar5 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x28) = *puVar4;
        *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(puVar4 + 1);
        *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)((long)puVar4 + 3);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(puVar4 + 2);
        puVar4 = (undefined2 *)FUN_028159b0(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
        puVar6 = (undefined4 *)(param_1 + 0x34);
        *(undefined2 *)(param_1 + 0x30) = *puVar4;
        *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(puVar4 + 1);
        *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)((long)puVar4 + 3);
      }
      else {
        *(undefined2 *)(param_1 + 0x20) = *puVar4;
        *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(puVar4 + 1);
        *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)((long)puVar4 + 3);
        puVar6 = (undefined4 *)(param_1 + 0x24);
      }
      *puVar6 = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_026e9240(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 0x38) = *puVar4;
      *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_026e9470(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 0x40) = *puVar4;
      *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(puVar4 + 2);
      puVar4 = (undefined2 *)FUN_026e96a0(*(long *)(lVar2 + 0x160) + *(long *)(lVar2 + 0x158));
      *(undefined2 *)(param_1 + 0x48) = *puVar4;
      *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(puVar4 + 1);
      *(undefined1 *)(param_1 + 0x4b) = *(undefined1 *)((long)puVar4 + 3);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(puVar4 + 2);
      if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x178) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x178) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
      FUN_02cdef08(param_1);
      FUN_02cdf164(param_1);
    }
  }
  return;
}

