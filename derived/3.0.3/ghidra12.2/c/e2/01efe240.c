
/* WARNING: Removing unreachable block (ram,0x01efe528) */

void FUN_01efe240(long *param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  undefined *puVar10;
  char *pcVar11;
  char cVar12;
  char *pcVar13;
  char cVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  float fVar19;
  undefined *local_210;
  char *local_208;
  undefined4 local_200 [25];
  undefined4 local_19c;
  undefined1 local_196;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_110;
  undefined1 auStack_60 [4];
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  lVar7 = *(long *)PTR_DAT_04bb3968;
  if (lVar7 == 0) {
LAB_01efe32c:
    puVar18 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar16 = *(uint *)(param_2 + 8);
    if ((int)*(uint *)(lVar7 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar7 + 0x169b8) != 0) &&
           (puVar18 = *(uint **)(*(long *)(lVar7 + 0x169b8) + 8), puVar18 != (uint *)0x0)) &&
          ((*(uint *)(lVar7 + 0x169d0) <= uVar16 ||
           (*(char *)(*(long *)(lVar7 + 0x169d8) + (long)(int)uVar16) != '\0')))) &&
         (((uVar16 < *puVar18 && (puVar18[1] != 0)) && ((ushort)puVar18[2] != 0)))) {
        iVar9 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar18 = (uint *)((ulong)(puVar18[1] * uVar16 + (uint)(ushort)puVar18[2] * 8 + iVar9) +
                          (long)puVar18);
        if (puVar18 != (uint *)0x0) goto LAB_01efe334;
      }
      goto LAB_01efe32c;
    }
    if (*(uint *)(lVar7 + 0x16ac8) <= uVar16) goto LAB_01efe32c;
    if (*(uint *)(lVar7 + 0x16ab8) <= uVar16) {
      uVar16 = 0;
    }
    puVar18 = *(uint **)(*(long *)(lVar7 + 0x16ac0) + (ulong)uVar16 * 8);
    if (puVar18 == (uint *)0x0) goto LAB_01efe32c;
  }
LAB_01efe334:
  local_200[0] = 8;
  *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) & 0xfffffe7f;
  FUN_01efa990(&local_58,param_1,*(undefined4 *)(param_2 + 8));
  puVar4 = PTR_DAT_04bc1568;
  puVar3 = PTR_DAT_04bc1560;
  lVar7 = param_1[1];
  pcVar13 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    if (lVar7 == 0) {
LAB_01efe40c:
      pcVar8 = (char *)0x0;
    }
    else {
      uVar16 = *(uint *)(lVar7 + 0x508);
      if (uVar16 != 0xffffffff) {
        puVar10 = &DAT_053fe348 + (ulong)uVar16 * 0xba0;
        if (9 < uVar16) {
          puVar10 = &DAT_053fe348;
        }
        pcVar13 = puVar10 + 0x658;
        goto LAB_01efe3cc;
      }
      uVar16 = *(uint *)(lVar7 + 0x50c);
      if (uVar16 == 0xffffffff) goto LAB_01efe40c;
      pcVar11 = &DAT_05454358 + (ulong)uVar16 * 0x2d8;
      if (0x10 < uVar16) {
        pcVar11 = &DAT_05454358;
      }
      pcVar8 = (char *)0x0;
      if (*pcVar11 != '\0') {
        pcVar8 = pcVar11;
      }
    }
    if (pcVar8 != (char *)0x0) {
      pcVar13 = pcVar8 + 0x90;
    }
    uVar16 = *puVar18;
  }
  else {
LAB_01efe3cc:
    uVar16 = *puVar18;
  }
  if (uVar16 != 0) {
    cVar12 = *PTR_DAT_04bc1560;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar16 = *(uint *)(puVar4 + 100);
        if (-1 < (int)uVar16) {
          pcVar8 = (char *)((ulong)uVar16 + (long)puVar18);
          if (pcVar8 != (char *)0x0) {
            cVar12 = pcVar8[1];
            cVar14 = pcVar8[2];
            if (*pcVar8 != '\0') goto LAB_01efe574;
            goto LAB_01efe558;
          }
          break;
        }
        if (uVar16 != 0xffffffff) break;
      }
      puVar6 = (uint *)(ulong)*puVar18;
      cVar14 = '\0';
      if (*puVar18 == 0) {
        cVar12 = '\0';
        goto LAB_01efe558;
      }
      if (puVar18 == puVar6) break;
      lVar1 = 0xc;
      if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar18 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) {
        cVar14 = '\0';
        cVar12 = '\0';
        goto LAB_01efe558;
      }
      uVar5 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
      *(undefined4 *)(puVar4 + 100) = 0xfffffffe;
      if (uVar5 == 0) break;
      piVar15 = (int *)(lVar1 + 4);
      while (piVar15[-1] != -0x6437a430) {
        piVar15 = piVar15 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_01efe554;
      }
      iVar9 = 0;
      if (*piVar15 != -1) {
        iVar9 = *piVar15;
      }
      *(int *)(puVar4 + 100) = iVar9;
      if (*puVar18 == 0) break;
    } while( true );
  }
