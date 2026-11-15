
/* WARNING: Removing unreachable block (ram,0x022c45a8) */
/* WARNING: Removing unreachable block (ram,0x022c45b8) */
/* WARNING: Removing unreachable block (ram,0x022c45c8) */
/* WARNING: Removing unreachable block (ram,0x022c4998) */
/* WARNING: Removing unreachable block (ram,0x022c49a8) */
/* WARNING: Removing unreachable block (ram,0x022c49b8) */
/* WARNING: Removing unreachable block (ram,0x022c49e0) */
/* WARNING: Removing unreachable block (ram,0x022c49f4) */
/* WARNING: Removing unreachable block (ram,0x022c4a14) */
/* WARNING: Removing unreachable block (ram,0x022c4a2c) */

void FUN_022c444c(int *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  long lVar17;
  undefined *local_88;
  char *pcStack_80;
  uint local_74;
  undefined8 local_70;
  uint local_64;
  
  puVar9 = PTR_DAT_04bb5038;
  puVar8 = PTR_DAT_04bb32e0;
  if ((*(byte *)((long)param_1 + 0x1a) >> 2 & 1) == 0) {
    iVar5 = *param_1;
    local_70 = 0xfffe;
    pbVar4 = PTR_DAT_04bb5038 + (uint)(int)*(char *)((long)param_1 + 0x17);
    if (7 < (uint)(int)*(char *)((long)param_1 + 0x17)) {
      pbVar4 = PTR_DAT_04bb32e0;
    }
    FUN_0277d4ac(&local_70);
    local_70 = *(undefined8 *)(param_1 + 1);
    lVar17 = *(long *)PTR_DAT_04bbbc68;
    if ((((((lVar17 != 0) && (*(long *)(lVar17 + 0xb0) != 0)) &&
          (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0)) &&
         ((*(long *)(lVar17 + 0x488) != 0 && (*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0)))) &&
        (*(long *)(lVar17 + 0x2b0) != 0)) && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)) {
      uVar10 = FUN_0277d6c4(&local_70);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        if (iVar5 == 0) {
          uVar10 = 0;
          local_74 = 0;
        }
        else {
          local_64 = DAT_0547b48c;
          if ((int)DAT_0547b48c <= (int)DAT_0547b490) {
            bVar6 = *pbVar4;
            bVar12 = bVar6;
            if (7 < bVar6) {
              bVar12 = 0xff;
            }
            iVar14 = 2;
            do {
              local_88 = (undefined *)CONCAT44(local_88._4_4_,local_64);
              if (local_64 == 0) {
                piVar16 = &DAT_0547b494;
              }
              else if (local_64 == 0xd) {
                uVar13 = 1;
LAB_022c4614:
                piVar16 = &DAT_0547b494 + uVar13 * 10;
              }
              else if (((int)local_64 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_64)) {
                piVar16 = &DAT_0547b494;
              }
              else {
                uVar10 = (local_64 - DAT_0547b48c) + 2;
                uVar13 = (ulong)uVar10;
                if (uVar10 < 0xe) goto LAB_022c4614;
                piVar16 = &DAT_0547b494;
              }
              piVar3 = piVar16 + ((long)(char)bVar12 & 0xffffffff);
              if (7 < bVar6) {
                piVar3 = piVar16;
              }
              iVar15 = iVar14;
              if (*piVar3 == iVar5) {
                iVar15 = iVar14 + -1;
                local_74 = local_64;
                if (iVar14 < 1) goto LAB_022c4550;
              }
              if (local_64 == DAT_0547b490) break;
              local_64 = local_64 + 1;
              iVar14 = iVar15;
            } while ((int)local_64 <= (int)DAT_0547b490);
          }
          local_74 = 0;
LAB_022c4550:
          if (local_74 == 0) {
            uVar10 = 0;
          }
          else {
            pbVar2 = puVar9 + ((long)(char)*(byte *)((long)param_1 + 0x17) & 0xffffffff);
            if (7 < *(byte *)((long)param_1 + 0x17)) {
              pbVar2 = puVar8;
            }
            bVar12 = *pbVar2;
            if (7 < bVar12) {
              bVar12 = 0xff;
            }
            local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar12);
            FUN_022c4210(&local_88);
            uVar10 = 1 << (ulong)(local_74 & 0x1f);
          }
          local_64 = DAT_0547b48c;
          if ((int)DAT_0547b48c <= (int)DAT_0547b490) {
            bVar6 = *pbVar4;
            bVar7 = true;
            bVar12 = bVar6;
            if (7 < bVar6) {
              bVar12 = 0xff;
            }
            do {
              local_88 = (undefined *)CONCAT44(local_88._4_4_,local_64);
              if (local_64 == 0) {
                uVar11 = 0;
LAB_022c4860:
                piVar16 = &DAT_0547b494 + (ulong)uVar11 * 10;
              }
              else {
                if (local_64 == 0xd) {
                  uVar11 = 1;
                  goto LAB_022c4860;
                }
                if (((int)local_64 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_64)) {
                  uVar11 = 0;
                  goto LAB_022c4860;
                }
                piVar16 = &DAT_0547b494;
                uVar11 = (local_64 - DAT_0547b48c) + 2;
                if (uVar11 < 0xe) goto LAB_022c4860;
              }
              piVar3 = piVar16 + ((long)(char)bVar12 & 0xffffffff);
              if (7 < bVar6) {
                piVar3 = piVar16;
              }
              if (*piVar3 == iVar5) {
                local_74 = local_64;
                if (!bVar7) goto LAB_022c46d0;
                bVar7 = false;
              }
            } while ((local_64 != DAT_0547b490) &&
                    (local_64 = local_64 + 1, (int)local_64 <= (int)DAT_0547b490));
          }
          local_74 = 0;
LAB_022c46d0:
          if (local_74 != 0) {
            pbVar2 = puVar9 + ((long)(char)*(byte *)((long)param_1 + 0x17) & 0xffffffff);
            if (7 < *(byte *)((long)param_1 + 0x17)) {
              pbVar2 = puVar8;
            }
            bVar12 = *pbVar2;
            if (7 < bVar12) {
              bVar12 = 0xff;
            }
            local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar12);
            FUN_022c4210(&local_88);
            uVar10 = 1 << (ulong)(local_74 & 0x1f) | uVar10;
            if ((((*pbVar4 < 8) && (uVar11 = FUN_02582d8c(pbVar4,1), uVar11 < 8)) &&
                (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0')) &&
               (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0')) {
              puVar1 = PTR_DAT_04bb2020 + 0x10;
              pcStack_80 = "PlantFruit";
              local_88 = puVar1;
              FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_88);
              pcStack_80 = "SellFruit";
              local_88 = puVar1;
              FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_88);
              pcStack_80 = "EDReplantTree";
              local_88 = puVar1;
              FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_88);
            }
          }
          local_64 = DAT_0547b48c;
          if ((int)DAT_0547b48c <= (int)DAT_0547b490) {
            bVar6 = *pbVar4;
            bVar12 = bVar6;
            if (7 < bVar6) {
              bVar12 = 0xff;
            }
            do {
              local_88 = (undefined *)CONCAT44(local_88._4_4_,local_64);
              if (local_64 == 0) {
                uVar11 = 0;
LAB_022c4928:
                piVar16 = &DAT_0547b494 + (ulong)uVar11 * 10;
              }
              else {
                if (local_64 == 0xd) {
                  uVar11 = 1;
                  goto LAB_022c4928;
                }
                if (((int)local_64 < (int)DAT_0547b48c) || ((int)DAT_0547b490 < (int)local_64)) {
                  uVar11 = 0;
                  goto LAB_022c4928;
                }
                piVar16 = &DAT_0547b494;
                uVar11 = (local_64 - DAT_0547b48c) + 2;
                if (uVar11 < 0xe) goto LAB_022c4928;
              }
              piVar3 = piVar16 + ((long)(char)bVar12 & 0xffffffff);
              if (7 < bVar6) {
                piVar3 = piVar16;
              }
              local_74 = local_64;
              if (*piVar3 == iVar5) goto LAB_022c4a8c;
            } while ((local_64 != DAT_0547b490) &&
                    (local_64 = local_64 + 1, (int)local_64 <= (int)DAT_0547b490));
          }
          local_74 = 0;
        }
