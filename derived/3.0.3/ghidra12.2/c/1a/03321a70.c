
undefined8 FUN_03321a70(long *param_1,long param_2,uint param_3,ulong param_4)

{
  ushort *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ushort *puVar11;
  uint *puVar12;
  ulong uVar13;
  float *pfVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  undefined8 local_48;
  
  if (*(char *)(DAT_05355a60 + 0x499) != '\0') {
    return 0;
  }
  lVar16 = *(long *)(DAT_05355a60 + 0x20);
  if ((*(uint *)(lVar16 + 0x106c) >> 8 & 1) != 0) {
    lVar15 = 0;
    bVar3 = false;
    do {
      puVar1 = (ushort *)((long)&DAT_0418d22a + lVar15);
      puVar11 = (ushort *)((long)&DAT_0418d22c + lVar15);
      lVar15 = lVar15 + 4;
      if ((uint)*puVar1 == (param_3 & 0xffff) || (uint)*puVar11 == (param_3 & 0xffff)) {
        bVar3 = true;
      }
    } while (lVar15 != 0x52c);
    if (!bVar3) {
      return 0;
    }
  }
  if ((*(uint *)(lVar16 + 0x106c) >> 7 & 1) != 0) {
    uVar5 = (param_3 & 0xffff) - 0x30;
    if (0x29 < uVar5) {
      return 0;
    }
    if ((1L << ((ulong)uVar5 & 0x3f) & 0x3ff7dfe03ffU) == 0) {
      return 0;
    }
  }
  (**(code **)(*(long *)(lVar16 + 0x1570) + 0x18))(lVar16 + 0x1570);
  puVar11 = *(ushort **)(lVar16 + 0x1578);
  if (*puVar11 != 0) {
    if ((uint)*puVar11 == (param_3 & 0xffff)) {
      return 0;
    }
    uVar9 = 0;
    do {
      uVar13 = uVar9;
      if ((uVar13 == 0x80000) || (puVar11[uVar13 + 1] == 0)) goto LAB_03321bbc;
      if ((uint)puVar11[uVar13 + 1] == (param_3 & 0xffff)) goto LAB_03321bb4;
      if (puVar11[uVar13 + 2] == 0) goto LAB_03321bbc;
      uVar9 = uVar13 + 2;
    } while ((uint)puVar11[uVar13 + 2] != (param_3 & 0xffff));
    uVar13 = uVar13 + 1;
LAB_03321bb4:
    if (uVar13 < 0x80000) {
      return 0;
    }
  }
LAB_03321bbc:
  if (param_1[100] != 0) {
    *(short *)(param_1[100] + 0x516) = (short)param_3;
    lVar16 = 0x100;
    if ((param_4 & 1) == 0) {
      lVar16 = 0x108;
    }
    (**(code **)(*param_1 + lVar16))(param_1,param_3);
    lVar16 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
    FUN_0037d078(&local_58,lVar16);
    fVar23 = (float)((ulong)*(undefined8 *)(lVar16 + 0x78) >> 0x20);
    auVar7 = *(undefined1 (*) [12])(lVar16 + 0x70);
    fVar24 = (float)((ulong)*(undefined8 *)(lVar16 + 0x88) >> 0x20);
    auVar6 = *(undefined1 (*) [12])(lVar16 + 0x80);
    fVar17 = auVar6._0_4_;
    fVar19 = auVar6._4_4_;
    fVar21 = SUB124(*(undefined1 (*) [12])(lVar16 + 0x80),8);
    fVar18 = auVar7._0_4_;
    fVar20 = auVar7._4_4_;
    fVar22 = SUB124(*(undefined1 (*) [12])(lVar16 + 0x70),8);
    local_68 = CONCAT44(fVar24 + fVar17 * local_58 + fVar19 * local_4c + fVar21 * 0.0,
                        fVar23 + fVar18 * local_58 + fVar20 * local_4c + fVar22 * 0.0);
    uStack_60 = CONCAT44(fVar24 + fVar17 * fStack_50 + fVar19 * fStack_54 + fVar21 * 0.0,
                         fVar23 + fVar18 * fStack_50 + fVar20 * fStack_54 + fVar22 * 0.0);
    FUN_03284940(param_1[100],&local_68);
    if (((param_4 & 1) != 0) || (*(int *)(param_1[100] + 0x740) != 1)) {
      FUN_032836c0();
      puVar8 = PTR_DAT_04bc9358;
      if (param_1[100] != 0) {
        local_58 = 0.0;
        fStack_54 = 0.0;
        fStack_50 = 0.0;
        local_48 = *(undefined8 *)(*(long *)(*(long *)(param_1[100] + 0x390) + 0xf0) + 0x18);
        FUN_032d3460(&local_48,&local_58);
        fVar17 = local_58;
        puVar12 = *(uint **)puVar8;
        local_58 = 5.60519e-45;
        iVar4 = 4;
        if (*puVar12 < 5) {
          iVar4 = 0;
        }
        pfVar14 = (float *)(*(long *)(puVar12 + 2) + (long)iVar4 * 0xc);
        *pfVar14 = fVar17;
        pfVar14[1] = fStack_54;
        iVar4 = 4;
        if (*puVar12 < 5) {
          iVar4 = 0;
        }
        *(undefined1 *)(*(long *)(puVar12 + 2) + (long)iVar4 * 0xc + 8) = 1;
      }
      lVar15 = *(long *)PTR_DAT_04bb4fb0;
      uVar10 = FUN_03368ef0(*(undefined8 *)puVar8,4);
      lVar16 = *(long *)(lVar15 + 8);
      if (lVar16 == 0) {
        return 1;
      }
      lVar2 = 0;
      if (*(char *)(lVar16 + 0x38) != '\0') {
        lVar2 = lVar16 + 8;
      }
      FUN_03366350(lVar15,lVar2,s_AppearBalloon_04b20a33,1,uVar10,0);
      return 1;
    }
  }
  return 0;
}