LAB_01efe554:
  cVar14 = '\0';
  cVar12 = '\0';
LAB_01efe558:
  if ((cVar12 == '\0') && (cVar14 == '\0')) {
    uVar5 = 0;
  }
  else {
LAB_01efe574:
    puVar3 = PTR_DAT_04bb6298;
    *(undefined4 *)(param_1 + 0x1cb2) = 1;
    sVar2 = *(short *)puVar3;
    if (sVar2 == -1) {
LAB_01efe5e0:
      uVar5 = 0;
    }
    else {
      local_200[0] = 1;
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 1 & 1) == 0) goto LAB_01efe5e0;
      if (*(int *)(pcVar13 + 8) != 0x10) {
        if (*(int *)(pcVar13 + 8) != 0x10) {
          uVar5 = 0;
          if ((((param_3 | param_4) & 1) == 0) || (*(int *)(pcVar13 + 8) == 0xe)) goto LAB_01efe5e4;
          fVar19 = *(float *)(*(long *)(lVar7 + 0x68) + 0x278);
          if ((fVar19 < (float)*(int *)(pcVar13 + 0x38) * 5.0) ||
             ((((float)*(int *)(pcVar13 + 0x48) * 5.0 + 5.0 <= fVar19 ||
               (fVar19 = *(float *)(*(long *)(lVar7 + 0x68) + 0x280),
               fVar19 < (float)*(int *)(pcVar13 + 0x3c) * 5.0)) ||
              ((float)*(int *)(pcVar13 + 0x4c) * 5.0 + 5.0 <= fVar19)))) goto LAB_01efee90;
        }
        goto LAB_01efe5e0;
      }
LAB_01efee90:
      uVar5 = FUN_01efeed0(param_1,*(int *)(pcVar13 + 8) != 0x10);
    }
LAB_01efe5e4:
    if ((*(int *)(pcVar13 + 8) != 0x10) &&
       ((*(int *)(pcVar13 + 8) == 0x10 || (*(int *)(pcVar13 + 8) == 0xe)))) {
      *(undefined4 *)(param_1 + 0x1cb2) = 0;
    }
  }
  switch(*(undefined4 *)(param_2 + 0x10)) {
  case 0:
    FUN_01e63f1c(local_200);
    puVar4 = PTR_DAT_04bc1568;
    puVar3 = PTR_DAT_04bc1560;
    local_200[0] = 0x41;
    if (*puVar18 != 0) {
      cVar12 = *PTR_DAT_04bc1560;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar4 + 0x44);
          if (-1 < (int)uVar16) {
            lVar7 = (ulong)uVar16 + (long)puVar18;
            goto LAB_01efe738;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar18;
        lVar7 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar6)) goto LAB_01efe738;
        lVar7 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar1 = (long)puVar18 + (lVar7 - (long)puVar6);
        if (lVar1 == 0) break;
        uVar5 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
        lVar7 = 0;
        if (uVar5 == 0) goto LAB_01efe738;
        piVar15 = (int *)(lVar1 + 4);
        while (piVar15[-1] != 0x604df507) {
          piVar15 = piVar15 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            lVar7 = 0;
            goto LAB_01efe738;
          }
        }
        iVar9 = 0;
        if (*piVar15 != -1) {
          iVar9 = *piVar15;
        }
        *(int *)(puVar4 + 0x44) = iVar9;
      } while (*puVar18 != 0);
    }
    lVar7 = 0;
