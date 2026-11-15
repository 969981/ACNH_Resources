
/* WARNING: Removing unreachable block (ram,0x022ca5fc) */
/* WARNING: Removing unreachable block (ram,0x022ca5ec) */
/* WARNING: Removing unreachable block (ram,0x022ca620) */

undefined8 FUN_022ca1e0(short *param_1,long param_2,byte *param_3,long param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  short sVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  uint *puVar18;
  short *psVar19;
  undefined8 *puVar20;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined4 local_64;
  
  if (**(char **)(PTR_DAT_04bc39e0 + 8) == '\0') {
    FUN_011ea200(param_2);
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x11);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar14 >> 0x11 & 1) != 0) &&
         (uVar13 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         uVar13 < DAT_0534f408)) &&
        (puVar14 = *(uint **)(DAT_0534f410 + (long)(int)uVar13 * 8), puVar14 != (uint *)0x0)) &&
       (uVar13 = *puVar14, uVar13 != 0 && puVar14 != (uint *)(ulong)uVar13)) {
      puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar13);
      if (((*puVar18 != 0) && (uVar13 = puVar18[1], uVar13 != 0)) &&
         ((ulong)(ushort)puVar18[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar15 != 0) {
          uVar17 = 0;
          if ((ulong)uVar13 != 0) {
            uVar17 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar13);
          }
          if (*puVar18 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar17 * 2) == 1)) {
            local_78 = 0;
            lVar15 = *(long *)PTR_DAT_04bb2720;
            if (lVar15 == 0) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = &DAT_055c04a0;
              if (*(long *)(lVar15 + 0x330) != 0) {
                puVar20 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
                iVar11 = FUN_006bd550(*puVar20,0);
                puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar11 != 0x758f7eaf) {
                  puVar20 = &DAT_055c04a0;
                }
              }
            }
            local_74 = *(undefined4 *)(puVar20 + 7);
            local_70 = FUN_017baf44();
            local_70 = local_70 & 1;
            local_80 = PTR_DAT_04bb6268 + 0x10;
            uVar12 = FUN_01a4f798(&local_80,0,param_2);
            if ((uVar12 & 1) != 0) {
              local_64 = 0;
              lVar15 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
              if (lVar15 != 0) {
                FUN_012e5af4(lVar15,param_2);
              }
            }
            FUN_011de084(param_2,0);
            return 0;
          }
        }
      }
    }
  }
  sVar8 = *param_1;
  sVar9 = param_1[1];
  uVar13 = 0;
  uVar4 = *(undefined1 *)((long)param_1 + 3);
  iVar11 = 0;
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 0xc);
  bVar5 = *param_3;
  psVar19 = (short *)PTR_DAT_04bbbcc8;
  do {
    if (0x23 < *(int *)(PTR_DAT_04bbbcc8 + (long)iVar11 * 0x48 + 0x3c)) {
      if (sVar8 == -2) {
        return 0;
      }
      if (0x27 < uVar13) {
        psVar19 = (short *)PTR_DAT_04bbbcc8;
      }
      *(undefined2 *)((long)psVar19 + 0x45) = 0xff00;
      psVar19[0] = -2;
      psVar19[1] = 0;
      psVar19[2] = 0;
      psVar19[3] = 0;
      FUN_0277d4ac(psVar19);
      psVar19[4] = 0;
      psVar19[5] = 0;
      psVar19[6] = 0;
      psVar19[7] = 0;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      psVar19[8] = 0;
      psVar19[9] = 0;
      psVar19[0x10] = 0;
      psVar19[0x11] = 0;
      psVar19[0x12] = 0;
      psVar19[0x13] = 0;
      *psVar19 = sVar8;
      *(char *)(psVar19 + 1) = (char)sVar9;
      *(undefined1 *)((long)psVar19 + 3) = uVar4;
      *(undefined4 *)(psVar19 + 2) = uVar3;
      *(undefined4 *)(psVar19 + 0x18) = uVar1;
      *(undefined4 *)(psVar19 + 0x1a) = uVar2;
      psVar19[0x1c] = 0;
      psVar19[0x1d] = 0;
      psVar19[0x1e] = 0xc;
      psVar19[0x1f] = 0;
      *(byte *)(psVar19 + 0x23) = bVar5;
      psVar19[0x20] = 0x16;
      psVar19[0x21] = 0;
      *(byte *)(psVar19 + 0x22) = bVar5;
      *(undefined1 *)((long)psVar19 + 0x47) = 0;
      bVar6 = *param_3;
      bVar5 = bVar6;
      if (7 < bVar6) {
        bVar5 = 0xff;
      }
      uVar16 = (long)(char)bVar5 & 0xffffffff;
      uVar12 = uVar16;
      if (7 < bVar6) {
        uVar12 = 0;
      }
      if ((&DAT_0547bb98)[uVar12] == '\0') {
        if (*(char *)(param_4 + 1) != '\0') {
          if (7 < bVar6) {
            uVar16 = 0;
          }
          (&DAT_0547bb90)[uVar16] = (&DAT_0547bb90)[uVar16] + '\x01';
        }
      }
      else {
        (&DAT_0547bb98)[uVar12] = (&DAT_0547bb98)[uVar12] + -1;
        bVar7 = *param_3;
        bVar5 = bVar7;
        if (7 < bVar7) {
          bVar5 = 0xff;
        }
        puVar20 = &DAT_0547b068 + (ulong)(uint)(int)(char)bVar5 * 0xc;
        if (7 < bVar7) {
          puVar20 = &DAT_0547b068;
        }
        if (*(char *)((long)puVar20 + 0x11) == '\0') {
          uVar17 = (uint)bVar7;
          uVar13 = uVar17;
          if (7 < uVar17) {
            uVar13 = 0xffffffff;
          }
          *(uint *)((long)puVar20 + 0xc) = uVar13;
          if (uVar17 < 8) {
            (&DAT_0547b078)[(ulong)(uint)(int)(char)bVar5 * 0x60] = bVar7;
          }
          *(undefined1 *)((long)puVar20 + 0x11) = 1;
          bVar7 = *param_3;
        }
        bVar10 = 7 < bVar7;
        if (bVar10) {
          bVar7 = 0xff;
        }
        puVar20 = &DAT_0547b068 + (ulong)(uint)(int)(char)bVar7 * 0xc;
        if (bVar10) {
          puVar20 = &DAT_0547b068;
        }
        FUN_01393458(puVar20);
      }
      FUN_011de084(param_2,0);
      DAT_0547bac8 = DAT_0547bac8 & (1 << (ulong)(bVar6 & 0x1f) ^ 0xffffffffU);
      return 1;
    }
    uVar13 = uVar13 + 1;
    iVar11 = iVar11 + 1;
    psVar19 = psVar19 + 0x24;
  } while (uVar13 != 0x28);
  return 0;
}

