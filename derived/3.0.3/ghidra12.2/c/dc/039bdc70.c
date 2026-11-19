
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_039bdc70(long param_1,uint param_2,uint *param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined *puVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
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
  float fVar43;
  float fVar44;
  float fVar45;
  long local_68;
  
  lVar15 = (long)(int)*param_3 * 0x20;
  if ((char)param_3[2] != '\0') {
    lVar15 = (long)(int)*param_3 * 0x20 + 0x20;
  }
  plVar14 = param_4;
  if (param_4 == (long *)0x0) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar20 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
  }
  lVar15 = (**(code **)(*plVar14 + 0x30))(plVar14,lVar15 * (int)param_2 + 0x78,8);
  if (lVar15 != 0) {
    iVar19 = -1;
    plVar14 = (long *)(lVar15 + 7U & 0xfffffffffffffff8);
    plVar14[2] = 0;
    plVar14[3] = 0;
    puVar17 = PTR_DAT_04bd11b8;
    plVar14[4] = 0;
    plVar14[5] = 0;
    puVar17 = puVar17 + 0x10;
    plVar14[6] = 0;
    *(undefined4 *)(plVar14 + 7) = 0x10001;
    *(undefined1 *)((long)plVar14 + 0x3c) = 0;
    plVar14[0xe] = 0;
    *plVar14 = (long)puVar17;
    plVar14[1] = 0;
    uVar8 = _UNK_04102888;
    uVar7 = _DAT_04102880;
    uVar6 = _UNK_041023d8;
    uVar5 = _DAT_041023d0;
    uVar4 = _UNK_04102208;
    uVar3 = _DAT_04102200;
    if ((int)param_2 < 1) {
      iVar9 = 0;
    }
    else {
      local_68 = (long)plVar14 + (0x78 - lVar15);
      uVar21 = 0;
      puVar17 = PTR_DAT_04bd17c0 + 0x10;
      do {
        *(short *)(param_1 + uVar21 * 0x138 + 0x120) = (short)uVar21;
        if (uVar21 == 0) {
          lVar13 = *(long *)PTR_DAT_04bbd580;
          plVar14[1] = *(long *)(lVar13 + 0x88);
          *(undefined4 *)(plVar14 + 6) = *(undefined4 *)(lVar13 + 0xb0);
          *(byte *)((long)plVar14 + 0x3c) = *(byte *)((long)plVar14 + 0x3c) & 0xfe;
          FUN_0390d990(plVar14,param_4,1,param_3[1] * param_2);
        }
        lVar13 = param_1 + uVar21 * 0x138;
        uVar12 = param_3[1];
        *(long **)(lVar13 + 0x10) = plVar14;
        *(byte *)(lVar13 + 0x123) = *(byte *)(lVar13 + 0x123) & 0xf3 | (char)uVar12 << 2;
        uVar12 = *param_3;
        if ((int)uVar12 < 1) {
          uVar16 = 0;
        }
        else {
          uVar16 = lVar15 + local_68 + 7U & 0xfffffffffffffff8;
          if (uVar12 == 1) {
            lVar20 = 0;
          }
          else {
            lVar13 = 0;
            lVar20 = 0;
            do {
              puVar1 = (undefined4 *)(uVar16 + lVar13);
              lVar13 = lVar13 + 0x40;
              *puVar1 = 0xffffffff;
              *(undefined8 *)(puVar1 + 5) = 0x3f800000;
              *(undefined2 *)(puVar1 + 4) = 0;
              *(undefined2 *)(puVar1 + 0xc) = 0;
              lVar20 = lVar20 + 2;
              *(undefined4 **)(puVar1 + 2) = puVar1 + 4;
              puVar1[8] = 0xffffffff;
              *(undefined8 *)(puVar1 + 0xd) = 0x3f800000;
              *(undefined4 **)(puVar1 + 10) = puVar1 + 0xc;
            } while (((ulong)uVar12 & 0xfffffffe) * 0x20 != lVar13);
          }
          if ((uVar12 & 1) != 0) {
            puVar1 = (undefined4 *)(uVar16 + lVar20 * 0x20);
            *puVar1 = 0xffffffff;
            *(undefined8 *)(puVar1 + 5) = 0x3f800000;
            *(undefined2 *)(puVar1 + 4) = 0;
            *(undefined4 **)(puVar1 + 2) = puVar1 + 4;
          }
          local_68 = (uVar16 - lVar15) + (ulong)uVar12 * 0x20;
        }
        *(ulong *)(param_1 + uVar21 * 0x138 + 8) = uVar16;
        if ((char)param_3[2] != '\0') {
          plVar18 = (long *)(lVar15 + local_68 + 7U & 0xfffffffffffffff8);
          plVar18[2] = 0;
          local_68 = (long)plVar18 + (local_68 - (lVar15 + local_68)) + 0x20;
          *plVar18 = (long)puVar17;
          plVar18[1] = 0;
          *(undefined2 *)(plVar18 + 3) = 0xff06;
          *(long **)(param_1 + uVar21 * 0x138 + 0xa8) = plVar18;
        }
        lVar13 = param_1 + uVar21 * 0x138;
        FUN_039beb38(lVar13 + 0x20,param_4);
        *(undefined2 *)(lVar13 + 0x2a) = 0;
        uVar12 = param_3[1];
        if (0 < (int)uVar12) {
          iVar19 = 0;
          do {
            lVar20 = plVar14[2];
            lVar13 = plVar14[6];
            iVar9 = (**(code **)(*plVar14 + 0x20))(plVar14);
            iVar10 = (**(code **)(*plVar14 + 0x20))(plVar14);
            FUN_03ad38a0(param_1 + uVar21 * 0x138 + 0x128,
                         lVar20 + (ulong)(((int)lVar13 + iVar9) - 1U & -iVar10) *
                                  (long)(int)(iVar19 + (int)uVar21 * uVar12),0,uVar21 & 0xffffffff);
            uVar12 = param_3[1];
            iVar19 = iVar19 + 1;
          } while (iVar19 < (int)uVar12);
        }
        lVar13 = param_1 + uVar21 * 0x138;
        uVar21 = uVar21 + 1;
        fVar26 = *(float *)(lVar13 + 0x114);
        fVar22 = *(float *)(lVar13 + 0x110);
        fVar27 = *(float *)(lVar13 + 0x118);
        *(float *)(lVar13 + 0xec) = *(float *)(lVar13 + 0xbc);
        *(float *)(lVar13 + 0xfc) = *(float *)(lVar13 + 0xcc);
        *(float *)(lVar13 + 0x10c) = *(float *)(lVar13 + 0xdc);
        fVar25 = *(float *)(lVar13 + 0xb4) * fVar26;
        fVar24 = *(float *)(lVar13 + 0xb0) * fVar22;
        fVar29 = *(float *)(lVar13 + 0xb8) * fVar27;
        fVar30 = fVar22 * *(float *)(lVar13 + 0xc0);
        fVar31 = fVar26 * *(float *)(lVar13 + 0xc4);
        fVar32 = fVar27 * *(float *)(lVar13 + 200);
        fVar33 = fVar22 * *(float *)(lVar13 + 0xd0);
        fVar34 = fVar26 * *(float *)(lVar13 + 0xd4);
        fVar35 = fVar27 * *(float *)(lVar13 + 0xd8);
        *(byte *)(lVar13 + 0x122) = *(byte *)(lVar13 + 0x122) & 0xfd | 0x10;
        *(float *)(lVar13 + 0xe4) = fVar25;
        fVar23 = fVar22;
        if (fVar22 <= fVar27) {
          fVar23 = fVar27;
        }
        *(float *)(lVar13 + 0xe0) = fVar24;
        *(float *)(lVar13 + 0xe8) = fVar29;
        *(float *)(lVar13 + 0xf0) = fVar30;
        *(float *)(lVar13 + 0xf4) = fVar31;
        *(float *)(lVar13 + 0xf8) = fVar32;
        *(float *)(lVar13 + 0x100) = fVar33;
        *(float *)(lVar13 + 0x104) = fVar34;
        *(float *)(lVar13 + 0x108) = fVar35;
        fVar28 = fVar26;
        if (fVar26 <= fVar27) {
          fVar28 = fVar27;
        }
        if (fVar22 <= fVar26) {
          fVar23 = fVar28;
        }
        fVar22 = (float)*(undefined8 *)(lVar13 + 0xe0);
        fVar36 = (float)uVar3;
        fVar37 = (float)((ulong)uVar3 >> 0x20);
        fVar38 = (float)uVar4;
        fVar40 = (float)((ulong)uVar4 >> 0x20);
        *(float *)(lVar13 + 0xa4) = fVar23;
        fVar26 = (float)*(undefined8 *)(lVar13 + 0xf0);
        fVar23 = (float)((ulong)*(undefined8 *)(lVar13 + 0xe0) >> 0x20);
        fVar42 = (float)uVar7;
        fVar43 = (float)((ulong)uVar7 >> 0x20);
        fVar44 = (float)uVar8;
        fVar45 = (float)((ulong)uVar8 >> 0x20);
        fVar27 = (float)((ulong)*(undefined8 *)(lVar13 + 0xf0) >> 0x20);
        *(float *)(lVar13 + 0x98) =
             *(float *)(lVar13 + 0xbc) + fVar25 * 0.0 + fVar24 * 0.0 + fVar29 * 0.0;
        fVar29 = (float)*(undefined8 *)(lVar13 + 0x100);
        fVar28 = (float)((ulong)*(undefined8 *)(lVar13 + 0x100) >> 0x20);
        *(float *)(lVar13 + 0x9c) =
             *(float *)(lVar13 + 0xcc) + fVar31 * 0.0 + fVar30 * 0.0 + fVar32 * 0.0;
        fVar24 = (float)*(undefined8 *)(lVar13 + 0xe8);
        fVar31 = (float)uVar5;
        fVar32 = (float)((ulong)uVar5 >> 0x20);
        fVar39 = (float)uVar6;
        fVar41 = (float)((ulong)uVar6 >> 0x20);
        fVar25 = (float)*(undefined8 *)(lVar13 + 0xf8);
        fVar30 = (float)*(undefined8 *)(lVar13 + 0x108);
        *(float *)(lVar13 + 0xa0) =
             *(float *)(lVar13 + 0xdc) + fVar34 * 0.0 + fVar33 * 0.0 + fVar35 * 0.0;
        *(ulong *)(lVar13 + 0xe8) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0xe8) >> 0x20) +
                      fVar40 * fVar22 + fVar45 * fVar23 + fVar41 * fVar24,
                      fVar38 * fVar22 + fVar44 * fVar23 + fVar39 * fVar24 + 0.0);
        *(ulong *)(lVar13 + 0xe0) =
             CONCAT44(fVar37 * fVar22 + fVar43 * fVar23 + fVar32 * fVar24 + 0.0,
                      fVar36 * fVar22 + fVar42 * fVar23 + fVar31 * fVar24 + 0.0);
        *(ulong *)(lVar13 + 0xf8) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0xf8) >> 0x20) +
                      fVar40 * fVar26 + fVar45 * fVar27 + fVar41 * fVar25,
                      fVar38 * fVar26 + fVar44 * fVar27 + fVar39 * fVar25 + 0.0);
        *(ulong *)(lVar13 + 0xf0) =
             CONCAT44(fVar37 * fVar26 + fVar43 * fVar27 + fVar32 * fVar25 + 0.0,
                      fVar36 * fVar26 + fVar42 * fVar27 + fVar31 * fVar25 + 0.0);
        *(ulong *)(lVar13 + 0x108) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x108) >> 0x20) +
                      fVar40 * fVar29 + fVar45 * fVar28 + fVar41 * fVar30,
                      fVar38 * fVar29 + fVar44 * fVar28 + fVar39 * fVar30 + 0.0);
        *(ulong *)(lVar13 + 0x100) =
             CONCAT44(fVar37 * fVar29 + fVar43 * fVar28 + fVar32 * fVar30 + 0.0,
                      fVar36 * fVar29 + fVar42 * fVar28 + fVar31 * fVar30 + 0.0);
      } while (uVar21 != param_2);
      iVar9 = (uint)*(ushort *)((long)plVar14 + 0x3a) * (uint)*(byte *)((long)plVar14 + 0x39);
      puVar17 = (undefined *)*plVar14;
      iVar19 = (int)plVar14[6] + -1;
    }
    iVar10 = (**(code **)(puVar17 + 0x20))(plVar14);
    iVar11 = (**(code **)(*plVar14 + 0x20))(plVar14);
    lVar13 = plVar14[4];
    if (lVar13 != 0) {
      lVar20 = plVar14[6];
      lVar2 = plVar14[3];
      uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar13);
      if ((uVar12 >> 2 & 1) != 0) {
        (**(code **)PTR_DAT_04bcf350)
                  (lVar13,(int)lVar2 + iVar9 * (iVar19 + iVar10 & -iVar11),(int)lVar20);
      }
    }
  }
  return lVar15 != 0;
}

