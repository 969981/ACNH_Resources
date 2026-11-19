
void FUN_03ad1710(long param_1,undefined **param_2,byte param_3,long *param_4,long param_5)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  size_t sVar9;
  ulong uVar10;
  undefined *puVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  short *psVar16;
  byte bVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  char *__s;
  undefined1 auVar25 [16];
  long local_cb0;
  undefined8 local_ca8;
  long local_898;
  undefined8 local_890;
  undefined **local_480;
  size_t local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined4 local_3e8;
  undefined1 local_6d;
  
  local_458 = 0;
  local_460 = 8;
  local_440 = 8;
  local_420 = 8;
  local_400 = 8;
  local_450 = 0xffffffffffffffff;
  local_448 = 0;
  local_438 = 0;
  local_430 = 0xffffffffffffffff;
  local_428 = 0;
  local_418 = 0;
  local_410 = 0xffffffffffffffff;
  local_408 = 0;
  local_3f8 = 0;
  local_3f0 = 0xffffffffffffffff;
  local_3e8 = 1;
  local_478 = 0;
  local_468 = 0;
  local_470 = 0;
  local_480 = param_2;
  FUN_003a1b7c(&local_480);
  sVar9 = local_478;
  plVar21 = (long *)PTR_DAT_04bb2698;
  lVar22 = *(long *)PTR_DAT_04bb2698;
  if (lVar22 == 0) {
    pvVar8 = malloc(local_478);
  }
  else {
    plVar7 = param_4;
    if (param_4 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar22 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03ad1814;
      }
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar9,8);
  }
LAB_03ad1814:
  ppuVar1 = (undefined **)(param_1 + 8);
  FUN_003a1c6c(ppuVar1,&local_480,pvVar8,sVar9);
  puVar11 = PTR_DAT_04bc1010;
  lVar22 = FUN_003a1e18(ppuVar1,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
  uVar10 = (ulong)*(ushort *)(*(long *)(param_1 + 8) + 0xe4);
  if (uVar10 != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
    if ((*(byte *)(lVar6 + 0x1c) & 1) == 0) {
      pbVar12 = (byte *)(lVar6 + 0x44);
      uVar14 = 1;
      do {
        uVar18 = uVar14;
        if (uVar10 == uVar18) break;
        bVar17 = *pbVar12;
        pbVar12 = pbVar12 + 0x28;
        uVar14 = uVar18 + 1;
      } while ((bVar17 & 1) == 0);
      bVar4 = uVar10 <= uVar18;
    }
    else {
      bVar4 = false;
    }
    if ((lVar22 != 0) && (!bVar4)) {
      auVar25 = FUN_003a1db0(ppuVar1,*(undefined8 *)(*(long *)puVar11 + 0x30));
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar23 = *plVar21;
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),auVar25._8_8_,0);
        plVar7 = (long *)(lVar23 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      plVar24 = (long *)(param_1 + 0xd0);
      *plVar24 = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined2 *)(param_1 + 0xf2) = 0;
      *(byte *)(param_1 + 0xf0) = *(byte *)(param_1 + 0xf0) & 0xfe;
      FUN_038f8590(DAT_05ae78d0,param_1 + 200,plVar7,lVar22,auVar25._0_8_ & 0xffffffff,3);
      lVar6 = *(long *)(param_1 + 0xe8);
      *(undefined2 *)(param_1 + 0xf2) = 3;
      plVar21 = (long *)PTR_DAT_04bb2698;
      if (lVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *plVar24 - *(long *)(lVar6 + 0x10);
      }
      if (*(char *)(param_1 + 0x210) != '\0') {
        *(undefined1 *)(param_1 + 0x210) = 0;
      }
      if (lVar6 != 0) {
        plVar24 = (long *)(lVar6 + 0x10);
      }
      FUN_0034fb58(param_1 + 0x100,*(undefined8 *)(param_1 + 0xe0),*plVar24);
      FUN_003a2150(ppuVar1,*(undefined8 *)(*(long *)puVar11 + 0x30),param_1 + 0x100,
                   uVar10 & 0xffffffff,lVar22);
      puVar11 = param_2[4];
      uVar10 = (ulong)*(ushort *)(puVar11 + 0xc);
      uVar13 = *(uint *)((long)(puVar11 + 8) + uVar10 * 4 * 4);
      if (*(int *)(puVar11 + 8) < (int)uVar13) {
        do {
          if (uVar13 < 0x80) {
            uVar14 = (ulong)((byte)"gsys_assign_type"[0xf - (ulong)(uVar13 >> 3)] >>
                            ((ulong)uVar13 & 7)) & 1;
          }
          else {
            uVar14 = 0;
          }
          uVar10 = (ulong)*(ushort *)(puVar11 + uVar14 * 2 + uVar10 * 0x10 + 0xc);
          bVar4 = (int)uVar13 < (int)*(uint *)(puVar11 + uVar10 * 0x10 + 8);
          uVar13 = *(uint *)(puVar11 + uVar10 * 0x10 + 8);
        } while (bVar4);
      }
    }
  }
  local_458 = 0;
  local_460 = 8;
  local_450 = 0xffffffffffffffff;
  local_448 = 0;
  local_440 = 8;
  local_438 = 0;
  local_430 = 0xffffffffffffffff;
  local_428 = 0;
  local_420 = 8;
  local_418 = 0;
  local_410 = 0xffffffffffffffff;
  local_478 = 0;
  local_468 = 0;
  local_470 = 0;
  local_480 = ppuVar1;
  FUN_003a2610(&local_480);
  sVar9 = local_478;
  lVar22 = *plVar21;
  if (lVar22 == 0) {
    pvVar8 = malloc(local_478);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar22 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_4 = (long *)*puVar3;
      if (param_4 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03ad1ad4;
      }
    }
    pvVar8 = (void *)(**(code **)(*param_4 + 0x30))(param_4,sVar9,8);
  }
