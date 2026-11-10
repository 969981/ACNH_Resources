
void FUN_00317b60(long *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  
  puVar9 = PTR_DAT_04bcecc8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = (long)(puVar9 + 0x10);
  *(undefined4 *)((long)param_1 + 0xc) = uVar5;
  lVar2 = *(long *)(param_2 + 0x18);
  param_1[2] = *(long *)(param_2 + 0x10);
  param_1[3] = lVar2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  puVar9 = PTR_DAT_04bc0ec8;
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = uVar5;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = (long)(param_1 + 8);
  param_1[0xb] = 0x10;
  uVar12 = *(undefined8 *)(param_2 + 0x50);
  param_1[7] = (long)(puVar9 + 0x10);
  FUN_0018b070(param_1 + 7,uVar12,0xffffffffffffffff);
  uVar6 = *(undefined1 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  param_1[0xd] = (long)(puVar9 + 0x10);
  *(undefined1 *)(param_1 + 0xe) = 0;
  puVar9 = PTR_DAT_04bcec98;
  param_1[0x10] = (long)(param_1 + 0xe);
  param_1[0x11] = 0x10;
  uVar12 = *(undefined8 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)((long)param_1 + 100) = uVar5;
  *param_1 = (long)(puVar9 + 0x10);
  FUN_0018b070(param_1 + 0xd,uVar12,0xffffffffffffffff);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar2 = *(long *)(param_2 + 0x90);
  lVar3 = *(long *)(param_2 + 0x98);
  param_1[0x14] = 0;
  lVar7 = lVar3 - lVar2;
  if (lVar7 != 0) {
    if (lVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_001a3240();
    }
    lVar10 = FUN_00187df4(lVar7);
    lVar13 = 0;
    param_1[0x12] = lVar10;
    param_1[0x14] = lVar10 + (lVar7 >> 2) * 4;
    do {
      *(undefined4 *)(lVar10 + lVar13) = *(undefined4 *)(lVar2 + lVar13);
      lVar13 = lVar13 + 4;
    } while (lVar2 + lVar13 != lVar3);
    param_1[0x13] = lVar10 + lVar13;
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  puVar1 = *(undefined1 **)(param_2 + 0xa8);
  puVar4 = *(undefined1 **)(param_2 + 0xb0);
  param_1[0x17] = 0;
  uVar8 = (long)puVar4 - (long)puVar1;
  if (uVar8 != 0) {
    if ((long)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8();
    }
    puVar11 = (undefined1 *)FUN_00187df4(uVar8);
    param_1[0x17] = (long)(puVar11 + uVar8);
    param_1[0x15] = (long)puVar11;
    param_1[0x16] = (long)puVar11;
    puVar14 = puVar1;
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar11 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar11 = puVar11 + 1;
    }
    if ((undefined1 *)0x2 < puVar4 + ~(ulong)puVar1) {
      do {
        *puVar11 = *puVar14;
        puVar11[1] = puVar14[1];
        puVar11[2] = puVar14[2];
        puVar1 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar11[3] = *puVar1;
        puVar11 = puVar11 + 4;
      } while (puVar14 != puVar4);
    }
    param_1[0x16] = (long)puVar11;
  }
  FUN_0018652c(param_1 + 0x18,param_2 + 0xc0);
  FUN_0018652c(param_1 + 0x19,param_2 + 200);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)((long)param_1 + 0xd4) = uVar5;
  return;
}

