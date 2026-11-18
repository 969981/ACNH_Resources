
uint FUN_03395a70(byte *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  ushort *puVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 local_5c;
  undefined1 local_5a;
  uint local_59;
  undefined1 local_55;
  
  lVar19 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(&local_68,1,1,1,0);
  pbVar11 = (byte *)(lVar19 + 0xc);
  if (*pbVar11 < 8) {
    bVar15 = *param_1;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (*pbVar11 != bVar15) goto LAB_03395adc;
LAB_03395b54:
    puVar18 = (uint *)(pbVar11 + 4);
  }
  else {
LAB_03395adc:
    pbVar11 = (byte *)(lVar19 + 0x14);
    if (*pbVar11 < 8) {
      bVar15 = *param_1;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (*pbVar11 == bVar15) goto LAB_03395b54;
    }
    pbVar11 = (byte *)(lVar19 + 0x1c);
    if (*pbVar11 < 8) {
      bVar15 = *param_1;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (*pbVar11 == bVar15) goto LAB_03395b54;
    }
    pbVar11 = (byte *)(lVar19 + 0x24);
    if (*pbVar11 < 8) {
      bVar15 = *param_1;
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      if (*pbVar11 == bVar15) goto LAB_03395b54;
    }
    puVar18 = (uint *)(lVar19 + 0x30);
  }
  lVar17 = *(long *)PTR_DAT_04bb3960;
  bVar7 = false;
  if (lVar17 != 0) {
    uVar9 = FUN_02582d8c(param_1,1);
    if ((uVar9 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d4) != '\0')) {
      uVar9 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar9 * 0x13f0 + 0x13d8);
    }
    else {
      uVar9 = 0xffffffff;
    }
    lVar14 = (long)*(int *)(*(long *)PTR_DAT_04bc95e0 + 0x184);
    lVar12 = *(long *)(*(long *)PTR_DAT_04bc95e0 + 0x178) - lVar14;
    if (*(int *)(lVar12 + 0x18) != 0xd) {
      do {
        lVar12 = *(long *)(lVar12 + lVar14 + 8) - lVar14;
      } while (*(int *)(lVar12 + 0x18) != 0xd);
    }
    if (*(int *)(lVar12 + 0x2c) == 1) {
      local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar9);
      iVar10 = nn::hid::GetNpadJoyAssignment((uint *)&local_68);
      if (iVar10 == 1) {
        uVar13 = (ulong)uVar9;
        if (3 < uVar9) {
          uVar13 = 0;
        }
        bVar7 = *(int *)(lVar17 + uVar13 * 4 + 0xf5b40) - 3U < 2;
        goto LAB_03395c4c;
      }
    }
    bVar7 = false;
  }
LAB_03395c4c:
  puVar6 = PTR_DAT_04bb3238;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
LAB_03395cac:
    if (*pbVar11 < 8) goto LAB_03395d24;
LAB_03395cb8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03395d1c:
      pbVar11 = PTR_DAT_04bb5038;
      goto LAB_03395d24;
    }
    lVar17 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar17 + 0x473);
    pbVar11 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar2 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar11 = (byte *)(lVar17 + 0x471);
      }
    }
    bVar15 = *pbVar11;
    bVar8 = 7 < bVar15;
    if (bVar8) {
      bVar15 = 0xff;
    }
    local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar15);
    if (bVar8) goto LAB_03395d1c;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_03395cac;
      }
      goto LAB_03395cb8;
    }
