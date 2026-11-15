
undefined8 FUN_02213cf0(undefined *param_1,long *param_2,long param_3,long param_4)

{
  void *__dest;
  uint uVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined *puVar16;
  byte *pbVar17;
  undefined *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 *puStack_1d0;
  uint *local_1c8;
  uint local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined *local_90;
  char *local_88;
  undefined4 local_80;
  char local_7c [7];
  undefined1 local_75;
  undefined4 local_6c [3];
  
  puVar16 = PTR_DAT_04bb3768;
  local_75 = 0;
  local_7c[0] = '\0';
  local_98 = 0;
  local_a0 = 0;
  local_88 = local_7c;
  local_80 = 8;
  local_90 = PTR_DAT_04bb3768 + 0x10;
  local_b0 = 0;
  uStack_a8 = 0;
  local_128 = 0;
  local_1b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  FUN_0376c3f0(&local_120,&local_1b0,1,0);
  if (**(char **)(param_3 + 8) != '\0') {
    local_1e8 = (undefined *)((ulong)local_1e8 & 0xffffffff00000000);
    uVar6 = FUN_020fc100(&local_1e8,&local_1b8,param_3);
    if ((uVar6 & 1) != 0) {
      uVar6 = (ulong)local_1e8 & 0xffffffff;
      if ((uint)local_1b8 < 0x20) {
        if (0x22 < (uint)local_1e8) {
          uVar6 = 0;
        }
        uVar11 = 1 << (ulong)((uint)local_1b8 & 0x1f);
        *(uint *)((long)&local_120 + uVar6 * 4) =
             *(uint *)((long)&local_120 + uVar6 * 4) & (uVar11 ^ 0xffffffff);
        uVar6 = (ulong)local_1e8 & 0xffffffff;
        if (0x22 < (uint)local_1e8) {
          uVar6 = 0;
        }
        *(uint *)((long)&local_1b0 + uVar6 * 4) =
             *(uint *)((long)&local_1b0 + uVar6 * 4) & (uVar11 ^ 0xffffffff);
      }
    }
  }
  if (**(char **)(param_4 + 8) == '\0') {
LAB_02213ea4:
    bVar2 = param_1[0x1e4];
  }
  else {
    local_1e8 = (undefined *)((ulong)local_1e8 & 0xffffffff00000000);
    uVar6 = FUN_020fc100(&local_1e8,&local_1b8,param_4);
    if ((uVar6 & 1) == 0) goto LAB_02213ea4;
    uVar6 = (ulong)local_1e8 & 0xffffffff;
    if ((uint)local_1b8 < 0x20) {
      if (0x22 < (uint)local_1e8) {
        uVar6 = 0;
      }
      uVar11 = 1 << (ulong)((uint)local_1b8 & 0x1f);
      *(uint *)((long)&local_120 + uVar6 * 4) =
           *(uint *)((long)&local_120 + uVar6 * 4) & (uVar11 ^ 0xffffffff);
      uVar6 = (ulong)local_1e8 & 0xffffffff;
      if (0x22 < (uint)local_1e8) {
        uVar6 = 0;
      }
      *(uint *)((long)&local_1b0 + uVar6 * 4) =
           *(uint *)((long)&local_1b0 + uVar6 * 4) & (uVar11 ^ 0xffffffff);
      goto LAB_02213ea4;
    }
    bVar2 = param_1[0x1e4];
  }
  if ((bVar2 >> 2 & 1) != 0) {
    pbVar14 = param_1 + 0x1b + (ulong)*(uint *)(param_1 + 0x1e0) * 3;
    if (5 < *(uint *)(param_1 + 0x1e0)) {
      pbVar14 = param_1 + 0x1b;
    }
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && (bVar2 = pbVar14[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(bVar2 & 0x1f) & 1) != 0)) {
      FUN_020fd7d8();
      local_1e8 = puVar16 + 0x10;
      puStack_1d0._0_4_ = (uint)(uint3)puStack_1d0;
      local_1e0 = (undefined8 *)((long)&local_1d8 + 4);
      local_1d8 = (undefined8 *)CONCAT35(local_1d8._5_3_,8);
      FUN_038d1270(&local_1e8,"-----");
      FUN_038d1270(&local_1e8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar6 * 8 + 0xb0),
                   (uint)bVar2);
      (**(code **)(local_1e8 + 0x18))(&local_1e8);
      (**(code **)(local_1e8 + 0x18))(&local_1e8);
      puVar12 = local_1e0;
      (**(code **)(*param_2 + 0x18))(param_2);
      if (puVar12 == (undefined8 *)param_2[1]) {
LAB_02213ff0:
        param_1[0x1e4] = param_1[0x1e4] & 0xfb;
      }
      else {
        uVar6 = 0;
        bVar4 = true;
        do {
          if (*(char *)((long)local_1e0 + uVar6) != *(char *)(param_2[1] + uVar6)) break;
          if (*(char *)((long)local_1e0 + uVar6) == '\0') {
            if (bVar4) goto LAB_02213ff0;
            break;
          }
          bVar4 = uVar6 < 0x80000;
          uVar6 = uVar6 + 1;
        } while (uVar6 != 0x80001);
      }
    }
  }
  local_1b8 = 0;
  uVar11 = 0;
  uVar6 = 0;
  do {
    uVar1 = *(uint *)((long)&local_120 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) != 0) {
      local_1c0[(ulong)(uVar11 >> 5) + 2] =
           local_1c0[(ulong)(uVar11 >> 5) + 2] | 1 << (ulong)(uVar11 & 0x1f);
    }
    uVar11 = uVar11 + 1;
    uVar6 = (ulong)((int)uVar6 + 1);
  } while (uVar11 != 0x23);
  uVar11 = 0;
  uVar6 = 0;
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  do {
    uVar1 = *(uint *)((long)&local_1b0 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2));
    uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
    uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
    uVar1 = uVar1 + (uVar1 >> 8);
    if ((uVar1 + (uVar1 >> 0x10) & 0x3f) != 0) {
      local_1c0[uVar11 >> 5] = local_1c0[uVar11 >> 5] | 1 << (ulong)(uVar11 & 0x1f);
    }
    uVar11 = uVar11 + 1;
    uVar6 = (ulong)((int)uVar6 + 1);
  } while (uVar11 != 0x23);
  local_1e0 = &local_120;
  iVar13 = 0;
  iVar5 = 0;
  local_1d8 = &local_1b0;
  puStack_1d0 = &local_1b8;
  local_1c8 = local_1c0;
  bVar4 = true;
  puVar16 = PTR_DAT_04bc27f0;
  local_1e8 = param_1;
  do {
    lVar8 = (long)iVar5;
    pbVar14 = param_1 + lVar8 + (long)iVar5 * 2;
    uVar6 = (ulong)*pbVar14;
    if (uVar6 < 0x23) {
      pbVar17 = param_1 + lVar8 * 3 + 1;
      if ((*pbVar17 <= (byte)puVar16[uVar6]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(*pbVar17 & 0x1f) & 1) != 0)) {
        FUN_038d1270(&local_90,"-----");
        if ((ulong)*pbVar14 < 0x23) {
          FUN_038d1270(&local_90,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),*pbVar17);
        }
        (**(code **)(local_90 + 0x18))(&local_90);
        (**(code **)(local_90 + 0x18))(&local_90);
        pcVar9 = local_88;
        (**(code **)(*param_2 + 0x18))(param_2);
        puVar16 = PTR_DAT_04bc27f0;
        pcVar7 = (char *)param_2[1];
        if (pcVar9 == pcVar7) {
LAB_0221429c:
          local_6c[0] = 0;
          FUN_02215aa8(param_1,&local_1b8);
          uVar6 = FUN_02216480(pbVar14,&local_1b8,&local_120);
          if ((uVar6 & 1) == 0) {
            *pbVar17 = 0;
            *pbVar14 = 0x23;
            param_1[lVar8 * 3 + 2] = 8;
            FUN_03777ea0(local_6c,iVar13);
          }
          else {
            FUN_03777c00(pbVar14,local_6c,iVar13);
          }
          FUN_0221bd54(&DAT_0545b240,iVar13 + 6);
          break;
        }
        if (*local_88 == *pcVar7) {
          if (*local_88 == '\0') goto LAB_0221429c;
          lVar10 = 0x7fffe;
          pcVar9 = local_88;
          while( true ) {
            if (pcVar9[1] != pcVar7[1]) break;
            if (pcVar9[1] == '\0') goto LAB_0221429c;
            if (pcVar9[2] != pcVar7[2]) break;
            if (pcVar9[2] == '\0') goto LAB_0221429c;
            if ((lVar10 == 0) || (cVar3 = pcVar9[3], cVar3 != pcVar7[3])) break;
            lVar10 = lVar10 + -3;
            pcVar9 = pcVar9 + 3;
            pcVar7 = pcVar7 + 3;
            if (cVar3 == '\0') goto LAB_0221429c;
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
    iVar13 = iVar13 + 1;
    bVar4 = iVar5 != 9;
  } while (iVar13 != 9);
  pbVar14 = param_1 + 0x1b;
  uVar6 = (ulong)*pbVar14;
  if (((uVar6 < 0x23) && ((byte)param_1[0x1c] <= (byte)puVar16[uVar6])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x1c] & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_90,"-----");
    if ((ulong)*pbVar14 < 0x23) {
      FUN_038d1270(&local_90,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0)
                   ,param_1[0x1c]);
    }
    (**(code **)(local_90 + 0x18))(&local_90);
    (**(code **)(local_90 + 0x18))(&local_90);
    pcVar9 = local_88;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    if (pcVar9 != pcVar7) {
      if (*local_88 != *pcVar7) goto LAB_02214418;
      if (*local_88 != '\0') {
        lVar8 = 0;
        do {
          if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_02214418;
          if (local_88[lVar8 + 1] == '\0') break;
          lVar10 = lVar8 + 2;
          if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_02214418;
          lVar8 = lVar8 + 2;
        } while (local_88[lVar10] != '\0');
      }
    }
    uVar15 = 0;
LAB_022149a0:
    bVar4 = true;
    FUN_02214c24(&local_1e8,pbVar14,1,uVar15);
    FUN_0221bd54(&DAT_0545b240,uVar15);
  }
  else {
LAB_02214418:
    pbVar14 = param_1 + 0x1e;
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && ((byte)param_1[0x1f] <= (byte)puVar16[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x1f] & 0x1f) & 1) != 0))
    {
      FUN_038d1270(&local_90,"-----");
      if ((ulong)*pbVar14 < 0x23) {
        FUN_038d1270(&local_90,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),param_1[0x1f]);
      }
      (**(code **)(local_90 + 0x18))(&local_90);
      (**(code **)(local_90 + 0x18))(&local_90);
      pcVar9 = local_88;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar9 != pcVar7) {
        if (*local_88 != *pcVar7) goto LAB_0221452c;
        if (*local_88 != '\0') {
          lVar8 = 0;
          uVar15 = 1;
          do {
            if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_0221452c;
            if (local_88[lVar8 + 1] == '\0') goto LAB_0221497c;
            lVar10 = lVar8 + 2;
            if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_0221452c;
            lVar8 = lVar8 + 2;
          } while (local_88[lVar10] != '\0');
          goto LAB_022149a0;
        }
      }
