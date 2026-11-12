
void FUN_0089b090(long param_1,undefined8 param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  code *pcVar11;
  uint *puVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  ulong *puVar22;
  uint uVar23;
  
  FUN_0089bc80();
  plVar7 = (long *)PTR_DAT_04bb3350;
  plVar20 = (long *)PTR_DAT_04bb2698;
  if (param_3 == (long *)0x0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar3 = (undefined8 *)(lVar21 + 8);
    if (lVar5 != 0) {
      puVar3 = (undefined8 *)(lVar5 + 0xa8);
    }
    param_3 = (long *)*puVar3;
    if (param_3 != (long *)0x0) goto LAB_0089b0f8;
    lVar21 = 1;
  }
  else {
LAB_0089b0f8:
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
    lVar21 = *(long *)(lVar5 + 0xa8);
    *(long **)(lVar5 + 0xa8) = param_3;
  }
  uVar23 = *(uint *)(param_1 + 0x1c0);
  if ((int)uVar23 < 1) {
    if (((*(long *)(param_1 + 0xb0) == 0) ||
        (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 == (uint *)0x0)) ||
       (uVar23 = *puVar12, uVar23 == 0)) goto LAB_0089b510;
    if (0 < (int)uVar23) goto LAB_0089b124;
  }
  else {
LAB_0089b124:
    lVar5 = *plVar20;
    __size = (ulong)uVar23 * 0x28 + 8;
    if (lVar5 == 0) {
      puVar8 = malloc(__size);
joined_r0x0089b1c0:
      if (puVar8 != (ulong *)0x0) {
        *puVar8 = (ulong)uVar23;
        lVar5 = (ulong)uVar23 * 0x28;
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        puVar22 = puVar8;
        do {
          puVar22[2] = (ulong)puVar1;
          puVar22[3] = (ulong)"invalid_name";
          uVar4 = FUN_006bd550("invalid_name",0);
          *(undefined4 *)(puVar22 + 4) = uVar4;
          lVar5 = lVar5 + -0x28;
          *(undefined4 *)(puVar22 + 5) = 0;
          puVar22 = puVar22 + 5;
        } while (lVar5 != 0);
        *(uint *)(param_1 + 0x1d8) = uVar23;
        *(ulong **)(param_1 + 0x1e0) = puVar8 + 1;
        plVar20 = (long *)PTR_DAT_04bb2698;
        if ((int)uVar23 < 1) goto LAB_0089b290;
      }
    }
    else {
      plVar7 = param_3;
      if (param_3 != (long *)0x0) {
LAB_0089b168:
        puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
        goto joined_r0x0089b1c0;
      }
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 != (long *)0x0) goto LAB_0089b168;
    }
    lVar5 = *plVar20;
    if (lVar5 == 0) {
      pvVar9 = malloc((long)(int)(uVar23 << 3));
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar3 = (undefined8 *)(lVar5 + 8);
        if (lVar6 != 0) {
          puVar3 = (undefined8 *)(lVar6 + 0xa8);
        }
        param_3 = (long *)*puVar3;
        if (param_3 == (long *)0x0) goto LAB_0089b290;
      }
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(long)(int)(uVar23 << 3),8);
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0x1f0) = pvVar9;
      *(undefined4 *)(param_1 + 0x1e8) = 0;
      *(uint *)(param_1 + 0x1ec) = uVar23;
    }
  }
LAB_0089b290:
  uVar15 = 0;
  do {
    uVar2 = uVar15;
    if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
      uVar2 = 0;
    }
    *(uint *)(*(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28) = uVar15;
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if (((((*(long *)(param_1 + 0xb0) != 0) &&
            (puVar12 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
           ((*(uint *)(param_1 + 200) <= uVar15 ||
            (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar15) != '\0')))) &&
          ((uVar15 < *puVar12 && (puVar12[1] != 0)))) && ((ushort)puVar12[2] != 0)) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        lVar5 = (ulong)(puVar12[1] * uVar15 + (uint)(ushort)puVar12[2] * 8 + iVar13) + (long)puVar12
        ;
        if (lVar5 != 0) goto LAB_0089b2f0;
      }
LAB_0089b3d0:
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
        uVar2 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28;
      *(undefined8 **)(lVar5 + 0x10) = &DAT_0407ebb1;
      (**(code **)(*(long *)(lVar5 + 8) + 0x18))((long *)(lVar5 + 8));
      uVar4 = FUN_006bd550(*(undefined8 *)(lVar5 + 0x10),0);
      *(undefined4 *)(lVar5 + 0x18) = uVar4;
LAB_0089b408:
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
        uVar2 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28;
      *(undefined4 *)(lVar5 + 0x20) = *(undefined4 *)(lVar5 + 0x18);
    }
    else {
      if (*(uint *)(param_1 + 0x1c0) <= uVar15) goto LAB_0089b3d0;
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1b0) <= uVar15) {
        uVar2 = 0;
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar2 * 8);
      if (lVar5 == 0) goto LAB_0089b3d0;
