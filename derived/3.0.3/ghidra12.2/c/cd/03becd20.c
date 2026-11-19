
void FUN_03becd20(long param_1,long param_2,long *param_3,uint *param_4,long *param_5,uint param_6,
                 undefined8 param_7)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 *puVar4;
  void *__src;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  void *__dest;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  int *piVar19;
  void *pvVar20;
  uint uVar21;
  char *pcVar22;
  int iVar23;
  ulong uVar24;
  ulong *puVar25;
  short *psVar26;
  ulong *puVar27;
  long lVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  int *piVar35;
  ulong *puVar36;
  ulong *puVar37;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 local_6c [4];
  undefined1 local_68;
  
  FUN_03bef688(param_7,"[XLink2] ResourceBuffer dump\n");
  FUN_03bef688(param_7,"<< ResourceHeader (addr:0x%x, size:%d) >>\n",param_1,0x48);
  local_70 = 5;
  local_68 = 0;
  local_78 = local_6c;
  local_6c[0] = 0;
  local_80 = &DAT_04b7be58;
  FUN_038d1270(&local_80,param_1);
  (**(code **)(local_80 + 0x18))(&local_80);
  FUN_03bef688(param_7,"  magic: %s\n",local_78);
  FUN_03bef688(param_7,"  dataSize: %d\n",*(undefined4 *)(param_1 + 4));
  FUN_03bef688(param_7,"  version: %d\n",*(undefined4 *)(param_1 + 8));
  FUN_03bef688(param_7,"  numResParam: %d\n",*(undefined4 *)(param_1 + 0xc));
  FUN_03bef688(param_7,"  numResAssetParam: %d\n",*(undefined4 *)(param_1 + 0x10));
  FUN_03bef688(param_7,"  numResTriggerOverwirteParam: %d\n",*(undefined4 *)(param_1 + 0x14));
  FUN_03bef688(param_7,"  triggerOverwriteParamTablePos: %d\n",*(undefined4 *)(param_1 + 0x18));
  FUN_03bef688(param_7,"  localPropertyNameRefTablePos: %d\n",*(undefined4 *)(param_1 + 0x1c));
  FUN_03bef688(param_7,"  numLocalPropertyNameRefTable: %d\n",*(undefined4 *)(param_1 + 0x20));
  FUN_03bef688(param_7,"  numLocalPropertyEnumNameRefTable: %d\n",*(undefined4 *)(param_1 + 0x24));
  FUN_03bef688(param_7,"  numDirectValueTable: %d\n",*(undefined4 *)(param_1 + 0x28));
  FUN_03bef688(param_7,"  numRandomTable: %d\n",*(undefined4 *)(param_1 + 0x2c));
  FUN_03bef688(param_7,"  numCurveTable: %d\n",*(undefined4 *)(param_1 + 0x30));
  FUN_03bef688(param_7,"  numCurvePointTable: %d\n",*(undefined4 *)(param_1 + 0x34));
  FUN_03bef688(param_7,"  numUser: %d\n",*(undefined4 *)(param_1 + 0x3c));
  FUN_03bef688(param_7,"  conditionTablePos: %d\n",*(undefined4 *)(param_1 + 0x40));
  FUN_03bef688(param_7,"  nameTablePos: %d\n",*(undefined4 *)(param_1 + 0x44));
  FUN_03bef688(param_7,&DAT_040c2970);
  uVar32 = *(int *)(param_1 + 0x3c) << 2;
  FUN_03bef688(param_7,"<< OffsetTable (addr:0x%x, size:%d*%d=%d) >>\n",
               *(undefined8 *)(param_2 + 0x88),4,*(int *)(param_1 + 0x3c),uVar32);
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar24 = 0;
    do {
      FUN_03bef688(param_7,"  [%d] binPos=%x, nameHash=%x\n",uVar24 & 0xffffffff,
                   *(undefined4 *)(*(long *)(param_2 + 0x88) + uVar24 * 4),
                   *(undefined4 *)(*(long *)(param_2 + 0x80) + uVar24 * 4));
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(param_1 + 0x3c));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< ParamDefineTable (addr:0x%x, size:%d) >>\n",
               *(long *)(param_2 + 0x88) + (ulong)uVar32,param_4[0xf]);
  FUN_03bef688(param_7,"  ...no content print.\n\n");
  FUN_03bef688(param_7,"<< ResAssetParamTable (addr:0x%x, size:print later) >>\n",
               *(undefined8 *)(param_2 + 0x28));
  puVar36 = *(ulong **)(param_2 + 0x28);
  if (*(int *)(param_2 + 4) == 0) {
    iVar23 = 0;
    iVar31 = 0;
    puVar27 = puVar36;
  }
  else {
    iVar31 = 0;
    iVar23 = 0;
    uVar32 = 0;
    puVar37 = puVar36;
    do {
      if ((param_6 & 1) == 0) {
        puVar27 = puVar37 + 1;
        uVar5 = *(uint *)(param_3 + 3);
        if (uVar5 != 0) {
          uVar24 = *puVar37;
          if (uVar5 == 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              uVar18 = uVar13 & 0x3f;
              uVar16 = uVar13 + 1;
              uVar13 = uVar13 + 2;
              if ((1L << uVar18 & uVar24) == 0) {
              }
              else {
                iVar31 = iVar31 + 1;
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
              if ((1L << (uVar16 & 0x3f) & uVar24) != 0) {
                iVar31 = iVar31 + 1;
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
            } while (uVar13 != ((ulong)uVar5 & 0xfffffffe));
          }
          puVar37 = (ulong *)((long)puVar27 + 4);
          iVar23 = uVar5 + iVar23;
          if ((1L << (uVar13 & 0x3f) & uVar24) == 0) {
            iVar12 = iVar31;
            puVar37 = puVar27;
          }
          else {
            iVar12 = iVar31 + 1;
          }
          if ((uVar5 & 1) != 0) {
            iVar31 = iVar12;
            puVar27 = puVar37;
          }
        }
      }
      else {
        puVar27 = puVar37 + 1;
        FUN_03bef688(param_7,"  [%d] mask: %lu\n",uVar32,*puVar37);
        if ((int)param_3[3] != 0) {
          uVar24 = 0;
          puVar25 = puVar37 + 1;
          do {
            if ((*puVar37 >> (uVar24 & 0x3f) & 1) == 0) {
              FUN_03bef688(param_7,"  [%d] param of bit[%d]: not exist(default value)\n",uVar32,
                           uVar24 & 0xffffffff);
            }
            else {
              uVar5 = (uint)*puVar25;
              FUN_03bef688(param_7,
                           "  [%d] param of bit[%d]: rawValue: %u (referenceType: %d, value: %d)\n",
                           uVar32,uVar24 & 0xffffffff,uVar5,uVar5 >> 0x18,uVar5 & 0xffffff);
              iVar31 = iVar31 + 1;
              puVar27 = (ulong *)((long)puVar27 + 4);
              puVar25 = (ulong *)((long)puVar25 + 4);
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 < *(uint *)(param_3 + 3));
          iVar23 = iVar23 + (int)uVar24;
        }
      }
      uVar32 = uVar32 + 1;
      puVar37 = puVar27;
    } while (uVar32 < *(uint *)(param_2 + 4));
  }
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  FUN_03bef688(param_7,
               "<< ResAssetParamTable finished(size:%d, allParamNum=%d, notDefaultParamNum=%d) >>\n"
               ,(long)puVar27 - (long)puVar36,iVar23,iVar31);
  FUN_03bef688(param_7,&DAT_040c2970);
  puVar4 = (undefined4 *)(param_3[1] + 0x10);
  if (*param_3 != 0) {
    puVar4 = (undefined4 *)(*param_3 + 0x18);
  }
  FUN_03bef688(param_7,"<< ResTriggerOverwriteParamTable (addr:0x%x, size:print later) >>\n",*puVar4
              );
  uVar5 = *(uint *)(param_2 + 0x30);
  uVar32 = uVar5;
  if (*(int *)(param_2 + 8) == 0) {
    iVar23 = 0;
    iVar31 = 0;
  }
  else {
    iVar31 = 0;
    uVar33 = 0;
    iVar23 = 0;
    do {
      puVar15 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)uVar32);
      puVar3 = puVar15 + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)uVar32) {
        puVar3 = puVar15;
      }
      if ((param_6 & 1) == 0) {
        uVar32 = uVar32 + 4;
        uVar21 = *(uint *)((long)param_3 + 0x1c);
        if (uVar21 != 0) {
          uVar6 = *puVar3;
          if (uVar21 == 1) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            do {
              uVar7 = uVar14 & 0x1f;
              uVar1 = uVar14 + 1;
              uVar14 = uVar14 + 2;
              if ((1 << (ulong)uVar7 & uVar6) == 0) {
              }
              else {
                iVar31 = iVar31 + 1;
                uVar32 = uVar32 + 4;
              }
              if ((1 << (ulong)(uVar1 & 0x1f) & uVar6) != 0) {
                iVar31 = iVar31 + 1;
                uVar32 = uVar32 + 4;
              }
            } while (uVar14 != (uVar21 & 0xfffffffe));
          }
          uVar1 = uVar32 + 4;
          iVar23 = uVar21 + iVar23;
          if ((1 << (ulong)(uVar14 & 0x1f) & uVar6) == 0) {
            iVar12 = iVar31;
            uVar1 = uVar32;
          }
          else {
            iVar12 = iVar31 + 1;
          }
          if ((uVar21 & 1) != 0) {
            iVar31 = iVar12;
            uVar32 = uVar1;
          }
        }
      }
      else {
        FUN_03bef688(param_7,"  [%d] mask: %lu\n",uVar33,*puVar3);
        uVar32 = uVar32 + 4;
        if (*(int *)((long)param_3 + 0x1c) != 0) {
          uVar21 = 0;
          puVar15 = puVar3 + 1;
          do {
            if ((*puVar3 >> (ulong)(uVar21 & 0x1f) & 1) == 0) {
              FUN_03bef688(param_7,"  [%d] param of bit[%d]: not exist(not overwritten)\n",uVar33,
                           uVar21);
            }
            else {
              uVar6 = *puVar15;
              FUN_03bef688(param_7,
                           "  [%d] param of bit[%d]: rawValue: %u (referenceType: %d, value: %d)\n",
                           uVar33,uVar21,uVar6,uVar6 >> 0x18,uVar6 & 0xffffff);
              iVar31 = iVar31 + 1;
              uVar32 = uVar32 + 4;
              puVar15 = puVar15 + 1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar21 < *(uint *)((long)param_3 + 0x1c));
          iVar23 = iVar23 + uVar21;
        }
      }
      uVar33 = uVar33 + 1;
    } while (uVar33 < *(uint *)(param_2 + 8));
  }
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  FUN_03bef688(param_7,
               "<< ResTriggerOverwriteParamTable finished(size:%d, allParamNum=%d, overwriteNum=%d) >>\n"
               ,uVar32 - uVar5,iVar23,iVar31);
  FUN_03bef688(param_7,&DAT_040c2970);
  piVar35 = (int *)(param_3[1] + 0x40);
  if (*param_3 != 0) {
    piVar35 = (int *)(*param_3 + 0x44);
  }
  uVar13 = (ulong)(uint)(*piVar35 + (int)param_3[2]);
  uVar16 = *(ulong *)PTR_DAT_04bb38c8 | uVar13;
  uVar24 = uVar16 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar13) {
    uVar24 = uVar16;
  }
  FUN_03bef688(param_7,"<< LocalPropertyNameRefTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x38),8,*(int *)(param_2 + 0xc),
               *(int *)(param_2 + 0xc) << 3);
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0xc) != 0) {
    uVar13 = 0;
    do {
      FUN_03bef688(param_7,"  [%d] %s(%d)\n",uVar13 & 0xffffffff,
                   uVar24 + *(uint *)(*(long *)(param_2 + 0x38) + uVar13 * 4));
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0xc));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< LocalPropertyEnumNameRefTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x40),8,*(int *)(param_2 + 0x10),
               *(int *)(param_2 + 0x10) << 3);
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0x10) != 0) {
    uVar13 = 0;
    do {
      FUN_03bef688(param_7,"  [%d] %s(%d)\n",uVar13 & 0xffffffff,
                   uVar24 + *(uint *)(*(long *)(param_2 + 0x40) + uVar13 * 4));
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(uint *)(param_2 + 0x10));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< DirectValueTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x48),4,*(int *)(param_2 + 0x14),
               *(int *)(param_2 + 0x14) << 2);
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0x14) != 0) {
    uVar24 = 0;
    do {
      FUN_03bef688(param_7,"  [%d] directvalue=%d\n",uVar24 & 0xffffffff,
                   *(undefined4 *)(*(long *)(param_2 + 0x48) + uVar24 * 4));
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(param_2 + 0x14));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< RandomCallTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x50),8,*(int *)(param_2 + 0x18),
               *(int *)(param_2 + 0x18) << 3);
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0x18) != 0) {
    lVar28 = 0;
    uVar24 = 0;
    do {
      pfVar2 = (float *)(*(long *)(param_2 + 0x50) + lVar28);
      FUN_03bef688((double)*pfVar2,(double)pfVar2[1],param_7,"  [%d] minValue=%.4f, maxValue=%.4f\n"
                   ,uVar24 & 0xffffffff);
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 8;
    } while (uVar24 < *(uint *)(param_2 + 0x18));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< CurveCallTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x58),0x14,*(int *)(param_2 + 0x1c),
               *(int *)(param_2 + 0x1c) * 0x14);
  if ((param_6 & 1) == 0) {
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0x1c) != 0) {
    lVar28 = 0;
    uVar24 = 0;
    do {
      FUN_03bef688(param_7,"  [%d].curvePointStartPos: %hu\n",uVar24 & 0xffffffff,
                   *(undefined2 *)(*(long *)(param_2 + 0x58) + lVar28));
      FUN_03bef688(param_7,"  [%d].numPoint: %hu\n",uVar24 & 0xffffffff,
                   *(undefined2 *)(*(long *)(param_2 + 0x58) + lVar28 + 2));
      FUN_03bef688(param_7,"  [%d].curveType: %hu\n",uVar24 & 0xffffffff,
                   *(undefined2 *)(*(long *)(param_2 + 0x58) + lVar28 + 4));
      FUN_03bef688(param_7,"  [%d].isPropGlobal: %hu\n",uVar24 & 0xffffffff,
                   *(undefined2 *)(*(long *)(param_2 + 0x58) + lVar28 + 6));
      FUN_03bef688(param_7,"  [%d].propName: %u\n",uVar24 & 0xffffffff,
                   *(undefined4 *)(*(long *)(param_2 + 0x58) + lVar28 + 8));
      FUN_03bef688(param_7,"  [%d].propIdx: %d\n",uVar24 & 0xffffffff,
                   *(undefined4 *)(*(long *)(param_2 + 0x58) + lVar28 + 0xc));
      FUN_03bef688(param_7,"  [%d].localPropertyNameIdx: %hd\n",uVar24 & 0xffffffff,
                   (long)*(short *)(*(long *)(param_2 + 0x58) + lVar28 + 0x10));
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 0x14;
    } while (uVar24 < *(uint *)(param_2 + 0x1c));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< CurvePointTable (addr:0x%x, size:%d*%u=%u) >>\n",
               *(undefined8 *)(param_2 + 0x60),8,*(int *)(param_2 + 0x20),
               *(int *)(param_2 + 0x20) << 3);
  if ((param_6 & 1) == 0) {
    pcVar22 = "  ...no content print.\n";
    FUN_03bef688(param_7,"  ...no content print.\n");
  }
  else if (*(int *)(param_2 + 0x20) == 0) {
    pcVar22 = "  ...not dump content.\n";
  }
  else {
    lVar28 = 0;
    uVar24 = 0;
    pcVar22 = "  ...not dump content.\n";
    do {
      pfVar2 = (float *)(*(long *)(param_2 + 0x60) + lVar28);
      FUN_03bef688((double)*pfVar2,(double)pfVar2[1],param_7,"  [%d] x=%.4f, y=%.4f\n",
                   uVar24 & 0xffffffff);
      uVar24 = uVar24 + 1;
      lVar28 = lVar28 + 8;
    } while (uVar24 < *(uint *)(param_2 + 0x20));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  FUN_03bef688(param_7,"<< ExRegion (addr:0x%x, size:unknown) >>\n",*(undefined4 *)(param_2 + 0x6c))
  ;
  FUN_03bef688(param_7,pcVar22);
  FUN_03bef688(param_7,&DAT_040c2970);
  if (((param_6 & 1) != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    uVar24 = 0;
    do {
      puVar9 = PTR_DAT_04bb38c8;
      puVar8 = PTR_DAT_04bb38c0;
      uVar13 = (ulong)(uint)((int)param_3[2] + *(int *)(*(long *)(param_2 + 0x88) + uVar24 * 4));
      puVar17 = (undefined4 *)(*(ulong *)PTR_DAT_04bb38c8 | uVar13);
      puVar4 = puVar17 + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar13) {
        puVar4 = puVar17;
      }
      FUN_03bef688(param_7,"<< ResUserHeader[%d] (addr:0x%x, name=%s) >>\n",uVar24,puVar4,
                   &DAT_0407ebb1);
      FUN_03bef688(param_7,"    isSetup: %u\n",*puVar4);
      FUN_03bef688(param_7,"    numLocalProperty: %u\n",puVar4[1]);
      FUN_03bef688(param_7,"    numCallTable: %u\n",puVar4[2]);
      FUN_03bef688(param_7,"    numAsset: %u\n",puVar4[3]);
      FUN_03bef688(param_7,"    numRandomContainer2: %u\n",puVar4[4]);
      FUN_03bef688(param_7,"    numResActionSlot: %u\n",puVar4[5]);
      FUN_03bef688(param_7,"    numResAction: %u\n",puVar4[6]);
      FUN_03bef688(param_7,"    numResActionTrigger: %u\n",puVar4[7]);
      FUN_03bef688(param_7,"    numResProperty: %u\n",puVar4[8]);
      FUN_03bef688(param_7,"    numResPropertyTrigger: %u\n",puVar4[9]);
      FUN_03bef688(param_7,"    numResAlwaysTrigger: %u\n",puVar4[10]);
      FUN_03bef688(param_7,"    triggerTablePos: %u\n",puVar4[0xb]);
      FUN_03bef688(param_7,&DAT_040c2970);
      puVar17 = puVar4 + 0xc;
      piVar35 = (int *)(param_3[1] + 0x40);
      if (*param_3 != 0) {
        piVar35 = (int *)(*param_3 + 0x44);
      }
      uVar16 = (ulong)(uint)(*piVar35 + (int)param_3[2]);
      uVar18 = *(ulong *)puVar9 | uVar16;
      uVar13 = uVar18 + 0x100000000;
      if (*(ulong *)puVar8 <= uVar16) {
        uVar13 = uVar18;
      }
      FUN_03bef688(param_7,"    << LocalPropertyNameRefTable (addr:0x%x, num=%d) >>\n",puVar17,
                   puVar4[1]);
      if (puVar4[1] != 0) {
        uVar16 = 0;
        do {
          FUN_03bef688(param_7,"        [%d] %s(%d)\n",uVar16 & 0xffffffff,
                       uVar13 + (uint)puVar17[uVar16]);
          uVar16 = uVar16 + 1;
        } while (uVar16 < (uint)puVar4[1]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar16 = (ulong)(uint)puVar4[1];
      puVar17 = puVar17 + uVar16;
      uVar32 = *param_4;
      uVar18 = (ulong)uVar32;
      FUN_03bef688(param_7,"    << UserParamTable (addr:0x%x, num=%d) >>\n",puVar17,uVar18);
      if (uVar32 == 0) {
        uVar18 = 0;
      }
      else {
        uVar29 = 0;
        do {
          uVar32 = puVar17[uVar29];
          FUN_03bef688(param_7,"        [%d] rawValue: %u (type: %d, value: %d)\n",
                       uVar29 & 0xffffffff,uVar32,uVar32 >> 0x18,uVar32 & 0xffffff);
          uVar29 = uVar29 + 1;
        } while (uVar18 != uVar29);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      FUN_03bef688(param_7,"    << SortedAssetIdTable (addr:0x%x, num=%d) >>\n",puVar17 + uVar18,
                   puVar4[2]);
      if (puVar4[2] != 0) {
        uVar29 = 0;
        do {
          FUN_03bef688(param_7,"        [%d]: %hu\n",uVar29 & 0xffffffff,
                       *(undefined2 *)((long)puVar4 + uVar29 * 2 + uVar16 * 4 + uVar18 * 4 + 0x30));
          uVar29 = uVar29 + 1;
        } while (uVar29 < (uint)puVar4[2]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar29 = (ulong)(uint)puVar4[2];
      lVar28 = (long)(puVar17 + uVar18) + (uVar29 & 1) * 2 + uVar29 * 2;
      FUN_03bef688(param_7,"    << AssetCallTable (addr:0x%x, num=%d) >>\n",lVar28,uVar29);
      if (puVar4[2] != 0) {
        uVar30 = 0;
        puVar17 = (undefined4 *)
                  ((long)puVar4 + uVar18 * 4 + uVar16 * 4 + uVar29 * 2 + (uVar29 & 1) * 2 + 0x4c);
        do {
          FUN_03bef688(param_7,"        [%d].keyNamePos: %u %s\n",uVar30 & 0xffffffff,
                       (ulong)(uint)puVar17[-7],uVar13 + (uint)puVar17[-7]);
          FUN_03bef688(param_7,"        [%d].assetId: %hd\n",uVar30 & 0xffffffff,
                       (long)*(short *)(puVar17 + -6));
          FUN_03bef688(param_7,"        [%d].flag: %hu\n",uVar30 & 0xffffffff,
                       *(undefined2 *)((long)puVar17 + -0x16));
          FUN_03bef688(param_7,"        [%d].parentIndex: %d\n",uVar30 & 0xffffffff,puVar17[-4]);
          FUN_03bef688(param_7,"        [%d].paramStartPos: %u\n",uVar30 & 0xffffffff,puVar17[-1]);
          FUN_03bef688(param_7,"        [%d].conditionPos: %u\n",uVar30 & 0xffffffff,*puVar17);
          uVar30 = uVar30 + 1;
          puVar17 = puVar17 + 8;
        } while (uVar30 < (uint)puVar4[2]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar32 = puVar4[2];
      uVar5 = puVar4[3];
      piVar35 = (int *)(lVar28 + (ulong)uVar32 * 0x20);
      FUN_03bef688(param_7,"    << ContainerTable (addr:0x%x, num=%d) >>\n",piVar35,uVar32 - uVar5);
      if (uVar32 != uVar5) {
        iVar31 = 0;
        do {
          if (*piVar35 == 0) {
            FUN_03bef688(param_7,"        [%d].type: %d (switchConteinaer)\n",iVar31);
            FUN_03bef688(param_7,"        [%d].childrenStartIndex: %d\n",iVar31,piVar35[1]);
            FUN_03bef688(param_7,"        [%d].childrenEndIndex: %d\n",iVar31,piVar35[2]);
            FUN_03bef688(param_7,"        [%d].watchPropertyNamePos: %u %s\n",iVar31,
                         (ulong)(uint)piVar35[3],uVar13 + (uint)piVar35[3]);
            FUN_03bef688(param_7,"        [%d].watchPropertyId: %d\n",iVar31,piVar35[4]);
            FUN_03bef688(param_7,"        [%d].localPropertyNameIdx: %hd\n",iVar31,
                         (long)(short)piVar35[5]);
            FUN_03bef688(param_7,"        [%d].isGlobal: %d\n",iVar31,
                         *(undefined1 *)((long)piVar35 + 0x16));
            lVar28 = 0x18;
          }
          else {
            FUN_03bef688(param_7,"        [%d].type: %d\n",iVar31);
            FUN_03bef688(param_7,"        [%d].childrenStartIndex: %d\n",iVar31,piVar35[1]);
            FUN_03bef688(param_7,"        [%d].childrenEndIndex: %d\n",iVar31,piVar35[2]);
            lVar28 = 0xc;
          }
          iVar31 = iVar31 + 1;
          piVar35 = (int *)(lVar28 + (long)piVar35);
        } while (uVar32 - uVar5 != iVar31);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar16 = (ulong)(uint)(puVar4[0xb] + (int)puVar4);
      uVar18 = *(ulong *)PTR_DAT_04bb38c8 | uVar16;
      uVar13 = uVar18 + 0x100000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar16) {
        uVar13 = uVar18;
      }
      FUN_03bef688(param_7,"    << ResActionSlotTable (addr:0x%x, num=%d) >>\n",uVar13,puVar4[5]);
      if (puVar4[5] != 0) {
        uVar16 = 0;
        psVar26 = (short *)(uVar13 + 6);
        do {
          FUN_03bef688(param_7,"        [%d] namePos: %u, actionStartIdx: %hd, actionEndIdx: %hd\n",
                       uVar16 & 0xffffffff,*(undefined4 *)(psVar26 + -3),(long)psVar26[-1],
                       (long)*psVar26);
          uVar16 = uVar16 + 1;
          psVar26 = psVar26 + 4;
        } while (uVar16 < (uint)puVar4[5]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar16 = (ulong)(uint)puVar4[5];
      lVar28 = uVar13 + uVar16 * 8;
      FUN_03bef688(param_7,"    << ResActionTable (addr:0x%x, num=%d) >>\n",lVar28,puVar4[6]);
      if (puVar4[6] != 0) {
        uVar18 = 0;
        puVar17 = (undefined4 *)(lVar28 + 8);
        do {
          FUN_03bef688(param_7,"        [%d] namePos: %u, triggerStartIdx: %d, triggerEndIdx: %d\n",
                       uVar18 & 0xffffffff,puVar17[-2],puVar17[-1],*puVar17);
          uVar18 = uVar18 + 1;
          puVar17 = puVar17 + 3;
        } while (uVar18 < (uint)puVar4[6]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar18 = (ulong)(uint)puVar4[6];
      lVar28 = lVar28 + uVar18 * 0xc;
      FUN_03bef688(param_7,"    << ResActionTriggerTable (addr:0x%x, num=%d) >>\n",lVar28,puVar4[7])
      ;
      if (puVar4[7] != 0) {
        uVar29 = 0;
        puVar17 = (undefined4 *)(uVar13 + uVar16 * 8 + uVar18 * 0xc + 0xc);
        do {
          FUN_03bef688(param_7,"        [%d].guId: %d\n",uVar29 & 0xffffffff,puVar17[-3]);
          FUN_03bef688(param_7,"        [%d].assetCtbPos: %u\n",uVar29 & 0xffffffff,puVar17[-2]);
          FUN_03bef688(param_7,"        [%d].startFrame: %d\n",uVar29 & 0xffffffff,puVar17[-1]);
          FUN_03bef688(param_7,"        [%d].endFrame: %d\n",uVar29 & 0xffffffff,*puVar17);
          FUN_03bef688(param_7,"        [%d].flag: %hu\n",uVar29 & 0xffffffff,
                       *(undefined2 *)(puVar17 + 1));
          FUN_03bef688(param_7,"        [%d].overwriteHash: %hd\n",uVar29 & 0xffffffff,
                       (long)*(short *)((long)puVar17 + 6));
          FUN_03bef688(param_7,"        [%d].overwriteParamPos: %u\n",uVar29 & 0xffffffff,puVar17[2]
                      );
          uVar29 = uVar29 + 1;
          puVar17 = puVar17 + 6;
        } while (uVar29 < (uint)puVar4[7]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar29 = (ulong)(uint)puVar4[7];
      lVar28 = lVar28 + uVar29 * 0x18;
      FUN_03bef688(param_7,"    << ResPropertyTable (addr:0x%x, num=%d) >>\n",lVar28,puVar4[8]);
      if (puVar4[8] != 0) {
        uVar30 = 0;
        puVar17 = (undefined4 *)(uVar13 + uVar18 * 0xc + uVar29 * 0x18 + uVar16 * 8 + 8);
        do {
          FUN_03bef688(param_7,
                       "        [%d] watchPropertyNamePos: %u, isGlobal: %d, triggerStartIdx: %d, triggerEndIdx: %d\n"
                       ,uVar30 & 0xffffffff,puVar17[-2],puVar17[-1],*puVar17,puVar17[1]);
          uVar30 = uVar30 + 1;
          puVar17 = puVar17 + 4;
        } while (uVar30 < (uint)puVar4[8]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar30 = (ulong)(uint)puVar4[8];
      lVar28 = lVar28 + uVar30 * 0x10;
      FUN_03bef688(param_7,"    << ResPropertyTriggerTable (addr:0x%x, num=%d) >>\n",lVar28,
                   puVar4[9]);
      if (puVar4[9] != 0) {
        uVar34 = 0;
        puVar17 = (undefined4 *)
                  (uVar13 + uVar30 * 0x10 + uVar29 * 0x18 + uVar18 * 0xc + uVar16 * 8 + 0x10);
        do {
          FUN_03bef688(param_7,"        [%d].guId: %d\n",uVar34 & 0xffffffff,puVar17[-4]);
          FUN_03bef688(param_7,"        [%d].assetCtbPos: %u\n",uVar34 & 0xffffffff,puVar17[-3]);
          FUN_03bef688(param_7,"        [%d].condition: %u\n",uVar34 & 0xffffffff,puVar17[-2]);
          FUN_03bef688(param_7,"        [%d].flag: %hu\n",uVar34 & 0xffffffff,
                       *(undefined2 *)(puVar17 + -1));
          FUN_03bef688(param_7,"        [%d].overwriteHash: %hd\n",uVar34 & 0xffffffff,
                       (long)*(short *)((long)puVar17 + -2));
          FUN_03bef688(param_7,"        [%d].overwriteParamPos: %u\n",uVar34 & 0xffffffff,*puVar17);
          uVar34 = uVar34 + 1;
          puVar17 = puVar17 + 5;
        } while (uVar34 < (uint)puVar4[9]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar32 = puVar4[9];
      FUN_03bef688(param_7,"    << ResAlwaysTriggerTable (addr:0x%x, num=%d) >>\n",
                   lVar28 + (ulong)uVar32 * 0x14,puVar4[10]);
      if (puVar4[10] != 0) {
        uVar34 = 0;
        puVar17 = (undefined4 *)
                  (uVar13 + (ulong)uVar32 * 0x14 + uVar29 * 0x18 + uVar30 * 0x10 + uVar18 * 0xc +
                            uVar16 * 8 + 0xc);
        do {
          FUN_03bef688(param_7,"        [%d].guId: %d\n",uVar34 & 0xffffffff,puVar17[-3]);
          FUN_03bef688(param_7,"        [%d].assetCtbPos: %u\n",uVar34 & 0xffffffff,puVar17[-2]);
          FUN_03bef688(param_7,"        [%d].flag: %hu\n",uVar34 & 0xffffffff,
                       *(undefined2 *)(puVar17 + -1));
          FUN_03bef688(param_7,"        [%d].overwriteHash: %hd\n",uVar34 & 0xffffffff,
                       (long)*(short *)((long)puVar17 + -2));
          FUN_03bef688(param_7,"        [%d].overwriteParamPos: %u\n",uVar34 & 0xffffffff,*puVar17);
          uVar34 = uVar34 + 1;
          puVar17 = puVar17 + 4;
        } while (uVar34 < (uint)puVar4[10]);
      }
      FUN_03bef688(param_7,&DAT_040c2970);
      uVar24 = uVar24 + 1;
    } while (uVar24 < *(uint *)(param_1 + 0x3c));
  }
  iVar31 = *(int *)(param_1 + 4);
  FUN_03bef688(param_7,"<< ConditionTable (addr:0x%x, size:%d) >>\n",*(int *)(param_2 + 0x68),
               *(int *)(param_2 + 0x70) - *(int *)(param_2 + 0x68));
  uVar32 = *(uint *)(param_2 + 0x68);
  if (uVar32 < *(uint *)(param_2 + 0x70)) {
    iVar23 = 0;
    do {
      piVar19 = (int *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)uVar32);
      piVar35 = piVar19 + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)uVar32) {
        piVar35 = piVar19;
      }
      if (*piVar35 - 1U < 2) {
        FUN_03bef688(param_7,"  [%d].parentContainerType: %d\n",iVar23);
        FUN_03bef688((double)(float)piVar35[1],param_7,"  [%d].weight: %.4f\n",iVar23);
        iVar12 = 8;
      }
      else if (*piVar35 == 0) {
        FUN_03bef688(param_7,"  [%d].parentContainerType: %d\n",iVar23);
        FUN_03bef688(param_7,"  [%d].propertyType: %d\n",iVar23,(char)piVar35[1]);
        FUN_03bef688(param_7,"  [%d].compareType: %d\n",iVar23,*(undefined1 *)((long)piVar35 + 5));
        FUN_03bef688(param_7,"  [%d].value: %d\n",iVar23,piVar35[2]);
        FUN_03bef688(param_7,"  [%d].localPropertyEnumNameIdx: %d\n",iVar23,piVar35[3]);
        FUN_03bef688(param_7,"  [%d].isSolved: %d\n",iVar23,*(undefined1 *)((long)piVar35 + 6));
        FUN_03bef688(param_7,"  [%d].isGlobal: %d\n",iVar23,*(undefined1 *)((long)piVar35 + 7));
        iVar12 = 0x10;
      }
      else {
        iVar12 = 0;
      }
      uVar32 = iVar12 + uVar32;
      iVar23 = iVar23 + 1;
    } while (uVar32 < *(uint *)(param_2 + 0x70));
  }
  FUN_03bef688(param_7,&DAT_040c2970);
  piVar35 = (int *)(param_3[1] + 0x40);
  if (*param_3 != 0) {
    piVar35 = (int *)(*param_3 + 0x44);
  }
  iVar23 = *piVar35;
  FUN_03bef688(param_7,"<< NameTable (addr:0x%x, size:%d) >>\n",*(undefined4 *)(param_2 + 0x70),
               iVar31 - iVar23);
  puVar8 = PTR_DAT_04bb2698;
  uVar32 = iVar31 - iVar23;
  uVar24 = (ulong)uVar32;
  if (uVar32 == 0) goto LAB_03bee6f4;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    __dest = malloc(uVar24);
  }
  else {
    if (param_5 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_5 = (long *)(lVar28 + 8);
      if (lVar10 != 0) {
        param_5 = (long *)(lVar10 + 0xa8);
      }
      param_5 = (long *)*param_5;
      if (param_5 == (long *)0x0) {
        __dest = (void *)0x0;
        goto LAB_03bee630;
      }
    }
    __dest = (void *)(**(code **)(*param_5 + 0x30))(param_5,uVar24,8);
  }
LAB_03bee630:
  pvVar20 = (void *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x70));
  __src = (void *)((long)pvVar20 + 0x100000000);
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x70)) {
    __src = pvVar20;
  }
  memcpy(__dest,__src,uVar24);
  uVar32 = uVar32 - 1;
  if (uVar32 == 0) {
    FUN_03bef688(param_7,"  {%s}\n",__dest);
    if (__dest == (void *)0x0) goto LAB_03bee6f4;
  }
  else {
    if (uVar32 == 1) {
      uVar24 = 0;
    }
    else {
      uVar24 = 0;
      do {
        if (*(char *)((long)__dest + uVar24) == '\0') {
          *(undefined1 *)((long)__dest + uVar24) = 0x20;
        }
        if (*(char *)((long)__dest + uVar24 + 1) == '\0') {
          *(undefined1 *)((long)__dest + uVar24 + 1) = 0x20;
        }
        uVar24 = uVar24 + 2;
      } while (((ulong)uVar32 & 0xfffffffe) != uVar24);
    }
    if (((uVar32 & 1) != 0) && (*(char *)((long)__dest + uVar24) == '\0')) {
      *(undefined1 *)((long)__dest + uVar24) = 0x20;
    }
    FUN_03bef688(param_7,"  {%s}\n",__dest);
  }
  if (*(long *)puVar8 == 0) {
    free(__dest);
  }
  else {
    plVar11 = (long *)FUN_038cb610(*(long *)puVar8,__dest);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x38))(plVar11,__dest);
    }
  }
LAB_03bee6f4:
  FUN_03bef688(param_7,&DAT_040c2970);
  return;
}

