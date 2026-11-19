
void FUN_03a33460(long param_1,long param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  long lVar10;
  
  if (param_2 == 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x250) + 0x58);
    if (lVar2 != 0) {
      uVar3 = (ulong)*(ushort *)(lVar2 + 0xc);
      puVar8 = (uint *)((int *)(lVar2 + 8) + uVar3 * 4);
      uVar5 = *puVar8;
      if (*(int *)(lVar2 + 8) < (int)uVar5) {
        do {
          if (uVar5 < 0xe0) {
            uVar7 = (ulong)((byte)"gsys_areaenv_ExtConfExposure"[0x1b - (ulong)(uVar5 >> 3)] >>
                           ((ulong)uVar5 & 7)) & 1;
          }
          else {
            uVar7 = 0;
          }
          uVar3 = (ulong)*(ushort *)(lVar2 + 8 + uVar3 * 0x10 + uVar7 * 2 + 4);
          puVar8 = (uint *)(lVar2 + 8 + uVar3 * 0x10);
          bVar1 = (int)uVar5 < (int)*puVar8;
          uVar5 = *puVar8;
        } while (bVar1);
      }
      psVar4 = *(short **)(puVar8 + 2);
      if ((((*psVar4 == 0x1c) &&
           (((*(long *)(psVar4 + 1) == 0x6572615f73797367 &&
             *(long *)(psVar4 + 5) == 0x7478455f766e6561) &&
            *(long *)(psVar4 + 9) == 0x6f707845666e6f43) && *(int *)(psVar4 + 0xd) == 0x65727573))
          && (uVar3 = (long)puVar8 + (-0x18 - lVar2),
             ((uVar3 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
         (lVar2 = *(long *)(*(long *)(param_1 + 0x250) + 0x50), lVar2 != 0)) {
        lVar2 = lVar2 + ((long)(uVar3 * 0x10000000) >> 0x20) * 0x40;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if (1 < (int)uVar5) {
          uVar5 = 2;
        }
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0;
            puVar9 = (undefined4 *)(param_1 + 0x2e4);
            do {
              lVar10 = uVar3 * 4;
              uVar3 = uVar3 + 2;
              puVar9[-0xc] = *(undefined4 *)(*(long *)(lVar2 + 8) + lVar10);
              *puVar9 = *(undefined4 *)(*(long *)(lVar2 + 8) + lVar10 + 4);
              puVar9 = puVar9 + 0x18;
            } while (((ulong)uVar5 & 0xfffffffe) != uVar3);
          }
          if ((uVar5 & 1) != 0) {
            *(undefined4 *)(param_1 + uVar3 * 0x30 + 0x2b4) =
                 *(undefined4 *)(*(long *)(lVar2 + 8) + uVar3 * 4);
            return;
          }
        }
      }
    }
  }
  else {
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      uVar3 = (ulong)*(ushort *)(lVar2 + 0xc);
      puVar8 = (uint *)((int *)(lVar2 + 8) + uVar3 * 4);
      uVar5 = *puVar8;
      if (*(int *)(lVar2 + 8) < (int)uVar5) {
        do {
          if (uVar5 < 0xe0) {
            uVar7 = (ulong)((byte)"gsys_areaenv_ExtConfExposure"[0x1b - (ulong)(uVar5 >> 3)] >>
                           ((ulong)uVar5 & 7)) & 1;
          }
          else {
            uVar7 = 0;
          }
          uVar3 = (ulong)*(ushort *)(lVar2 + 8 + uVar3 * 0x10 + uVar7 * 2 + 4);
          puVar8 = (uint *)(lVar2 + 8 + uVar3 * 0x10);
          bVar1 = (int)uVar5 < (int)*puVar8;
          uVar5 = *puVar8;
        } while (bVar1);
      }
      psVar4 = *(short **)(puVar8 + 2);
      if (((*psVar4 == 0x1c) &&
          (((*(long *)(psVar4 + 1) == 0x6572615f73797367 &&
            *(long *)(psVar4 + 5) == 0x7478455f766e6561) &&
           *(long *)(psVar4 + 9) == 0x6f707845666e6f43) && *(int *)(psVar4 + 0xd) == 0x65727573)) &&
         ((uVar3 = (long)puVar8 + (-0x18 - lVar2), ((uVar3 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
          && (*(long *)(param_2 + 0x68) != 0)))) {
        lVar2 = *(long *)(param_2 + 0x68) + ((long)(uVar3 * 0x10000000) >> 0x20) * 0x40;
        uVar5 = *(uint *)(lVar2 + 0x10);
        if (1 < (int)uVar5) {
          uVar5 = 2;
        }
        if (uVar5 != 0) {
          uVar3 = 0;
          do {
            iVar6 = (int)uVar3;
            lVar10 = uVar3 * 4;
            uVar3 = uVar3 + 1;
            *(undefined4 *)
             (*(long *)(param_1 + 0x2f0) +
              (long)(param_3 + *(int *)(param_1 + 0x2e8) * iVar6) * 0x30 + 0x2c) =
                 *(undefined4 *)(*(long *)(lVar2 + 8) + lVar10);
          } while (uVar5 != uVar3);
        }
      }
    }
  }
  return;
}

