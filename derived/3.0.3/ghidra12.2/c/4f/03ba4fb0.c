
void FUN_03ba4fb0(long param_1,long *param_2,long param_3,int param_4,long *param_5)

{
  undefined *puVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  ushort uVar20;
  ulong uVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  uint *puVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  int *piVar31;
  int iVar32;
  float fVar33;
  uint uVar34;
  float fVar35;
  int iVar36;
  float fVar37;
  int iVar38;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  
  if (param_3 == 0) {
    piVar26 = (int *)(param_2[1] + 0xc);
LAB_03ba5088:
    piVar30 = piVar26;
  }
  else {
    iVar32 = *(int *)(param_3 + 8);
    if (param_4 < iVar32) {
      piVar26 = (int *)(param_3 + 0xc);
      if ((param_4 != 0) && (0 < iVar32)) {
        uVar34 = iVar32 - 1U;
        if (param_4 - 1U <= iVar32 - 1U) {
          uVar34 = param_4 - 1U;
        }
        uVar3 = uVar34 + 1 & 3;
        if (2 < uVar34) {
          uVar22 = uVar34 + 1 & 0xfffffffc;
          do {
            uVar22 = uVar22 - 4;
            piVar26 = (int *)((long)piVar26 + (long)*piVar26 +
                             (long)*(int *)((long)piVar26 + (long)*piVar26));
            piVar26 = (int *)((long)piVar26 + (long)*piVar26);
            piVar26 = (int *)((long)piVar26 + (long)*piVar26);
          } while (uVar22 != 0);
        }
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          piVar26 = (int *)((long)piVar26 + (long)*piVar26);
        }
        if (iVar32 <= (int)(uVar34 + 1)) {
          piVar26 = (int *)0x0;
        }
        goto LAB_03ba5088;
      }
      piVar30 = (int *)0x0;
      if (0 < iVar32) {
        piVar30 = piVar26;
      }
    }
    else {
      piVar30 = (int *)0x0;
      piVar26 = (int *)0x0;
    }
  }
  piVar2 = (int *)((long)*(int *)(param_2[2] + (long)piVar30[1] * 4 + 0xc) + *param_2);
  pcVar4 = (char *)0x0;
  if (param_2[3] != 0) {
    pcVar4 = (char *)(param_2[3] + (long)*piVar2 + 8);
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = (byte *)pcVar4;
  lVar10 = FUN_03ba4630(param_1,&local_80);
  if (lVar10 != 0) {
    *(int *)(lVar10 + 0x154) = piVar2[3];
    if (0.0 <= (float)piVar2[4]) {
      *(int *)(lVar10 + 0xa0) = piVar2[4];
    }
    if (0.0 <= (float)piVar2[5]) {
      *(int *)(lVar10 + 0xb8) = piVar2[5];
    }
    *(int *)(lVar10 + 0xbc) = piVar2[6];
    *(int *)(lVar10 + 0xc0) = piVar2[7];
    iVar32 = piVar2[9];
    *(int *)(lVar10 + 0xc4) = piVar2[8];
    *(int *)(lVar10 + 200) = iVar32;
    *(int *)(lVar10 + 0xcc) = piVar2[10];
    *(int *)(lVar10 + 0xd0) = piVar2[0xb];
    *(int *)(lVar10 + 0xa4) = piVar2[0xc];
    *(int *)(lVar10 + 0xa8) = piVar2[0x12];
    *(int *)(lVar10 + 0xac) = piVar2[0x13];
    *(int *)(lVar10 + 0xb0) = piVar2[0x14];
    local_80 = (undefined *)CONCAT44((int)((ulong)local_80 >> 0x20),3);
    *(int *)(lVar10 + 0xb4) = piVar2[0x15];
    bVar9 = FUN_03b42580();
    lVar28 = *(long *)(lVar10 + 0x160);
    *(byte *)(lVar10 + 0x158) = (bVar9 ^ 0xff) & 1;
    if (lVar28 != 0) {
      lVar11 = FUN_03ba74c4(piVar2[0x16],param_5);
      plVar13 = (long *)PTR_DAT_04bb2698;
      if (lVar11 != 0) {
        lVar29 = *(long *)PTR_DAT_04bb2698;
        if (lVar29 == 0) {
          pvVar14 = malloc(0x18);
        }
        else {
          plVar13 = param_5;
          if (param_5 == (long *)0x0) {
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar13 = (long *)(lVar29 + 8);
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + 0xa8);
            }
            plVar13 = (long *)*plVar13;
            pvVar14 = (void *)0x0;
            if (plVar13 == (long *)0x0) goto LAB_03ba5244;
          }
          pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x18,8);
        }
LAB_03ba5244:
        *(void **)pvVar14 = pvVar14;
        *(void **)((long)pvVar14 + 8) = pvVar14;
        *(undefined8 *)((long)pvVar14 + 0x10) = 0x21800000000;
        lVar29 = *(long *)(lVar10 + 0x160);
        *(long *)(lVar29 + 0x18) = lVar11;
        *(void **)(lVar29 + 0x30) = pvVar14;
        plVar13 = (long *)PTR_DAT_04bb2698;
        lVar29 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
        if (*(long *)(lVar29 + 0x28) != lVar29 + 0x20) {
          lVar17 = (long)*(int *)(lVar29 + 0x34);
          lVar12 = *(long *)(lVar29 + 0x28) - lVar17;
          do {
            lVar23 = *(long *)(lVar12 + 0x160);
            *(undefined8 *)(lVar23 + 0x40) = 0;
            lVar24 = *(long *)(lVar23 + 0x10);
            do {
              if ((*(long *)(lVar24 + 0x58) == 0) ||
                 (lVar24 = *(long *)(*(long *)(lVar24 + 0x58) + 0x20), lVar24 == 0))
              goto LAB_03ba52a0;
              lVar25 = *(long *)(*(long *)(lVar24 + 0x160) + 0x30);
            } while (lVar25 == 0);
            *(long *)(lVar23 + 0x40) = lVar25;
LAB_03ba52a0:
            lVar12 = *(long *)(lVar12 + lVar17 + 8) - lVar17;
          } while (lVar12 != (lVar29 + 0x20) - lVar17);
        }
        uVar5 = *(undefined1 *)((long)piVar2 + 99);
        uVar6 = *(undefined1 *)((long)piVar2 + 0x62);
        *(int *)(lVar11 + 8) = piVar2[0x17];
        *(undefined1 *)(lVar11 + 0xc) = uVar5;
        *(undefined1 *)(lVar11 + 0xd) = uVar6;
      }
      *(int *)(lVar28 + 0x58) = piVar2[0x16];
      bVar8 = false;
      if (piVar2[0x19] != 0) {
        lVar11 = *plVar13;
        if (lVar11 == 0) {
          plVar15 = malloc(0x20);
        }
        else {
          plVar15 = param_5;
          if (param_5 == (long *)0x0) {
            lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar15 = (long *)(lVar11 + 8);
            if (lVar29 != 0) {
              plVar15 = (long *)(lVar29 + 0xa8);
            }
            plVar15 = (long *)*plVar15;
            if (plVar15 == (long *)0x0) {
              plVar15 = (long *)0x0;
              goto LAB_03ba5370;
            }
          }
          plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x20,8);
        }
