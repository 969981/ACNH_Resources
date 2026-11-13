
void FUN_01498a70(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_00705c50();
  param_1[0x4f] = 0;
  *param_1 = &PTR_LAB_049a5bb0;
  memset(param_1 + 0x50,0,0xc0000);
  lVar3 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar4 = param_1;
  do {
    lVar5 = 0;
    do {
      lVar2 = lVar5 + 0xc0;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x280) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x290) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x288) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x298) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x2a8) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x2a0) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x2b0) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x2c0) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x2b8) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x2c8) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x2d8) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x2d0) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x2e0) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x2f0) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x2e8) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x2f8) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x308) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x300) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x310) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 800) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x318) = puVar1;
      *(undefined2 *)((long)puVar4 + lVar5 + 0x328) = 0;
      *(undefined8 *)((long)puVar4 + lVar5 + 0x338) = 0;
      *(undefined **)((long)puVar4 + lVar5 + 0x330) = puVar1;
      lVar5 = lVar2;
    } while (lVar2 != 0x3000);
    lVar3 = lVar3 + 1;
    puVar4 = puVar4 + 0x600;
  } while (lVar3 != 0x40);
  *(undefined4 *)(param_1 + 0x18050) = 0;
  return;
}