LAB_0089b2f0:
      uVar14 = *(ulong *)(param_1 + 0x208) & 1;
      pcVar11 = *(code **)(param_1 + 0x200);
      if (uVar14 != 0 || pcVar11 != (code *)0x0) {
        uVar2 = uVar15;
        if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
          uVar2 = 0;
        }
        if (uVar14 != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar5 + ((long)*(ulong *)(param_1 + 0x208) >> 1))
                              );
        }
        lVar6 = *(long *)(param_1 + 0x1e0);
        lVar5 = lVar6 + (long)(int)uVar2 * 0x28;
        uVar10 = (*pcVar11)();
        *(undefined8 *)(lVar5 + 0x10) = uVar10;
        (**(code **)(*(long *)(lVar5 + 8) + 0x18))((long *)(lVar5 + 8));
        uVar4 = FUN_006bd550(*(undefined8 *)(lVar5 + 0x10),0);
        *(undefined4 *)(lVar6 + (long)(int)uVar2 * 0x28 + 0x18) = uVar4;
        goto LAB_0089b408;
      }
      uVar14 = *(ulong *)(param_1 + 0x218);
      lVar6 = *(long *)(param_1 + 0x210);
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
        uVar2 = 0;
      }
      lVar17 = *(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28;
      *(undefined8 **)(lVar17 + 0x10) = &DAT_0407ebb1;
      (**(code **)(*(long *)(lVar17 + 8) + 0x18))((long *)(lVar17 + 8));
      uVar4 = FUN_006bd550(*(undefined8 *)(lVar17 + 0x10),0);
      *(undefined4 *)(lVar17 + 0x18) = uVar4;
      if ((uVar14 & 1) == 0 && lVar6 == 0) goto LAB_0089b408;
      pcVar11 = *(code **)(param_1 + 0x210);
      if ((*(ulong *)(param_1 + 0x218) & 1) != 0) {
        pcVar11 = *(code **)(pcVar11 + *(long *)(lVar5 + ((long)*(ulong *)(param_1 + 0x218) >> 1)));
      }
      uVar4 = (*pcVar11)();
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
        uVar2 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28 + 0x20) = uVar4;
    }
    iVar13 = *(int *)(param_1 + 0x1e8);
    if (iVar13 < *(int *)(param_1 + 0x1ec)) {
      uVar2 = uVar15;
      if (*(uint *)(param_1 + 0x1d8) <= uVar15) {
        uVar2 = 0;
      }
      *(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar13 * 8) =
           *(long *)(param_1 + 0x1e0) + (long)(int)uVar2 * 0x28;
      iVar13 = *(int *)(param_1 + 0x1e8) + 1;
      *(int *)(param_1 + 0x1e8) = iVar13;
    }
    plVar7 = (long *)PTR_DAT_04bb3350;
    uVar15 = uVar15 + 1;
  } while (uVar23 != uVar15);
  if (((*(char *)(param_1 + 0x1f8) != '\0') && (*(char *)(param_1 + 0x1f9) == '\0')) &&
     (*(undefined1 *)(param_1 + 0x1f9) = 1, 1 < iVar13)) {
    lVar5 = *(long *)(param_1 + 0x1f0);
    uVar15 = 0;
    uVar23 = iVar13 - 1;
    do {
      if ((int)uVar23 <= (int)uVar15) break;
      lVar6 = *(long *)(lVar5 + (ulong)uVar15 * 8);
      uVar14 = (ulong)uVar15;
      if ((uVar23 - uVar15 & 1) == 0) {
        lVar17 = lVar6;
        uVar16 = uVar14;
      }
      else {
        uVar16 = uVar14 + 1;
        lVar17 = *(long *)(lVar5 + uVar16 * 8);
        if (*(uint *)(lVar17 + 0x20) < *(uint *)(lVar6 + 0x20)) {
          *(long *)(lVar5 + uVar16 * 8) = lVar6;
          *(long *)(lVar5 + uVar14 * 8) = lVar17;
          lVar17 = lVar6;
        }
      }
      uVar18 = (ulong)uVar23;
      uVar23 = uVar15;
      if (~uVar14 + uVar18 != 0) {
        plVar20 = (long *)(lVar5 + 8 + uVar16 * 8);
        do {
          lVar6 = *plVar20;
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar17 + 0x20)) {
            plVar20[-1] = lVar6;
            *plVar20 = lVar17;
            uVar23 = (uint)uVar16;
          }
          else {
            lVar17 = lVar6;
          }
          lVar6 = plVar20[1];
          if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar17 + 0x20)) {
            uVar23 = (uint)uVar16 + 1;
            *plVar20 = lVar6;
            plVar20[1] = lVar17;
          }
          else {
            lVar17 = lVar6;
          }
          uVar16 = uVar16 + 2;
          plVar20 = plVar20 + 2;
        } while (uVar18 != uVar16);
      }
      if ((int)uVar23 <= (int)uVar15) break;
      lVar6 = *(long *)(lVar5 + (ulong)uVar23 * 8);
      uVar16 = (ulong)uVar23;
      uVar15 = uVar23;
      do {
        lVar17 = lVar5 + uVar16 * 8;
        lVar19 = *(long *)(lVar17 + -8);
        if (*(uint *)(lVar6 + 0x20) < *(uint *)(lVar19 + 0x20)) {
          uVar15 = (uint)uVar16;
          *(long *)(lVar17 + -8) = lVar6;
          *(long *)(lVar5 + uVar16 * 8) = lVar19;
        }
        else {
          lVar6 = lVar19;
        }
        uVar16 = uVar16 - 1;
      } while ((long)uVar14 < (long)uVar16);
    } while (uVar15 != uVar23);
  }
LAB_0089b510:
  if (lVar21 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar7 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar21;
  }
  return;
}

