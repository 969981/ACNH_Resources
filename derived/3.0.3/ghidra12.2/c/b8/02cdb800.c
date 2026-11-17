
void FUN_02cdb800(undefined2 *param_1,byte *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  byte local_14 [4];
  
  if ((-1 < (int)param_3) && (local_14[0] = *param_2, local_14[0] < 8)) {
    uVar2 = 1;
    lVar3 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
    lVar1 = lVar3 + (ulong)param_3 * 0x2450 + 0x3f00;
    if (lVar3 == 0 || 7 < param_3) {
      lVar1 = 0;
    }
    if (*(long **)(lVar1 + 0x60) != (long *)0x0) {
      puVar4 = (undefined8 *)**(long **)(lVar1 + 0x60);
      if (puVar4 == (undefined8 *)0x0) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar4)();
        uVar2 = uVar2 ^ 1;
      }
    }
    puVar5 = (undefined2 *)FUN_026e85f0(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    *param_1 = *puVar5;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e88f0(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[4] = *puVar5;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e8b00(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[8] = *puVar5;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e8d10(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[0xc] = *puVar5;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9010(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[0x10] = *puVar5;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9240(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[0x14] = *puVar5;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e9470(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[0x18] = *puVar5;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar5 + 2);
    puVar5 = (undefined2 *)FUN_026e96a0(*(long *)(lVar1 + 0x48) + *(long *)(lVar1 + 0x40));
    param_1[0x1c] = *puVar5;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(puVar5 + 1);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)puVar5 + 3);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(puVar5 + 2);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar1 + 0x60) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x60) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return;
}