LAB_03395d24:
    bVar15 = *pbVar11;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar15);
  }
  uVar13 = FUN_02553884(3,&local_68,*(undefined4 *)PTR_DAT_04bb3238,1);
  if ((uVar13 & 1) != 0) {
    uVar13 = FUN_02640eb0();
    puVar5 = PTR_DAT_04bb2020;
    if ((uVar13 & 1) != 0) {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      uStack_60 = 0x40ab50b;
      local_5c = 0;
      local_5a = 0;
      local_59 = local_59 & 0xffffff00;
      local_68 = puVar1;
      iVar10 = FUN_0274bce0(param_1,&local_68);
      if (iVar10 == 0) {
        pcStack_70 = "WHEREAREN_Unlock_DustCloth_02";
        local_78 = puVar1;
        iVar10 = FUN_0274bce0(param_1,&local_78);
        uVar9 = 0;
        if (iVar10 == 0) goto LAB_03395f88;
      }
      uVar4 = *(ushort *)PTR_DAT_04bb6298;
      uVar13 = (ulong)(short)uVar4;
      if (uVar13 != 0xffffffffffffffff) {
        local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
        if (0xff < (uint)(int)(short)uVar4) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar2 >> 0x19 & 1) != 0) &&
           (((((lVar17 = *(long *)PTR_DAT_04bb27f8, lVar17 == 0 ||
               (local_68 = (undefined *)CONCAT44(local_68._4_4_,0x1a), (*puVar2 >> 0x1a & 1) == 0))
              || (*(int *)(lVar17 + 0x14) == 0)) ||
             (((puVar16 = *(ushort **)PTR_DAT_04bc3a48, puVar16 != (ushort *)0x0 &&
               ((*puVar16 & 1) != 0)) ||
              ((*(int *)(lVar17 + 0x10) == 1 &&
               ((0 < *(int *)(lVar17 + 0x14) && (*(int *)(lVar17 + 0x14) < 4)))))))) ||
            ((puVar16 != (ushort *)0x0 && ((*puVar16 & 1) != 0)))))) goto LAB_03395f84;
        if (*(long *)PTR_DAT_04bb5ce0 != 0) {
          local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
          if (0xff < uVar4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 0x19 & 1) == 0) {
            local_68 = (undefined *)CONCAT44(local_68._4_4_,7);
            puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
            if (0xff < uVar4) {
              puVar2 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar2 >> 7 & 1) != 0) {
              local_68 = puVar5 + 0x10;
              uStack_60 = 0x4067074;
              local_5c = 0;
              local_5a = 0;
              local_59 = local_59 & 0xffffff00;
              iVar10 = FUN_02743000(&local_68);
              uVar9 = 0;
              if (iVar10 == 0) goto LAB_03395f88;
            }
          }
        }
      }
      local_68._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
      bVar15 = *(byte *)(lVar19 + 8);
      if (((((bVar15 & 1) != 0) && ((bVar15 >> 1 & 1) == 0)) && ((bVar15 >> 2 & 1) == 0)) &&
         ((uVar3 = *puVar18, (uVar3 >> 1 & 1) == 0 && ((uVar3 >> 6 & 1) == 0)))) {
        if (bVar7 == false) {
          uVar9 = 0;
          if ((uVar3 & 1) != 0) goto LAB_03395f88;
          if ((uVar3 >> 5 & 1) != 0) goto LAB_03395f84;
        }
        local_68._0_4_ = 1;
        uVar13 = FUN_0290cbcc(&local_68);
        if ((((uVar13 & 1) == 0) &&
            (((local_68 = (undefined *)CONCAT44(local_68._4_4_,0xe), (uVar3 >> 0xe & 1) != 0 ||
              (uVar13 = FUN_016e677c(param_1), (uVar13 & 1) != 0)) ||
             ((uVar13 = FUN_016e68c8(), (uVar13 & 1) != 0 ||
              (((uVar13 = FUN_016e614c(), (uVar13 & 1) != 0 ||
                (uVar13 = FUN_016cf9f0(), (uVar13 & 1) != 0)) ||
               (uVar13 = FUN_0180b700(), (uVar13 & 1) != 0)))))))) &&
           ((uVar13 = FUN_016cf9f0(), (uVar13 & 1) == 0 ||
            ((*(long *)PTR_DAT_04bb4938 != 0 && (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0))))
           )) {
          uVar13 = FUN_0180b700();
          if ((uVar13 & 1) != 0) {
            lVar19 = **(long **)PTR_DAT_04bb27d0;
            bVar15 = *(byte *)(lVar19 + 0x473);
            if ((long)(char)bVar15 != 0xffffffffffffffff) {
              pbVar11 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x80;
              if (7 < bVar15) {
                pbVar11 = (byte *)(lVar19 + 0x48);
              }
              if (((*pbVar11 >> 3 & 1) != 0) && (*(byte *)(lVar19 + 0x472) != bVar15))
              goto LAB_03395f84;
            }
          }
          if (((*puVar18 >> 1 & 1) == 0) && ((*puVar18 >> 0xc & 1) == 0)) {
            bVar15 = *param_1;
            uStack_60 = *(undefined4 *)puVar6;
            local_55 = 0;
            local_59 = 0;
            if (7 < bVar15) {
              bVar15 = 0xff;
            }
            local_68._0_4_ = (uint)bVar15;
            local_68 = (undefined *)CONCAT44(1,(uint)local_68);
            local_5c = 1;
            local_5a = 1;
            uVar13 = FUN_02530cec(&local_68);
            uVar9 = 0;
            if ((uVar13 & 1) == 0) goto LAB_03395f88;
            uVar13 = FUN_033961d0(param_1);
            if ((uVar13 & 1) == 0) {
              local_68 = puVar5 + 0x10;
              uStack_60 = 0x40715ff;
              local_5c = 0;
              local_5a = 0;
              local_59 = local_59 & 0xffffff00;
              iVar10 = FUN_02743000(&local_68);
              if (iVar10 == 0) {
                local_68 = (undefined *)CONCAT44(local_68._4_4_,0x19);
                uVar13 = FUN_0290cbcc(&local_68);
                if ((uVar13 & 1) != 0) {
                  local_68 = puVar5 + 0x10;
                  uStack_60 = 0x406c82f;
                  local_5c = 0;
                  local_5a = 0;
                  local_59 = local_59 & 0xffffff00;
                  iVar10 = FUN_02758850(&local_68);
                  if (iVar10 != 0) goto LAB_03395f84;
                }
                lVar19 = *(long *)PTR_DAT_04bb27f8;
                if (((((lVar19 == 0) || (*(int *)(lVar19 + 0x18) != 1)) ||
                     (*(int *)(lVar19 + 0x14) < 7)) || (8 < *(int *)(lVar19 + 0x14))) &&
                   (uVar13 = FUN_03396300(param_1,bVar7), (uVar13 & 1) != 0)) {
                  FUN_025196e4(&local_68);
                  uVar9 = FUN_02553884(3,&local_68,*(undefined4 *)puVar6,1);
                  goto LAB_03395f88;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03395f84:
  uVar9 = 0;
LAB_03395f88:
  return uVar9 & 1;
}

