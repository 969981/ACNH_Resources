
void FUN_020375d0(undefined8 param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *__dest;
  bool bVar7;
  int iVar8;
  long lVar9;
  int *piVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  byte bVar17;
  char cVar18;
  byte *pbVar19;
  long *plVar20;
  long *plVar21;
  undefined4 uVar22;
  long local_1e8;
  undefined1 *local_1e0;
  undefined *local_150;
  char *local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined *local_120;
  undefined1 *local_118;
  int local_110;
  undefined1 local_10c [127];
  undefined1 local_8d;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [7];
  undefined1 local_55;
  
  local_55 = 0;
  local_60 = 8;
  local_5c[0] = 0;
  pbVar19 = (byte *)param_2[1];
  local_68 = local_5c;
  local_70 = PTR_DAT_04bb3768 + 0x10;
  FUN_038d1270(&local_70,"-----");
  uVar13 = (ulong)*pbVar19;
  if (uVar13 < 0x23) {
    FUN_038d1270(&local_70,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar13 * 8 + 0xb0),pbVar19[1]
                );
  }
  FUN_0252d11c(&local_1e8);
  local_150 = PTR_DAT_04bb2020 + 0x10;
  local_148 = "WHEREAREN_ChocolateDemoReserve";
  iVar8 = FUN_02753180(&local_1e8,&local_150);
  if ((iVar8 != 0) && (uVar13 = FUN_0376ea70(&local_70), (uVar13 & 1) != 0)) {
    return;
  }
  (**(code **)(local_70 + 0x18))(&local_70);
  (**(code **)(local_70 + 0x18))(&local_70);
  puVar6 = local_68;
  (**(code **)(param_2[8] + 0x18))(param_2 + 8);
  if (puVar6 == (undefined1 *)param_2[9]) {
    return;
  }
  uVar13 = 0;
  bVar7 = true;
  do {
    if (local_68[uVar13] != ((undefined1 *)param_2[9])[uVar13]) break;
    if (local_68[uVar13] == '\0') {
      if (bVar7) {
        return;
      }
      break;
    }
    bVar7 = uVar13 < 0x80000;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x80001);
  (**(code **)(local_70 + 0x18))(&local_70);
  (**(code **)(local_70 + 0x18))(&local_70);
  puVar6 = local_68;
  (**(code **)(param_2[0xc] + 0x18))(param_2 + 0xc);
  if (puVar6 == (undefined1 *)param_2[0xd]) {
    return;
  }
  uVar13 = 0;
  bVar7 = true;
  do {
    if (local_68[uVar13] != ((undefined1 *)param_2[0xd])[uVar13]) break;
    if (local_68[uVar13] == '\0') {
      if (bVar7) {
        return;
      }
      break;
    }
    bVar7 = uVar13 < 0x80000;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x80001);
  uVar13 = (ulong)*(byte *)param_2[1];
  if (0x22 < uVar13) {
    return;
  }
  bVar17 = ((byte *)param_2[1])[1];
  if ((byte)PTR_DAT_04bc27f0[uVar13] < bVar17) {
    return;
  }
  if ((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) >> (ulong)(bVar17 & 0x1f) & 1) == 0) {
    return;
  }
  uVar2 = *(uint *)(param_2 + 4);
  puVar14 = (undefined *)0x0;
  bVar17 = 0;
  if ((uVar2 != 0xffffffff) && ((int)uVar2 < 0x10)) {
    puVar14 = &DAT_0545b240 + (ulong)uVar2 * 0x118;
    if (0xf < uVar2) {
      puVar14 = &DAT_0545b240;
    }
    if (puVar14[0x8c] == '\0') {
      bVar17 = 0;
      puVar14 = (undefined *)0x0;
    }
    else {
      bVar17 = 1;
      *(undefined4 *)(puVar14 + 0xa4) = *(undefined4 *)((long)param_2 + 0x2c);
      *(int *)(puVar14 + 0xa8) = (int)param_2[6];
      *(int *)(puVar14 + 0xa0) = (int)param_2[5];
      puVar15 = (undefined4 *)*param_2;
      *(undefined4 *)(puVar14 + 0x94) = *puVar15;
      *(undefined4 *)(puVar14 + 0x98) = puVar15[1];
      uVar22 = puVar15[2];
      puVar14[0x90] = 1;
      puVar14[200] = 1;
      *(undefined4 *)(puVar14 + 0x9c) = uVar22;
    }
  }
  puVar5 = PTR_DAT_04bc2340;
  puVar11 = PTR_DAT_04bc2338;
  local_74 = 0;
  lVar9 = *(long *)PTR_DAT_04bb4978;
  if (lVar9 == 0) goto LAB_02037a90;
  uVar2 = *(uint *)(param_2 + 6);
  if ((int)*(uint *)(lVar9 + 0x1c0) < 1) {
    if ((((*(long *)(lVar9 + 0xb0) != 0) &&
         (puVar16 = *(uint **)(*(long *)(lVar9 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
        ((*(uint *)(lVar9 + 200) <= uVar2 ||
         (*(char *)(*(long *)(lVar9 + 0xd0) + (long)(int)uVar2) != '\0')))) &&
       (((uVar2 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar16 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar16 = (uint *)((ulong)(puVar16[1] * uVar2 + (uint)(ushort)puVar16[2] * 8 + iVar8) +
                        (long)puVar16);
      goto LAB_020378b8;
    }
  }
  else if (uVar2 < *(uint *)(lVar9 + 0x1c0)) {
    if (*(uint *)(lVar9 + 0x1b0) <= uVar2) {
      uVar2 = 0;
    }
    puVar16 = *(uint **)(*(long *)(lVar9 + 0x1b8) + (ulong)uVar2 * 8);
LAB_020378b8:
    bVar7 = (bool)(bVar17 ^ 1);
    if (puVar16 == (uint *)0x0) {
      bVar7 = true;
    }
    if (!bVar7) {
      local_150 = (undefined *)CONCAT44(local_150._4_4_,4);
      uVar2 = *puVar16;
      if (uVar2 != 0) {
        cVar18 = *PTR_DAT_04bc2338;
        do {
          if (cVar18 == '\0') {
            cVar18 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar11 = 1;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x38) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            uVar2 = *puVar16;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x20);
            if (-1 < (int)uVar3) {
              if (((byte *)((ulong)uVar3 + (long)puVar16) != (byte *)0x0) &&
                 ((*(byte *)((ulong)uVar3 + (long)puVar16) >> 4 & 1) != 0)) {
                puVar11 = (undefined *)*param_2;
                ppuVar12 = &local_150;
                local_150 = (undefined *)(ulong)(uint)((float)*(int *)(puVar14 + 0xc0) * 5.0 + 5.0);
                local_148 = (char *)CONCAT44(local_148._4_4_,
                                             (float)*(int *)(puVar14 + 0xc4) * 5.0 + 5.0);
                goto LAB_02037a8c;
              }
              break;
            }
            if (uVar3 != 0xffffffff) break;
          }
          lVar4 = (long)puVar16 - (ulong)uVar2;
          if (((ulong)uVar2 == 0) || (lVar4 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar4 == 0) break;
          uVar13 = (ulong)*(ushort *)(lVar4 + 8);
          *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar10 = (int *)(lVar1 + lVar4 + 4);
          while (piVar10[-1] != 0x767f28cb) {
            piVar10 = piVar10 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_02037a7c;
          }
          iVar8 = 0;
          if (*piVar10 != -1) {
            iVar8 = *piVar10;
          }
          *(int *)(puVar5 + 0x20) = iVar8;
          uVar2 = *puVar16;
          if (uVar2 == 0) break;
        } while( true );
      }
    }
  }
LAB_02037a7c:
  puVar11 = PTR_DAT_04bb2150;
  ppuVar12 = (undefined **)PTR_DAT_04bb2150;
LAB_02037a8c:
  FUN_036ff290(lVar9,param_2 + 6,&local_74,puVar11,ppuVar12);
LAB_02037a90:
  local_138 = 0;
  local_148 = (char *)0x0;
  local_140 = 0x3f80000000000000;
  local_150 = (undefined *)0xa00000000;
  local_118 = local_10c;
  local_110 = 0x80;
  local_8d = 0;
  local_10c[0] = 0;
  local_120 = PTR_DAT_04bb2d88 + 0x10;
  local_80 = 0;
  local_84 = 0;
  local_134 = 0;
  local_12c = 0;
  local_88 = 7;
  uVar22 = FUN_021d7d60(param_2[1]);
  local_148 = *(char **)*param_2;
  local_138 = local_74;
  local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)((undefined8 *)*param_2 + 1));
  (**(code **)(local_70 + 0x18))(&local_70);
  puVar6 = local_68;
  plVar20 = (long *)param_2[2];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  plVar21 = (long *)param_2[3];
  lVar9 = plVar20[1];
  (**(code **)(*plVar21 + 0x18))(plVar21);
  FUN_0074fda4(&local_1e8,"%s/AIC:%s/AIF:%s",puVar6,lVar9,plVar21[1]);
  __dest = local_118;
  (**(code **)(local_1e8 + 0x18))(&local_1e8);
  puVar6 = local_1e0;
  if (__dest != local_1e0) {
    (**(code **)(local_1e8 + 0x18))(&local_1e8);
    lVar9 = 0;
    do {
      if (local_1e0[lVar9] == '\0') goto LAB_02037be4;
      if (local_1e0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_02037be4;
      }
      if (local_1e0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        goto LAB_02037be4;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_02037be4:
    iVar8 = (int)lVar9;
    if (local_110 <= (int)lVar9) {
      iVar8 = local_110 + -1;
    }
    memcpy(__dest,puVar6,(long)iVar8);
    __dest[iVar8] = 0;
  }
  local_134 = CONCAT44((int)param_2[4],uVar22);
  local_12c = CONCAT44(local_12c._4_4_,(int)param_2[5]);
  uVar22 = FUN_02030e80(param_1,&local_150);
  if ((undefined4 *)param_2[0x10] != (undefined4 *)0x0) {
    *(undefined4 *)param_2[0x10] = uVar22;
  }
  return;
}

