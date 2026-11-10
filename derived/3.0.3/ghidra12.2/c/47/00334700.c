
undefined8
FUN_00334700(long param_1,long param_2,undefined8 param_3,uint param_4,int param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9,
            undefined4 *param_10,void *param_11)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  
  *(int *)(param_1 + 0x10) = param_5;
  *(uint *)(param_1 + 0x14) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_6 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  bVar5 = param_6 != (undefined4 *)0x0;
  uVar6 = (ulong)bVar5;
  if (param_7 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  else {
    uVar6 = (ulong)(bVar5 + 1);
    *(uint *)(param_1 + 0xc) = bVar5 + 1;
    *(ulong *)(param_1 + 0x78) = (ulong)bVar5 << 4;
  }
  if (param_8 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    uVar7 = uVar6;
  }
  else {
    uVar2 = (int)uVar6 + 1;
    uVar7 = (ulong)uVar2;
    *(uint *)(param_1 + 0xc) = uVar2;
    *(ulong *)(param_1 + 0x80) = uVar6 << 4;
  }
  if (param_9 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    uVar6 = uVar7;
  }
  else {
    uVar2 = (int)uVar7 + 1;
    uVar6 = (ulong)uVar2;
    *(uint *)(param_1 + 0xc) = uVar2;
    *(ulong *)(param_1 + 0x88) = uVar7 << 4;
  }
  if (param_10 == (undefined4 *)0x0) {
    lVar10 = 0;
  }
  else {
    uVar2 = (int)uVar6 + 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    lVar10 = uVar6 << 4;
    uVar6 = (ulong)uVar2;
  }
  *(long *)(param_1 + 0x90) = lVar10;
  lVar10 = (long)(int)uVar6 * (long)param_5 * 0x10;
  *(ulong *)(param_1 + 0x20) = uVar6 << 4;
  *(long *)(param_1 + 0x28) = lVar10;
  uVar6 = -(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_4 << 2;
  *(ulong *)(param_1 + 0x30) = uVar6;
  lVar14 = *(long *)(param_2 + 0x198);
  uVar6 = ((uVar6 + *(long *)(param_2 + 0x168) + lVar10) - 1 & -*(long *)(param_2 + 0x168)) + lVar14
  ;
  if (uVar6 <= *(ulong *)(param_2 + 0x170)) {
    *(ulong *)(param_2 + 0x198) = uVar6;
    if (*(long *)(param_2 + 0x1a0) != 0) {
      puVar3 = (undefined4 *)(*(long *)(param_2 + 0x1a0) + lVar14);
      *(undefined4 **)(param_1 + 0x58) = param_6;
      *(undefined4 **)(param_1 + 0x60) = param_7;
      puVar13 = puVar3;
      if (0 < param_5) {
        if (param_6 == (undefined4 *)0x0) {
          puVar9 = param_8;
          puVar8 = param_7;
          puVar12 = param_10;
          puVar11 = param_9;
          do {
            if (param_7 != (undefined4 *)0x0) {
              *puVar13 = *puVar8;
              puVar13[1] = puVar8[1];
              puVar13[2] = puVar8[2];
              puVar1 = puVar8 + 3;
              puVar8 = puVar8 + 4;
              puVar13[3] = *puVar1;
              puVar13 = puVar13 + 4;
            }
            if (param_8 != (undefined4 *)0x0) {
              *puVar13 = *puVar9;
              puVar13[1] = puVar9[1];
              puVar13[2] = puVar9[2];
              puVar1 = puVar9 + 3;
              puVar9 = puVar9 + 4;
              puVar13[3] = *puVar1;
              puVar13 = puVar13 + 4;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar13 = *puVar11;
              puVar13[1] = puVar11[1];
              puVar13[2] = puVar11[2];
              puVar1 = puVar11 + 3;
              puVar11 = puVar11 + 4;
              puVar13[3] = *puVar1;
              puVar13 = puVar13 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar13 = *puVar12;
              puVar13[1] = puVar12[1];
              puVar13[2] = puVar12[2];
              puVar1 = puVar12 + 3;
              puVar12 = puVar12 + 4;
              puVar13[3] = *puVar1;
              puVar13 = puVar13 + 4;
            }
            param_5 = param_5 + -1;
          } while (param_5 != 0);
        }
        else if (param_7 == (undefined4 *)0x0) {
          puVar8 = param_8;
          puVar11 = param_10;
          puVar9 = param_9;
          do {
            *puVar13 = *param_6;
            puVar13[1] = param_6[1];
            puVar13[2] = param_6[2];
            puVar13[3] = param_6[3];
            if (param_8 == (undefined4 *)0x0) {
              puVar13 = puVar13 + 4;
            }
            else {
              puVar13[4] = *puVar8;
              puVar13[5] = puVar8[1];
              puVar13[6] = puVar8[2];
              puVar12 = puVar8 + 3;
              puVar8 = puVar8 + 4;
              puVar13[7] = *puVar12;
              puVar13 = puVar13 + 8;
            }
            if (param_9 != (undefined4 *)0x0) {
              *puVar13 = *puVar9;
              puVar13[1] = puVar9[1];
              puVar13[2] = puVar9[2];
              puVar12 = puVar9 + 3;
              puVar9 = puVar9 + 4;
              puVar13[3] = *puVar12;
              puVar13 = puVar13 + 4;
            }
            if (param_10 != (undefined4 *)0x0) {
              *puVar13 = *puVar11;
              puVar13[1] = puVar11[1];
              puVar13[2] = puVar11[2];
              puVar12 = puVar11 + 3;
              puVar11 = puVar11 + 4;
              puVar13[3] = *puVar12;
              puVar13 = puVar13 + 4;
            }
            param_5 = param_5 + -1;
            param_6 = param_6 + 4;
          } while (param_5 != 0);
        }
        else {
          puVar8 = param_10;
          puVar9 = param_9;
          if (param_8 == (undefined4 *)0x0) {
            do {
              *puVar13 = *param_6;
              puVar13[1] = param_6[1];
              puVar13[2] = param_6[2];
              puVar13[3] = param_6[3];
              puVar13[4] = *param_7;
              puVar13[5] = param_7[1];
              puVar13[6] = param_7[2];
              puVar13[7] = param_7[3];
              if (param_9 == (undefined4 *)0x0) {
                puVar13 = puVar13 + 8;
              }
              else {
                puVar13[8] = *puVar9;
                puVar13[9] = puVar9[1];
                puVar13[10] = puVar9[2];
                puVar11 = puVar9 + 3;
                puVar9 = puVar9 + 4;
                puVar13[0xb] = *puVar11;
                puVar13 = puVar13 + 0xc;
              }
              if (param_10 != (undefined4 *)0x0) {
                *puVar13 = *puVar8;
                puVar13[1] = puVar8[1];
                puVar13[2] = puVar8[2];
                puVar11 = puVar8 + 3;
                puVar8 = puVar8 + 4;
                puVar13[3] = *puVar11;
                puVar13 = puVar13 + 4;
              }
              param_5 = param_5 + -1;
              param_6 = param_6 + 4;
              param_7 = param_7 + 4;
            } while (param_5 != 0);
          }
          else {
            do {
              *puVar13 = *param_6;
              puVar13[1] = param_6[1];
              puVar13[2] = param_6[2];
              puVar13[3] = param_6[3];
              puVar13[4] = *param_7;
              puVar13[5] = param_7[1];
              puVar13[6] = param_7[2];
              puVar13[7] = param_7[3];
              puVar13[8] = *param_8;
              puVar13[9] = param_8[1];
              puVar13[10] = param_8[2];
              puVar13[0xb] = param_8[3];
              if (param_9 == (undefined4 *)0x0) {
                puVar13 = puVar13 + 0xc;
              }
              else {
                puVar13[0xc] = *puVar9;
                puVar13[0xd] = puVar9[1];
                puVar13[0xe] = puVar9[2];
                puVar11 = puVar9 + 3;
                puVar9 = puVar9 + 4;
                puVar13[0xf] = *puVar11;
                puVar13 = puVar13 + 0x10;
              }
              if (param_10 != (undefined4 *)0x0) {
                *puVar13 = *puVar8;
                puVar13[1] = puVar8[1];
                puVar13[2] = puVar8[2];
                puVar11 = puVar8 + 3;
                puVar8 = puVar8 + 4;
                puVar13[3] = *puVar11;
                puVar13 = puVar13 + 4;
              }
              param_5 = param_5 + -1;
              param_6 = param_6 + 4;
              param_7 = param_7 + 4;
              param_8 = param_8 + 4;
            } while (param_5 != 0);
          }
        }
      }
      memcpy(puVar13,param_11,*(size_t *)(param_1 + 0x30));
      *(void **)(param_1 + 0x68) = param_11;
      uVar4 = *(undefined8 *)(param_2 + 400);
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x188);
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      lVar10 = *(long *)(param_2 + 0x188);
      uVar4 = *(undefined8 *)(param_2 + 400);
      *(undefined1 *)(param_1 + 8) = 1;
      *(long *)(param_1 + 0x48) = lVar10;
      *(undefined8 *)(param_1 + 0x50) = uVar4;
      *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + lVar14;
      *(long *)(param_1 + 0x48) = (long)puVar13 + lVar10 + (lVar14 - (long)puVar3);
      return 1;
    }
  }
  return 0;
}