LAB_01efe738:
    local_208 = (char *)*(long *)PTR_PTR_04bc18f8;
    if (lVar7 != 0) {
      local_208 = (char *)lVar7;
    }
    local_210 = PTR_DAT_04bb2020 + 0x10;
    FUN_01e5fa8c(auStack_60,&local_210);
    local_124 = local_58;
    uStack_120 = uStack_54;
    if ((int)param_1[0x15ea] < *(int *)((long)param_1 + 0xaf54)) {
      FUN_021920b0(param_1 + 0x15ea,local_200);
    }
    *(undefined4 *)(param_1 + 0x1cb2) = 1;
    break;
  case 1:
    if (((param_4 & 1) != 0) && ((param_3 & 1) == 0)) {
      *(undefined4 *)((long)param_1 + 0x1289c) = 0x10;
    }
    FUN_01e63f1c(local_200);
    puVar4 = PTR_DAT_04bc1568;
    puVar3 = PTR_DAT_04bc1560;
    local_200[0] = 0x42;
    if (*puVar18 != 0) {
      cVar12 = *PTR_DAT_04bc1560;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar4 + 0x44);
          if (-1 < (int)uVar16) {
            lVar7 = (ulong)uVar16 + (long)puVar18;
            goto LAB_01efe8b8;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar18;
        lVar7 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar6)) goto LAB_01efe8b8;
        lVar7 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar1 = (long)puVar18 + (lVar7 - (long)puVar6);
        if (lVar1 == 0) break;
        uVar5 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
        lVar7 = 0;
        if (uVar5 == 0) goto LAB_01efe8b8;
        piVar15 = (int *)(lVar1 + 4);
        while (piVar15[-1] != 0x604df507) {
          piVar15 = piVar15 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            lVar7 = 0;
            goto LAB_01efe8b8;
          }
        }
        iVar9 = 0;
        if (*piVar15 != -1) {
          iVar9 = *piVar15;
        }
        *(int *)(puVar4 + 0x44) = iVar9;
      } while (*puVar18 != 0);
    }
    lVar7 = 0;
LAB_01efe8b8:
    local_208 = (char *)*(long *)PTR_PTR_04bc18f8;
    if (lVar7 != 0) {
      local_208 = (char *)lVar7;
    }
    local_210 = PTR_DAT_04bb2020 + 0x10;
    FUN_01e5fa8c(auStack_60,&local_210);
    local_196 = 1;
    local_19c = 1;
    if ((int)param_1[0x15ea] < *(int *)((long)param_1 + 0xaf54)) {
      FUN_021920b0(param_1 + 0x15ea,local_200);
    }
    *(undefined4 *)(param_1 + 0x1cb2) = 1;
    break;
  case 6:
    FUN_01e63f1c(local_200);
    puVar4 = PTR_DAT_04bc1568;
    puVar3 = PTR_DAT_04bc1560;
    local_200[0] = 10;
    local_110 = 1;
    local_124 = local_58;
    uStack_120 = uStack_54;
    if (*puVar18 != 0) {
      cVar12 = *PTR_DAT_04bc1560;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar4 + 0x9c);
          if (-1 < (int)uVar16) {
            pcVar13 = (char *)((ulong)uVar16 + (long)puVar18);
            goto LAB_01efea28;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar18;
        pcVar13 = (char *)0x0;
        if ((*puVar18 == 0) || (puVar18 == puVar6)) goto LAB_01efea28;
        lVar7 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar18 + (lVar7 - (long)puVar6);
        if (lVar7 == 0) break;
        uVar5 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x9c) = 0xfffffffe;
        pcVar13 = (char *)0x0;
        if (uVar5 == 0) goto LAB_01efea28;
        piVar15 = (int *)(lVar7 + 4);
        while (piVar15[-1] != -0x71543da9) {
          piVar15 = piVar15 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            pcVar13 = (char *)0x0;
            goto LAB_01efea28;
          }
        }
        iVar9 = 0;
        if (*piVar15 != -1) {
          iVar9 = *piVar15;
        }
        *(int *)(puVar4 + 0x9c) = iVar9;
      } while (*puVar18 != 0);
    }
    pcVar13 = (char *)0x0;