LAB_03ba5370:
        puVar1 = PTR_DAT_04bd2240;
        *(undefined1 *)((long)plVar15 + 0x1c) = 0;
        *plVar15 = (long)(puVar1 + 0x10);
        plVar15[1] = 0xffffffff;
        lVar11 = *plVar13;
        plVar15[2] = 0x3f80000000000000;
        *(undefined4 *)(plVar15 + 3) = 0x3f800000;
        if (lVar11 == 0) {
          pvVar14 = malloc(0x18);
        }
        else {
          plVar16 = param_5;
          if (param_5 == (long *)0x0) {
            lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar16 = (long *)(lVar11 + 8);
            if (lVar29 != 0) {
              plVar16 = (long *)(lVar29 + 0xa8);
            }
            plVar16 = (long *)*plVar16;
            pvVar14 = (void *)0x0;
            if (plVar16 == (long *)0x0) goto LAB_03ba53f8;
          }
          pvVar14 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,0x18,8);
        }
LAB_03ba53f8:
        *(void **)pvVar14 = pvVar14;
        *(void **)((long)pvVar14 + 8) = pvVar14;
        *(undefined8 *)((long)pvVar14 + 0x10) = 0x21800000000;
        lVar11 = *(long *)(lVar10 + 0x160);
        *(long **)(lVar11 + 0x20) = plVar15;
        *(void **)(lVar11 + 0x38) = pvVar14;
        lVar11 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
        if (*(long *)(lVar11 + 0x28) != lVar11 + 0x20) {
          lVar12 = (long)*(int *)(lVar11 + 0x34);
          lVar29 = *(long *)(lVar11 + 0x28) - lVar12;
          do {
            lVar17 = *(long *)(lVar29 + 0x160);
            *(undefined8 *)(lVar17 + 0x48) = 0;
            lVar23 = *(long *)(lVar17 + 0x10);
            do {
              if ((*(long *)(lVar23 + 0x58) == 0) ||
                 (lVar23 = *(long *)(*(long *)(lVar23 + 0x58) + 0x20), lVar23 == 0))
              goto LAB_03ba5450;
              lVar24 = *(long *)(*(long *)(lVar23 + 0x160) + 0x38);
            } while (lVar24 == 0);
            *(long *)(lVar17 + 0x48) = lVar24;
LAB_03ba5450:
            lVar29 = *(long *)(lVar29 + lVar12 + 8) - lVar12;
          } while (lVar29 != (lVar11 + 0x20) - lVar12);
        }
        fVar37 = (float)piVar2[0x1c];
        fVar35 = (float)piVar2[0x1d];
        fVar33 = (float)piVar2[0x1e];
        iVar32 = piVar2[0x1a];
        iVar36 = piVar2[0x1b];
        *(undefined1 *)((long)plVar15 + 0x1c) = 0;
        *(int *)(plVar15 + 1) = iVar32;
        *(int *)((long)plVar15 + 0xc) = iVar36;
        *(float *)(plVar15 + 2) = fVar37;
        *(float *)((long)plVar15 + 0x14) = fVar35;
        *(float *)(plVar15 + 3) = fVar33;
        if (iVar36 < 0) {
          *(undefined4 *)((long)plVar15 + 0xc) = 0;
          if (fVar37 < 0.0) goto LAB_03ba54bc;
LAB_03ba54d8:
          if (fVar35 < 0.0) goto LAB_03ba54e8;
LAB_03ba54e0:
          if (1.0 < fVar35) goto LAB_03ba54e8;
        }
        else {
          if (0.0 <= fVar37) goto LAB_03ba54d8;
LAB_03ba54bc:
          *(undefined4 *)(plVar15 + 2) = 0;
          if (0.0 <= fVar35) goto LAB_03ba54e0;
LAB_03ba54e8:
          *(undefined4 *)((long)plVar15 + 0x14) = 0x3f800000;
        }
        if ((fVar33 < 0.0) || (1.0 < fVar33)) {
          *(undefined4 *)(plVar15 + 3) = 0x3f800000;
        }
        bVar8 = piVar2[0x19] != 0;
      }
      *(bool *)(lVar28 + 0x5c) = bVar8;
      bVar8 = false;
      if (piVar2[0x1f] != 0) {
        lVar11 = *plVar13;
        if (lVar11 == 0) {
          plVar13 = malloc(0x20);
        }
        else {
          plVar15 = param_5;
          if (param_5 == (long *)0x0) {
            lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar15 = (long *)(lVar11 + 8);
            if (lVar29 != 0) {
              plVar15 = (long *)(lVar29 + 0xa8);
            }
            plVar15 = (long *)*plVar15;
            plVar13 = (long *)0x0;
            if (plVar15 == (long *)0x0) goto LAB_03ba557c;
          }
          plVar13 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x20,8);
        }
