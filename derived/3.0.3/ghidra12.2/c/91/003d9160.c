
void FUN_003d9160(long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined4 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)FUN_003bd940(param_1 + 0x8b0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x1e] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *puVar2 = 0;
    puVar6 = puVar2 + 0x1d;
    *puVar6 = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    FUN_003d2dd4(puVar2);
    *puVar6 = puVar6;
    puVar2[0x1e] = puVar6;
    *puVar2 = &PTR_FUN_0484f300;
  }
  puVar2[0x1b] = param_5;
  puVar2[0x1c] = param_1;
  *(undefined4 *)(puVar2 + 0x19) = param_3;
  puVar2[0x1a] = param_4;
  *(int *)((long)puVar2 + 0x44) = (int)param_1;
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 1;
      puVar2[lVar5 + 9] = *(undefined8 *)(param_2 + lVar5 * 8);
      lVar5 = lVar1;
    } while (lVar1 < *(int *)(param_1 + 0x50));
  }
  plVar4 = puVar2 + 0x1d;
  lVar5 = *plVar4;
  *plVar4 = *(long *)(param_1 + 0x8a0);
  *(long *)(lVar5 + 8) = param_1 + 0x8a0;
  *(long **)(*(long *)(param_1 + 0x8a0) + 8) = plVar4;
  *(long *)(param_1 + 0x8a0) = lVar5;
  uVar3 = FUN_003c98bc();
  FUN_003c9a08(uVar3,puVar2,param_6);
  return;
}

