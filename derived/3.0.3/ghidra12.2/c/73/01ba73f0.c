
void FUN_01ba73f0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  uint *puVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined *puVar22;
  undefined **local_1d8;
  char *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  long *local_1b8;
  int local_1b0;
  undefined1 auStack_1ac [36];
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [255];
  undefined1 local_75;
  undefined1 local_70;
  
  FUN_03b1307c(param_1 + 1,*param_1,param_2,param_3);
  uVar10 = *(uint *)(param_1[1] + 0x38);
  uVar14 = uVar10 - 1;
  if (0 < (int)uVar10) {
    lVar20 = *(long *)PTR_DAT_04bb2698;
    if (lVar20 == 0) {
      pvVar7 = malloc((ulong)uVar10 << 5);
    }
    else {
      plVar5 = (long *)*param_1;
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar20 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_01ba751c;
      }
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)uVar10 << 5,8);
    }
    if (pvVar7 != (void *)0x0) {
      param_1[4] = (long)pvVar7;
      if (1 < uVar10) {
        if (uVar14 == 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          plVar5 = (long *)((long)pvVar7 + 0x18);
          do {
            uVar15 = uVar15 + 2;
            plVar5[-3] = (long)plVar5;
            *plVar5 = (long)(plVar5 + 3);
            plVar5 = plVar5 + 6;
          } while (((ulong)uVar14 & 0xfffffffe) != uVar15);
        }
        if ((uVar14 & 1) != 0) {
          plVar5 = (long *)((long)pvVar7 + uVar15 * 0x18);
          *plVar5 = (long)(plVar5 + 3);
        }
      }
      *(undefined8 *)((long)pvVar7 + (long)(int)(uVar14 * 3) * 8) = 0;
      param_1[5] = (long)pvVar7;
      pvVar7 = (void *)((long)pvVar7 + (ulong)uVar10 * 0x18);
      if (pvVar7 != (void *)0x0) {
        param_1[3] = (long)pvVar7;
        *(undefined4 *)(param_1 + 2) = 0;
        *(uint *)((long)param_1 + 0x14) = uVar10;
      }
    }
  }
LAB_01ba751c:
  local_75 = 0;
  local_178 = 0x100;
  local_180 = local_174;
  local_174[0] = 0;
  local_1b8 = (long *)param_1[1];
  local_70 = 0;
  local_188 = PTR_DAT_04bb21f8 + 0x10;
  local_1b0 = -1;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_1d0 = "";
  local_1d8 = ppuVar1;
  (**(code **)(*local_1b8 + 0x50))(local_1b8,auStack_1ac,&local_1d8);
  iVar4 = (**(code **)(*local_1b8 + 0x60))(local_1b8,auStack_1ac,&local_188,1);
  if (iVar4 != 1) {
LAB_01ba7af8:
    uVar10 = *(uint *)(param_1 + 2);
    if (1 < (int)uVar10) {
      puVar13 = (undefined8 *)param_1[3];
      uVar15 = (ulong)(uVar10 >> 1);
      do {
        uVar14 = (uint)uVar15 * 2;
        puVar16 = (uint *)puVar13[uVar15 - 1 & 0xffffffff];
        if ((int)uVar10 < (int)uVar14) {
          uVar18 = (uint)uVar15;
        }
        else {
          uVar17 = uVar15 & 0xffffffff;
          do {
            if ((int)uVar14 < (int)uVar10) {
              uVar19 = uVar14 | *(uint *)(puVar13 + (int)uVar14)[-1] < *(uint *)puVar13[(int)uVar14]
              ;
            }
            else {
              uVar19 = uVar14;
            }
            uVar18 = (uint)uVar17;
            if (*(uint *)puVar13[(int)(uVar19 - 1)] <= *puVar16) break;
            puVar13[(int)((uint)uVar17 - 1)] = (uint *)puVar13[(int)(uVar19 - 1)];
            uVar14 = uVar19 * 2;
            uVar17 = (ulong)uVar19;
            uVar18 = uVar19;
          } while ((int)uVar14 <= (int)uVar10);
        }
        puVar13[(int)(uVar18 - 1)] = puVar16;
        bVar3 = 1 < (long)uVar15;
        uVar15 = uVar15 - 1;
      } while (bVar3);
      uVar17 = (ulong)uVar10 - 1;
      uVar15 = uVar17 & 0xffffffff;
      puVar16 = (uint *)puVar13[uVar15];
      puVar13[uVar15] = *puVar13;
      uVar15 = (ulong)uVar10;
      if (2 < uVar10) {
        do {
          uVar10 = 2;
          uVar14 = 1;
          do {
            if ((int)uVar10 < (int)uVar17) {
              uVar18 = uVar10 | *(uint *)(puVar13 + (int)uVar10)[-1] < *(uint *)puVar13[(int)uVar10]
              ;
            }
            else {
              uVar18 = uVar10;
            }
            lVar20 = (long)(int)(uVar14 - 1);
            if (*(uint *)puVar13[(int)(uVar18 - 1)] <= *puVar16) goto LAB_01ba7c14;
            puVar13[lVar20] = (uint *)puVar13[(int)(uVar18 - 1)];
            uVar10 = uVar18 << 1;
            uVar14 = uVar18;
          } while ((long)(int)uVar10 < (long)uVar15);
          lVar20 = (long)(int)(uVar18 - 1);
LAB_01ba7c14:
          puVar13[lVar20] = puVar16;
          uVar15 = uVar17 - 1 & 0xffffffff;
          puVar16 = (uint *)puVar13[uVar15];
          puVar13[uVar15] = *puVar13;
          bVar3 = 2 < uVar17;
          uVar15 = uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar3);
      }
      *puVar13 = puVar16;
    }
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x58))(local_1b8,auStack_1ac);
    }
    return;
  }
