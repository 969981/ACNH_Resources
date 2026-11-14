
/* WARNING: Removing unreachable block (ram,0x01688544) */
/* WARNING: Removing unreachable block (ram,0x01688554) */

void FUN_016884c0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  uint local_88;
  uint uStack_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  byte local_70;
  uint local_68;
  int local_64;
  
  uStack_74 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_78 = 1;
  local_70 = FUN_017baf44();
  local_70 = local_70 & 1;
  local_80 = PTR_DAT_04bb6268 + 0x10;
  local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    lVar10 = FUN_01a4fa00(&local_80);
    puVar8 = PTR_DAT_04bc00c8;
    puVar7 = PTR_DAT_04bb43c0;
    uVar1 = *(int *)(lVar10 + 0x24) + 1;
    uVar14 = *(uint *)(lVar10 + 0x14);
    if (uVar1 != uVar14) {
      uVar5 = *(uint *)(lVar10 + 0x10);
      iVar6 = *(int *)(lVar10 + 0x20);
      puVar2 = PTR_DAT_04bbbad8 + 0x10;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
      uVar15 = uVar5;
      do {
        if (((uVar15 | uVar14) & 1) == 0) {
          local_90 = puVar2;
          local_88 = uVar15;
          uStack_84 = uVar14;
          FUN_01a50240(&local_98,&local_80,0,&local_90);
          if ((short)local_98 != -2) {
            lVar16 = *(long *)puVar7;
            uVar9 = FUN_0277d6c4(&local_98);
            lVar10 = *(long *)puVar7;
            if (lVar10 == 0) {
LAB_01688750:
              lVar10 = *(long *)PTR_DAT_04bbbc68;
              if (((lVar10 != 0) &&
                  ((((*(long *)(lVar10 + 0xb0) != 0 &&
                     (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
                    (*(long *)(lVar10 + 0x488) != 0)) &&
                   ((*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0 &&
                    (*(long *)(lVar10 + 0x2b0) != 0)))))) &&
                 (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)) {
                uVar9 = FUN_0277d6c4(&local_98);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar10 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                  FUN_0124c030(&local_b0,&local_98);
                  local_64 = FUN_0123db50(&local_a8,local_a0);
                  if (local_64 == 0x2c) goto LAB_01688834;
                  uVar11 = FUN_01250da8(&local_b0,3);
                  if ((uVar11 & 1) != 0) {
                    FUN_01250bf0(&local_b0);
                    FUN_011f3390(&local_80,0,&local_a8,&local_90);
                  }
                }
              }
            }
            else {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((*(uint *)(lVar16 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_01688750;
              local_a0 = (uint *)0x0;
              local_a8 = local_98;
              uStack_a4 = uStack_94;
              local_b0 = puVar3;
              uVar9 = FUN_0277d6c4(&local_a8);
              if (*(long *)puVar7 == 0) {
LAB_01688814:
                local_68 = 0xbc;
              }
              else {
                lVar10 = *(long *)(lVar10 + 0x57e58);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((*(uint *)(lVar10 + 0x1d8) <= uVar9) ||
                   (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
                goto LAB_01688814;
                lVar10 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(&local_98);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
                if ((*(uint *)(lVar10 + 0x1d8) <= uVar9) ||
                   (puVar12 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar9 * 8),
                   puVar12 == (uint *)0x0)) goto LAB_01688814;
                local_68 = 0;
                uVar9 = *puVar12;
                local_a0 = puVar12;
                if ((uVar9 != 0) && (puVar12 != (uint *)(ulong)uVar9)) {
                  puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar9);
                  local_68 = 0;
                  if (*puVar13 != 0) {
                    uVar9 = puVar13[1];
                    if ((uVar9 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                      lVar10 = 0xc;
                      if (*(char *)((long)puVar13 + 10) != '\0') {
                        lVar10 = 0x1c;
                      }
                      lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
                      if (lVar10 != 0) {
                        uVar4 = 0;
                        if ((ulong)uVar9 != 0) {
                          uVar4 = (uint)((ulong)((long)puVar12 - lVar10) / (ulong)uVar9);
                        }
                        if (*puVar13 <= uVar4) {
                          uVar4 = 0xffffffff;
                        }
                        if ((uVar4 < *(uint *)puVar8) &&
                           (local_68 = (uint)*(ushort *)
                                              (*(long *)(puVar8 + 8) + (long)(int)uVar4 * 2),
                           local_68 < 0xbd)) goto LAB_01688820;
                      }
                    }
                    local_68 = 0;
                  }
                }
              }
LAB_01688820:
              local_64 = 0x7f;
              if (local_68 != 0x7f) goto LAB_01688844;
LAB_01688834:
              FUN_011f3520(&local_80,0,&local_90);
            }
          }
        }
LAB_01688844:
        if ((int)uVar15 < iVar6) {
          uVar15 = uVar15 + 1;
        }
        else {
          uVar14 = uVar14 + 1;
          uVar15 = uVar5;
        }
      } while ((uVar5 != uVar15) || (uVar1 != uVar14));
    }
  }
  return;
}