LAB_03ba557c:
        puVar7 = PTR_DAT_04bd2238;
        puVar1 = PTR_DAT_04bd20d8;
        *(undefined4 *)(plVar13 + 3) = 0;
        *(undefined1 *)((long)plVar13 + 0x1c) = 0;
        *plVar13 = (long)(puVar7 + 0x10);
        plVar13[1] = (long)(puVar1 + 0x10);
        *(undefined4 *)(plVar13 + 2) = 0xbf800000;
        *(long **)(*(long *)(lVar10 + 0x160) + 0x28) = plVar13;
        lVar11 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18);
        if (*(long *)(lVar11 + 0x28) != lVar11 + 0x20) {
          lVar12 = (long)*(int *)(lVar11 + 0x34);
          lVar29 = *(long *)(lVar11 + 0x28) - lVar12;
          do {
            lVar23 = *(long *)(lVar29 + 0x160);
            *(undefined8 *)(lVar23 + 0x50) = 0;
            for (lVar17 = *(long *)(lVar23 + 0x10); lVar17 != 0;
                lVar17 = *(long *)(*(long *)(lVar17 + 0x58) + 0x20)) {
              lVar24 = *(long *)(*(long *)(lVar17 + 0x160) + 0x28);
              if (lVar24 != 0) {
                *(long *)(lVar23 + 0x50) = lVar24;
              }
              if (*(long *)(lVar17 + 0x58) == 0) break;
            }
            lVar29 = *(long *)(lVar29 + lVar12 + 8) - lVar12;
          } while (lVar29 != (lVar11 + 0x20) - lVar12);
        }
        if (0.0 <= (float)piVar2[0x20]) {
          *(int *)(plVar13 + 3) = piVar2[0x20];
        }
        bVar8 = piVar2[0x1f] != 0;
      }
      *(bool *)(lVar28 + 0x5d) = bVar8;
    }
    iVar38 = piVar2[0x24];
    fVar33 = (float)piVar2[0x25];
    iVar32 = piVar2[0x22];
    iVar36 = piVar2[0x23];
    if ((0.0 <= fVar33) && (fVar33 <= 1.0)) {
      *(float *)(lVar10 + 0x14c) = fVar33;
    }
    *(int *)(lVar10 + 0x150) = piVar2[0x26];
    lVar28 = *(long *)(lVar10 + 0x88);
    if (lVar28 != 0) {
      if (*(char *)(lVar28 + 8) == '\0') {
        *(undefined8 *)(lVar28 + 0x40) = 0;
        *(undefined4 *)(lVar28 + 0x1c) = 0;
        *(undefined1 *)(lVar28 + 8) = 1;
      }
      *(int *)(lVar28 + 0xc) = iVar32;
      *(int *)(lVar28 + 0x10) = iVar36;
      *(int *)(lVar28 + 0x14) = iVar38;
      *(undefined1 *)(lVar28 + 0x18) = 0;
      if (0 < piVar2[0x27]) {
        lVar11 = 0;
        piVar31 = piVar2 + 0x2c;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          local_80 = *(undefined **)(piVar31 + -3);
          lStack_88 = 0;
          if (param_2[3] != 0) {
            lStack_88 = param_2[3] + (long)piVar31[-4] + 8;
          }
          local_78 = (byte *)CONCAT44(*piVar31,piVar31[-1]);
          local_90 = puVar1;
          if (((*(long *)PTR_DAT_04bc3ee8 != 0) &&
              (lVar29 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x18), lVar29 != 0)) &&
             (lVar29 = FUN_03ba4630(lVar29,&local_90), lVar29 != 0)) {
            FUN_03ba7040(lVar28,lVar29,&local_80,param_5);
          }
          lVar11 = lVar11 + 1;
          piVar31 = piVar31 + 5;
        } while (lVar11 < piVar2[0x27]);
      }
    }
    if (piVar2[1] == 0) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = (byte *)pcVar4;
      if ((*(char *)(param_1 + 8) != '\0') && (*pcVar4 != '\0')) {
        plVar13 = (long *)FUN_03ba4630(param_1,&local_80);
        if (plVar13 != (long *)0x0) {
          if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
             (iVar32 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar32 != 0)) {
            *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc3d48);
          }
          uVar21 = (**(code **)(*plVar13 + 0x18))(plVar13,PTR_DAT_04bc3d40);
          if (((uVar21 & 1) != 0) && (0.0 <= (float)piVar2[0x21])) {
            *(int *)(plVar13 + 0x33) = piVar2[0x21];
          }
        }
      }
    }
  }
  if ((piVar2[1] == 1) && (0 < piVar26[2])) {
    iVar32 = 0;
    do {
      FUN_03ba4fb0(param_1,param_2,piVar26,iVar32,param_5);
      iVar32 = iVar32 + 1;
    } while (iVar32 < piVar26[2]);
  }
  if (*(long *)(lVar10 + 0x88) == 0) goto LAB_03ba5808;
  if (*(ushort *)(*param_2 + 6) < 3) {
LAB_03ba5800:
    bVar8 = false;
  }
  else {
    if (*(int *)(param_2[2] + 8) <= piVar30[1]) goto LAB_03ba5800;
    lVar28 = (long)*(int *)(param_2[2] + (long)piVar30[1] * 4 + 0xc) + *param_2;
    bVar8 = false;
    if (lVar28 != 0) {
      bVar8 = *(int *)(lVar28 + (long)*(int *)(lVar28 + 0x9c) * 0x14 + 0xa0) != 0;
    }
  }
  *(bool *)(*(long *)(lVar10 + 0x88) + 0x18) = bVar8;
