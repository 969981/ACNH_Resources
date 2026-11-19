
void FUN_03a758b0(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bbd510;
  lVar6 = *(long *)(param_1 + 0x238);
  uVar3 = *(uint *)(param_1 + 0x220);
  if (*(uint *)(param_1 + 0x230) <= param_2) {
    param_2 = 0;
  }
  if (0 < (int)uVar3) {
    uVar9 = 0;
    lVar5 = lVar6 + (long)(int)param_2 * 0x6d0;
    do {
      uVar1 = uVar9;
      if (uVar3 <= uVar9) {
        uVar1 = 0;
      }
      lVar8 = *(long *)(param_1 + 0x228);
      uVar3 = uVar9;
      if (*(uint *)(lVar5 + 0x210) <= uVar9) {
        uVar3 = 0;
      }
      if (*(long *)(*(long *)(lVar5 + 0x218) + (ulong)uVar3 * 8) != 0) {
        FUN_039499cc(*(undefined8 *)puVar2);
        uVar3 = uVar9;
        if (*(uint *)(lVar5 + 0x210) <= uVar9) {
          uVar3 = 0;
        }
        *(undefined8 *)(*(long *)(lVar5 + 0x218) + (ulong)uVar3 * 8) = 0;
      }
      pbVar7 = (byte *)(lVar8 + (ulong)uVar1 * 0x2c + 4);
      if (*(long *)(lVar5 + 0x220 + (ulong)*pbVar7 * 8) != 0) {
        FUN_039499cc(*(undefined8 *)puVar2);
        *(undefined8 *)(lVar5 + 0x220 + (ulong)*pbVar7 * 8) = 0;
        puVar4 = (undefined4 *)(lVar5 + 0x250 + (ulong)*pbVar7 * 0x18);
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
      }
      uVar3 = *(uint *)(param_1 + 0x220);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar3);
  }
  lVar6 = lVar6 + (long)(int)param_2 * 0x6d0;
  if (*(long *)(lVar6 + 0x2e0) != 0) {
    FUN_039499cc(*(undefined8 *)puVar2);
    *(undefined8 *)(lVar6 + 0x2e0) = 0;
  }
  return;
}

