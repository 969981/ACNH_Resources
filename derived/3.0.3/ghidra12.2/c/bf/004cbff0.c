
undefined8 FUN_004cbff0(int *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 auStack_280 [16];
  undefined8 local_270;
  
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11[1] - *plVar11 < 4) {
    FUN_0049e700(plVar11,&local_270,4);
    cVar5 = (char)param_1[4];
    uVar12 = local_270;
  }
  else {
    memcpy(&local_270,(void *)*plVar11,4);
    *plVar11 = *plVar11 + 4;
    cVar5 = (char)param_1[4];
    uVar12 = local_270;
  }
  local_270 = uVar12;
  if (cVar5 != '\0') {
    local_270._0_2_ = CONCAT11((char)((ulong)uVar12 >> 0x10),(char)((ulong)uVar12 >> 0x18));
    local_270._0_3_ = CONCAT12((char)((ulong)uVar12 >> 8),(ushort)local_270);
    local_270._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
    local_270._0_4_ = CONCAT13((char)uVar12,(undefined3)local_270);
  }
  plVar11 = *(long **)(param_1 + 2);
  iVar8 = (int)local_270;
  if (plVar11[1] - *plVar11 < 4) {
    FUN_0049e700(plVar11,&local_270,4);
    cVar5 = (char)param_1[4];
    uVar12 = local_270;
  }
  else {
    memcpy(&local_270,(void *)*plVar11,4);
    *plVar11 = *plVar11 + 4;
    cVar5 = (char)param_1[4];
    uVar12 = local_270;
  }
  local_270 = uVar12;
  if (cVar5 != '\0') {
    local_270._0_2_ = CONCAT11((char)((ulong)uVar12 >> 0x10),(char)((ulong)uVar12 >> 0x18));
    local_270._0_3_ = CONCAT12((char)((ulong)uVar12 >> 8),(ushort)local_270);
    local_270._4_4_ = (undefined4)((ulong)uVar12 >> 0x20);
    local_270._0_4_ = CONCAT13((char)uVar12,(undefined3)local_270);
  }
  uVar12 = 0x80040200;
  if (((iVar8 == -0x354ff2e2) && ((int)local_270 == -0x2fee0532)) ||
     ((iVar8 == 0x1e0db0ca && ((int)local_270 == -0x3105ee30)))) {
    local_270 = CONCAT71(local_270._1_7_,0xff);
    plVar11 = *(long **)(param_1 + 2);
    if (*plVar11 < plVar11[1]) {
      memcpy(&local_270,(void *)*plVar11,1);
      *plVar11 = *plVar11 + 1;
      uVar16 = local_270;
    }
    else {
      FUN_0049e700(plVar11,&local_270,1);
      uVar16 = local_270;
    }
    bVar3 = (char)(byte)local_270 < '\0';
    uVar14 = (ulong)((byte)local_270 >> 1) & 0x3f;
    local_270 = uVar16;
    if (bVar3) {
      uVar15 = 6;
      do {
        local_270 = CONCAT71(local_270._1_7_,0xff);
        plVar11 = *(long **)(param_1 + 2);
        if (*plVar11 < plVar11[1]) {
          memcpy(&local_270,(void *)*plVar11,1);
          *plVar11 = *plVar11 + 1;
        }
        else {
          FUN_0049e700(plVar11,&local_270,1);
        }
        uVar14 = (local_270 & 0x7f) << (uVar15 & 0x3f) | uVar14;
        bVar3 = (char)(byte)local_270 < '\0';
        uVar15 = (ulong)((int)uVar15 + 7);
      } while (bVar3);
    }
    puVar7 = PTR_DAT_048607b8;
    plVar11 = (long *)(param_1 + 0x10);
    uVar15 = -uVar14;
    if ((uVar16 & 1) == 0) {
      uVar15 = uVar14;
    }
    iVar8 = (int)uVar15;
    while (iVar8 - 1U < 7) {
      uVar12 = 0;
      switch(iVar8 - 1U) {
      case 0:
        local_270._1_7_ = (undefined7)(local_270 >> 8);
        local_270 = CONCAT71(local_270._1_7_,0xff);
        plVar17 = *(long **)(param_1 + 2);
        if (*plVar17 < plVar17[1]) {
          memcpy(&local_270,(void *)*plVar17,1);
          *plVar17 = *plVar17 + 1;
          uVar16 = (ulong)((byte)local_270 >> 1) & 0x3f;
          iVar8 = (int)uVar16;
          uVar14 = local_270;
        }
        else {
          FUN_0049e700(plVar17,&local_270,1);
          uVar16 = (ulong)((byte)local_270 >> 1) & 0x3f;
          iVar8 = (int)uVar16;
          uVar14 = local_270;
        }
        bVar3 = (char)(byte)local_270 < '\0';
        local_270 = uVar14;
        if (bVar3) {
          uVar15 = 6;
          do {
            local_270 = CONCAT71(local_270._1_7_,0xff);
            plVar17 = *(long **)(param_1 + 2);
            if (*plVar17 < plVar17[1]) {
              memcpy(&local_270,(void *)*plVar17,1);
              *plVar17 = *plVar17 + 1;
            }
            else {
              FUN_0049e700(plVar17,&local_270,1);
            }
            uVar16 = (local_270 & 0x7f) << (uVar15 & 0x3f) | uVar16;
            iVar8 = (int)uVar16;
            bVar3 = (char)(byte)local_270 < '\0';
            uVar15 = (ulong)((int)uVar15 + 7);
          } while (bVar3);
        }
        iVar4 = -iVar8;
        if ((uVar14 & 1) == 0) {
          iVar4 = iVar8;
        }
        *param_1 = iVar4;
        if (iVar4 - 2U < 5) {
          uVar13 = param_1[0x18];
          if (uVar13 == (param_1[0x19] & 0x3fffffffU)) {
            FUN_00426990(puVar7,param_1 + 0x16,4);
            uVar13 = param_1[0x18];
          }
          *(undefined4 *)(*(long *)(param_1 + 0x16) + (long)(int)uVar13 * 4) = 0;
          param_1[0x18] = uVar13 + 1;
          if ((3 < *param_1) && (FUN_004ccef0(param_1), 4 < *param_1)) {
            plVar17 = *(long **)(param_1 + 2);
            if (plVar17[1] - *plVar17 < 2) {
              FUN_0049e700(plVar17,&local_270,2);
              cVar5 = (char)param_1[4];
            }
            else {
              memcpy(&local_270,(void *)*plVar17,2);
              *plVar17 = *plVar17 + 2;
              cVar5 = (char)param_1[4];
            }
            if (cVar5 != '\0') {
              uVar16 = local_270 >> 8;
              uVar6 = (undefined1)local_270;
              local_270._2_6_ = (undefined6)(local_270 >> 0x10);
              local_270._0_2_ = CONCAT11(uVar6,(char)uVar16);
            }
            plVar17 = *(long **)(param_1 + 2);
            if (plVar17[1] - *plVar17 < 2) {
              FUN_0049e700(plVar17,&local_270,2);
              cVar5 = (char)param_1[4];
            }
            else {
              memcpy(&local_270,(void *)*plVar17,2);
              *plVar17 = *plVar17 + 2;
              cVar5 = (char)param_1[4];
            }
            if (cVar5 != '\0') {
              uVar16 = local_270 >> 8;
              uVar6 = (undefined1)local_270;
              local_270._2_6_ = (undefined6)(local_270 >> 0x10);
              local_270._0_2_ = CONCAT11(uVar6,(char)uVar16);
            }
            uVar13 = (uint)(ushort)local_270;
            if ((ushort)local_270 != 0) {
              do {
                plVar17 = *(long **)(param_1 + 2);
                if (plVar17[1] - *plVar17 < 2) {
                  FUN_0049e700(plVar17,&local_270,2);
                  cVar5 = (char)param_1[4];
                }
                else {
                  memcpy(&local_270,(void *)*plVar17,2);
                  *plVar17 = *plVar17 + 2;
                  cVar5 = (char)param_1[4];
                }
                if (cVar5 != '\0') {
                  uVar16 = local_270 >> 8;
                  uVar6 = (undefined1)local_270;
                  local_270._2_6_ = (undefined6)(local_270 >> 0x10);
                  local_270._0_2_ = CONCAT11(uVar6,(char)uVar16);
                }
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            if (5 < *param_1) {
              *(undefined1 *)(param_1 + 1) = 1;
            }
          }
        }
        else if (iVar4 != 0) {
          if (iVar4 != 1) {
            FUN_004426d0(auStack_280,&local_270,0x200);
            uVar12 = FUN_0043ac90(auStack_280,"Unrecognised tagfile version ");
            FUN_0043ad00(uVar12,*param_1);
            FUN_004221e0(0x2ab6036f,&local_270,
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                         ,0x4f9);
            FUN_00442760(auStack_280);
            goto switchD_004cc274_caseD_4;
          }
          local_270 = CONCAT71(local_270._1_7_,0xff);
          plVar17 = *(long **)(param_1 + 2);
          if (*plVar17 < plVar17[1]) {
            memcpy(&local_270,(void *)*plVar17,1);
            *plVar17 = *plVar17 + 1;
            uVar16 = (ulong)((byte)local_270 >> 1) & 0x3f;
            iVar8 = (int)uVar16;
            uVar14 = local_270;
          }
          else {
            FUN_0049e700(plVar17,&local_270,1);
            uVar16 = (ulong)((byte)local_270 >> 1) & 0x3f;
            iVar8 = (int)uVar16;
            uVar14 = local_270;
          }
          bVar3 = (char)(byte)local_270 < '\0';
          local_270 = uVar14;
          if (bVar3) {
            uVar15 = 6;
            do {
              local_270 = CONCAT71(local_270._1_7_,0xff);
              plVar17 = *(long **)(param_1 + 2);
              if (*plVar17 < plVar17[1]) {
                memcpy(&local_270,(void *)*plVar17,1);
                *plVar17 = *plVar17 + 1;
              }
              else {
                FUN_0049e700(plVar17,&local_270,1);
              }
              uVar16 = (local_270 & 0x7f) << (uVar15 & 0x3f) | uVar16;
              iVar8 = (int)uVar16;
              bVar3 = (char)(byte)local_270 < '\0';
              uVar15 = (ulong)((int)uVar15 + 7);
            } while (bVar3);
          }
          iVar4 = -iVar8;
          if ((uVar14 & 1) == 0) {
            iVar4 = iVar8;
          }
          if (iVar4 != 1) goto switchD_004cc274_caseD_4;
          iVar8 = 0;
          param_1[0x12] = 0;
          if ((param_1[0x13] & 0x3fffffffU) == 0) {
            FUN_00426990(puVar7,plVar11,8);
            iVar8 = param_1[0x12];
          }
          *(undefined8 **)(*(long *)(param_1 + 0x10) + (long)iVar8 * 8) = &DAT_0407ebb1;
          uVar13 = iVar8 + 1;
          param_1[0x12] = uVar13;
          if (uVar13 == (param_1[0x13] & 0x3fffffffU)) {
            FUN_00426990(puVar7,plVar11,8);
            uVar13 = param_1[0x12];
          }
          *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar13 * 8) = 0;
          iVar8 = uVar13 + 0x6d9;
          uVar16 = (long)(int)uVar13 + 1;
          param_1[0x12] = (int)uVar16;
          if ((int)(param_1[0x13] & 0x3fffffffU) < iVar8) {
            lVar9 = FUN_00426720(puVar7,iVar8,8,*plVar11,uVar16 & 0xffffffff,param_1 + 0x13);
            *plVar11 = lVar9;
          }
          else {
            lVar9 = *plVar11;
          }
          lVar10 = 0;
          do {
            lVar1 = lVar10 + 8;
            puVar2 = (undefined8 *)(lVar9 + uVar16 * 8 + lVar10 * 8);
            *puVar2 = (&PTR_s_variant_04c20f50)[lVar10];
            puVar2[1] = (&PTR_s_memSizeAndFlags_04c20f58)[lVar10];
            puVar2[2] = (&PTR_s_value_04c20f60)[lVar10];
            puVar2[3] = (&PTR_DAT_04c20f68)[lVar10];
            puVar2[4] = (&PTR_DAT_04c20f70)[lVar10];
            puVar2[5] = (&PTR_s_namedVariants_04c20f78)[lVar10];
            puVar2[6] = (&PTR_s_className_04c20f80)[lVar10];
            puVar2[7] = (&PTR_s_hkRootLevelContainer_04c20f88)[lVar10];
            lVar10 = lVar1;
          } while ((int)lVar1 != 0x6d8);
          param_1[0x12] = iVar8;
          param_1[0x14] = 0x6da;
        }
        break;
      case 1:
        iVar8 = FUN_004cd0c0(param_1);
        if (iVar8 < 0) goto switchD_004cc274_caseD_4;
        break;
      default:
        local_270 = 0;
        FUN_004cd7f0(param_1,uVar15,&local_270,0);
        if (*param_1 < 2) {
          return 0;
        }
        break;
      case 4:
        goto switchD_004cc274_caseD_4;
      case 6:
        goto switchD_004cc274_caseD_6;
      }
      local_270 = CONCAT71(local_270._1_7_,0xff);
      plVar17 = *(long **)(param_1 + 2);
      if (*plVar17 < plVar17[1]) {
        memcpy(&local_270,(void *)*plVar17,1);
        *plVar17 = *plVar17 + 1;
        uVar16 = local_270;
      }
      else {
        FUN_0049e700(plVar17,&local_270,1);
        uVar16 = local_270;
      }
      bVar3 = (char)(byte)local_270 < '\0';
      uVar14 = (ulong)((byte)local_270 >> 1) & 0x3f;
      local_270 = uVar16;
      if (bVar3) {
        uVar15 = 6;
        do {
          local_270 = CONCAT71(local_270._1_7_,0xff);
          plVar17 = *(long **)(param_1 + 2);
          if (*plVar17 < plVar17[1]) {
            memcpy(&local_270,(void *)*plVar17,1);
            *plVar17 = *plVar17 + 1;
          }
          else {
            FUN_0049e700(plVar17,&local_270,1);
          }
          uVar14 = (local_270 & 0x7f) << (uVar15 & 0x3f) | uVar14;
          uVar15 = (ulong)((int)uVar15 + 7);
        } while ((char)(byte)local_270 < '\0');
      }
      uVar15 = -uVar14;
      if ((uVar16 & 1) == 0) {
        uVar15 = uVar14;
      }
      iVar8 = (int)uVar15;
    }
switchD_004cc274_caseD_4:
    uVar12 = 0x80040200;
  }
  else {
    FUN_004426d0(auStack_280,&local_270,0x200);
    FUN_0043ac90(auStack_280,"This does not look like a binary tagfile (magic number mismatch)");
    FUN_004221e0(0x2ab6036f,&local_270,
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile2014/hkTagfileReadFormat2014.cpp"
                 ,0x4b2);
    FUN_00442760(auStack_280);
  }
switchD_004cc274_caseD_6:
  return uVar12;
}

