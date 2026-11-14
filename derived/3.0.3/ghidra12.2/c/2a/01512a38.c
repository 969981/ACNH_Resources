
undefined8 FUN_01512a38(byte *param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  float *pfVar8;
  undefined8 uVar9;
  ushort uVar10;
  long lVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_04bb6298;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 4 & 1) == 0) goto LAB_01512aa4;
    goto LAB_01512dec;
  }
LAB_01512aa4:
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar11 + 0x338));
      iVar5 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar15 + 7) == -0x10e0fba8) {
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_50 = "CommuneExpanded";
    uVar7 = FUN_0273f0a0(&local_58);
    if ((uVar7 & 1) == 0) goto LAB_01512bc8;
    if (*param_1 < 8) {
      pfVar8 = (float *)FUN_0251b3b0(param_1,0);
      if (pfVar8 == (float *)0x0) {
        return 0;
      }
      iVar5 = (int)((float)(int)pfVar8[2] / 5.0) - (uint)(pfVar8[2] < 0.0);
      if (iVar5 < 0x98) {
        iVar13 = -0x9c;
        if (0.0 <= *pfVar8) {
          iVar13 = -0x9b;
        }
        if (5 < iVar5 - 0x5fU || 5 < (uint)(iVar13 + (int)((float)(int)*pfVar8 / 5.0)))
        goto LAB_01512dec;
      }
      goto LAB_01512bc8;
    }
LAB_01512dec:
    uVar9 = 0;
  }
  else {
LAB_01512bc8:
    puVar3 = PTR_DAT_04bb43c0;
    sVar2 = *(short *)puVar4;
    if (sVar2 != -1) {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x19);
      puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar12 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar12 >> 0x19 & 1) != 0) {
        if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
            ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) ||
           ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 4 &&
            (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) != 5)))) {
          lVar16 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(param_1 + 4);
          lVar11 = *(long *)puVar3;
          if (lVar11 != 0) {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              local_48 = 0;
              local_50 = *(char **)(param_1 + 4);
              local_58 = PTR_DAT_04bc0510 + 0x10;
              uVar6 = FUN_0277d6c4(&local_50);
              if (*(long *)puVar3 == 0) {
LAB_01512dcc:
                uVar10 = 0xbc;
              }
              else {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
                goto LAB_01512dcc;
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1 + 4);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((*(uint *)(lVar11 + 0x1d8) <= uVar6) ||
                   (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   puVar12 == (uint *)0x0)) goto LAB_01512dcc;
                uVar10 = 0;
                uVar6 = *puVar12;
                if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
                  puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
                  uVar10 = 0;
                  if (*puVar14 != 0) {
                    uVar6 = puVar14[1];
                    if ((uVar6 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                      lVar11 = 0xc;
                      if (*(char *)((long)puVar14 + 10) != '\0') {
                        lVar11 = 0x1c;
                      }
                      lVar11 = (long)puVar14 + lVar11 + (ulong)(ushort)puVar14[2] * 8;
                      if (lVar11 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar6 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar6);
                        }
                        if (*puVar14 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar10 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                           uVar10 < 0xbd)) goto LAB_01512dd8;
                      }
                    }
                    uVar10 = 0;
                  }
                }
              }
LAB_01512dd8:
              if (uVar10 == 0xb8) goto LAB_01512dec;
            }
          }
        }
      }
    }
    uVar9 = 1;
  }
  return uVar9;
}

