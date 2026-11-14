
void FUN_01a5e690(long param_1)

{
  uint *puVar1;
  void *pvVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  ushort uVar19;
  uint uVar20;
  undefined4 *puVar21;
  int iVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined1 *puVar25;
  int iVar26;
  uint uVar27;
  ulong uVar28;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined *local_7f8;
  undefined1 auStack_7f0 [1876];
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  undefined8 local_88;
  undefined4 *puStack_80;
  
  local_7f8 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f0,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_9c = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 2;
  local_94 = (local_98 ^ local_98 >> 0x1e) * 0x6c078965 + 3;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 4;
  pvVar10 = (void *)FUN_01a451fc(&local_7f8);
  memset(pvVar10,0,0x754);
  puVar6 = PTR_DAT_04bb37e0;
  if (*(long *)(param_1 + 8) != 0) {
    uVar19 = 0;
    iVar26 = 0;
    do {
      piVar3 = (int *)(param_1 + 0x57f30) + (ulong)uVar19 * 8;
      if (0xbc < uVar19) {
        piVar3 = (int *)(param_1 + 0x57f30);
      }
      if (*(long *)(piVar3 + 2) != 0) {
        if (0 < *piVar3) {
          lVar15 = 0;
          puVar18 = *(undefined8 **)(piVar3 + 4);
          do {
            puVar23 = *(undefined8 **)(*(long *)(piVar3 + 2) + lVar15 * 8);
            lVar15 = lVar15 + 1;
            *puVar23 = puVar18;
            *(undefined8 **)(piVar3 + 4) = puVar23;
            puVar18 = puVar23;
          } while (lVar15 < *piVar3);
        }
        pvVar10 = *(void **)(piVar3 + 6);
        *piVar3 = 0;
        if (pvVar10 != (void *)0x0) {
          if (*(long *)PTR_DAT_04bb2698 == 0) {
            free(pvVar10);
          }
          else {
            plVar11 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 0x38))(plVar11,pvVar10);
            }
          }
        }
        piVar3[7] = 0;
        piVar3[5] = 0;
        piVar3[6] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[1] = 0;
        piVar3[2] = 0;
      }
      pvVar10 = (void *)(**(code **)(local_7f8 + 0x18))(&local_7f8);
      memset(pvVar10,0,0x754);
      puStack_80 = &local_800;
      local_88 = &PTR_FUN_049ff448;
      local_800 = iVar26;
      FUN_008a1ba0(&local_7f8,&local_88);
      lVar12 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
      lVar15 = 0;
      uVar28 = 0;
      do {
        puVar1 = (uint *)(lVar12 + lVar15);
        lVar15 = lVar15 + 4;
        uVar7 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        uVar7 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + (int)uVar28;
        uVar28 = (ulong)uVar7;
      } while (lVar15 != 0x754);
      if (uVar7 != 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        if (lVar15 == 0) {
          pvVar10 = malloc(uVar28 << 4);
        }
        else {
          plVar11 = *(long **)(param_1 + 8);
          if (plVar11 == (long *)0x0) {
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar11 = (long *)(lVar15 + 8);
            if (lVar12 != 0) {
              plVar11 = (long *)(lVar12 + 0xa8);
            }
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_01a5e790;
          }
          pvVar10 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,uVar28 << 4,8);
        }
        if (pvVar10 != (void *)0x0) {
          *(void **)(piVar3 + 4) = pvVar10;
          if (uVar7 < 2) {
            uVar16 = 0;
          }
          else {
            uVar16 = (ulong)(uVar7 - 1);
            if (uVar16 - 1 < 7) {
              lVar12 = 0;
            }
            else {
              lVar15 = 0;
              lVar12 = 0;
              do {
                puVar18 = (undefined8 *)((long)pvVar10 + lVar15);
                lVar15 = lVar15 + 0x40;
                lVar12 = lVar12 + 8;
                puVar18[7] = puVar18 + 8;
                puVar18[6] = puVar18 + 7;
                puVar18[5] = puVar18 + 6;
                puVar18[4] = puVar18 + 5;
                puVar18[3] = puVar18 + 4;
                puVar18[2] = puVar18 + 3;
                puVar18[1] = puVar18 + 2;
                *puVar18 = puVar18 + 1;
              } while ((uVar16 & 0xfffffff8) * 8 != lVar15);
            }
            uVar24 = uVar16 & 7;
            if ((uVar7 - 1 & 7) != 0) {
              puVar18 = (void *)((long)pvVar10 + lVar12 * 8);
              do {
                *puVar18 = puVar18 + 1;
                uVar24 = uVar24 - 1;
                puVar18 = puVar18 + 1;
              } while (uVar24 != 0);
            }
          }
          *(undefined8 *)((long)pvVar10 + uVar16 * 8) = 0;
          pvVar2 = (void *)((long)pvVar10 + uVar28 * 8);
          *(void **)(piVar3 + 6) = pvVar10;
          if (pvVar2 != (void *)0x0) {
            *(void **)(piVar3 + 2) = pvVar2;
            *piVar3 = 0;
            piVar3[1] = uVar7;
          }
          uVar27 = 0;
          uVar14 = 0;
LAB_01a5ea70:
          lVar12 = (**(code **)(local_7f8 + 0x20))(&local_7f8);
          lVar15 = 0;
          iVar13 = 0;
          uVar8 = 0;
          do {
            uVar20 = *(uint *)(lVar12 + lVar15);
            uVar5 = uVar20 - (uVar20 >> 1 & 0x55555555);
            uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
            uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
            uVar5 = uVar5 + (uVar5 >> 8);
            uVar5 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar8;
            if (uVar27 < uVar5) {
              if (uVar20 == 0) goto LAB_01a5eb08;
              iVar22 = ((uVar14 & 0xffff) - uVar8) + 2;
              goto LAB_01a5eaf0;
            }
            lVar15 = lVar15 + 4;
            iVar13 = iVar13 + 0x20;
            uVar8 = uVar5;
          } while (lVar15 != 0x754);
          goto LAB_01a5ebc0;
        }
      }