LAB_03ba5808:
  if (**(char **)(*(long *)PTR_DAT_04bc3ee8 + 0x90) != '\0') {
    lVar28 = *param_2;
    uVar20 = *(ushort *)(lVar28 + 6);
    if (2 < uVar20) {
      iVar32 = piVar30[1];
      if ((((iVar32 < *(int *)(param_2[2] + 8)) &&
           (lVar11 = *(int *)(param_2[2] + (long)iVar32 * 4 + 0xc) + lVar28, lVar11 != 0)) &&
          (lVar11 = lVar11 + (long)*(int *)(lVar11 + 0x9c) * 0x14, 0 < *(int *)(lVar11 + 0xb4))) &&
         (uVar21 = (ulong)*(uint *)(lVar11 + 0xb8), 0 < (int)*(uint *)(lVar11 + 0xb8))) {
        lVar28 = 0;
        puVar27 = (uint *)(lVar11 + 0xbc);
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        do {
          if (lVar28 < (int)uVar21) {
            local_78 = (byte *)((long)puVar27 + (ulong)*puVar27);
            uVar34 = puVar27[1];
          }
          else {
            local_78 = (byte *)0x0;
            uVar34 = 0;
          }
          local_80 = puVar1;
          FUN_03b41fa0(uVar34,lVar10 + 0x98,&local_80);
          uVar21 = (ulong)*(int *)(lVar11 + 0xb8);
          lVar28 = lVar28 + 1;
          puVar27 = puVar27 + 2;
        } while (lVar28 < (long)uVar21);
        lVar28 = *param_2;
        iVar32 = piVar30[1];
        uVar20 = *(ushort *)(lVar28 + 6);
      }
      if (5 < uVar20) {
        if (iVar32 < *(int *)(param_2[2] + 8)) {
          lVar28 = *(int *)(param_2[2] + (long)iVar32 * 4 + 0xc) + lVar28;
          lVar11 = 0;
          if (lVar28 != 0) {
            lVar11 = lVar28 + (long)*(int *)(lVar28 + 0x9c) * 0x14 + 0xa0;
          }
        }
        else {
          lVar11 = 0;
        }
        piVar26 = (int *)0x0;
        if (lVar11 != 0) {
          piVar26 = (int *)(lVar11 + 0x14);
        }
        lVar28 = (long)*piVar26 + (long)piVar26;
        if (lVar28 != -4) {
          local_78 = (byte *)(lVar28 + 10);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          if (**(char **)(*(long *)PTR_DAT_04bc3ee8 + 0x90) != '\0') {
            for (lVar11 = *(long *)(*(char **)(*(long *)PTR_DAT_04bc3ee8 + 0x90) + 0x198);
                lVar11 != 0; lVar11 = *(long *)(lVar11 + lVar29)) {
              (**(code **)(local_80 + 0x18))(&local_80);
              (**(code **)(local_80 + 0x18))(&local_80);
              pbVar18 = local_78;
              (**(code **)(*(long *)(lVar11 + 0x20) + 0x18))((long *)(lVar11 + 0x20));
              if (pbVar18 == *(byte **)(lVar11 + 0x28)) {
LAB_03ba5a84:
                if (*(int *)(lVar11 + 0x30) == -1) {
                  return;
                }
                *(uint *)(lVar10 + 0xe0) =
                     (uint)*(byte *)(lVar28 + 8) | *(int *)(lVar11 + 0x30) << 0x10 |
                     (uint)*(byte *)(lVar28 + 9) << 8;
                return;
              }
              pbVar18 = *(byte **)(lVar11 + 0x28);
              pbVar19 = local_78;
              lVar29 = 0x7ffff;
              while( true ) {
                bVar9 = *pbVar19;
                if (bVar9 != *pbVar18) break;
                if (bVar9 == 0) goto LAB_03ba5a84;
                bVar8 = lVar29 == 0;
                pbVar18 = pbVar18 + 1;
                pbVar19 = pbVar19 + 1;
                lVar29 = lVar29 + -1;
                if (bVar8) goto LAB_03ba5a84;
              }
              lVar29 = 8;
              if (*pbVar18 <= bVar9) {
                lVar29 = 0x10;
              }
            }
          }
        }
      }
    }
  }
  return;
}

