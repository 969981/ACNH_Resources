
void FUN_020d3300(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint local_64;
  
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0xffffffffffffffff;
  puVar2 = PTR_DAT_04bb46b0;
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    if ((*(byte *)(lVar5 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar5 == 0) {
        return;
      }
      lVar5 = lVar5 + 0x70;
    }
    else {
      if (puVar6 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar6[0x26] == (long *)0x0) {
        return;
      }
      lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      if (lVar5 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar5 + 0xd0) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar5 + 0xd0), puVar6 == (undefined8 *)0x0)) {
      local_64 = 0;
    }
    else {
      local_64 = (**(code **)*puVar6)();
    }
    puVar4 = PTR_DAT_04bc2a20;
    puVar3 = PTR_DAT_04bc27f0;
    pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    uVar9 = (ulong)*pbVar7;
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[1], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)param_1 = CONCAT11(*pbVar7,bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x13230];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x13231], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 2) = CONCAT11(pbVar7[0x13230],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x26460];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x26461], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 4) = CONCAT11(pbVar7[0x26460],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x39690];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x39691], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 6) = CONCAT11(pbVar7[0x39690],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x4c8c0];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x4c8c1], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)(param_1 + 1) = CONCAT11(pbVar7[0x4c8c0],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x5faf0];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x5faf1], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 10) = CONCAT11(pbVar7[0x5faf0],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x72d20];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x72d21], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0xc) = CONCAT11(pbVar7[0x72d20],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x85f50];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x85f51], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0xe) = CONCAT11(pbVar7[0x85f50],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0x99180];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0x99181], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)(param_1 + 2) = CONCAT11(pbVar7[0x99180],bVar1);
      pbVar7 = (byte *)(*(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0));
    }
    uVar9 = (ulong)pbVar7[0xac3b0];
    if (((uVar9 < 0x23) && (bVar1 = pbVar7[0xac3b1], bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0x12) = CONCAT11(pbVar7[0xac3b0],bVar1);
    }
    lVar10 = 0;
    do {
      if (((*(long *)puVar2 != 0) && (lVar8 = *(long *)(*(long *)puVar2 + 0x10), lVar8 != 0)) &&
         ((lVar8 = *(long *)(lVar8 + lVar10 * 8 + 0x10), lVar8 != 0 &&
          (lVar8 = *(long *)(lVar8 + 0x18), lVar8 != 0)))) {
        if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar6 == (undefined8 *)0x0)) {
          pbVar7 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
          uVar11 = (uint)*pbVar7;
          uVar12 = (uint)pbVar7[1];
        }
        else {
          uVar9 = (**(code **)*puVar6)();
          pbVar7 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
          uVar11 = (uint)*pbVar7;
          uVar12 = (uint)pbVar7[1];
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
             (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar6 != (undefined8 *)0x0))
          {
            (**(code **)*puVar6)();
          }
        }
        if (((uVar11 < 0x23) && (uVar12 <= (byte)puVar3[uVar11])) &&
           ((*(uint *)(puVar4 + (ulong)uVar11 * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)) {
          *(ushort *)((long)param_1 + lVar10 * 2 + 0x14) = (ushort)uVar12 | (ushort)(uVar11 << 8);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != 10);
    lVar10 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    uVar9 = (ulong)*(byte *)(lVar10 + 0xbf670);
    if (((uVar9 < 0x23) && (bVar1 = *(byte *)(lVar10 + 0xbf671), bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)(param_1 + 5) = CONCAT11(*(byte *)(lVar10 + 0xbf670),bVar1);
      lVar10 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    }
    uVar9 = (ulong)*(byte *)(lVar10 + 0xd28a0);
    if (((uVar9 < 0x23) && (bVar1 = *(byte *)(lVar10 + 0xd28a1), bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0x2a) = CONCAT11(*(byte *)(lVar10 + 0xd28a0),bVar1);
      lVar10 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    }
    uVar9 = (ulong)*(byte *)(lVar10 + 0xe5ad0);
    if (((uVar9 < 0x23) && (bVar1 = *(byte *)(lVar10 + 0xe5ad1), bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0x2c) = CONCAT11(*(byte *)(lVar10 + 0xe5ad0),bVar1);
      lVar10 = *(long *)(lVar5 + 0xb8) + *(long *)(lVar5 + 0xb0);
    }
    uVar9 = (ulong)*(byte *)(lVar10 + 0xf8d00);
    if (((uVar9 < 0x23) && (bVar1 = *(byte *)(lVar10 + 0xf8d01), bVar1 <= (byte)puVar3[uVar9])) &&
       ((*(uint *)(puVar4 + uVar9 * 4) >> (ulong)(bVar1 & 0x1f) & 1) != 0)) {
      *(ushort *)((long)param_1 + 0x2e) = CONCAT11(*(byte *)(lVar10 + 0xf8d00),bVar1);
    }
    if ((((local_64 & 1) != 0) && (*(long *)(lVar5 + 0xd0) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0xd0) + 8), puVar6 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x020d3854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar6)();
      return;
    }
  }
  return;
}

