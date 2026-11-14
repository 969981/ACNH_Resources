
void FUN_0156ab80(long param_1,long param_2,undefined4 *param_3,uint param_4,byte *param_5,
                 uint param_6,long param_7,byte param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  int iVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  ulong uVar16;
  float *pfVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined4 *puVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  puVar1 = (uint *)(param_1 + 0x558);
  do {
    uVar13 = *puVar1;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar10) {
      *puVar1 = uVar13 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar21 = *(long *)(param_1 + 0x518);
  plVar27 = (long *)(param_2 + 0x20) + (ulong)param_6 * 3;
  if (2 < param_6) {
    plVar27 = (long *)(param_2 + 0x20);
  }
  plVar2 = (long *)(param_2 + 0x68);
  if ((param_4 & 1) == 0) {
    plVar2 = plVar27;
  }
  lVar20 = (long)(int)uVar13;
  if (*(uint *)(param_1 + 0x510) <= uVar13) {
    lVar20 = 0;
  }
  if (lVar21 != 0) {
    lVar28 = *(long *)(param_1 + 0x570);
    lVar30 = param_1 + 0x560;
    piVar15 = (int *)(lVar21 + lVar20 * 0x38);
    iVar3 = *(int *)(param_1 + 0x590);
    iVar8 = *piVar15;
    iVar11 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(lVar30);
    iVar12 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(lVar30);
    lVar26 = **(long **)(param_1 + 0x568);
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar26 + 8) * 4];
    uVar29 = (ulong)bVar6;
    uVar14 = (**(code **)(*(long *)(param_1 + 0x560) + 0x18))(lVar30);
    if (bVar6 != 0) {
      uVar22 = (ulong)*(ushort *)(lVar26 + 4);
      lVar26 = (ulong)((iVar3 + iVar11) - 1U & -iVar12) * (long)iVar8;
      uVar16 = uVar29 & 3;
      puVar19 = param_3;
      if (bVar6 < 4) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        puVar18 = (undefined4 *)(lVar26 + uVar22 + lVar28 + 8);
        do {
          lVar23 = lVar23 + -4;
          puVar18[-2] = *puVar19;
          puVar18[-1] = puVar19[1];
          *puVar18 = puVar19[2];
          puVar24 = puVar19 + 3;
          puVar19 = puVar19 + 4;
          puVar18[1] = *puVar24;
          puVar18 = puVar18 + 4;
        } while (-lVar23 != (uVar29 & 0xfc));
        lVar23 = -lVar23;
      }
      if ((bVar6 & 3) != 0) {
        puVar18 = puVar19;
        puVar24 = (undefined4 *)(lVar28 + uVar22 + lVar26 + lVar23 * 4);
        uVar25 = uVar16;
        do {
          puVar19 = puVar18 + 1;
          uVar25 = uVar25 - 1;
          *puVar24 = *puVar18;
          puVar18 = puVar19;
          puVar24 = puVar24 + 1;
        } while (uVar25 != 0);
      }
      uVar14 = uVar14 & 0xff;
      lVar23 = 0;
      if (3 < bVar6) {
        puVar18 = (undefined4 *)(lVar26 + uVar14 * 4 + uVar22 + lVar28 + 8);
        do {
          lVar23 = lVar23 + -4;
          puVar18[-2] = *puVar19;
          puVar18[-1] = puVar19[1];
          *puVar18 = puVar19[2];
          puVar24 = puVar19 + 3;
          puVar19 = puVar19 + 4;
          puVar18[1] = *puVar24;
          puVar18 = puVar18 + 4;
        } while (-lVar23 != (uVar29 & 0xfc));
        lVar23 = -lVar23;
      }
      if ((bVar6 & 3) != 0) {
        puVar18 = puVar19;
        puVar24 = (undefined4 *)(lVar28 + uVar22 + lVar26 + lVar23 * 4 + uVar14 * 4);
        uVar25 = uVar16;
        do {
          puVar19 = puVar18 + 1;
          uVar25 = uVar25 - 1;
          *puVar24 = *puVar18;
          puVar18 = puVar19;
          puVar24 = puVar24 + 1;
        } while (uVar25 != 0);
      }
      lVar26 = lVar26 + uVar14 * 8;
      if (bVar6 < 4) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        puVar18 = (undefined4 *)(lVar26 + uVar22 + lVar28 + 8);
        do {
          lVar23 = lVar23 + -4;
          puVar18[-2] = *puVar19;
          puVar18[-1] = puVar19[1];
          *puVar18 = puVar19[2];
          puVar24 = puVar19 + 3;
          puVar19 = puVar19 + 4;
          puVar18[1] = *puVar24;
          puVar18 = puVar18 + 4;
        } while (-lVar23 != (uVar29 & 0xfc));
        lVar23 = -lVar23;
      }
      if ((bVar6 & 3) != 0) {
        puVar18 = (undefined4 *)(lVar28 + uVar22 + lVar26 + lVar23 * 4);
        do {
          uVar16 = uVar16 - 1;
          *puVar18 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar18 = puVar18 + 1;
        } while (uVar16 != 0);
      }
    }
    bVar6 = *(byte *)(param_1 + 0x599);
    iVar3 = *piVar15;
    uVar7 = *(ushort *)(param_1 + 0x59a);
    iVar8 = *(int *)(param_1 + 0x590);
    iVar11 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(lVar30);
    iVar12 = (**(code **)(*(long *)(param_1 + 0x560) + 0x20))(lVar30);
    lVar30 = *(long *)(param_1 + 0x580);
    if (lVar30 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x590);
      iVar5 = *(int *)(param_1 + 0x578);
      uVar13 = (**(code **)PTR_DAT_04bcf030)(lVar30);
      if ((uVar13 >> 2 & 1) != 0) {
        (*DAT_04c61fd8)(lVar30,iVar5 + ((iVar8 + iVar11) - 1U & -iVar12) *
                                       (iVar3 + (uint)uVar7 * (uint)bVar6),uVar4);
      }
    }
    if (param_5 != (byte *)0x0) {
      lVar30 = lVar21 + lVar20 * 0x38;
      uVar13 = *(uint *)(lVar30 + 0x18) & 0xffffffbf | (uint)*param_5 << 6;
      *(uint *)(lVar30 + 0x18) = uVar13;
      *(uint *)(lVar30 + 0x18) = uVar13 & 0xffffff7f | (uint)param_5[1] << 7;
    }
    lVar30 = lVar21 + lVar20 * 0x38;
    pfVar17 = *(float **)(*(long *)(param_2 + 0x18) + 0x38);
    fVar31 = *pfVar17;
    *(float *)(lVar30 + 0x1c) = fVar31;
    fVar32 = pfVar17[1];
    *(float *)(lVar30 + 0x20) = fVar32;
    fVar33 = pfVar17[2];
    *(float *)(lVar30 + 0x24) = fVar33;
    *(float *)(lVar30 + 0x28) = pfVar17[3];
    fVar34 = (float)param_3[3];
    fVar35 = (float)param_3[7];
    fVar36 = (float)param_3[0xb];
    *(byte *)(lVar30 + 0x2c) = param_8 & 1;
    *(float *)(lVar30 + 0x1c) = fVar31 + fVar34;
    *(float *)(lVar30 + 0x20) = fVar32 + fVar35;
    *(float *)(lVar30 + 0x24) = fVar33 + fVar36;
    if (param_7 == 0) {
      param_7 = *(long *)(DAT_05ae9110 + 0x58);
    }
    *(long *)(lVar21 + lVar20 * 0x38 + 0x30) = param_7;
    *(undefined4 *)(*(long *)(param_2 + 0x18) + 0xa4) = 0xffff;
    if ((param_4 & 1) != 0) {
      plVar27 = *(long **)(param_2 + 0x18);
      uVar13 = (**(code **)(*plVar27 + 0xb8))(plVar27);
      if (0 < (int)uVar13) {
        lVar21 = 0;
        do {
          *(ushort *)(plVar27[10] + lVar21 + 6) = *(ushort *)(plVar27[10] + lVar21 + 6) | 0x20;
          *(byte *)((long)plVar27 + 0xae) = *(byte *)((long)plVar27 + 0xae) | 1;
          lVar20 = plVar27[10] + lVar21;
          lVar21 = lVar21 + 0xc;
          *(ushort *)(lVar20 + 6) = *(ushort *)(lVar20 + 6) | 2;
        } while ((ulong)uVar13 * 0xc != lVar21);
      }
    }
    lVar21 = *plVar2;
    plVar27 = (long *)((long)*(int *)((long)plVar2 + 0x14) + (long)piVar15);
    *plVar2 = (long)plVar27;
    *plVar27 = lVar21;
    plVar27[1] = (long)plVar2;
    if (lVar21 != 0) {
      *(long **)(lVar21 + 8) = plVar27;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  return;
}

