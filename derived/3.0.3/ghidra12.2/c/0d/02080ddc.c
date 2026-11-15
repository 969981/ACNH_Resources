
undefined8
FUN_02080ddc(undefined8 *param_1,uint *param_2,undefined4 *param_3,undefined8 param_4,
            undefined4 *param_5)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  ushort uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint *puVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  local_70 = (uint *)0x0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar1 == 0) {
LAB_02080ec4:
    puVar12 = (uint *)0x0;
    bVar2 = *(byte *)(param_1 + 0x1b);
joined_r0x02080ecc:
    if ((bVar2 & 1) != 0) goto LAB_02080ed0;
LAB_0208109c:
    if (puVar12 != (uint *)0x0) goto LAB_020810a0;
    uVar3 = 0;
    bVar13 = true;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar3) goto LAB_02080ec4;
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
      puVar12 = (uint *)0x0;
LAB_02081094:
      bVar2 = *(byte *)(param_1 + 0x1b);
      goto joined_r0x02080ecc;
    }
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_3);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar3) goto LAB_02080ec4;
    puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar12 == (uint *)0x0) goto LAB_02081094;
    local_70 = puVar12;
    if ((*(byte *)(param_1 + 0x1b) & 1) == 0) goto LAB_0208109c;
LAB_02080ed0:
    if (puVar12 == (uint *)0x0) {
      bVar13 = true;
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar12;
      uVar8 = 0;
      if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
        puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
        uVar8 = 0;
        if (*puVar9 != 0) {
          uVar3 = puVar9[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 != 0) {
              uVar5 = 0;
              if ((ulong)uVar3 != 0) {
                uVar5 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if ((uVar5 < DAT_05327350) &&
                 (uVar8 = *(ushort *)(DAT_05327358 + (long)(int)uVar5 * 2), uVar8 < 0x54))
              goto LAB_02080f60;
            }
          }
          uVar8 = 0;
        }
      }
LAB_02080f60:
      if (uVar8 != 0) {
        uVar3 = *puVar12;
        local_68._0_4_ = 0;
        if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
          puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
          local_68._0_4_ = 0;
          if (*puVar9 != 0) {
            uVar3 = puVar9[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar5 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar5 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar3);
                }
                if (*puVar9 <= uVar5) {
                  uVar5 = 0xffffffff;
                }
                if ((uVar5 < DAT_05327350) &&
                   (local_68._0_4_ = (uint)*(ushort *)(DAT_05327358 + (long)(int)uVar5 * 2),
                   (uint)local_68 < 0x54)) goto LAB_02081010;
              }
            }
            local_68._0_4_ = 0;
          }
        }
LAB_02081010:
        *param_2 = (uint)local_68;
        uVar3 = FUN_01b10940(&local_80);
        param_2[1] = uVar3;
        FUN_01b10b80(&local_80,param_2 + 2);
        uVar3 = FUN_01b10e00(&local_80);
        param_2[0x18] = uVar3;
        uVar10 = *param_1;
        FUN_01b10fd0(auStack_88,&local_80);
        FUN_02081400(&local_68,uVar10,auStack_88);
        param_2[0x19] = (uint)local_68;
        param_2[0x1a] = local_68._4_4_;
        uVar3 = FUN_01b11228(&local_80);
        param_2[0x1b] = uVar3;
        bVar2 = FUN_01b11850(&local_80);
        *(byte *)(param_2 + 0x1c) = bVar2 & 1;
        *(undefined1 *)((long)param_2 + 0x71) = 1;
        return 1;
      }
LAB_020810a0:
      uVar5 = *puVar12;
      uVar3 = 0;
      if ((uVar5 != 0) && (puVar12 != (uint *)(ulong)uVar5)) {
        puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
        uVar3 = 0;
        if (*puVar9 != 0) {
          uVar3 = puVar9[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 != 0) {
              uVar5 = 0;
              if ((ulong)uVar3 != 0) {
                uVar5 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if (uVar5 < DAT_053272b8) {
                uVar3 = (uint)*(ushort *)(DAT_053272c0 + (long)(int)uVar5 * 2);
                if (0x12 < uVar3) {
                  bVar13 = false;
                  uVar3 = 0;
                  goto LAB_02081148;
                }
                goto LAB_02081144;
              }
            }
          }
          uVar3 = 0;
        }
      }
