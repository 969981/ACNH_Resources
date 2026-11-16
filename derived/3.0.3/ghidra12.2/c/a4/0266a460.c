
bool FUN_0266a460(undefined2 *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  long lVar5;
  byte local_34 [4];
  
  local_34[0] = *param_2;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_34,1);
  if (param_3 < 8 && lVar2 != 0) {
    lVar5 = lVar2 + (ulong)param_3 * 0x2450;
    if ((*(long **)(lVar5 + 0x3f60) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar5 + 0x3f60), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    puVar4 = (undefined2 *)FUN_026e85f0(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e88f0(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[4] = *puVar4;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e8b00(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[8] = *puVar4;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e8d10(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[0xc] = *puVar4;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x1b) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e9010(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[0x10] = *puVar4;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x23) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e9240(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[0x14] = *puVar4;
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x2b) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e9470(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[0x18] = *puVar4;
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x33) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(puVar4 + 2);
    puVar4 = (undefined2 *)FUN_026e96a0(*(long *)(lVar5 + 0x3f48) + *(long *)(lVar5 + 0x3f40));
    param_1[0x1c] = *puVar4;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(puVar4 + 1);
    *(undefined1 *)((long)param_1 + 0x3b) = *(undefined1 *)((long)puVar4 + 3);
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(puVar4 + 2);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar5 + 0x3f60) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x3f60) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return param_3 < 8 && lVar2 != 0;
}

