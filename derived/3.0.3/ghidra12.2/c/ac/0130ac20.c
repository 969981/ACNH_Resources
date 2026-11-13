
void FUN_0130ac20(long param_1,short *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  byte bVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  
  puVar12 = PTR_DAT_04bbc2f8;
  local_a8 = PTR_DAT_04bbc5d8 + 0x10;
  local_b8 = PTR_DAT_04bb2018 + 0x10;
  sVar4 = param_2[4];
  sVar5 = param_2[3];
  sVar6 = param_2[5];
  sVar7 = param_2[2];
  iVar2 = (int)sVar7;
  if (sVar4 <= sVar7) {
    iVar2 = (int)sVar4;
  }
  local_88 = (int)sVar7;
  if (sVar7 <= sVar4) {
    local_88 = (int)sVar4;
  }
  sVar4 = *param_2;
  iVar17 = (int)sVar5;
  if (sVar6 <= sVar5) {
    iVar17 = (int)sVar6;
  }
  iStack_84 = (int)sVar5;
  if (sVar5 <= sVar6) {
    iStack_84 = (int)sVar6;
  }
  iVar1 = iStack_84 + 1;
  sVar5 = param_2[1];
  if (iVar1 != iVar17) {
    local_b0 = iVar2;
    local_ac = iVar17;
    puStack_a0 = local_b8;
    local_98 = iVar2;
    iStack_94 = iVar17;
    local_90 = local_b8;
    do {
      iVar13 = local_b0;
      if (((*(int *)(param_1 + 0x18) <= local_b0 && local_b0 <= *(int *)(param_1 + 0x28)) &&
          (*(int *)(param_1 + 0x1c) <= iVar17)) && (iVar17 <= *(int *)(param_1 + 0x2c))) {
        lVar15 = *(long *)(param_1 + 0x58);
        if (lVar15 != 0) {
          uVar16 = local_b0 - *(int *)(lVar15 + 0x28);
          if ((uVar16 < *(uint *)(lVar15 + 0x18)) &&
             (uVar10 = iVar17 - *(int *)(lVar15 + 0x2c), uVar10 < *(uint *)(lVar15 + 0x1c))) {
            uVar16 = uVar16 + *(uint *)(lVar15 + 0x18) * uVar10;
LAB_0130add8:
            if (*(uint *)(lVar15 + 0x30) <= uVar16) {
              uVar16 = 0;
            }
            bVar11 = *(byte *)(*(long *)(lVar15 + 0x38) + (long)(int)uVar16 * 0x68 + 0xd);
          }
          else {
            bVar11 = DAT_051a50f8._5_1_;
            if (*(char *)(lVar15 + 0x88) != '\0') {
              uVar16 = local_b0 - *(int *)(lVar15 + 0x98);
              if ((uVar16 < *(uint *)(lVar15 + 0xa0)) &&
                 (uVar10 = iVar17 - *(int *)(lVar15 + 0x9c), uVar10 < *(uint *)(lVar15 + 0xa4))) {
                uVar16 = uVar16 + *(uint *)(lVar15 + 0xa0) * uVar10 + *(int *)(lVar15 + 0x8c);
                goto LAB_0130add8;
              }
            }
          }
          if ((bVar11 & 1) == 0) goto LAB_0130aed0;
        }
        sVar6 = *param_2;
        if ((local_b0 != sVar6) || (sVar7 = param_2[1], iVar17 != sVar7)) {
          iVar14 = FUN_006f0400(((float)local_b0 * 10.0 + 5.0) - ((float)(int)sVar4 * 10.0 + 5.0),
                                ((float)iVar17 * 10.0 + 5.0) - ((float)(int)sVar5 * 10.0 + 5.0));
          if ((*(byte *)(param_2 + 0x45) >> (ulong)(iVar14 + 0x10000000U >> 0x1d) & 1) == 0)
          goto LAB_0130aed0;
          sVar6 = *param_2;
          sVar7 = param_2[1];
        }
        sVar8 = param_2[2];
        if (param_2[4] <= param_2[2]) {
          sVar8 = param_2[4];
        }
        sVar9 = param_2[3];
        if (param_2[5] <= param_2[3]) {
          sVar9 = param_2[5];
        }
        psVar3 = param_2 + (ulong)(uint)((iVar17 - sVar9) * 3 + (iVar13 - sVar8)) * 7 + 6;
        if (2 < (uint)(iVar17 - sVar9) || 2 < (uint)(iVar13 - sVar8)) {
          psVar3 = (short *)puVar12;
        }
        FUN_0130af1c(param_1,psVar3,&local_b8,param_3 & 1,iVar13 == sVar6 && iVar17 == sVar7);
      }
LAB_0130aed0:
      if (iVar13 < local_88) {
        local_b0 = iVar13 + 1;
      }
      else {
        iVar17 = iVar17 + 1;
        local_b0 = local_98;
        local_ac = iVar17;
      }
    } while ((iVar2 != local_b0) || (iVar1 != iVar17));
  }
  return;
}