LAB_0221497c:
      uVar15 = 1;
      goto LAB_022149a0;
    }
LAB_0221452c:
    pbVar14 = param_1 + 0x21;
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && ((byte)param_1[0x22] <= (byte)puVar16[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x22] & 0x1f) & 1) != 0))
    {
      FUN_038d1270(&local_90,"-----");
      if ((ulong)*pbVar14 < 0x23) {
        FUN_038d1270(&local_90,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),param_1[0x22]);
      }
      (**(code **)(local_90 + 0x18))(&local_90);
      (**(code **)(local_90 + 0x18))(&local_90);
      pcVar9 = local_88;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar9 != pcVar7) {
        if (*local_88 != *pcVar7) goto LAB_02214640;
        if (*local_88 != '\0') {
          lVar8 = 0;
          uVar15 = 2;
          do {
            if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_02214640;
            if (local_88[lVar8 + 1] == '\0') goto LAB_02214984;
            lVar10 = lVar8 + 2;
            if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_02214640;
            lVar8 = lVar8 + 2;
          } while (local_88[lVar10] != '\0');
          goto LAB_022149a0;
        }
      }
LAB_02214984:
      uVar15 = 2;
      goto LAB_022149a0;
    }
LAB_02214640:
    pbVar14 = param_1 + 0x24;
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && ((byte)param_1[0x25] <= (byte)puVar16[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x25] & 0x1f) & 1) != 0))
    {
      FUN_038d1270(&local_90,"-----");
      if ((ulong)*pbVar14 < 0x23) {
        FUN_038d1270(&local_90,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),param_1[0x25]);
      }
      (**(code **)(local_90 + 0x18))(&local_90);
      (**(code **)(local_90 + 0x18))(&local_90);
      pcVar9 = local_88;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar9 != pcVar7) {
        if (*local_88 != *pcVar7) goto LAB_02214754;
        if (*local_88 != '\0') {
          lVar8 = 0;
          uVar15 = 3;
          do {
            if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_02214754;
            if (local_88[lVar8 + 1] == '\0') goto LAB_0221498c;
            lVar10 = lVar8 + 2;
            if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_02214754;
            lVar8 = lVar8 + 2;
          } while (local_88[lVar10] != '\0');
          goto LAB_022149a0;
        }
      }