LAB_03ad1ad4:
  FUN_003a26b4(param_1 + 0x90,&local_480,pvVar8,sVar9);
  *(undefined1 *)(param_1 + 0x220) = 1;
  puVar11 = param_2[4];
  if (puVar11 == (undefined *)0x0) goto LAB_03ad20c8;
  iVar5 = *(int *)(puVar11 + 8);
  uVar10 = (ulong)*(ushort *)(puVar11 + 0xc);
  puVar15 = (uint *)((long)(puVar11 + 8) + uVar10 * 4 * 4);
  uVar14 = (ulong)*puVar15;
  if (iVar5 < (int)*puVar15) {
    uVar18 = uVar14;
    uVar20 = uVar10;
    do {
      uVar13 = (uint)uVar18;
      if (uVar13 < 0x80) {
        uVar18 = (ulong)((byte)"gsys_assign_type"[0xf - (uVar18 >> 3)] >> (uVar18 & 7)) & 1;
      }
      else {
        uVar18 = 0;
      }
      uVar20 = (ulong)*(ushort *)(puVar11 + uVar18 * 2 + uVar20 * 0x10 + 0xc);
      puVar15 = (uint *)(puVar11 + uVar20 * 0x10 + 8);
      uVar18 = (ulong)*puVar15;
    } while ((int)uVar13 < (int)*puVar15);
  }
  psVar16 = *(short **)(puVar15 + 2);
  if ((((*psVar16 == 0x10) &&
       (*(long *)(psVar16 + 1) == 0x7373615f73797367 && *(long *)(psVar16 + 5) == 0x657079745f6e6769
       )) && (uVar18 = (long)puVar15 + (-0x18 - (long)puVar11),
             ((uVar18 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
     (param_2[3] != (undefined *)0x0)) {
    plVar21 = (long *)(param_2[3] + (long)(int)(uVar18 >> 4) * 0x28 + 8);
    lVar22 = *plVar21;
    if (lVar22 != 0) {
      lVar6 = 0;
      while( true ) {
        if (lVar22 != 0) {
          __s = (&PTR_s_gsys_assign_material_04b71438)[lVar6];
          sVar9 = strlen(__s);
          uVar10 = (ulong)*(ushort *)(lVar22 + 0xc);
          puVar15 = (uint *)((int *)(lVar22 + 8) + uVar10 * 4);
          uVar13 = *puVar15;
          if (*(int *)(lVar22 + 8) < (int)*puVar15) {
            do {
              uVar14 = (long)((ulong)uVar13 << 0x20) >> 0x23;
              if (uVar14 < sVar9) {
                uVar14 = (ulong)((byte)__s[sVar9 + ~uVar14] >> ((ulong)uVar13 & 7)) & 1;
              }
              else {
                uVar14 = 0;
              }
              uVar10 = (ulong)*(ushort *)(lVar22 + 8 + uVar10 * 0x10 + uVar14 * 2 + 4);
              puVar15 = (uint *)(lVar22 + 8 + uVar10 * 0x10);
              bVar4 = (int)uVar13 < (int)*puVar15;
              uVar13 = *puVar15;
            } while (bVar4);
          }
          if (((sVar9 == **(ushort **)(puVar15 + 2)) &&
              (iVar5 = memcmp(*(ushort **)(puVar15 + 2) + 1,__s,sVar9), iVar5 == 0)) &&
             ((((long)puVar15 + (-0x18 - lVar22) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0)) {
            *(uint *)(param_1 + 0xc0) = *(uint *)(param_1 + 0xc0) | 1 << (ulong)((uint)lVar6 & 0x1f)
            ;
          }
        }
        lVar6 = lVar6 + 1;
        if (lVar6 == 0x10) break;
        lVar22 = *plVar21;
      }
      puVar11 = param_2[4];
      if (puVar11 == (undefined *)0x0) goto LAB_03ad20c8;
      iVar5 = *(int *)(puVar11 + 8);
      uVar10 = (ulong)*(ushort *)(puVar11 + 0xc);
      uVar14 = (ulong)*(uint *)((long)(puVar11 + 8) + uVar10 * 4 * 4);
    }
  }
  if (iVar5 < (int)uVar14) {
    do {
      uVar13 = (uint)uVar14;
      if (uVar13 < 0xa8) {
        uVar14 = (ulong)((byte)"gsys_assign_variation"[0x14 - (uVar14 >> 3)] >> (uVar14 & 7)) & 1;
      }
      else {
        uVar14 = 0;
      }
      uVar10 = (ulong)*(ushort *)(puVar11 + uVar14 * 2 + uVar10 * 0x10 + 0xc);
      puVar15 = (uint *)(puVar11 + uVar10 * 0x10 + 8);
      uVar14 = (ulong)*puVar15;
    } while ((int)uVar13 < (int)*puVar15);
  }
  else {
    puVar15 = (uint *)(puVar11 + uVar10 * 0x10 + 8);
  }
  psVar16 = *(short **)(puVar15 + 2);
  if (((*psVar16 != 0x15) ||
      ((*(long *)(psVar16 + 1) != 0x7373615f73797367 || *(long *)(psVar16 + 5) != 0x697261765f6e6769
       ) || *(long *)((long)psVar16 + 0xf) != 0x6e6f697461697261)) ||
     ((uVar10 = (long)puVar15 + (-0x18 - (long)puVar11),
      ((uVar10 ^ 0xffffffffffffffff) & 0xffffffff0) == 0 || (param_2[3] == (undefined *)0x0))))
  goto LAB_03ad20c8;
  plVar21 = (long *)(param_2[3] + (long)(int)(uVar10 >> 4) * 0x28 + 8);
  lVar22 = *plVar21;
  if (lVar22 == 0) goto LAB_03ad20c8;
  iVar5 = *(int *)(lVar22 + 8);
  uVar10 = (ulong)*(ushort *)(lVar22 + 0xc);
  puVar15 = (uint *)((int *)(lVar22 + 8) + uVar10 * 4);
  uVar13 = *puVar15;
  if (iVar5 < (int)uVar13) {
    uVar14 = uVar10;
    uVar19 = uVar13;
    do {
      uVar2 = 0x30U >> (ulong)(uVar19 & 0x1f) & 1;
      if (7 < uVar19) {
        uVar2 = 0;
      }
      uVar14 = (ulong)*(ushort *)(lVar22 + 8 + uVar14 * 0x10 + (ulong)uVar2 * 2 + 4);
      puVar15 = (uint *)(lVar22 + 8 + uVar14 * 0x10);
      bVar4 = (int)uVar19 < (int)*puVar15;
      uVar19 = *puVar15;
    } while (bVar4);
  }
  if (((**(short **)(puVar15 + 2) == 1) && ((char)(*(short **)(puVar15 + 2))[1] == '0')) &&
     ((((long)puVar15 + (-0x18 - lVar22) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0)) {
    *(undefined1 *)(param_1 + 0x220) = 1;
    lVar22 = *plVar21;
    if (lVar22 == 0) goto LAB_03ad20c8;
    iVar5 = *(int *)(lVar22 + 8);
    uVar10 = (ulong)*(ushort *)(lVar22 + 0xc);
    uVar13 = ((int *)(lVar22 + 8))[uVar10 * 4];
  }
  if (iVar5 < (int)uVar13) {
    uVar14 = uVar10;
    uVar19 = uVar13;
    do {
      uVar2 = 0x31U >> (ulong)(uVar19 & 0x1f) & 1;
      if (7 < uVar19) {
        uVar2 = 0;
      }
      uVar14 = (ulong)*(ushort *)(lVar22 + 8 + uVar14 * 0x10 + (ulong)uVar2 * 2 + 4);
      puVar15 = (uint *)(lVar22 + 8 + uVar14 * 0x10);
      bVar4 = (int)uVar19 < (int)*puVar15;
      uVar19 = *puVar15;
    } while (bVar4);
  }
  else {
    puVar15 = (uint *)(lVar22 + uVar10 * 0x10 + 8);
  }
  if (((**(short **)(puVar15 + 2) == 1) && ((char)(*(short **)(puVar15 + 2))[1] == '1')) &&
     ((((long)puVar15 + (-0x18 - lVar22) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0)) {
    *(undefined1 *)(param_1 + 0x220) = 3;
    lVar22 = *plVar21;
    if (lVar22 == 0) goto LAB_03ad20c8;
    iVar5 = *(int *)(lVar22 + 8);
    uVar10 = (ulong)*(ushort *)(lVar22 + 0xc);
    uVar13 = ((int *)(lVar22 + 8))[uVar10 * 4];
    bVar17 = 3;
    if (iVar5 < (int)uVar13) goto LAB_03ad1f6c;
LAB_03ad1fe8:
    puVar15 = (uint *)(lVar22 + uVar10 * 0x10 + 8);
  }
  else {
    bVar17 = 1;
    if ((int)uVar13 <= iVar5) goto LAB_03ad1fe8;
LAB_03ad1f6c:
    uVar14 = uVar10;
    uVar19 = uVar13;
    do {
      uVar2 = 0x32U >> (ulong)(uVar19 & 0x1f) & 1;
      if (7 < uVar19) {
        uVar2 = 0;
      }
      uVar14 = (ulong)*(ushort *)(lVar22 + 8 + uVar14 * 0x10 + (ulong)uVar2 * 2 + 4);
      puVar15 = (uint *)(lVar22 + 8 + uVar14 * 0x10);
      bVar4 = (int)uVar19 < (int)*puVar15;
      uVar19 = *puVar15;
    } while (bVar4);
  }
  if (((**(short **)(puVar15 + 2) == 1) && ((char)(*(short **)(puVar15 + 2))[1] == '2')) &&
     ((((long)puVar15 + (-0x18 - lVar22) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0)) {
    bVar17 = bVar17 | 4;
    *(byte *)(param_1 + 0x220) = bVar17;
    lVar22 = *plVar21;
    if (lVar22 == 0) goto LAB_03ad20c8;
    iVar5 = *(int *)(lVar22 + 8);
    uVar10 = (ulong)*(ushort *)(lVar22 + 0xc);
    uVar13 = ((int *)(lVar22 + 8))[uVar10 * 4];
  }
  if (iVar5 < (int)uVar13) {
    do {
      uVar19 = 0x33U >> (ulong)(uVar13 & 0x1f) & 1;
      if (7 < uVar13) {
        uVar19 = 0;
      }
      uVar10 = (ulong)*(ushort *)(lVar22 + 8 + uVar10 * 0x10 + (ulong)uVar19 * 2 + 4);
      puVar15 = (uint *)(lVar22 + 8 + uVar10 * 0x10);
      bVar4 = (int)uVar13 < (int)*puVar15;
      uVar13 = *puVar15;
    } while (bVar4);
  }
  else {
    puVar15 = (uint *)(lVar22 + uVar10 * 0x10 + 8);
  }
  if (((**(short **)(puVar15 + 2) == 1) && ((char)(*(short **)(puVar15 + 2))[1] == '3')) &&
     ((((long)puVar15 + (-0x18 - lVar22) ^ 0xffffffffffffffffU) & 0xffffffff0) != 0)) {
    *(byte *)(param_1 + 0x220) = bVar17 | 8;
  }
LAB_03ad20c8:
  *(byte *)(param_1 + 0x221) = *(byte *)(param_1 + 0x221) & 0xfe | param_3 & 1;
  if (param_5 != 0) {
    FUN_006e9454(&local_cb0,"%s_%s",&DAT_040e6c41,"folder");
    local_6d = 0;
    local_478 = (long)&local_470 + 4;
    local_470 = CONCAT35(local_470._5_3_,0x400);
    local_480 = &PTR_LAB_048fcfa0;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","renderer",local_ca8);
    (**(code **)(local_898 + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",local_890);
  }
  return;
}

