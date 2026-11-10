
void FUN_0037d4c0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  
  bVar4 = *(byte *)(param_1 + 0x58);
  if ((bVar4 & 1) == 0 && *(char *)(param_3 + 0x1d) == '\0') {
LAB_0037d4f8:
    bVar1 = bVar4 | 0x10;
    if ((param_4 & 1) == 0) {
      bVar1 = bVar4;
    }
    *(byte *)(param_1 + 0x58) = bVar1 & 0x7f;
    return;
  }
  lVar6 = *(long *)(param_1 + 0x18);
  uVar3 = (uint)*(byte *)(param_1 + 0x59);
  if (lVar6 != 0 && *(char *)(param_3 + 0x1f) != '\0') {
    uVar3 = (int)(*(float *)(param_3 + 0x18) * (float)*(byte *)(param_1 + 0x59));
  }
  *(char *)(param_1 + 0x5a) = (char)uVar3;
  if (((uVar3 == 0) && ((bVar4 >> 1 & 1) != 0)) && (*(char *)(param_3 + 0x1e) == '\0'))
  goto LAB_0037d4f8;
  if ((bVar4 >> 6 & 1) == 0) {
    if ((bVar4 >> 5 & 1) == 0) {
      if ((param_4 & 1) == 0 && (bVar4 & 0x10) == 0) {
        uVar8 = 0;
      }
      else {
        *(byte *)(param_1 + 0x58) = bVar4 & 0xef;
        FUN_0037d74c(param_1,param_3);
        bVar4 = *(byte *)(param_1 + 0x58);
        uVar8 = 1;
      }
      goto joined_r0x0037d614;
    }
    puVar7 = *(undefined8 **)(param_1 + 0xa0);
    puVar2 = *(undefined8 **)(param_3 + 8);
    if (lVar6 != 0) {
      puVar2 = (undefined8 *)(lVar6 + 0x70);
    }
    uVar29 = puVar2[5];
    uVar8 = puVar2[3];
    fVar23 = (float)puVar2[2];
    fVar30 = (float)*puVar7;
    fVar9 = (float)((ulong)*puVar7 >> 0x20);
    fVar10 = (float)puVar7[1];
    fVar11 = (float)((ulong)puVar7[1] >> 0x20);
    fVar24 = (float)((ulong)puVar2[2] >> 0x20);
    fVar12 = (float)puVar7[2];
    fVar14 = (float)((ulong)puVar7[2] >> 0x20);
    fVar16 = (float)puVar7[3];
    fVar18 = (float)((ulong)puVar7[3] >> 0x20);
    fVar20 = (float)*puVar2;
    fVar21 = (float)((ulong)*puVar2 >> 0x20);
    fVar26 = (float)puVar2[4];
    fVar27 = (float)((ulong)puVar2[4] >> 0x20);
    fVar22 = (float)puVar2[1];
    fVar13 = (float)puVar7[4];
    fVar15 = (float)((ulong)puVar7[4] >> 0x20);
    fVar17 = (float)puVar7[5];
    fVar19 = (float)((ulong)puVar7[5] >> 0x20);
    fVar25 = (float)uVar8;
    fVar28 = (float)uVar29;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)puVar2[1] >> 0x20) +
                  fVar11 * fVar20 + fVar18 * fVar21 + fVar19 * fVar22,
                  fVar10 * fVar20 + fVar16 * fVar21 + fVar17 * fVar22 + 0.0);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44(fVar9 * fVar20 + fVar14 * fVar21 + fVar15 * fVar22 + 0.0,
                  fVar30 * fVar20 + fVar12 * fVar21 + fVar13 * fVar22 + 0.0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar8 >> 0x20) +
                  fVar11 * fVar23 + fVar18 * fVar24 + fVar19 * fVar25,
                  fVar10 * fVar23 + fVar16 * fVar24 + fVar17 * fVar25 + 0.0);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44(fVar9 * fVar23 + fVar14 * fVar24 + fVar15 * fVar25 + 0.0,
                  fVar30 * fVar23 + fVar12 * fVar24 + fVar13 * fVar25 + 0.0);
    *(ulong *)(param_1 + 0x98) =
         CONCAT44((float)((ulong)uVar29 >> 0x20) +
                  fVar11 * fVar26 + fVar18 * fVar27 + fVar19 * fVar28,
                  fVar10 * fVar26 + fVar16 * fVar27 + fVar17 * fVar28 + 0.0);
    *(ulong *)(param_1 + 0x90) =
         CONCAT44(fVar9 * fVar26 + fVar14 * fVar27 + fVar15 * fVar28 + 0.0,
                  fVar30 * fVar26 + fVar12 * fVar27 + fVar13 * fVar28 + 0.0);
  }
  uVar8 = 1;
joined_r0x0037d614:
  if (((bVar4 >> 1 & 1) == 0) || (bVar4 = *(byte *)(param_1 + 0x59), bVar4 == 0xff)) {
    for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != param_1 + 0x20; lVar6 = *(long *)(lVar6 + 8)) {
      (**(code **)(*(long *)(lVar6 + -8) + 0x98))((long *)(lVar6 + -8),param_2,param_3,uVar8);
    }
  }
  else {
    fVar30 = *(float *)(param_3 + 0x18);
    uVar5 = *(undefined1 *)(param_3 + 0x1f);
    *(undefined1 *)(param_3 + 0x1f) = 1;
    *(float *)(param_3 + 0x18) = fVar30 * (float)bVar4 * 0.003921569;
    for (lVar6 = *(long *)(param_1 + 0x28); lVar6 != param_1 + 0x20; lVar6 = *(long *)(lVar6 + 8)) {
      (**(code **)(*(long *)(lVar6 + -8) + 0x98))((long *)(lVar6 + -8),param_2,param_3,uVar8);
    }
    *(float *)(param_3 + 0x18) = fVar30;
    *(undefined1 *)(param_3 + 0x1f) = uVar5;
  }
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    FUN_003805a0(*(undefined8 *)
                  (lVar6 + (ulong)(*(int *)(lVar6 + (ulong)uVar3 + 4 +
                                                    (ulong)*(byte *)(lVar6 + (ulong)(*(int *)(lVar6 
                                                  + (ulong)uVar3 + 4) + uVar3) + 0xc) * 4) + uVar3)
                  + 8),param_2);
  }
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x80;
  *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) | 0x10;
  return;
}