LAB_0221498c:
      uVar15 = 3;
      goto LAB_022149a0;
    }
LAB_02214754:
    pbVar14 = param_1 + 0x27;
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && ((byte)param_1[0x28] <= (byte)puVar16[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x28] & 0x1f) & 1) != 0))
    {
      FUN_038d1270(&local_90,"-----");
      if ((ulong)*pbVar14 < 0x23) {
        FUN_038d1270(&local_90,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),param_1[0x28]);
      }
      (**(code **)(local_90 + 0x18))(&local_90);
      (**(code **)(local_90 + 0x18))(&local_90);
      pcVar9 = local_88;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar9 != pcVar7) {
        if (*local_88 != *pcVar7) goto LAB_02214868;
        if (*local_88 != '\0') {
          lVar8 = 0;
          uVar15 = 4;
          do {
            if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_02214868;
            if (local_88[lVar8 + 1] == '\0') goto LAB_02214994;
            lVar10 = lVar8 + 2;
            if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_02214868;
            lVar8 = lVar8 + 2;
          } while (local_88[lVar10] != '\0');
          goto LAB_022149a0;
        }
      }
LAB_02214994:
      uVar15 = 4;
      goto LAB_022149a0;
    }
LAB_02214868:
    pbVar14 = param_1 + 0x2a;
    uVar6 = (ulong)*pbVar14;
    if (((uVar6 < 0x23) && ((byte)param_1[0x2b] <= (byte)puVar16[uVar6])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x2b] & 0x1f) & 1) != 0))
    {
      FUN_038d1270(&local_90,"-----");
      if ((ulong)*pbVar14 < 0x23) {
        FUN_038d1270(&local_90,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar14 * 8 + 0xb0),param_1[0x2b]);
      }
      (**(code **)(local_90 + 0x18))(&local_90);
      (**(code **)(local_90 + 0x18))(&local_90);
      pcVar9 = local_88;
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar7 = (char *)param_2[1];
      if (pcVar9 != pcVar7) {
        if (*local_88 != *pcVar7) goto LAB_022149c8;
        if (*local_88 != '\0') {
          lVar8 = 0;
          uVar15 = 5;
          do {
            if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_022149c8;
            if (local_88[lVar8 + 1] == '\0') break;
            lVar10 = lVar8 + 2;
            if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_022149c8;
            lVar8 = lVar8 + 2;
          } while (local_88[lVar10] != '\0');
          goto LAB_022149a0;
        }
      }
      uVar15 = 5;
      goto LAB_022149a0;
    }
  }
