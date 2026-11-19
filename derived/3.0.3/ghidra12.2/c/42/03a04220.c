
void FUN_03a04220(float param_1,long *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  byte bVar16;
  long lVar17;
  undefined *puVar18;
  byte bVar19;
  int iVar20;
  uint *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  int local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  if ((*(uint *)((long)param_2 + 0x559c) >> 6 & 1) != 0) {
    *(char *)((long)param_2 + 0x55b4) = '\x01' - *(char *)((long)param_2 + 0x55b4);
  }
  puVar3 = PTR_DAT_04bd1010;
  uVar5 = *(uint *)(param_2 + 0xab3);
  uVar10 = *(uint *)((long)param_2 + 0x559c) >> 5 & 1;
  plVar6 = (long *)param_2[0xab2];
  if ((uVar5 & 1) == 0) {
    uVar10 = 1;
  }
  fVar26 = *(float *)(param_2 + 0xab7);
  if (uVar10 == 0) {
    fVar26 = 0.0;
  }
  uVar27 = *(undefined4 *)(*(long *)PTR_DAT_04bd1010 + 0xc);
  *(uint *)(param_2 + 0xab3) = uVar5 & 0xfffffff8 | uVar5 & 3 | (uVar5 >> 1 & 1) << 2;
  *(undefined4 *)(param_2 + 0xaed) = uVar27;
  *(float *)((long)param_2 + 0x55bc) = fVar26 * param_1;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0,param_2);
  }
  lVar11 = param_2[0xaba];
  if (*(char *)(param_2[0x23] + 0x5b0) == '\0') {
    bVar16 = *(byte *)(lVar11 + 0x324) & 0xfd;
    bVar19 = 0;
    if (*(char *)(param_2[0x23] + 0x6f0) == '\0') goto LAB_03a04308;
  }
  else {
    bVar16 = *(byte *)(lVar11 + 0x324) & 0xfd;
  }
  bVar19 = 2;