LAB_01ba7634:
  local_1b0 = local_1b0 + 1;
  local_1d0 = ".msbt";
  local_1d8 = ppuVar1;
  (**(code **)(local_188 + 0x18))(&local_188);
  lVar20 = 0;
  do {
    if (local_180[lVar20] == '\0') goto LAB_01ba76a4;
    if (local_180[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_01ba76a4;
    }
    if (local_180[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_01ba76a4;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_01ba76a4:
  (*(code *)local_1d8[3])(&local_1d8);
  lVar6 = 0;
  do {
    iVar4 = (int)lVar20;
    if (local_1d0[lVar6] == '\0') {
LAB_01ba76f4:
      iVar9 = (int)lVar6;
      if (iVar4 < iVar9) goto LAB_01ba7610;
LAB_01ba770c:
      if ((int)lVar6 < 1) goto LAB_01ba77c0;
      uVar15 = 0;
      goto LAB_01ba7724;
    }
    if (local_1d0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01ba76f4;
    }
    if (local_1d0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      iVar9 = (int)lVar6;
      if (iVar9 <= iVar4) goto LAB_01ba770c;
      goto LAB_01ba7610;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (-1 < iVar4) {
LAB_01ba77c0:
    (*(code *)local_1d8[3])(&local_1d8);
LAB_01ba77dc:
    uVar8 = (**(code **)(*local_1b8 + 0x38))(local_1b8,local_1b0,0);
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar20 = 0;
    do {
      if (local_180[lVar20] == '\0') {
LAB_01ba784c:
        iVar4 = (int)lVar20 + 1;
        goto LAB_01ba7850;
      }
      if (local_180[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01ba784c;
      }
      if (local_180[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01ba784c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    iVar4 = 1;
LAB_01ba7850:
    local_1d0 = (char *)CONCAT44(local_1d0._4_4_,iVar4);
    local_1c8 = PTR_DAT_04bb2020 + 0x10;
    local_1c0 = &DAT_04079e84;
    local_1d8 = &local_188;
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar20 = 0;
    do {
      if (local_180[lVar20] == '\0') {
LAB_01ba78d0:
        iVar9 = (int)lVar20 + 1;
        goto joined_r0x01ba78d4;
      }
      if (local_180[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01ba78d0;
      }
      if (local_180[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01ba78d0;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    iVar9 = 1;
joined_r0x01ba78d4:
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        iVar4 = 0;
      }
      else {
        if ((iVar4 < 0) || (iVar9 < iVar4)) goto LAB_01ba79a0;
        uVar15 = (ulong)(iVar4 - 2);
        do {
          puVar22 = local_1d8[1];
          if (puVar22[uVar15] == '\0') goto LAB_01ba7994;
          (**(code **)(local_1c8 + 0x18))(&local_1c8);
          uVar17 = 0;
          bVar3 = true;
          cVar2 = puVar22[uVar15];
          do {
            if (local_1c0[uVar17] == '\0') break;
            if (local_1c0[uVar17] == cVar2) {
              if (bVar3) goto LAB_01ba7994;
              break;
            }
            if (local_1c0[uVar17 + 1] == '\0') break;
            if (local_1c0[uVar17 + 1] == cVar2) goto LAB_01ba7994;
            if (local_1c0[uVar17 + 2] == '\0') break;
            if (local_1c0[uVar17 + 2] == cVar2) goto LAB_01ba7994;
            bVar3 = uVar17 < 0x7fffe;
            uVar17 = uVar17 + 3;
          } while (uVar17 != 0x80001);
          bVar3 = uVar15 != 0;
          uVar15 = uVar15 - 1;
        } while (bVar3);
        uVar15 = 0xffffffff;
LAB_01ba7994:
        iVar4 = (int)uVar15 + 1;
      }
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,iVar4);
    }
LAB_01ba79a0:
    if ((int)param_1[2] < *(int *)((long)param_1 + 0x14)) {
      puVar16 = (uint *)param_1[4];
      if (puVar16 != (uint *)0x0) {
        param_1[4] = *(long *)puVar16;
      }
      puVar16[2] = 0;
      puVar16[3] = 0;
      puVar16[4] = 0;
      puVar16[5] = 0;
      puVar16[0] = 0;
      puVar16[1] = 0;
      if ((int)param_1[2] < *(int *)((long)param_1 + 0x14)) {
        *(uint **)(param_1[3] + (long)(int)param_1[2] * 8) = puVar16;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      }
    }
    else {
      puVar16 = (uint *)0x0;
    }
    iVar4 = (int)local_1d0;
    uVar15 = (ulong)local_1d0 & 0xffffffff;
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar20 = 0;
    do {
      if (local_180[lVar20] == '\0') goto LAB_01ba7a4c;
      if (local_180[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01ba7a4c;
      }
      if (local_180[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_01ba7a4c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_01ba7a4c:
    pbVar12 = *(byte **)(PTR_PTR_04bb2238 + 8);
    if (iVar4 <= (int)lVar20 && -1 < iVar4) {
      pbVar12 = local_180 + uVar15;
    }
    uVar10 = (uint)*pbVar12;
    if (*pbVar12 != 0) {
      uVar14 = 0xffffffff;
      do {
        pbVar12 = pbVar12 + 1;
        uVar14 = crc32b(uVar14,uVar10,0x4c11db7);
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
      uVar10 = ~uVar14;
    }
    *puVar16 = uVar10;
    *(long *)PTR_DAT_04bd0f80 = *param_1;
    DAT_05ae78a0 = PTR_FUN_04bd0f70;
    DAT_05ae78a8 = (code *)PTR_FUN_04bd0f78;
    lVar20 = FUN_038f3e70(uVar8);
    *(long *)(puVar16 + 2) = lVar20;
    if (*(int *)(lVar20 + 0x24) == -1) {
      if (*(long *)(lVar20 + 0x18) != 0) goto LAB_01ba75d8;
LAB_01ba75e0:
      (*DAT_05ae78a8)(lVar20);
      uVar10 = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
    }
    else {
      uVar10 = **(uint **)(*(long *)(lVar20 + 0x18) + (long)*(int *)(lVar20 + 0x24) * 0x18);
      if ((int)uVar10 < 0) {
LAB_01ba75d8:
        (*DAT_05ae78a8)();
        goto LAB_01ba75e0;
      }
    }
    puVar16[4] = uVar10;
    DAT_05ae78a8 = (code *)0x0;
    DAT_05ae78a0 = (undefined *)0x0;
    *(undefined8 *)PTR_DAT_04bd0f80 = 0;
  }
  goto LAB_01ba7610;
  while( true ) {
    pcVar11 = local_1d0;
    lVar20 = lVar6;
    while( true ) {
      lVar20 = lVar20 + -1;
      if (puVar21[uVar15] != *pcVar11) break;
      if ((puVar21[uVar15] == '\0') || (puVar21 = puVar21 + 1, pcVar11 = pcVar11 + 1, lVar20 == 0))
      goto LAB_01ba77d4;
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == (iVar4 - iVar9) + 1) break;
LAB_01ba7724:
    puVar21 = local_180;
    pcVar11 = local_180 + uVar15;
    (*(code *)local_1d8[3])(&local_1d8);
    if (pcVar11 == local_1d0) {
LAB_01ba77d4:
      if (-1 < (int)uVar15) goto LAB_01ba77dc;
      break;
    }
  }
LAB_01ba7610:
  iVar4 = (**(code **)(*local_1b8 + 0x60))(local_1b8,auStack_1ac,&local_188,1);
  if (iVar4 != 1) goto LAB_01ba7af8;
  goto LAB_01ba7634;
}