LAB_022149c8:
  uVar6 = (ulong)(byte)param_1[0x2d];
  if (((uVar6 < 0x23) && ((byte)param_1[0x2e] <= (byte)puVar16[uVar6])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)((byte)param_1[0x2e] & 0x1f) & 1) != 0)) {
    FUN_038d1270(&local_90,"-----");
    if ((ulong)(byte)param_1[0x2d] < 0x23) {
      FUN_038d1270(&local_90,"%s%02d",
                   *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)param_1[0x2d] * 8 + 0xb0),
                   param_1[0x2e]);
    }
    (**(code **)(local_90 + 0x18))(&local_90);
    (**(code **)(local_90 + 0x18))(&local_90);
    pcVar9 = local_88;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar7 = (char *)param_2[1];
    if (pcVar9 != pcVar7) {
      if (*local_88 != *pcVar7) goto LAB_02214b08;
      if (*local_88 != '\0') {
        lVar8 = 0;
        do {
          if ((lVar8 == 0x80000) || (local_88[lVar8 + 1] != pcVar7[lVar8 + 1])) goto LAB_02214b08;
          if (local_88[lVar8 + 1] == '\0') break;
          lVar10 = lVar8 + 2;
          if (local_88[lVar10] != pcVar7[lVar8 + 2]) goto LAB_02214b08;
          lVar8 = lVar8 + 2;
        } while (local_88[lVar10] != '\0');
      }
    }
    local_6c[0] = 2;
    FUN_02215aa8(param_1,local_1c0);
    *(undefined2 *)(param_1 + 0x2d) = 0x23;
    param_1[0x2f] = 8;
    FUN_03777ea0(local_6c,0);
    uVar15 = 1;
  }
  else {
LAB_02214b08:
    uVar15 = 0;
    if (!bVar4) {
      return 0;
    }
  }
  FUN_02214e8c(param_1);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar8 = 0;
    do {
      iVar5 = FUN_02217e90(*(undefined8 *)(*(long *)(param_1 + 0x38) + lVar8 * 8),param_2);
      if (iVar5 == 0) {
        lVar10 = *(long *)(param_1 + 0x38);
        if (*(long *)(lVar10 + lVar8 * 8) == 0) {
          return uVar15;
        }
        uVar11 = *(uint *)(param_1 + 0x30);
        if ((int)uVar11 < 1) {
          return uVar15;
        }
        uVar6 = 0;
        while (*(long **)(lVar10 + uVar6 * 8) != param_2) {
          uVar6 = uVar6 + 1;
          if (uVar11 == uVar6) {
            return uVar15;
          }
        }
        iVar5 = (int)uVar6;
        if (iVar5 < 0) {
          return uVar15;
        }
        if ((int)uVar11 <= iVar5) {
          return uVar15;
        }
        puVar12 = *(undefined8 **)(lVar10 + uVar6 * 8);
        (**(code **)*puVar12)(puVar12);
        *puVar12 = *(undefined8 *)(param_1 + 0x40);
        *(undefined8 **)(param_1 + 0x40) = puVar12;
        iVar13 = *(int *)(param_1 + 0x30);
        if (iVar13 <= iVar5) {
          return uVar15;
        }
        if (iVar5 + 1 < iVar13) {
          __dest = (void *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
          memmove(__dest,(void *)((long)__dest + 8),((long)iVar13 - uVar6) * 8 - 8);
          iVar13 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar13 + -1;
        return uVar15;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x30));
  }
  return uVar15;
}