LAB_01a5e790:
      uVar19 = uVar19 + 1;
      iVar13 = 0xbd;
      if (iVar26 < 0xbd) {
        iVar13 = iVar26 + 1;
      }
      iVar26 = iVar13;
    } while (iVar13 != 0xbd);
  }
  return;
  while (uVar20 = uVar20 - 1 & uVar20, uVar20 != 0) {
LAB_01a5eaf0:
    iVar22 = iVar22 + -1;
    if (iVar22 < 2) {
      uVar8 = uVar20 - 1 & (uVar20 ^ 0xffffffff);
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar8 = uVar8 + (uVar8 >> 0x10) & 0x3f;
      goto LAB_01a5eb40;
    }
  }
LAB_01a5eb08:
  uVar8 = 0xffffffff;
LAB_01a5eb40:
  if (uVar8 + iVar13 == -1) {
LAB_01a5ebc0:
    local_800 = *(int *)puVar6;
    local_7fc = *(undefined4 *)(puVar6 + 4);
    goto LAB_01a5ebfc;
  }
  (**(code **)(local_7f8 + 0x10))(&local_88,&local_7f8);
  lVar15 = DAT_053274a0;
  uVar8 = FUN_0277d6c4(&local_88);
  if (DAT_053274a0 == 0) {
LAB_01a5ebd0:
    puVar25 = puVar6 + 3;
    puVar17 = puVar6 + 2;
    uVar4 = *(undefined2 *)puVar6;
    puVar21 = (undefined4 *)(puVar6 + 4);
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01a5ebd0;
    puVar17 = (undefined1 *)((ulong)&local_88 | 2);
    puVar21 = (undefined4 *)((long)&local_88 + 4);
    puVar25 = (undefined1 *)((ulong)&local_88 | 3);
    uVar4 = (undefined2)local_88;
  }
  local_7fc = *puVar21;
  local_800 = CONCAT13(*puVar25,CONCAT12(*puVar17,uVar4));
LAB_01a5ebfc:
  uVar9 = FUN_0277d6c4(&local_800);
  if (((int)uVar27 < piVar3[1]) && (*piVar3 < piVar3[1])) {
    puVar18 = *(undefined8 **)(piVar3 + 4);
    if (puVar18 != (undefined8 *)0x0) {
      *(undefined8 *)(piVar3 + 4) = *puVar18;
    }
    *(undefined4 *)puVar18 = uVar9;
    if (*piVar3 < piVar3[1]) {
      *(undefined8 **)(*(long *)(piVar3 + 2) + (long)*piVar3 * 8) = puVar18;
      *piVar3 = *piVar3 + 1;
    }
  }
  uVar14 = (uVar14 & 0xffff) + 1;
  uVar27 = uVar14 & 0xffff;
  if (uVar7 <= uVar27) goto LAB_01a5e790;
  goto LAB_01a5ea70;
}