LAB_01efea28:
    puVar3 = PTR_s_cDefault_04bc1610;
    local_210 = PTR_DAT_04bb2020 + 0x10;
    local_208 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_208 = pcVar13;
    }
    uVar16 = 0;
    do {
      pcVar13 = "";
      if (uVar16 < 0x36) {
        pcVar13 = *(char **)(puVar3 + (ulong)uVar16 * 8 + 0x370);
      }
      (**(code **)(local_210 + 0x18))(&local_210);
      if (pcVar13 == local_208) {
LAB_01efeb1c:
        local_5c = uVar16;
        break;
      }
      if (*pcVar13 == *local_208) {
        if (*pcVar13 == '\0') goto LAB_01efeb1c;
        lVar7 = 0x7fffe;
        pcVar8 = local_208;
        while( true ) {
          if (pcVar13[1] != pcVar8[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01efeb1c;
          if (pcVar13[2] != pcVar8[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01efeb1c;
          if ((lVar7 == 0) || (cVar12 = pcVar13[3], cVar12 != pcVar8[3])) break;
          lVar7 = lVar7 + -3;
          pcVar8 = pcVar8 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar12 == '\0') goto LAB_01efeb1c;
        }
      }
      uVar17 = 0x36;
      if ((int)uVar16 < 0x36) {
        uVar17 = uVar16 + 1;
      }
      uVar16 = uVar17;
    } while (uVar17 != 0x36);
    local_196 = 1;
    if (*(int *)((long)param_1 + 0xaf54) <= (int)param_1[0x15ea]) {
      return;
    }
    goto LAB_01efedcc;
  case 0xe:
    (**(code **)(*param_1 + 0x3f0))(param_1);
    break;
  case 0xf:
    if (((*(int *)(pcVar13 + 8) != 0x10) && (*(int *)(pcVar13 + 8) != 0xe)) ||
       (*(int *)(pcVar13 + 8) == 0x10)) {
      sVar2 = *(short *)PTR_DAT_04bb6298;
      if (sVar2 == -1) {
LAB_01efeddc:
        if ((uVar5 & 1) != 0) {
          return;
        }
        uVar5 = FUN_01f00ff0(param_1);
        if ((uVar5 & 1) == 0) {
          FUN_01f00d00(param_1);
          return;
        }
        return;
      }
      local_200[0] = 0;
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 & 1) == 0) goto LAB_01efeddc;
    }
    FUN_01e63f1c(local_200);
    puVar4 = PTR_DAT_04bc1568;
    puVar3 = PTR_DAT_04bc1560;
    local_200[0] = 10;
    local_110 = 1;
    local_124 = local_58;
    uStack_120 = uStack_54;
    if (*puVar18 != 0) {
      cVar12 = *PTR_DAT_04bc1560;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar16 = *(uint *)(puVar4 + 0x9c);
          if (-1 < (int)uVar16) {
            pcVar13 = (char *)((ulong)uVar16 + (long)puVar18);
            goto LAB_01efeccc;
          }
          if (uVar16 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar18;
        pcVar13 = (char *)0x0;
        if ((*puVar18 == 0) || (puVar18 == puVar6)) goto LAB_01efeccc;
        lVar7 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar6)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar18 + (lVar7 - (long)puVar6);
        if (lVar7 == 0) break;
        uVar5 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x9c) = 0xfffffffe;
        pcVar13 = (char *)0x0;
        if (uVar5 == 0) goto LAB_01efeccc;
        piVar15 = (int *)(lVar7 + 4);
        while (piVar15[-1] != -0x71543da9) {
          piVar15 = piVar15 + 2;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            pcVar13 = (char *)0x0;
            goto LAB_01efeccc;
          }
        }
        iVar9 = 0;
        if (*piVar15 != -1) {
          iVar9 = *piVar15;
        }
        *(int *)(puVar4 + 0x9c) = iVar9;
      } while (*puVar18 != 0);
    }
    pcVar13 = (char *)0x0;
LAB_01efeccc:
    puVar3 = PTR_s_cDefault_04bc1610;
    local_210 = PTR_DAT_04bb2020 + 0x10;
    local_208 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_208 = pcVar13;
    }
    uVar16 = 0;
    do {
      pcVar13 = "";
      if (uVar16 < 0x36) {
        pcVar13 = *(char **)(puVar3 + (ulong)uVar16 * 8 + 0x370);
      }
      (**(code **)(local_210 + 0x18))(&local_210);
      if (pcVar13 == local_208) {
LAB_01efedbc:
        local_5c = uVar16;
        break;
      }
      if (*pcVar13 == *local_208) {
        if (*pcVar13 == '\0') goto LAB_01efedbc;
        lVar7 = 0x7fffe;
        pcVar8 = local_208;
        while( true ) {
          if (pcVar13[1] != pcVar8[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01efedbc;
          if (pcVar13[2] != pcVar8[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01efedbc;
          if ((lVar7 == 0) || (cVar12 = pcVar13[3], cVar12 != pcVar8[3])) break;
          lVar7 = lVar7 + -3;
          pcVar8 = pcVar8 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar12 == '\0') goto LAB_01efedbc;
        }
      }
      uVar17 = 0x36;
      if ((int)uVar16 < 0x36) {
        uVar17 = uVar16 + 1;
      }
      uVar16 = uVar17;
    } while (uVar17 != 0x36);
    if (*(int *)((long)param_1 + 0xaf54) <= (int)param_1[0x15ea]) {
      return;
    }
LAB_01efedcc:
    FUN_021920b0(param_1 + 0x15ea,local_200);
  }
  return;
}