LAB_022c4a8c:
        if (local_74 != 0) {
          pbVar4 = puVar9 + ((long)(char)*(byte *)((long)param_1 + 0x17) & 0xffffffff);
          if (7 < *(byte *)((long)param_1 + 0x17)) {
            pbVar4 = puVar8;
          }
          bVar12 = *pbVar4;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
          local_88 = (undefined *)CONCAT71(local_88._1_7_,bVar12);
          FUN_022c4210(&local_88);
          uVar10 = 1 << (ulong)(local_74 & 0x1f) | uVar10;
        }
        uVar13 = (long)(char)*(byte *)((long)param_1 + 0x17) & 0xffffffff;
        if (7 < *(byte *)((long)param_1 + 0x17)) {
          uVar13 = 0;
        }
        uVar11 = (uint)*(byte *)(param_1 + 8);
        if ((((uVar10 >> (ulong)(uVar11 & 0x1f) & 1) == 0) && ((int)DAT_0547b48c <= (int)uVar11)) &&
           ((int)uVar11 <= (int)DAT_0547b490)) {
          (&DAT_0547b46c)[uVar13] = (&DAT_0547b46c)[uVar13] | 1 << (ulong)(uVar11 & 0x1f);
        }
        uVar11 = (uint)*(byte *)((long)param_1 + 0x21);
        if ((((uVar10 >> (ulong)(uVar11 & 0x1f) & 1) == 0) && ((int)DAT_0547b48c <= (int)uVar11)) &&
           ((int)uVar11 <= (int)DAT_0547b490)) {
          (&DAT_0547b46c)[uVar13] = (&DAT_0547b46c)[uVar13] | 1 << (ulong)(uVar11 & 0x1f);
        }
        uVar11 = (uint)*(byte *)((long)param_1 + 0x22);
        if ((((uVar10 >> (ulong)(uVar11 & 0x1f) & 1) == 0) && ((int)DAT_0547b48c <= (int)uVar11)) &&
           ((int)uVar11 <= (int)DAT_0547b490)) {
          (&DAT_0547b46c)[uVar13] = (&DAT_0547b46c)[uVar13] | 1 << (ulong)(uVar11 & 0x1f);
        }
      }
    }
  }
  return;
}