LAB_03a04308:
  *(byte *)(lVar11 + 0x324) = bVar19 | bVar16;
  if ((((bVar19 | bVar16) ^ 0xff) & 7) == 0) {
    *(undefined4 *)(lVar11 + 800) = *(undefined4 *)(*(long *)puVar3 + 0xc);
    if (*(uint *)(lVar11 + 0x314) < *(uint *)(lVar11 + 0x310)) {
      *(undefined4 *)(lVar11 + 0x314) = *(undefined4 *)(lVar11 + 0x310);
    }
    if (*(int *)(lVar11 + 0x248) != 0) {
      iVar20 = 0;
      uVar10 = *(uint *)(lVar11 + 0x318);
      do {
        puVar21 = (uint *)(*(long *)(lVar11 + 0x250) + (long)iVar20 * 0x88 + 0x80);
        if (uVar10 < *puVar21) {
          uVar10 = *puVar21;
          *(uint *)(lVar11 + 0x318) = uVar10;
        }
        iVar20 = iVar20 + 1;
      } while (*(int *)(lVar11 + 0x248) != iVar20);
    }
    *(undefined4 *)(lVar11 + 0x310) = 0;
  }
  FUN_03a5c500(param_2 + 0x26);
  fVar25 = *(float *)((long)param_2 + 0x55bc);
  fVar28 = *(float *)(param_2 + 0xae9);
  for (fVar26 = fVar25 + *(float *)((long)param_2 + 0x574c); fVar28 <= fVar26;
      fVar26 = fVar26 - fVar28) {
  }
  *(float *)((long)param_2 + 0x574c) = fVar26;
  for (fVar26 = fVar25 + *(float *)((long)param_2 + 0x5754); *(float *)(param_2 + 0xaea) <= fVar26;
      fVar26 = fVar26 - *(float *)(param_2 + 0xaea)) {
  }
  *(float *)((long)param_2 + 0x5754) = fVar26;
  for (fVar26 = fVar25 + *(float *)((long)param_2 + 0x575c); *(float *)(param_2 + 0xaeb) <= fVar26;
      fVar26 = fVar26 - *(float *)(param_2 + 0xaeb)) {
  }
  *(float *)((long)param_2 + 0x575c) = fVar26;
  for (fVar26 = fVar25 + *(float *)((long)param_2 + 0x5764); *(float *)(param_2 + 0xaec) <= fVar26;
      fVar26 = fVar26 - *(float *)(param_2 + 0xaec)) {
  }
  lVar11 = param_2[0xad8];
  *(float *)((long)param_2 + 0x5764) = fVar26;
  *(float *)(param_2 + 0xa32) = fVar25;
  *(float *)(param_2 + 0x346) = fVar25;
  *(float *)(param_2 + 0x636) = fVar25;
  if ((lVar11 != 0) &&
     ((((*(byte *)(lVar11 + 0x1c) & 1) == 0 || (*(char *)(param_2[0x23] + 0x1320) == '\0')) ||
      ((param_2[0x9dd] != 0 && ((*(uint *)(param_2[0x9dd] + 0x10) >> 8 & 1) != 0)))))) {
    lVar11 = 0;
  }
  FUN_03a37a00(param_2 + 0x63b,*(uint *)((long)param_2 + 0x559c) >> 3 & 1,lVar11);
  uVar1 = *(undefined1 *)((long)param_2 + 0x55b4);
  if ((param_2[0x95f] != 0) && (*(char *)(param_2[0x8d7] + 0x470) != '\0')) {
    FUN_039e07f0();
  }
  do {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2 + 0x9a0,0x10);
    if (bVar4) {
      *(undefined4 *)(param_2 + 0x9a0) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  do {
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(param_2 + 0x9a2,0x10);
    if (bVar4) {
      *(undefined4 *)(param_2 + 0x9a2) = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((param_2[0x959] != 0) && (*(char *)(param_2[0x8d7] + 0x530) != '\0')) {
    FUN_03a8ead0(param_2[0x959],uVar1);
  }
  lVar11 = param_2[0x9de];
  if (lVar11 != 0) {
    *(undefined4 *)(lVar11 + 0xc) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x1c) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined4 *)(lVar11 + 0x24) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x2c) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined4 *)(lVar11 + 0x34) = 0;
    *(undefined4 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x3c) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
    *(undefined4 *)(lVar11 + 0x44) = 0;
    *(undefined4 *)(lVar11 + 0x48) = 0;
    *(undefined4 *)(lVar11 + 0x4c) = 0;
  }
  if ((param_2[0xab8] != 0) && (*(char *)(param_2[0x23] + 0x4b0) != '\0')) {
    FUN_03afc620();
  }
  if (param_2[0xab9] == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_2[0x23] + 0x6b0) != '\0';
  }
  (**(code **)(*param_2 + 0x1c8))(param_2,0,bVar4);
  lVar11 = param_2[0x9df];
  if (((*(byte *)(lVar11 + 0x281) & 3) == 0) &&
     (lVar15 = *(long *)(lVar11 + 0x70), (*(byte *)(lVar15 + 0x5599) & 1) != 0)) {
    puVar21 = (uint *)(lVar15 + 0x4e58);
    do {
      uVar10 = *puVar21;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar21,0x10);
      if (bVar4) {
        *puVar21 = uVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(long *)(*(long *)(lVar15 + 0x4e60) +
             (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3)) = lVar11;
    *(byte *)(lVar11 + 0x281) = *(byte *)(lVar11 + 0x281) | 2;
  }
  FUN_03af1560(param_2[0xabb]);
  *(undefined4 *)((long)param_2 + 0x55ac) = 0;
  uVar10 = *(uint *)((long)param_2 + 0x4e44);
  *(undefined2 *)((long)param_2 + 0x4e94) = 0;
  lVar11 = param_2[0x21];
  *(uint *)(param_2 + 0xab3) = *(uint *)(param_2 + 0xab3) & 0xfffffeff;
  *(undefined1 *)((long)param_2 + 0x55b5) = 0xff;
  *(uint *)((long)param_2 + 0x4e44) =
       (uVar10 & 0xfffffffc | uVar10 & 1 | (*(uint *)((long)param_2 + 0x55a4) >> 0xc & 1) << 1) ^ 2;
  puVar3 = PTR_DAT_04bd13c0;
  if ((int)lVar11 != 0) {
    lVar15 = param_2[0x22];
    iVar20 = 0;
    local_74 = 0x7fffffff;
    do {
      lVar22 = lVar15 + (long)iVar20 * 0x430;
      uVar10 = (uint)*(byte *)(lVar22 + 8);
      if (*(uint *)(param_2 + 0x686) <= (uint)*(byte *)(lVar22 + 8)) {
        uVar10 = 0;
      }
      FUN_03a4f674(lVar22,*(char *)(param_2[0x687] + (ulong)uVar10 * 0x238 + 0x230) != '\x01',
                   *(uint *)(param_2 + 0xab3) >> 0xd & 1,*(undefined1 *)((long)param_2 + 0x55b4));
      if ((*(byte *)(lVar22 + 0x3c8) & 1) != 0) {
        lVar17 = lVar15 + (long)iVar20 * 0x430;
        *(uint *)((long)param_2 + 0x55ac) =
             1 << (ulong)(*(byte *)(lVar22 + 8) & 0x1f) | *(uint *)((long)param_2 + 0x55ac);
        lVar12 = *(long *)(lVar17 + 0x3d0);
        if ((*(byte *)(lVar12 + 0xd19) & 1) == 0) {
          iVar14 = *(int *)(lVar12 + 0x94);
        }
        else {
          iVar14 = -0x80000000;
        }
        plVar6 = (long *)(lVar17 + 0x3d0);
        if (iVar14 < local_74) {
          *(undefined1 *)((long)param_2 + 0x55b5) = *(undefined1 *)(lVar22 + 8);
          lVar12 = *plVar6;
          local_74 = iVar14;
        }
        puVar13 = puVar3;
        if (((*(ushort *)(lVar12 + 0x8a) & 0x21) == 0) ||
           ((*(ushort *)(lVar12 + 0x8a) >> 1 & 1) == 0)) {
          puVar18 = *(undefined **)(lVar12 + 0x80);
          if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
            puVar13 = *(undefined **)(lVar12 + 0x78);
          }
LAB_03a04798:
          puVar7 = PTR_DAT_04bd13c8;
          if (puVar18 != (undefined *)0x0) {
            puVar7 = puVar18;
          }
LAB_03a047ac:
          puVar18 = puVar3;
          if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
            puVar18 = *(undefined **)(lVar12 + 0x78);
          }
        }
        else {
          if (*(long *)(lVar12 + 0x1f8) == 0) {
            if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
              puVar13 = *(undefined **)(lVar12 + 0x78);
            }
            lVar17 = *(long *)(lVar12 + 0x1f8);
          }
          else {
            puVar13 = (undefined *)(*(long *)(lVar12 + 0x1f8) + 8);
            lVar17 = *(long *)(lVar12 + 0x1f8);
          }
          if (lVar17 == 0) {
            puVar18 = *(undefined **)(lVar12 + 0x80);
            goto LAB_03a04798;
          }
          puVar7 = *(undefined **)(lVar17 + 0x100);
          if ((*(byte *)((long)param_2 + 0x55a5) >> 3 & 1) != 0) goto LAB_03a047ac;
          puVar18 = (undefined *)(lVar17 + 8);
        }
        FUN_039eea20(lVar22,0,puVar13 + 8,puVar7,puVar18 + 8);
        lVar12 = *plVar6;
        if ((((*(ushort *)(lVar12 + 0x8a) & 0x21) == 0) ||
            ((*(ushort *)(lVar12 + 0x8a) >> 1 & 1) == 0)) ||
           (lVar17 = *(long *)(lVar12 + 0x1f8), lVar17 == 0)) {
          puVar13 = puVar3;
          if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
            puVar13 = *(undefined **)(lVar12 + 0x78);
          }
          puVar8 = &DAT_05ae91b0;
          if (*(undefined8 **)(lVar12 + 0x80) != (undefined8 *)0x0) {
            puVar8 = *(undefined8 **)(lVar12 + 0x80);
          }
LAB_03a04824:
          puVar18 = puVar3;
          if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
            puVar18 = *(undefined **)(lVar12 + 0x78);
          }
        }
        else {
          puVar18 = (undefined *)(lVar17 + 8);
          puVar8 = *(undefined8 **)(lVar17 + 0x100);
          puVar13 = puVar18;
          if ((*(byte *)((long)param_2 + 0x55a5) >> 3 & 1) != 0) goto LAB_03a04824;
        }
        FUN_039eea20(lVar22,1,puVar13 + 8,puVar8,puVar18 + 8);
        lVar12 = *plVar6;
        if (((*(ushort *)(lVar12 + 0x8a) & 0x21) == 0) ||
           ((*(ushort *)(lVar12 + 0x8a) >> 1 & 1) == 0)) {
          puVar13 = *(undefined **)(lVar12 + 0x78);
          puVar8 = *(undefined8 **)(lVar12 + 0x80);
LAB_03a048a0:
          puVar18 = puVar3;
          if (puVar13 != (undefined *)0x0) {
            puVar18 = puVar13;
          }
          puVar9 = &DAT_05ae91b0;
          if (puVar8 != (undefined8 *)0x0) {
            puVar9 = puVar8;
          }
LAB_03a048b4:
          puVar13 = puVar3;
          if (*(undefined **)(lVar12 + 0x78) != (undefined *)0x0) {
            puVar13 = *(undefined **)(lVar12 + 0x78);
          }
        }
        else {
          lVar17 = *(long *)(lVar12 + 0x1f8);
          if (lVar17 == 0) {
            puVar13 = *(undefined **)(lVar12 + 0x78);
            puVar8 = *(undefined8 **)(lVar12 + 0x80);
            goto LAB_03a048a0;
          }
          puVar13 = (undefined *)(lVar17 + 8);
          puVar9 = *(undefined8 **)(lVar17 + 0x100);
          puVar18 = puVar13;
          if ((*(byte *)((long)param_2 + 0x55a5) >> 3 & 1) != 0) goto LAB_03a048b4;
        }
        FUN_039eea20(lVar22,2,puVar18 + 8,puVar9,puVar13 + 8);
        lVar12 = param_2[0xab8];
        if ((lVar12 != 0) && (*(char *)(param_2[0x23] + 0x4b0) != '\0')) {
          FUN_039eea20(lVar22,4,lVar12 + 0x68,lVar12 + 200,lVar12 + 0x68);
        }
        uVar10 = (uint)*(byte *)(lVar22 + 8);
        if (*(uint *)(param_2[0x684] + 8) <= (uint)*(byte *)(lVar22 + 8)) {
          uVar10 = 0;
        }
        FUN_03aaf074(param_2 + 0x2bf,lVar22,
                     *(long *)(param_2[0x684] + 0x10) + (ulong)uVar10 * 0x23c0 + 0x308);
      }
      iVar20 = iVar20 + 1;
    } while ((int)lVar11 != iVar20);
    lVar11 = param_2[0x21];
    if ((int)lVar11 != 0) {
      lVar15 = param_2[0x22];
      iVar20 = 0;
      do {
        lVar22 = lVar15 + (long)iVar20 * 0x430;
        if ((*(byte *)(lVar22 + 0x3c8) & 1) != 0) {
          local_70 = *(float *)((long)param_2 + 0x574c) / *(float *)(param_2 + 0xae9);
          fStack_6c = *(float *)((long)param_2 + 0x5754) / *(float *)(param_2 + 0xaea);
          local_68 = *(float *)((long)param_2 + 0x575c) / *(float *)(param_2 + 0xaeb);
          lVar17 = *(long *)(lVar22 + 0x18);
          lVar24 = *(long *)(lVar17 + 0x3a0);
          lVar12 = lVar17 + 0x390;
          fStack_64 = *(float *)((long)param_2 + 0x5764) / *(float *)(param_2 + 0xaec);
          (**(code **)(*(long *)(lVar17 + 0x390) + 0x20))(lVar12);
          (**(code **)(*(long *)(lVar17 + 0x390) + 0x20))(lVar12);
          lVar23 = **(long **)(lVar17 + 0x398);
          bVar16 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x80) * 4];
          (**(code **)(*(long *)(lVar17 + 0x390) + 0x18))(lVar12);
          if ((ulong)bVar16 != 0) {
            memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x7c)),&local_70,(ulong)bVar16 << 2
                  );
          }
          lVar12 = lVar15 + (long)iVar20 * 0x430;
          bVar19 = *(byte *)(lVar12 + 0x3c9);
          bVar16 = bVar19 & 1 | (*(byte *)(param_2 + 0xab3) >> 4 & 1) << 1;
          *(byte *)(lVar12 + 0x3c9) = bVar19 & 0xfc | bVar16;
          *(byte *)(lVar12 + 0x3c9) =
               (byte)(*(uint *)(param_2 + 0xab3) >> 9) & 4 | bVar19 & 0xf8 | bVar16;
          bVar16 = (*(byte *)(lVar22 + 10) & 0xfc |
                   *(byte *)(lVar22 + 10) & 1 | (*(byte *)(param_2 + 0xab3) >> 3 & 1) << 1) ^ 2;
          *(byte *)(lVar22 + 10) = bVar16;
          if (param_2[0x9dd] != 0) {
            *(byte *)(lVar22 + 10) = *(byte *)(param_2[0x9dd] + 0x11) & 8 | bVar16 & 0xf7;
          }
          uVar27 = *(undefined4 *)(param_2[0x23] + 0xf80);
          *(undefined4 *)(lVar22 + 0x2dc) = *(undefined4 *)(param_2[0x23] + 4000);
          *(undefined4 *)(lVar22 + 0x2d8) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0xfc0);
          *(undefined4 *)(lVar22 + 0x2e4) = *(undefined4 *)(param_2[0x23] + 0xfe0);
          *(undefined4 *)(lVar22 + 0x2e0) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0x1000);
          *(undefined4 *)(lVar22 + 0x2ec) = *(undefined4 *)(param_2[0x23] + 0x1020);
          *(undefined4 *)(lVar22 + 0x2e8) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0x18a0);
          *(undefined4 *)(lVar22 + 0x2f4) = *(undefined4 *)(param_2[0x23] + 0x18c0);
          *(undefined4 *)(lVar22 + 0x2f0) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0x18a0);
          *(undefined4 *)(lVar22 + 0x2fc) = *(undefined4 *)(param_2[0x23] + 0x18c0);
          *(undefined4 *)(lVar22 + 0x2f8) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0x18a0);
          *(undefined4 *)(lVar22 + 0x304) = *(undefined4 *)(param_2[0x23] + 0x18c0);
          *(undefined4 *)(lVar22 + 0x300) = uVar27;
          uVar27 = *(undefined4 *)(param_2[0x23] + 0x18a0);
          *(undefined4 *)(lVar22 + 0x30c) = *(undefined4 *)(param_2[0x23] + 0x18c0);
          *(undefined4 *)(lVar22 + 0x308) = uVar27;
          if ((param_2[0x959] != 0) && (*(char *)(param_2[0x8d7] + 0x530) != '\0')) {
            *(long *)(lVar22 + 200) = param_2[0x71];
          }
          if (param_2[0x9dd] != 0) {
            FUN_03a50080(param_2[0x9dd],lVar22);
          }
          uVar5 = FUN_03a0bc7c(param_2 + 0x9aa,param_2,lVar22);
          lVar12 = param_2[0x9cf];
          uVar10 = uVar5;
          if (*(uint *)(param_2 + 0x9ce) <= uVar5) {
            uVar10 = 0;
          }
          lVar17 = lVar15 + (long)iVar20 * 0x430;
          *(char *)(lVar17 + 0x3ca) = (char)uVar5;
          *(long *)(lVar17 + 1000) = lVar12 + (long)(int)uVar10 * 0x3d8 + 0x1d8;
          if ((int)param_2[0x24] != 0) {
            lVar12 = (long)(int)param_2[0x24] << 3;
            puVar8 = (undefined8 *)param_2[0x25];
            do {
              (**(code **)(*(long *)*puVar8 + 0x20))((long *)*puVar8,lVar22);
              lVar12 = lVar12 + -8;
              puVar8 = puVar8 + 1;
            } while (lVar12 != 0);
          }
          plVar6 = (long *)param_2[0xab2];
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x30))(plVar6,0,param_2,lVar22);
          }
          FUN_03a7b680(param_2[0xaba],lVar22);
        }
        iVar20 = iVar20 + 1;
      } while ((int)lVar11 != iVar20);
    }
  }
  cVar2 = *(char *)((long)param_2 + 0x55b5);
  if ((int)cVar2 != 0xffffffff) {
    uVar10 = (uint)cVar2;
    if (*(uint *)(param_2 + 0x21) < (uint)(int)cVar2 || *(uint *)(param_2 + 0x21) == uVar10) {
      uVar10 = 0;
    }
    lVar11 = param_2[0x22] + (long)(int)uVar10 * 0x430;
    *(byte *)(lVar11 + 0x3c8) = *(byte *)(lVar11 + 0x3c8) | 4;
  }
  if ((*(byte *)((long)param_2 + 0x5599) >> 1 & 1) != 0) {
    if ((int)param_2[0x24] != 0) {
      lVar11 = (long)(int)param_2[0x24] << 3;
      puVar8 = (undefined8 *)param_2[0x25];
      do {
        (**(code **)(*(long *)*puVar8 + 0x38))((long *)*puVar8,param_2);
        lVar11 = lVar11 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar11 != 0);
    }
    plVar6 = (long *)param_2[0xab2];
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x78))(plVar6,param_2);
    }
    *(uint *)(param_2 + 0xab3) = *(uint *)(param_2 + 0xab3) & 0xfffffdff;
  }
  plVar6 = (long *)param_2[0xab2];
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03a04c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x28))(plVar6,1,param_2);
  return;
}

