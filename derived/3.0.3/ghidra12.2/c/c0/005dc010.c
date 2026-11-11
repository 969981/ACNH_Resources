
/* WARNING: Removing unreachable block (ram,0x005dc0b4) */

void FUN_005dc010(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  uint uVar13;
  ushort uVar14;
  char *pcVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 *local_58;
  
  uVar8 = FUN_0043c4e0(DAT_04c6f410);
  uVar9 = FUN_0054e2d0(*(long *)(param_3 + 8) + 0x50,uVar8,2);
  lVar10 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar10 != 0) {
    FUN_00443a00(lVar10,"TtCollide And Solve");
  }
  if (*(char *)(param_4 + 0x269) == '\0') {
LAB_005dc3a8:
    FUN_005dbbf0(param_1,param_4,1,1,0);
    if (*(int *)(param_4 + 0x26c) != 0) {
      FUN_005dbab0(param_1,param_2,param_3,param_4,1,1,1);
    }
  }
  else {
    iVar6 = *(int *)(param_4 + 0x188);
    if (iVar6 < 1) goto LAB_005dc3a8;
    uVar12 = (long)iVar6 & 1;
    if (iVar6 == 1) {
      lVar10 = 0;
      uVar13 = 0;
LAB_005dc0f4:
      if (*(char *)(*(long *)(param_4 + 400) + lVar10 * 0xa0 + 0x9d) != '\0') {
        uVar13 = uVar13 + 1;
      }
    }
    else {
      lVar10 = 0;
      uVar13 = 0;
      pcVar15 = (char *)(*(long *)(param_4 + 400) + 0x13d);
      do {
        pcVar1 = pcVar15 + -0xa0;
        cVar3 = *pcVar15;
        pcVar15 = pcVar15 + 0x140;
        if (*pcVar1 != '\0') {
          uVar13 = uVar13 + 1;
        }
        lVar10 = lVar10 + 2;
        if (cVar3 != '\0') {
          uVar13 = uVar13 + 1;
        }
      } while ((long)iVar6 - uVar12 != lVar10);
      if (uVar12 != 0) goto LAB_005dc0f4;
    }
    if (uVar13 < 2) goto LAB_005dc3a8;
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a00(lVar10,"TtzeroCachedContacts");
    }
    uVar13 = ((*(ushort *)(*(long *)(param_4 + 0x18) + 0x1aa) + 1) -
              (uint)*(ushort *)(*(long *)(param_4 + 0x18) + 0x1a8) & 0xffff) + 0xf;
    uVar2 = uVar13 & 0x1fff0;
    if (uVar2 != 0) {
      memset(*(void **)(param_4 + 0x220),0,(ulong)uVar2);
      memset(*(void **)(param_4 + 0x228),0,(ulong)uVar2);
    }
    FUN_0043aa50(*(undefined8 *)(param_4 + 0x230),0xffffffff,uVar13 >> 2 & 0x7ffc);
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a70(lVar10,&DAT_04085310);
    }
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a00(lVar10,"TtiterateCollidables pinch-enabled");
    }
    FUN_005dbbf0(param_1,param_4,1,0,0);
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a70(lVar10,&DAT_04085310);
    }
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a00(lVar10,"Ttsolve contacts");
    }
    lVar10 = *(long *)(param_4 + 0x18);
    uVar4 = *(ushort *)(lVar10 + 0x1a8);
    uVar5 = *(ushort *)(lVar10 + 0x1aa);
    if (uVar4 <= uVar5) {
      fVar20 = (float)param_1;
      uVar14 = uVar4;
      do {
        if (*(char *)(*(long *)(param_4 + 0x220) + (ulong)(ushort)(uVar14 - uVar4)) != '\0') {
          lVar17 = (ulong)uVar14 * 0x10;
          lVar19 = *(long *)(lVar10 + 0x40) + lVar17;
          puVar16 = (undefined8 *)
                    (*(long *)(param_4 + 0x210) + (ulong)(ushort)(uVar14 - uVar4) * 0x30);
          lVar18 = *(long *)(param_4 + 0x30);
          puVar7 = (undefined8 *)(lVar18 + lVar17);
          uVar30 = puVar7[1];
          uVar27 = *puVar7;
          fVar23 = *(float *)(lVar19 + 8);
          puVar7 = (undefined8 *)(*(long *)(param_4 + 0x20) + lVar17);
          uVar26 = puVar7[1];
          uVar8 = *puVar7;
          fVar22 = (float)uVar8;
          fVar24 = (float)((ulong)uVar8 >> 0x20);
          fVar25 = (float)uVar26;
          fVar39 = (float)puVar16[2];
          fVar32 = (fVar22 - (float)*puVar16) * fVar39;
          fVar40 = (float)((ulong)puVar16[2] >> 0x20);
          fVar35 = (fVar24 - (float)((ulong)*puVar16 >> 0x20)) * fVar40;
          fVar41 = (float)puVar16[3];
          fVar37 = (fVar25 - (float)puVar16[1]) * fVar41;
          fVar21 = fVar23 - (fVar32 + fVar35 + fVar37);
          fVar23 = fVar23 - (fVar32 + fVar35 + fVar37);
          uVar8 = puVar16[5];
          fVar42 = (float)((ulong)puVar16[3] >> 0x20);
          fVar22 = fVar22 + fVar39 * fVar21;
          fVar24 = fVar24 + fVar40 * fVar23;
          fVar25 = fVar25 + fVar41 * fVar21;
          fVar23 = (float)((ulong)uVar26 >> 0x20) + fVar42 * fVar23;
          fVar37 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          fVar29 = (float)uVar30;
          fVar31 = (float)((ulong)uVar30 >> 0x20);
          fVar21 = (fVar22 - fVar37) - fVar20 * (float)puVar16[4];
          fVar32 = (fVar24 - fVar28) - fVar20 * (float)((ulong)puVar16[4] >> 0x20);
          fVar35 = (fVar25 - fVar29) - fVar20 * (float)uVar8;
          fVar33 = fVar39 * fVar21;
          fVar36 = fVar40 * fVar32;
          fVar38 = fVar41 * fVar35;
          fVar34 = fVar33 + fVar36 + fVar38;
          fVar38 = fVar33 + fVar36 + fVar38;
          fVar33 = *(float *)(lVar19 + 0xc);
          puVar7 = (undefined8 *)(*(long *)(param_4 + 0x20) + lVar17);
          puVar7[1] = CONCAT44(fVar23,fVar25);
          *puVar7 = CONCAT44(fVar24,fVar22);
          puVar7 = (undefined8 *)(lVar18 + lVar17);
          puVar7[1] = CONCAT44(fVar31 + (((fVar23 - fVar31) - fVar20 * (float)((ulong)uVar8 >> 0x20)
                                         ) - fVar42 * fVar38) * fVar33,
                               fVar29 + (fVar35 - fVar41 * fVar34) * fVar33);
          *puVar7 = CONCAT44(fVar28 + (fVar32 - fVar40 * fVar38) * fVar33,
                             fVar37 + (fVar21 - fVar39 * fVar34) * fVar33);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 <= uVar5);
    }
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar10 != 0) {
      FUN_00443a70(lVar10,&DAT_04085310);
    }
    if (*(int *)(param_4 + 0x26c) != 0) {
      FUN_005dbab0(param_1,param_2,param_3,param_4,1,0,1);
    }
    FUN_005dbbf0(param_1,param_4,0,1,0);
    if (*(int *)(param_4 + 0x26c) != 0) {
      FUN_005dbab0(param_1,param_2,param_3,param_4,0,1,0);
    }
    lVar10 = *(long *)(param_4 + 0x18);
    if (0 < *(int *)(lVar10 + 0xa0)) {
      lVar19 = 0;
      do {
        plVar11 = *(long **)(*(long *)(lVar10 + 0x98) + lVar19 * 8);
        (**(code **)(*plVar11 + 0x38))(0x3f800000,plVar11,param_4,0);
        lVar10 = *(long *)(param_4 + 0x18);
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)(lVar10 + 0xa0));
    }
  }
  if ((uVar9 & 1) != 0) {
    uVar9 = FUN_004d1aa0(param_4 + 0x80);
    if ((uVar9 & 1) == 0) {
      FUN_0053b5d0(param_4);
    }
    lVar10 = FUN_0043c4e0(DAT_04c6f410);
    local_58 = (undefined8 *)0x0;
    if ((lVar10 != 0) &&
       (FUN_00443d50(lVar10,&DAT_0405b9b0,&local_58,&DAT_04c143e8,0x18,4),
       local_58 != (undefined8 *)0x0)) {
      uVar8 = *(undefined8 *)(param_4 + 0x88);
      *local_58 = *(undefined8 *)(param_4 + 0x80);
      *(int *)(local_58 + 1) = (int)uVar8;
      uVar8 = *(undefined8 *)(param_4 + 0x98);
      *(undefined8 *)((long)local_58 + 0xc) = *(undefined8 *)(param_4 + 0x90);
      *(int *)((long)local_58 + 0x14) = (int)uVar8;
      lVar10 = FUN_0043c4e0(DAT_04c6f410);
      goto joined_r0x005dc494;
    }
  }
  lVar10 = FUN_0043c4e0(DAT_04c6f410);
joined_r0x005dc494:
  if (lVar10 != 0) {
    FUN_00443a70(lVar10,&DAT_04085310);
  }
  return;
}

