
void FUN_01fdf240(long param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  undefined8 *__src;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint *puVar14;
  int *piVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 local_180 [2];
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined5 local_124;
  undefined3 uStack_11f;
  undefined5 uStack_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined2 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined *local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined8 local_70;
  
  local_178 = PTR_DAT_04bbc1a0;
  puStack_170 = PTR_DAT_04bb2010;
  lVar10 = *(long *)PTR_DAT_04bb4960;
  if (lVar10 == 0) {
LAB_01fdf5dc:
    *(undefined4 *)(param_1 + 0xaf8c) = 0;
    bVar2 = (*(ushort *)(param_1 + 0x1242c) >> 8 & 1) != 0;
    if (bVar2) {
      uVar8 = 0x5b;
    }
    else {
      uVar8 = 1;
    }
    FUN_01ea5580(param_1,uVar8,0,!bVar2);
    return;
  }
  puVar1 = (uint *)(param_1 + 0x123bc);
  uVar3 = *puVar1;
  if ((int)*(uint *)(lVar10 + 0x5c0) < 1) {
    if ((((*(long *)(lVar10 + 0x4b0) == 0) ||
         (puVar16 = *(uint **)(*(long *)(lVar10 + 0x4b0) + 8), puVar16 == (uint *)0x0)) ||
        ((uVar3 < *(uint *)(lVar10 + 0x4c8) &&
         (*(char *)(*(long *)(lVar10 + 0x4d0) + (long)(int)uVar3) == '\0')))) ||
       (((*puVar16 <= uVar3 || (puVar16[1] == 0)) || ((ushort)puVar16[2] == 0)))) goto LAB_01fdf5dc;
    iVar7 = 0xc;
    if (*(char *)((long)puVar16 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar16 = (uint *)((ulong)(puVar16[1] * uVar3 + (uint)(ushort)puVar16[2] * 8 + iVar7) +
                      (long)puVar16);
  }
  else {
    if (*(uint *)(lVar10 + 0x5c0) <= uVar3) goto LAB_01fdf5dc;
    if (*(uint *)(lVar10 + 0x5b0) <= uVar3) {
      uVar3 = 0;
    }
    puVar16 = *(uint **)(*(long *)(lVar10 + 0x5b8) + (ulong)uVar3 * 8);
  }
  if (puVar16 == (uint *)0x0) goto LAB_01fdf5dc;
  local_180[0] = 0;
  *(undefined4 *)(param_1 + 0xaf8c) = 0x10;
  local_168 = 0;
  local_144 = 0;
  uStack_140 = 0xfffe;
  local_13c = 0;
  local_178 = local_178 + 0x10;
  puStack_170 = puStack_170 + 0x10;
  local_158 = 0;
  local_160 = puStack_170;
  FUN_0277d4ac(&uStack_140);
  local_124 = 0;
  uStack_11f = 0;
  uStack_11c = 0;
  local_128 = 0xbf800000;
  local_114 = 0xfffe;
  local_138 = 0x41c8000041800000;
  local_130 = 0xbf800000bf800000;
  FUN_0277d4ac(&local_114);
  local_10c = 0;
  local_d0 = 0x20;
  local_a0 = local_94;
  local_98 = 0x20;
  local_d8 = (undefined8 *)local_cc;
  local_ad = 0;
  local_e0 = PTR_DAT_04bb2028 + 0x10;
  local_cc[0] = 0;
  local_75 = 0;
  local_94[0] = 0;
  local_180[0] = 0;
  local_168 = 0;
  uStack_148 = 0;
  local_144 = 0;
  local_70 = 0xfffe;
  local_158 = 0;
  uStack_150 = 0;
  local_a8 = local_e0;
  FUN_0277d4ac(&local_70);
  local_128 = 0xbf800000;
  local_124 = 0;
  uStack_11f = 0;
  uStack_11c = 0;
  local_138 = 0x41c8000041800000;
  local_130 = 0xbf800000bf800000;
  uStack_140 = (undefined4)local_70;
  local_13c = local_70._4_4_;
  local_70 = 0xfffe;
  FUN_0277d4ac(&local_70);
  local_10c = 0;
  local_108 = 0;
  local_104 = 0;
  local_e4 = 0;
  local_114 = local_70;
  local_fc = 0;
  local_f4 = 0;
  local_ec = 0;
  *(undefined1 *)local_d8 = 0;
  *local_a0 = 0;
  FUN_01fe32b0(param_1,&local_114,puVar1);
  puVar6 = local_d8;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfbffffffffffffff;
  puVar5 = PTR_DAT_04bc23c8;
  puVar4 = PTR_DAT_04bc23c0;
  if ((*puVar1 != 0x3c) || (*(int *)(*(long *)(param_1 + 8) + 0x750) != 3)) {
    if (*puVar16 != 0) {
      cVar11 = *PTR_DAT_04bc23c0;
      do {
        if (cVar11 == '\0') {
          cVar11 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x34);
          if (-1 < (int)uVar3) {
            puVar13 = (undefined8 *)((ulong)uVar3 + (long)puVar16);
            goto LAB_01fdf518;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar16;
        puVar13 = (undefined8 *)0x0;
        if ((*puVar16 == 0) || (puVar16 == puVar14)) goto LAB_01fdf518;
        lVar10 = 0xc;
        if (*(char *)((long)puVar16 + (10 - (long)puVar14)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar16 + (lVar10 - (long)puVar14);
        if (lVar10 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar14));
        *(undefined4 *)(puVar5 + 0x34) = 0xfffffffe;
        puVar13 = (undefined8 *)0x0;
        if (uVar12 == 0) goto LAB_01fdf518;
        piVar15 = (int *)(lVar10 + 4);
        while (piVar15[-1] != 0x6c6fdb31) {
          piVar15 = piVar15 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            puVar13 = (undefined8 *)0x0;
            goto LAB_01fdf518;
          }
        }
        iVar7 = 0;
        if (*piVar15 != -1) {
          iVar7 = *piVar15;
        }
        *(int *)(puVar5 + 0x34) = iVar7;
      } while (*puVar16 != 0);
    }
    puVar13 = (undefined8 *)0x0;
LAB_01fdf518:
    __src = &DAT_0407ebb1;
    if (puVar13 != (undefined8 *)0x0) {
      __src = puVar13;
    }
    if (local_d8 != __src) {
      lVar10 = 0;
      do {
        if (*(char *)((long)__src + lVar10) == '\0') goto LAB_01fdf638;
        if (*(char *)((long)__src + lVar10 + 1) == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_01fdf638;
        }
        if (*(char *)((long)__src + lVar10 + 2) == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_01fdf638;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01fdf638:
      iVar7 = (int)lVar10;
      if (local_d0 <= (int)lVar10) {
        iVar7 = local_d0 + -1;
      }
      memcpy(local_d8,__src,(long)iVar7);
      *(undefined1 *)((long)puVar6 + (long)iVar7) = 0;
    }
  }
  if (param_2[1] == 1) {
    iVar17 = param_2[10];
    iVar18 = param_2[0xb];
    iVar19 = param_2[0xe];
    iVar20 = param_2[0xf];
    *(short *)(param_1 + 0x11fc8) = (short)param_2[3];
    *(undefined1 *)(param_1 + 0x11fca) = *(undefined1 *)((long)param_2 + 0xe);
    *(undefined1 *)(param_1 + 0x11fcb) = *(undefined1 *)((long)param_2 + 0xf);
    *(int *)(param_1 + 0x11fcc) = param_2[4];
    *(int *)(param_1 + 0x11fe0) = param_2[10];
    *(int *)(param_1 + 0x11fe4) = param_2[0xb];
    *(int *)(param_1 + 0x11ff0) = param_2[0xe];
    *(int *)(param_1 + 0x11ff4) = param_2[0xf];
    iVar7 = param_2[0x10];
    *(float *)(param_1 + 0x11ffc) = ((float)iVar17 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
    *(int *)(param_1 + 0x11ff8) = iVar7;
    *(float *)(param_1 + 0x12004) = ((float)iVar18 * 5.0 + (float)iVar20 * 5.0 + 5.0) * 0.5;
  }
  lVar10 = *(long *)(param_1 + 8);
  if (*(int *)(lVar10 + 0x750) == 3) {
    if (*puVar1 != 0x3c) {
      *(uint *)(lVar10 + 0x69c) = *(uint *)(lVar10 + 0x69c) | 0x40000;
    }
LAB_01fdf824:
    FUN_01fde1f0(param_1);
    if ((*(ushort *)(param_1 + 0x1242c) >> 8 & 1) == 0) {
      uVar9 = 1;
      uVar8 = 1;
      goto LAB_01fdf858;
    }
    uVar9 = 0x5b;
  }
  else {
    if ((*(int *)(lVar10 + 0x750) != 0) || (*param_2 == 4)) goto LAB_01fdf824;
    iVar7 = FUN_006f0400(((float)param_2[10] * 5.0 + (float)param_2[0xe] * 5.0 + 5.0) * 0.5 -
                         *(float *)(*(long *)(lVar10 + 0x68) + 0x278),
                         ((float)param_2[0xb] * 5.0 + (float)param_2[0xf] * 5.0 + 5.0) * 0.5 -
                         *(float *)(*(long *)(lVar10 + 0x68) + 0x280));
    *(long *)(param_1 + 0x12438) = param_1;
    *(long *)(param_1 + 0x12070) = param_1 + 0x12430;
    *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 2;
    *(code **)(param_1 + 0x12440) = FUN_01fde1f0;
    *(undefined8 *)(param_1 + 0x12448) = 0;
    *(undefined8 *)(param_1 + 0x12058) = 2;
    *(undefined8 *)(param_1 + 0x12060) = 0;
    *(undefined4 *)(param_1 + 0x12050) = 1;
    *(int *)(param_1 + 0x12068) =
         (int)(long)((float)(iVar7 + 0x20000000U >> 0x1e) * 90.0 * 11930465.0);
    uVar9 = 0x3e;
    if ((*(ushort *)(param_1 + 0x1242c) & 0x100) != 0) {
      uVar9 = 0x5b;
    }
  }
  uVar8 = 0;
LAB_01fdf858:
  FUN_01ea5580(param_1,uVar9,local_180,uVar8);
  return;
}

