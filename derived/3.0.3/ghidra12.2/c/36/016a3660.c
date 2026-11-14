
/* WARNING: Removing unreachable block (ram,0x016a38d8) */
/* WARNING: Removing unreachable block (ram,0x016a3744) */
/* WARNING: Removing unreachable block (ram,0x016a3a48) */
/* WARNING: Removing unreachable block (ram,0x016a380c) */

void FUN_016a3660(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined *local_98;
  undefined8 local_90;
  byte local_88;
  undefined *local_80;
  char *pcStack_78;
  
  puVar5 = PTR_DAT_04bb2020;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "VillageExtensionLevel2";
  iVar7 = FUN_0273ea30(&local_98);
  if (iVar7 == 1) {
    memset((void *)(param_1 + 8),0xff,0x1000);
    return;
  }
  local_90 = (char *)CONCAT44(*(undefined4 *)(PTR_DAT_04bbbf90 + 0xc),1);
  local_88 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb27a8;
  local_88 = local_88 & 1;
  local_98 = PTR_DAT_04bb6268 + 0x10;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    memset((void *)(param_1 + 8),0xff,0x1000);
  }
  else {
    lVar8 = FUN_01a4fa00(&local_98);
    uVar1 = *(int *)(lVar8 + 0x24) + 1;
    uVar14 = *(uint *)(lVar8 + 0x14);
    if (uVar1 != uVar14) {
      uVar3 = *(uint *)(lVar8 + 0x10);
      iVar7 = *(int *)(lVar8 + 0x20);
      uVar15 = uVar3;
      do {
        if (((uVar15 | uVar14) & 1) == 0) {
          lVar8 = *(long *)puVar6;
          if (*(int *)(lVar8 + 0x200) != 1) {
            pcStack_78 = "SandBankDisable";
            local_80 = puVar5 + 0x10;
            uVar9 = FUN_0273f0a0(&local_80);
            if ((((uVar15 < 0x120) && ((uVar9 & 1) == 0)) && (uVar14 < 0x100)) &&
               ((*(uint *)(lVar8 + (ulong)(uVar15 + uVar14 * 0x120 >> 5) * 4 + 0x1650) >>
                 (ulong)(uVar15 & 0x1f) & 1) != 0)) {
              if (((DAT_05233970 <= (int)uVar15) && ((int)uVar15 <= DAT_05233980)) &&
                 ((DAT_05233974 <= (int)uVar14 && ((int)uVar14 <= DAT_05233984)))) {
                lVar8 = (ulong)((uVar14 & 0xfffffe) * 0x80 + (uVar15 >> 1) >> 5) * 4;
                *(uint *)(param_1 + 8 + lVar8) =
                     *(uint *)(param_1 + 8 + lVar8) | 1 << (ulong)(uVar15 >> 1 & 0x1f);
              }
              goto LAB_016a3a20;
            }
          }
          fVar17 = (float)(int)uVar15 * 0.5;
          fVar16 = (float)(int)uVar14 * 0.5;
          uVar10 = 0;
          if (fVar17 != (float)(int)fVar17) {
            uVar10 = (uint)(fVar17 < 0.0);
          }
          uVar11 = 0;
          if (fVar16 != (float)(int)fVar16) {
            uVar11 = (uint)(fVar16 < 0.0);
          }
          lVar8 = *(long *)(*(long *)puVar6 + 0x38);
          if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xb0), lVar8 == 0)) {
LAB_016a3990:
            lVar8 = 1;
          }
          else {
            uVar12 = ((int)fVar17 - uVar10) - *(int *)(lVar8 + 0x28);
            uVar2 = *(uint *)(lVar8 + 0x18);
            uVar4 = ((int)fVar16 - uVar11) - *(int *)(lVar8 + 0x2c);
            if ((uVar12 < uVar2 && uVar4 <= *(uint *)(lVar8 + 0x1c)) &&
                (uVar2 <= uVar12 || *(uint *)(lVar8 + 0x1c) != uVar4)) {
              uVar12 = uVar12 + uVar2 * uVar4;
LAB_016a3958:
              if (*(uint *)(lVar8 + 0x30) <= uVar12) {
                uVar12 = 0;
              }
              puVar13 = (undefined8 *)(*(long *)(lVar8 + 0x38) + (long)(int)uVar12 * 0x68);
            }
            else if (*(char *)(lVar8 + 0x88) == '\0') {
              puVar13 = &DAT_051a50f0;
            }
            else {
              uVar10 = ((int)fVar17 - uVar10) - *(int *)(lVar8 + 0x98);
              uVar11 = ((int)fVar16 - uVar11) - *(int *)(lVar8 + 0x9c);
              puVar13 = &DAT_051a50f0;
              if (uVar10 < *(uint *)(lVar8 + 0xa0) && uVar11 < *(uint *)(lVar8 + 0xa4)) {
                uVar12 = uVar10 + *(uint *)(lVar8 + 0xa0) * uVar11 + *(int *)(lVar8 + 0x8c);
                goto LAB_016a3958;
              }
            }
            if ((*(byte *)(puVar13 + 2) | 4) == 4) goto LAB_016a3990;
            if (*(byte *)(puVar13 + 2) == 3) goto LAB_016a3a20;
            lVar8 = 2;
          }
          if ((((DAT_05233970 <= (int)uVar15) && ((int)uVar15 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)uVar14)) &&
             (((int)uVar14 <= DAT_05233984 &&
              (uVar10 = (uVar14 & 0x1fffffe) * 0x80 + ((int)uVar15 >> 1), uVar10 >> 0xf == 0)))) {
            lVar8 = param_1 + lVar8 * 0x1008 + (ulong)(uVar10 >> 5) * 4;
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 1 << (ulong)(uVar15 >> 1 & 0x1f);
          }
        }
LAB_016a3a20:
        if ((int)uVar15 < iVar7) {
          uVar15 = uVar15 + 1;
        }
        else {
          uVar14 = uVar14 + 1;
          uVar15 = uVar3;
        }
      } while ((uVar3 != uVar15) || (uVar1 != uVar14));
    }
  }
  return;
}

