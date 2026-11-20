
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_03f45a70(long param_1,undefined4 param_2,int param_3,long param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint *puVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar17 = (uint *)(param_1 + 0x5040);
  *(long *)(param_1 + 0x6440) = param_4;
  *(undefined4 *)(param_1 + 0x6448) = param_2;
  *(int *)(param_1 + 0x644c) = param_3;
  *(float *)(param_1 + 0x6450) = 8.0 / (float)(param_3 + -1);
  uVar9 = _UNK_041029e8;
  uVar8 = _DAT_041029e0;
  uVar7 = _UNK_04102908;
  uVar6 = _DAT_04102900;
  uVar5 = _UNK_04101d48;
  uVar4 = _DAT_04101d40;
  if (param_4 != 0) {
    lVar14 = 0;
    puVar19 = (uint *)(param_1 + 0x7f04);
    lVar16 = param_1;
    do {
      uVar18 = 0;
      puVar1 = (uint *)(param_4 + lVar14 * 3);
      lVar20 = lVar16;
      puVar21 = puVar17;
      do {
        uVar22 = (uint)(byte)*puVar1;
        if ((1 < uVar18) && (uVar22 = (uint)(byte)*puVar1 * 0x66670 >> 0x13, 5 < uVar18)) {
          uVar22 = uVar22 * 0x5333b >> 0x13;
        }
        uVar12 = (uint)*(byte *)((long)puVar1 + 1);
        uVar3 = (int)uVar18 << 5;
        if ((uVar3 & 0xa0) != 0) {
          uVar12 = (uint)*(byte *)((long)puVar1 + 1) * 0x66670 >> 0x13;
          if ((uVar3 & 0xbf) == 0xa0) {
            uVar12 = uVar12 * 0x5333b >> 0x13;
          }
        }
        uVar13 = (uint)*(byte *)((long)puVar1 + 2);
        if ((uVar3 & 0x60) != 0) {
          uVar13 = uVar13 * 0x66670 >> 0x13;
          if ((uVar3 & 0x60) == 0x60) {
            uVar13 = uVar13 * 0x5333b >> 0x13;
          }
        }
        uVar18 = uVar18 + 1;
        fVar24 = (float)uVar22 * (float)uVar22 * 0.003921569;
        fVar25 = (float)uVar12 * (float)uVar12 * 0.003921569;
        fVar26 = (float)uVar13 * (float)uVar13 * 0.003921569;
        *(ulong *)(lVar20 + 0x1048) =
             CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar26 +
                      (float)((ulong)uVar5 >> 0x20) * fVar24 +
                      (float)((ulong)uVar9 >> 0x20) * fVar25,
                      (float)uVar7 * fVar26 + (float)uVar5 * fVar24 + (float)uVar9 * fVar25);
        *(ulong *)(lVar20 + 0x1040) =
             CONCAT44((float)((ulong)uVar6 >> 0x20) * fVar26 +
                      (float)((ulong)uVar4 >> 0x20) * fVar24 +
                      (float)((ulong)uVar8 >> 0x20) * fVar25,
                      (float)uVar6 * fVar26 + (float)uVar4 * fVar24 + (float)uVar8 * fVar25);
        uVar3 = *puVar1;
        uVar23 = (undefined1)(uVar3 >> 8);
        *(ulong *)(lVar20 + 0x3048) =
             (ulong)(CONCAT14((char)(uVar3 >> 0x18),uVar3 >> 0x10) & 0xff000000ff);
        *(ulong *)(lVar20 + 0x3040) =
             (ulong)((uint6)CONCAT14(uVar23,(uint)CONCAT12(uVar23,(ushort)(byte)uVar3)) &
                    0xffff0000ffff);
        *puVar21 = uVar12 << 8 | uVar13 << 0x10 | uVar22;
        puVar10 = PTR_DAT_04bdf328;
        puVar21 = puVar21 + 0x40;
        lVar20 = lVar20 + 0x400;
      } while (uVar18 != 8);
      lVar14 = lVar14 + 1;
      puVar17 = puVar17 + 1;
      lVar16 = lVar16 + 0x10;
    } while (lVar14 != 0x40);
    if (*(long *)(param_1 + 0x38) != 0) {
      (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))(0);
    }
    lVar14 = (**(code **)(**(long **)puVar10 + 0x10))
                       (*(long **)puVar10,
                        (long)(*(int *)(param_1 + 0x6448) * *(int *)(param_1 + 0x644c) * 4),0x10);
    *(long *)(param_1 + 0x38) = lVar14;
    if (lVar14 == 0) {
      FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
    }
    uVar18 = 0;
    *(undefined4 *)(param_1 + 0x8060) = 0;
    *(undefined8 *)(param_1 + 0x8038) = 0;
    *(undefined8 *)(param_1 + 0x8050) = 0;
    *(undefined8 *)(param_1 + 0x8058) = 0;
    *(undefined8 *)(param_1 + 0x8040) = 0;
    *(undefined8 *)(param_1 + 0x8048) = 0;
    do {
      bVar11 = (uVar18 & 0xfffffff7) != 0;
      uVar18 = uVar18 + 1;
      uVar22 = 2;
      if (bVar11) {
        uVar22 = 4;
      }
      puVar19[-4] = uVar22 >> 1;
      iVar2 = *(int *)(param_1 + 0x8038);
      puVar19[3] = uVar22;
      puVar19[4] = uVar22 >> 1;
      iVar15 = 0xc;
      if (bVar11) {
        iVar15 = 0x18;
      }
      puVar19[-3] = uVar22;
      puVar19[-2] = uVar22;
      puVar19[-1] = uVar22;
      *puVar19 = uVar22;
      puVar19[1] = uVar22;
      puVar19[2] = uVar22;
      puVar19 = puVar19 + 9;
      *(uint *)(param_1 + 0x8038) = uVar22 * 2 + iVar15 + iVar2;
    } while (uVar18 != 9);
  }
  return param_4 != 0;
}

