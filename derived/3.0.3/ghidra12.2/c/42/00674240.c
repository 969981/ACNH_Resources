
void FUN_00674240(float param_1,float param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,int param_7,long param_8,long param_9,undefined8 *param_10,
                 undefined8 *param_11,undefined8 param_12,undefined8 param_13,long param_14,
                 long param_15,long param_16,long param_17,byte param_18)

{
  int iVar1;
  long lVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  unkbyte9 Var8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  byte bVar21;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined8 uVar22;
  byte bVar29;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  undefined8 uVar31;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined8 local_98;
  long local_90 [4];
  
  lVar9 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar9 != 0) {
    FUN_00443a00(lVar9,"TtQuantizedSampleFullPose");
  }
  fVar57 = 1.0 - param_2;
  iVar10 = (int)param_6;
  iVar12 = 0;
  iVar6 = iVar10 * 0xc;
  local_90[0] = param_4;
  local_90[1] = param_5;
  local_90[2] = lVar9;
  do {
    lVar13 = param_8;
    lVar19 = param_9;
    if (iVar12 == 0) {
      if (param_2 < param_1) {
        if (fVar57 <= param_1) goto LAB_00674584;
        lVar13 = param_14;
        lVar19 = param_16;
      }
      FUN_00675c50(lVar13,lVar19,param_12,param_6,param_13,param_7);
      lVar20 = 0;
LAB_006743a4:
      lVar2 = (ulong)*(ushort *)(param_3 + 0x10) + (ulong)*(ushort *)(param_3 + 0xc);
      uVar11 = (ulong)*(ushort *)(param_3 + 0x1e);
      uVar3 = *(ushort *)(param_3 + 0x22);
      if ((int)lVar2 != 0) {
        uVar5 = *(ushort *)(param_3 + uVar11);
        uVar16 = (ulong)uVar5;
        lVar18 = param_3 + (ulong)uVar3;
        if (((int)(lVar2 + -1) < 1) || (iVar6 <= (int)(uint)uVar5)) {
          if ((int)(uint)uVar5 < iVar6) {
            lVar17 = 0;
            goto LAB_00674420;
          }
        }
        else {
          lVar17 = 0;
          do {
            *(undefined4 *)(lVar13 + uVar16 * 4) = *(undefined4 *)(lVar18 + lVar17 * 4);
            uVar5 = *(ushort *)(param_3 + 2 + uVar11 + lVar17 * 2);
            uVar16 = (ulong)uVar5;
            lVar17 = lVar17 + 1;
            if (lVar2 + -1 <= lVar17) break;
          } while ((int)(uint)uVar5 < iVar6);
          if ((int)(uint)uVar5 < iVar6) {
LAB_00674420:
            *(undefined4 *)(lVar13 + uVar16 * 4) = *(undefined4 *)(lVar18 + lVar17 * 4);
          }
        }
      }
      lVar18 = uVar11 + lVar2 * 2;
      lVar2 = (ulong)uVar3 + lVar2 * 4;
      FUN_00673db0(lVar13,iVar10 * 3,param_3 + lVar18,param_3 + lVar2,*(undefined2 *)(param_3 + 0xe)
                  );
      if ((ulong)*(ushort *)(param_3 + 0x12) != 0) {
        lVar18 = lVar18 + (ulong)*(ushort *)(param_3 + 0xe) * 2;
        uVar3 = *(ushort *)(param_3 + lVar18);
        uVar11 = (ulong)uVar3;
        lVar17 = (ulong)*(ushort *)(param_3 + 0x12) - 1;
        lVar2 = param_3 + ((ulong)((int)lVar2 + (uint)*(ushort *)(param_3 + 0xe) * 6 + 0xf) &
                          0x3ffff0);
        if (((int)lVar17 < 1) || (param_7 <= (int)(uint)uVar3)) {
          if ((int)(uint)uVar3 < param_7) {
            lVar14 = 0;
            goto LAB_006744cc;
          }
        }
        else {
          lVar14 = 0;
          do {
            *(undefined4 *)(lVar19 + uVar11 * 4) = *(undefined4 *)(lVar2 + lVar14 * 4);
            uVar3 = *(ushort *)(param_3 + 2 + lVar18 + lVar14 * 2);
            uVar11 = (ulong)uVar3;
            lVar14 = lVar14 + 1;
            if (lVar17 <= lVar14) break;
          } while ((int)(uint)uVar3 < param_7);
          if ((int)(uint)uVar3 < param_7) {
LAB_006744cc:
            *(undefined4 *)(lVar19 + uVar11 * 4) = *(undefined4 *)(lVar2 + lVar14 * 4);
          }
        }
      }
      lVar2 = (ulong)*(ushort *)(param_3 + 0x18) + (ulong)*(ushort *)(param_3 + 0x14);
      uVar3 = *(ushort *)(param_3 + 0x20);
      uVar5 = *(ushort *)(param_3 + 0x24);
      uVar4 = *(ushort *)(param_3 + 0x26);
      lVar17 = local_90[lVar20];
      FUN_0067ccd0(lVar13,iVar6,param_3 + (ulong)uVar3,param_3 + (ulong)uVar5,param_3 + (ulong)uVar4
                   ,lVar17,lVar2);
      lVar18 = lVar2 * 2;
      lVar20 = lVar18 + (ulong)uVar3;
      FUN_00673db0(lVar13,iVar10 * 3,param_3 + lVar20,lVar17 + lVar18,
                   *(undefined2 *)(param_3 + 0x16));
      iVar1 = (int)lVar2 * 4 + 0xf;
      FUN_0067ccd0(lVar19,param_7,param_3 + lVar20 + (ulong)*(ushort *)(param_3 + 0x16) * 2,
                   param_3 + ((ulong)(iVar1 + (uint)uVar5) & 0x1ffff0),
                   param_3 + ((ulong)(iVar1 + (uint)uVar4) & 0x1ffff0),
                   lVar17 + lVar18 + (ulong)*(ushort *)(param_3 + 0x16) * 6,
                   *(undefined2 *)(param_3 + 0x1a));
    }
    else if (param_2 < param_1) {
      if (param_1 < fVar57) {
        lVar13 = param_15;
        lVar19 = param_17;
      }
      FUN_00675c50(lVar13,lVar19,param_12,param_6,param_13,param_7);
      lVar20 = 1;
      goto LAB_006743a4;
    }
LAB_00674584:
    iVar12 = iVar12 + 1;
  } while (iVar12 != 2);
  if ((param_2 < param_1) && (param_1 < fVar57)) {
    local_98 = CONCAT44(param_1,param_1);
    FUN_00674f70(param_8,param_14,param_15,&local_98,param_6,0,param_18 & 1);
    FUN_00674e50(param_9,param_16,param_17,&local_98,param_7,0);
  }
  Var8 = *(unkbyte9 *)(param_3 + 0x28);
  uVar31 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x68);
  uVar22 = *(undefined8 *)(PTR_DAT_04bd4c80 + 0x60);
  iVar12 = -(uint)((char)Var8 == '\0');
  iVar6 = -(uint)((char)((unkuint9)Var8 >> 8) == '\0');
  iVar1 = -(uint)((char)((unkuint9)Var8 >> 0x10) == '\0');
  iVar7 = -(uint)((char)((unkuint9)Var8 >> 0x18) == '\0');
  bVar21 = (byte)uVar22;
  bVar39 = bVar21 & ~(byte)iVar12;
  bVar23 = (byte)((ulong)uVar22 >> 8);
  bVar40 = bVar23 & ~(byte)((uint)iVar12 >> 8);
  bVar24 = (byte)((ulong)uVar22 >> 0x10);
  bVar41 = bVar24 & ~(byte)((uint)iVar12 >> 0x10);
  bVar25 = (byte)((ulong)uVar22 >> 0x18);
  bVar42 = bVar25 & ~(byte)((uint)iVar12 >> 0x18);
  bVar26 = (byte)((ulong)uVar22 >> 0x20);
  bVar43 = bVar26 & ~(byte)iVar6;
  bVar27 = (byte)((ulong)uVar22 >> 0x28);
  bVar44 = bVar27 & ~(byte)((uint)iVar6 >> 8);
  bVar28 = (byte)((ulong)uVar22 >> 0x30);
  bVar45 = bVar28 & ~(byte)((uint)iVar6 >> 0x10);
  bVar29 = (byte)((ulong)uVar22 >> 0x38);
  bVar46 = bVar29 & ~(byte)((uint)iVar6 >> 0x18);
  bVar30 = (byte)uVar31;
  bVar47 = bVar30 & ~(byte)iVar1;
  bVar32 = (byte)((ulong)uVar31 >> 8);
  bVar48 = bVar32 & ~(byte)((uint)iVar1 >> 8);
  bVar33 = (byte)((ulong)uVar31 >> 0x10);
  bVar49 = bVar33 & ~(byte)((uint)iVar1 >> 0x10);
  bVar34 = (byte)((ulong)uVar31 >> 0x18);
  bVar50 = bVar34 & ~(byte)((uint)iVar1 >> 0x18);
  bVar35 = (byte)((ulong)uVar31 >> 0x20);
  bVar51 = bVar35 & ~(byte)iVar7;
  bVar36 = (byte)((ulong)uVar31 >> 0x28);
  bVar52 = bVar36 & ~(byte)((uint)iVar7 >> 8);
  bVar37 = (byte)((ulong)uVar31 >> 0x30);
  bVar53 = bVar37 & ~(byte)((uint)iVar7 >> 0x10);
  bVar38 = (byte)((ulong)uVar31 >> 0x38);
  bVar54 = bVar38 & ~(byte)((uint)iVar7 >> 0x18);
  if (iVar10 + -4 < 1) {
    uVar11 = 0;
    if (0 < iVar10) goto LAB_0067467c;
  }
  else {
    uVar11 = 0;
    puVar15 = param_10;
    do {
      puVar15[1] = CONCAT17(bVar54,CONCAT16(bVar53,CONCAT15(bVar52,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47)))))));
      *puVar15 = CONCAT17(bVar46,CONCAT16(bVar45,CONCAT15(bVar44,CONCAT14(bVar43,CONCAT13(bVar42,
                                                  CONCAT12(bVar41,CONCAT11(bVar40,bVar39)))))));
      Var8 = *(unkbyte9 *)(param_3 + 0x2c + uVar11);
      uVar11 = uVar11 + 4;
      iVar12 = -(uint)((char)Var8 == '\0');
      iVar6 = -(uint)((char)((unkuint9)Var8 >> 8) == '\0');
      iVar1 = -(uint)((char)((unkuint9)Var8 >> 0x10) == '\0');
      iVar7 = -(uint)((char)((unkuint9)Var8 >> 0x18) == '\0');
      bVar39 = bVar21 & ~(byte)iVar12;
      bVar40 = bVar23 & ~(byte)((uint)iVar12 >> 8);
      bVar41 = bVar24 & ~(byte)((uint)iVar12 >> 0x10);
      bVar42 = bVar25 & ~(byte)((uint)iVar12 >> 0x18);
      bVar43 = bVar26 & ~(byte)iVar6;
      bVar44 = bVar27 & ~(byte)((uint)iVar6 >> 8);
      bVar45 = bVar28 & ~(byte)((uint)iVar6 >> 0x10);
      bVar46 = bVar29 & ~(byte)((uint)iVar6 >> 0x18);
      bVar47 = bVar30 & ~(byte)iVar1;
      bVar48 = bVar32 & ~(byte)((uint)iVar1 >> 8);
      bVar49 = bVar33 & ~(byte)((uint)iVar1 >> 0x10);
      bVar50 = bVar34 & ~(byte)((uint)iVar1 >> 0x18);
      bVar51 = bVar35 & ~(byte)iVar7;
      bVar52 = bVar36 & ~(byte)((uint)iVar7 >> 8);
      bVar53 = bVar37 & ~(byte)((uint)iVar7 >> 0x10);
      bVar54 = bVar38 & ~(byte)((uint)iVar7 >> 0x18);
      puVar15 = puVar15 + 2;
    } while ((long)uVar11 < (long)(iVar10 + -4));
    if ((int)uVar11 < iVar10) {
LAB_0067467c:
      lVar13 = 0;
      do {
        iVar12 = (int)lVar13;
        uVar55 = CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar39)));
        if (iVar12 == 2) {
          uVar55 = CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)));
        }
        uVar56 = CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)));
        if (iVar12 != 3) {
          uVar56 = uVar55;
        }
        uVar55 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
        if (iVar12 != 1) {
          uVar55 = uVar56;
        }
        *(undefined4 *)((long)param_10 + lVar13 * 4 + (uVar11 & 0xffffffff) * 4) = uVar55;
        lVar13 = lVar13 + 1;
      } while (iVar10 - (int)uVar11 != (int)lVar13);
    }
  }
  Var8 = *(unkbyte9 *)(param_3 + 0x28 + (long)iVar10);
  iVar12 = -(uint)((char)Var8 == '\0');
  iVar6 = -(uint)((char)((unkuint9)Var8 >> 8) == '\0');
  iVar1 = -(uint)((char)((unkuint9)Var8 >> 0x10) == '\0');
  iVar7 = -(uint)((char)((unkuint9)Var8 >> 0x18) == '\0');
  bVar39 = bVar21 & ~(byte)iVar12;
  bVar40 = bVar23 & ~(byte)((uint)iVar12 >> 8);
  bVar41 = bVar24 & ~(byte)((uint)iVar12 >> 0x10);
  bVar42 = bVar25 & ~(byte)((uint)iVar12 >> 0x18);
  bVar43 = bVar26 & ~(byte)iVar6;
  bVar44 = bVar27 & ~(byte)((uint)iVar6 >> 8);
  bVar45 = bVar28 & ~(byte)((uint)iVar6 >> 0x10);
  bVar46 = bVar29 & ~(byte)((uint)iVar6 >> 0x18);
  bVar47 = bVar30 & ~(byte)iVar1;
  bVar48 = bVar32 & ~(byte)((uint)iVar1 >> 8);
  bVar49 = bVar33 & ~(byte)((uint)iVar1 >> 0x10);
  bVar50 = bVar34 & ~(byte)((uint)iVar1 >> 0x18);
  bVar51 = bVar35 & ~(byte)iVar7;
  bVar52 = bVar36 & ~(byte)((uint)iVar7 >> 8);
  bVar53 = bVar37 & ~(byte)((uint)iVar7 >> 0x10);
  bVar54 = bVar38 & ~(byte)((uint)iVar7 >> 0x18);
  if (param_7 + -4 < 1) {
    uVar11 = 0;
    if (param_7 < 1) goto LAB_00674780;
  }
  else {
    uVar11 = 0;
    puVar15 = param_11;
    do {
      puVar15[1] = CONCAT17(bVar54,CONCAT16(bVar53,CONCAT15(bVar52,CONCAT14(bVar51,CONCAT13(bVar50,
                                                  CONCAT12(bVar49,CONCAT11(bVar48,bVar47)))))));
      *puVar15 = CONCAT17(bVar46,CONCAT16(bVar45,CONCAT15(bVar44,CONCAT14(bVar43,CONCAT13(bVar42,
                                                  CONCAT12(bVar41,CONCAT11(bVar40,bVar39)))))));
      Var8 = *(unkbyte9 *)(param_3 + iVar10 + 0x2c + uVar11);
      uVar11 = uVar11 + 4;
      iVar12 = -(uint)((char)Var8 == '\0');
      iVar6 = -(uint)((char)((unkuint9)Var8 >> 8) == '\0');
      iVar1 = -(uint)((char)((unkuint9)Var8 >> 0x10) == '\0');
      iVar7 = -(uint)((char)((unkuint9)Var8 >> 0x18) == '\0');
      bVar39 = bVar21 & ~(byte)iVar12;
      bVar40 = bVar23 & ~(byte)((uint)iVar12 >> 8);
      bVar41 = bVar24 & ~(byte)((uint)iVar12 >> 0x10);
      bVar42 = bVar25 & ~(byte)((uint)iVar12 >> 0x18);
      bVar43 = bVar26 & ~(byte)iVar6;
      bVar44 = bVar27 & ~(byte)((uint)iVar6 >> 8);
      bVar45 = bVar28 & ~(byte)((uint)iVar6 >> 0x10);
      bVar46 = bVar29 & ~(byte)((uint)iVar6 >> 0x18);
      bVar47 = bVar30 & ~(byte)iVar1;
      bVar48 = bVar32 & ~(byte)((uint)iVar1 >> 8);
      bVar49 = bVar33 & ~(byte)((uint)iVar1 >> 0x10);
      bVar50 = bVar34 & ~(byte)((uint)iVar1 >> 0x18);
      bVar51 = bVar35 & ~(byte)iVar7;
      bVar52 = bVar36 & ~(byte)((uint)iVar7 >> 8);
      bVar53 = bVar37 & ~(byte)((uint)iVar7 >> 0x10);
      bVar54 = bVar38 & ~(byte)((uint)iVar7 >> 0x18);
      puVar15 = puVar15 + 2;
    } while ((long)uVar11 < (long)(param_7 + -4));
    if (param_7 <= (int)uVar11) goto LAB_00674780;
  }
  lVar13 = 0;
  do {
    iVar12 = (int)lVar13;
    uVar55 = CONCAT13(bVar42,CONCAT12(bVar41,CONCAT11(bVar40,bVar39)));
    if (iVar12 == 2) {
      uVar55 = CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47)));
    }
    uVar56 = CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)));
    if (iVar12 != 3) {
      uVar56 = uVar55;
    }
    uVar55 = CONCAT13(bVar46,CONCAT12(bVar45,CONCAT11(bVar44,bVar43)));
    if (iVar12 != 1) {
      uVar55 = uVar56;
    }
    *(undefined4 *)((long)param_11 + lVar13 * 4 + (uVar11 & 0xffffffff) * 4) = uVar55;
    lVar13 = lVar13 + 1;
  } while (param_7 - (int)uVar11 != (int)lVar13);
LAB_00674780:
  if (lVar9 != 0) {
    FUN_00443a70(lVar9,&DAT_04085310);
  }
  return;
}

