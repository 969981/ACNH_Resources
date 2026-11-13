
/* WARNING: Removing unreachable block (ram,0x0122be5c) */

void FUN_0122b970(byte *param_1,float *param_2,short *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  short *psVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  short sVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined4 uVar18;
  byte bVar19;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  uint local_70;
  uint uStack_6c;
  byte local_68 [4];
  undefined4 local_64;
  
  sVar15 = *param_3;
  if (sVar15 != -2) {
    local_78 = PTR_DAT_04bb2010 + 0x10;
    uVar16 = (undefined1)param_3[1];
    uVar17 = *(undefined1 *)((long)param_3 + 3);
    uVar18 = *(undefined4 *)(param_3 + 2);
    local_80 = CONCAT13(uVar17,CONCAT12(uVar16,sVar15));
    uVar9 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0) & 0xfffffffe;
    uVar1 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0) & 0xfffffffe;
    lVar14 = *(long *)PTR_DAT_04bbbc68;
    local_7c = uVar18;
    local_70 = uVar9;
    uStack_6c = uVar1;
    if ((((lVar14 != 0) && (*(long *)(lVar14 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar14 + 0x488) != 0 && (*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar14 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))))) {
      uVar7 = FUN_0277d6c4(param_3);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_88 = *(undefined4 *)param_3;
        uStack_84 = *(undefined4 *)(param_3 + 2);
        FUN_0124c1e8(&local_a0,&local_88,1);
        local_80 = (undefined4)local_a0;
        local_7c = local_a0._4_4_;
        iVar8 = FUN_0277d6c4(&local_80);
        if (((iVar8 == 0x1154) || (iVar8 = FUN_0277d6c4(&local_80), iVar8 == 0x1420)) &&
           (uVar10 = FUN_0122bf28(&local_78), (uVar10 & 1) != 0)) {
          psVar11 = (short *)&DAT_0514f75c;
        }
        else {
          psVar11 = (short *)&local_80;
        }
        sVar15 = *psVar11;
        uVar16 = (undefined1)psVar11[1];
        uVar17 = *(undefined1 *)((long)psVar11 + 3);
        uVar18 = *(undefined4 *)(psVar11 + 2);
      }
    }
    puVar4 = PTR_DAT_04bb2020;
    local_a0 = PTR_DAT_04bb2020 + 0x10;
    local_98 = "ItemThrow";
    FUN_0251aa80(param_1,&local_a0,*(undefined4 *)PTR_DAT_04bb3238,0);
    uVar7 = 0;
    bVar19 = *param_1;
    iVar8 = 0;
    psVar11 = (short *)PTR_DAT_04bbbcc8;
    do {
      if (0x23 < *(int *)(PTR_DAT_04bbbcc8 + (long)iVar8 * 0x48 + 0x3c)) {
        if (sVar15 != -2) {
          if (0x27 < uVar7) {
            psVar11 = (short *)PTR_DAT_04bbbcc8;
          }
          *(undefined2 *)((long)psVar11 + 0x45) = 0xff00;
          psVar11[0] = -2;
          psVar11[1] = 0;
          psVar11[2] = 0;
          psVar11[3] = 0;
          FUN_0277d4ac(psVar11);
          psVar11[4] = 0;
          psVar11[5] = 0;
          psVar11[6] = 0;
          psVar11[7] = 0;
          psVar11[0x1c] = 0;
          psVar11[0x1d] = 0;
          psVar11[0x1e] = 0x17;
          psVar11[0x1f] = 0;
          if (7 < bVar19) {
            bVar19 = 0xff;
          }
          psVar11[8] = 0;
          psVar11[9] = 0;
          *(byte *)(psVar11 + 0x23) = bVar19;
          *(byte *)(psVar11 + 0x22) = bVar19;
          psVar11[0x10] = 0;
          psVar11[0x11] = 0;
          psVar11[0x12] = 0;
          psVar11[0x13] = 0;
          *psVar11 = sVar15;
          *(undefined1 *)(psVar11 + 1) = uVar16;
          *(undefined1 *)((long)psVar11 + 3) = uVar17;
          *(undefined4 *)(psVar11 + 2) = uVar18;
          *(uint *)(psVar11 + 0x18) = uVar9;
          *(uint *)(psVar11 + 0x1a) = uVar1;
          psVar11[0x20] = 0;
          psVar11[0x21] = 0;
          *(undefined1 *)((long)psVar11 + 0x47) = 0;
          bVar19 = *param_1;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 1;
      psVar11 = psVar11 + 0x24;
    } while (uVar7 != 0x28);
    if ((((bVar19 < 8) && (uVar9 = FUN_02582d8c(param_1,1), puVar6 = PTR_DAT_04bb4fb8, uVar9 < 8))
        && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0')) {
      local_a0 = (undefined *)0xa12;
      FUN_0277d4ac(&local_a0);
      uVar10 = FUN_0277d7b4(param_3,&local_a0);
      puVar5 = PTR_DAT_04bb43c0;
      if ((uVar10 & 1) == 0) {
        local_90 = 0;
        local_a0 = PTR_DAT_04bc0510 + 0x10;
        local_98 = (char *)CONCAT44(local_7c,local_80);
        lVar14 = *(long *)PTR_DAT_04bb43c0;
        uVar9 = FUN_0277d6c4(&local_98);
        if (*(long *)puVar5 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar9 = FUN_0277d6c4(&local_80);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if (((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                ((puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar12 != (uint *)0x0 && (uVar9 = *puVar12, uVar9 != 0)))) &&
               (puVar12 != (uint *)(ulong)uVar9)) {
              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
              if (((*puVar13 != 0) && (uVar9 = puVar13[1], uVar9 != 0)) &&
                 ((ulong)(ushort)puVar13[2] != 0)) {
                lVar14 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar14 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar9);
                  }
                  if (*puVar13 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if (((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                      (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                      uVar3 < 0xbd)) && (uVar3 == 0x57)) {
                    sVar15 = *(short *)PTR_DAT_04bb6298;
                    if (sVar15 != -1) {
                      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x11);
                      puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
                      if (0xff < (uint)(int)sVar15) {
                        puVar12 = (uint *)PTR_DAT_04bc39f8;
                      }
                      if ((*puVar12 >> 0x11 & 1) != 0) {
                        return;
                      }
                    }
                    lVar14 = **(long **)PTR_DAT_04bb27d0;
                    if (1 < *(byte *)(lVar14 + 0x476)) {
                      bVar19 = *(byte *)(lVar14 + 0x473);
                      if ((long)(char)bVar19 != 0xffffffffffffffff) {
                        pbVar2 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar19 & 0xffffffffU) * 0x80
                        ;
                        if (7 < bVar19) {
                          pbVar2 = (byte *)(lVar14 + 0x48);
                        }
                        if (((*pbVar2 >> 3 & 1) != 0) && (*(byte *)(lVar14 + 0x472) != bVar19)) {
                          return;
                        }
                      }
                    }
                    if ((((*param_1 < 8) && (uVar9 = FUN_02582d8c(param_1,1), uVar9 < 8)) &&
                        (*(char *)(*(long *)puVar6 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) &&
                       (*(char *)(*(long *)puVar6 + (ulong)uVar9 * 0x13f0 + 0x13d6) != '\0')) {
                      FUN_0279eb50(param_1,param_3);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        local_98 = "MakePitfall";
        local_a0 = puVar4 + 0x10;
        FUN_0279a9f0(param_1,&local_a0,1);
        local_98 = "FillPitCount";
        local_68[0] = *param_1;
        if (7 < local_68[0]) {
          local_68[0] = 0xff;
        }
        local_a0 = puVar4 + 0x10;
        local_64 = FUN_02582fe0(local_68);
        FUN_021294b0(&local_a0,1,&local_64);
      }
    }
  }
  return;
}

