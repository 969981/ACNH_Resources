
void FUN_001056b0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  param_2[0x16e5] = 0;
  *(undefined2 *)((long)param_2 + 0xb994) = 0;
  memset(param_2 + 3,0,0x29a);
  puVar4 = param_2 + 0x57;
  lVar5 = 300;
  *(undefined2 *)((long)param_2 + 0xb992) = 0;
  do {
    *(undefined2 *)(puVar4 + 0x10) = 1;
    FUN_0010d880(puVar4);
    puVar4 = puVar4 + 0x11;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined2 *)((long)param_2 + 0xb996) = 0;
  lVar5 = 0;
  do {
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 0xa9b0);
    *(undefined8 *)((long)param_2 + lVar5 + 0xa2e0) = 0;
    *(undefined1 *)((long)param_2 + lVar5 + 0xa2e9) = 0;
    puVar4[0xda] = 0;
    *(undefined1 *)((long)param_2 + lVar5 + 0xb089) = 0;
    *puVar4 = 0;
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 0xa2a0);
    *(undefined1 *)((long)param_2 + lVar5 + 0xa9b9) = 0;
    lVar5 = lVar5 + 0x50;
    puVar4[0xda] = 0;
    *puVar4 = 0;
    puVar4[0x1b4] = 0;
  } while (lVar5 != 0x640);
  *(undefined4 *)((long)param_2 + 0xa8fc) = 0;
  *(undefined4 *)((long)param_2 + 0xb69c) = 0;
  *(undefined4 *)((long)param_2 + 0xafcc) = 0;
  *(undefined2 *)((long)param_2 + 0x12) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined2 *)(param_2 + 0x151f) = 0;
  param_2[0x151e] = 0;
  param_2[0x151d] = 0;
  param_2[0x151c] = 0;
  *(undefined2 *)(param_2 + 0x15f9) = 0;
  param_2[0x15f8] = 0;
  param_2[0x15f7] = 0;
  param_2[0x15f6] = 0;
  *(undefined2 *)(param_2 + 0x16d3) = 0;
  param_2[0x16d2] = 0;
  param_2[0x16d1] = 0;
  param_2[0x16d0] = 0;
  plVar1 = param_2 + 0x16e6;
  *plVar1 = param_1 + 0xb9c0;
  puVar2 = (undefined1 *)(param_1 + 0x23178);
  *(long *)(param_1 + 0xb9c0) = param_1 + 0x21f48;
  lVar5 = 0x680;
  for (lVar3 = 0x6c; *(undefined1 **)(*plVar1 + lVar5 + -0x340) = puVar2 + -0x918, lVar3 != 0;
      lVar3 = lVar3 + -2) {
    *(undefined1 **)(*plVar1 + lVar5) = puVar2;
    lVar5 = lVar5 + 0x680;
    puVar2 = &DAT_00001230 + (long)puVar2;
  }
  return;
}