LAB_02081144:
      bVar13 = false;
    }
  }
LAB_02081148:
  local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar3);
  if (uVar3 == 0) {
    return 0;
  }
  *(undefined1 *)((long)param_2 + 0x71) = 0;
  iVar4 = FUN_01b0ef90(&local_80);
  if (iVar4 == 0xc) {
    uVar3 = 0xb;
    lVar11 = *(long *)PTR_DAT_04bb4c80;
    if (lVar11 != 0) {
      local_60 = 0;
      if (DAT_05aed670 == 0) {
        puVar14 = &DAT_055c04a0;
      }
      else {
        puVar14 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar14 = (undefined8 *)
                    (**(code **)(*DAT_05aed668 + 0x18))
                              (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
      }
      local_5c = *(undefined4 *)(puVar14 + 7);
      local_58 = FUN_017baf44();
      local_58 = local_58 & 1;
      local_68 = PTR_DAT_04bb3140 + 0x10;
      psVar6 = (short *)FUN_01a5190c(&local_68,*param_5,param_4,0);
      if ((*psVar6 != -2) && (uVar7 = FUN_0277d7b4(psVar6,param_3), (uVar7 & 1) != 0)) {
        uVar7 = FUN_01522be0(lVar11,param_4,param_5);
        uVar3 = 3;
        if ((uVar7 & 1) == 0) {
          uVar3 = 0xb;
        }
      }
    }
    *param_2 = uVar3;
    uVar5 = FUN_01b0e2e0(uVar3);
    param_2[1] = uVar5;
    FUN_01b0e490(param_2 + 2,uVar3);
    uVar5 = FUN_01b0e674(uVar3);
    param_2[0x18] = uVar5;
    uVar10 = *param_1;
    FUN_01b0e7c0(auStack_88,uVar3);
    FUN_02081400(&local_68,uVar10,auStack_88);
    param_2[0x19] = (uint)local_68;
    param_2[0x1a] = local_68._4_4_;
    uVar5 = FUN_01b0e988(uVar3);
    param_2[0x1b] = uVar5;
    bVar2 = FUN_01b0fa00(uVar3);
    goto LAB_020813d4;
  }
  uVar3 = 0;
  if (((!bVar13) && (uVar5 = *puVar12, uVar5 != 0)) && (puVar12 != (uint *)(ulong)uVar5)) {
    puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar5);
    uVar3 = 0;
    if (*puVar9 != 0) {
      uVar3 = puVar9[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar11 != 0) {
          uVar5 = 0;
          if ((ulong)uVar3 != 0) {
            uVar5 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar3);
          }
          if (*puVar9 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < DAT_053272b8) &&
             (uVar3 = (uint)*(ushort *)(DAT_053272c0 + (long)(int)uVar5 * 2), uVar3 < 0x13))
          goto LAB_0208127c;
        }
      }
      uVar3 = 0;
    }
  }
LAB_0208127c:
  *param_2 = uVar3;
  local_68._0_4_ = uVar3;
  uVar3 = FUN_01b0ead0(&local_80);
  param_2[1] = uVar3;
  FUN_01b0ed10(&local_80,param_2 + 2);
  uVar3 = FUN_01b0ef90(&local_80);
  param_2[0x18] = uVar3;
  uVar10 = *param_1;
  FUN_01b0f160(auStack_88,&local_80);
  FUN_02081400(&local_68,uVar10,auStack_88);
  param_2[0x19] = (uint)local_68;
  param_2[0x1a] = local_68._4_4_;
  uVar3 = FUN_01b0f3b8(&local_80);
  param_2[0x1b] = uVar3;
  bVar2 = FUN_01b10000(&local_80);
LAB_020813d4:
  *(byte *)(param_2 + 0x1c) = bVar2 & 1;
  return 1;
}

