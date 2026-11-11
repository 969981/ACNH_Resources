
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_004961b0(long param_1,long *param_2,int param_3,ulong param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long lVar22;
  uint uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  ulong *puVar29;
  uint *puVar30;
  ulong uVar31;
  ulong uVar32;
  undefined1 *puVar33;
  undefined1 auVar34 [16];
  undefined1 *local_358;
  undefined8 local_350;
  undefined8 local_348;
  ulong local_340;
  ulong local_338 [5];
  char *local_310;
  undefined8 uStack_308;
  undefined *local_288;
  undefined *puStack_280;
  undefined *local_208;
  undefined *local_1f0;
  undefined *local_1c0;
  undefined *local_1b0;
  long *local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 local_90;
  long local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  
  local_80[0] = 0x80040200;
  if (*param_2 == 0) {
    if (DAT_04c71040 == '\0') {
      return 0x80040200;
    }
    FUN_00444bc0(local_338,&DAT_04c70ff0,1);
    local_310 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    uStack_308 = 0x6bf;
    uVar18 = FUN_004446b0(local_338,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04bd5570,"!topvar"
                          ,local_80);
    FUN_004446b0(uVar18,"Trying to serialize empty Var",PTR_DAT_04bd4920);
LAB_004962ec:
    FUN_00444c00(local_338);
    return local_80[0];
  }
  local_80[0] = 0x80040200;
  uVar17 = FUN_004274f0(param_2[1]);
  if ((uVar17 & 3) != 0) {
    if (DAT_04c71040 == '\0') {
      return local_80[0];
    }
    FUN_00444bc0(local_338,&DAT_04c70ff0,1);
    local_310 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileWriteFormat.cpp"
    ;
    uStack_308 = 0x6c0;
    uVar18 = FUN_004446b0(local_338,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04bd5f28,
                          "!topvar.getType()->isSerializable()",local_80);
    local_358 = (undefined1 *)param_2[1];
    FUN_004446b0(uVar18,"Trying to serialize instance of non-serializable type \'{}\'",
                 PTR_DAT_04bd5900,&local_358);
    goto LAB_004962ec;
  }
  if ((((*param_2 != 0) && (param_2[1] != 0)) &&
      (uVar17 = FUN_0044f8a0(param_2[1],PTR_DAT_04bd7e38), (uVar17 & 1) != 0)) &&
     (lVar27 = *param_2, lVar27 != 0)) {
    FUN_004292f0(local_338,lVar27);
    if (1 < local_338[0]) {
      uVar18 = FUN_00427480();
      auVar34 = FUN_00497230(param_1,uVar18,1);
      local_78 = auVar34;
      if (*(char *)(param_1 + 0x290) != '\0') {
        FUN_0049ba50(param_1 + 0x2e8,local_78 + 8);
        if ((extraout_x1 & 1) != 0) {
          if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
            *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
          }
          lVar27 = FUN_004514d0(param_1 + 0x2a0,local_78._0_8_);
          uVar17 = local_78._8_8_ & 0xffffffff;
          uVar14 = *(uint *)(param_1 + 0x20);
          if (uVar14 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
            FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d20,param_1 + 0x18,8);
            uVar14 = *(uint *)(param_1 + 0x20);
          }
          *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 8) = uVar17 | lVar27 << 0x20;
          *(uint *)(param_1 + 0x20) = uVar14 + 1;
        }
      }
      uVar9 = FUN_00495ff0(param_1,local_338[0],auVar34._0_8_,auVar34._8_8_);
      iVar11 = *(int *)(param_1 + 0x168);
      if (iVar11 <= param_3) {
        iVar26 = param_3 + 1;
        if ((int)(*(uint *)(param_1 + 0x16c) & 0x3fffffff) <= param_3) {
          uVar18 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar26,0xc,
                                *(undefined8 *)(param_1 + 0x160),iVar11,param_1 + 0x16c);
          iVar11 = *(int *)(param_1 + 0x168);
          *(undefined8 *)(param_1 + 0x160) = uVar18;
        }
        if (param_3 < iVar11) {
          if (iVar26 < iVar11) {
            *(int *)(param_1 + 0x168) = iVar26;
          }
        }
        else {
          *(int *)(param_1 + 0x168) = iVar26;
          if (0 < iVar26 - iVar11) {
            memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc),0,
                   (ulong)(uint)(iVar26 - iVar11) * 0xc);
          }
        }
      }
      *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar34._8_4_ | 0x50000000;
      *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = 0xffffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 8) = uVar9;
      return 0;
    }
    auVar34 = FUN_00497230(param_1,lVar27,1);
    iVar11 = *(int *)(param_1 + 0x168);
    if (iVar11 <= param_3) {
      iVar26 = param_3 + 1;
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x3fffffff) <= param_3) {
        uVar18 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar26,0xc,
                              *(undefined8 *)(param_1 + 0x160),iVar11,param_1 + 0x16c);
        iVar11 = *(int *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x160) = uVar18;
      }
      if (param_3 < iVar11) {
        if (iVar26 < iVar11) {
          *(int *)(param_1 + 0x168) = iVar26;
        }
      }
      else {
        *(int *)(param_1 + 0x168) = iVar26;
        if (0 < iVar26 - iVar11) {
          memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc),0,
                 (ulong)(uint)(iVar26 - iVar11) * 0xc);
        }
      }
    }
    *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar34._8_4_ | 0x40000000;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = 0xffffffff;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 8) = 0;
    if (*(char *)(param_1 + 0x290) == '\0') {
      return 0;
    }
    local_78 = auVar34;
    FUN_0049ba50(param_1 + 0x2e8,local_78 + 8);
    if ((extraout_x1_03 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
      *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
    }
    lVar27 = FUN_004514d0(param_1 + 0x2a0,local_78._0_8_);
    uVar17 = local_78._8_8_ & 0xffffffff;
    uVar14 = *(uint *)(param_1 + 0x20);
    if (uVar14 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
      FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d20,param_1 + 0x18,8);
      uVar14 = *(uint *)(param_1 + 0x20);
    }
    *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 8) = uVar17 | lVar27 << 0x20;
    *(uint *)(param_1 + 0x20) = uVar14 + 1;
    return 0;
  }
  uVar6 = *(undefined1 *)(param_1 + 0x290);
  FUN_00466aa0(local_338);
  local_288 = PTR_FUN_04bd5ac8;
  puStack_280 = PTR_LAB_04bd5af0;
  local_1f0 = PTR_LAB_04bd5ae8;
  local_208 = PTR_LAB_04bd5ad0;
  local_1c0 = PTR_LAB_04bd5af8;
  local_1b0 = PTR_LAB_04bd5ae0;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  local_b0 = param_5;
  local_98 = param_1;
  local_90 = uVar6;
  local_88 = param_1 + 0x1a0;
  auVar34 = FUN_00497230(param_1,param_2[1],0);
  uVar18 = auVar34._0_8_;
  iVar10 = FUN_00427030();
  iVar11 = *(int *)(param_1 + 0x10);
  iVar26 = 0;
  if ((long)iVar10 != 0) {
    iVar26 = (int)((ulong)(long)iVar11 / (ulong)(long)iVar10);
  }
  iVar26 = iVar11 - iVar26 * iVar10;
  uVar14 = iVar10 - iVar26;
  if (iVar26 != 0 && uVar14 != 0) {
    iVar26 = uVar14 + iVar11;
    lVar27 = *(long *)(param_1 + 8);
    if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar26) {
      lVar27 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar26,1,lVar27,iVar11);
      *(long *)(param_1 + 8) = lVar27;
    }
    if (0 < (int)uVar14) {
      memset((void *)(lVar27 + iVar11),0,(ulong)uVar14);
    }
    *(int *)(param_1 + 0x10) = iVar26;
  }
  iVar11 = *(int *)(param_1 + 0x368);
  if (*(int *)(param_1 + 0x368) <= iVar10) {
    iVar11 = iVar10;
  }
  *(int *)(param_1 + 0x368) = iVar11;
  puVar2 = local_78 + 8;
  local_78 = auVar34;
  if (*(char *)(param_1 + 0x290) != '\0') {
    FUN_0049ba50(param_1 + 0x2e8,puVar2);
    if ((extraout_x1_00 & 1) != 0) {
      if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
        *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
      }
      lVar27 = FUN_004514d0(param_1 + 0x2a0,local_78._0_8_);
      uVar17 = local_78._8_8_ & 0xffffffff;
      uVar14 = *(uint *)(param_1 + 0x20);
      if (uVar14 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
        FUN_00426990(*(undefined8 *)PTR_PTR_04bd4d20,param_1 + 0x18,8);
        uVar14 = *(uint *)(param_1 + 0x20);
      }
      *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 8) = uVar17 | lVar27 << 0x20;
      *(uint *)(param_1 + 0x20) = uVar14 + 1;
    }
  }
  if ((param_4 & 1) == 0) {
    iVar10 = (**(code **)(*param_5 + 0x18))(param_5,param_2);
    iVar26 = *(int *)(param_1 + 0x168);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    iVar11 = param_3;
    if (param_3 <= iVar10) {
      iVar11 = iVar10;
    }
    if (iVar26 <= iVar11) {
      iVar13 = iVar11 + 1;
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x3fffffff) <= iVar11) {
        uVar19 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar13,0xc,
                              *(undefined8 *)(param_1 + 0x160),iVar26,param_1 + 0x16c);
        iVar26 = *(int *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x160) = uVar19;
      }
      if (iVar11 < iVar26) {
        if (iVar13 < iVar26) {
          *(int *)(param_1 + 0x168) = iVar13;
        }
      }
      else {
        *(int *)(param_1 + 0x168) = iVar13;
        if (0 < iVar13 - iVar26) {
          memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar26 * 0xc),0,
                 (ulong)(uint)(iVar13 - iVar26) * 0xc);
        }
      }
    }
    *(uint *)(*(long *)(param_1 + 0x160) + (long)iVar10 * 0xc) = auVar34._8_4_ | 0x30000000;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)iVar10 * 0xc + 4) = uVar9;
    *(int *)(*(long *)(param_1 + 0x160) + (long)iVar10 * 0xc + 8) = param_3;
    if (*(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) >> 0x1c != 0) goto LAB_004967c4;
    lVar27 = *(long *)(param_1 + 0x160) + (long)param_3 * 0xc;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x168);
    uVar9 = *(undefined4 *)(param_1 + 0x10);
    if (iVar11 <= param_3) {
      iVar26 = param_3 + 1;
      if ((int)(*(uint *)(param_1 + 0x16c) & 0x3fffffff) <= param_3) {
        uVar19 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar26,0xc,
                              *(undefined8 *)(param_1 + 0x160),iVar11,param_1 + 0x16c);
        iVar11 = *(int *)(param_1 + 0x168);
        *(undefined8 *)(param_1 + 0x160) = uVar19;
      }
      if (param_3 < iVar11) {
        if (iVar26 < iVar11) {
          *(int *)(param_1 + 0x168) = iVar26;
        }
      }
      else {
        *(int *)(param_1 + 0x168) = iVar26;
        if (0 < iVar26 - iVar11) {
          memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar11 * 0xc),0,
                 (ulong)(uint)(iVar26 - iVar11) * 0xc);
        }
      }
    }
    *(uint *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc) = auVar34._8_4_ | 0x10000000;
    *(undefined4 *)(*(long *)(param_1 + 0x160) + (long)param_3 * 0xc + 4) = uVar9;
    lVar27 = *(long *)(param_1 + 0x160) + (long)param_3 * 0xc;
    iVar10 = 1;
  }
  *(int *)(lVar27 + 8) = iVar10;
LAB_004967c4:
  uVar19 = FUN_00461bf0(param_1 + 0x228,param_2[1],uVar18);
  uVar9 = FUN_00426fc0(uVar18);
  iVar11 = FUN_00426fc0(uVar18);
  puVar30 = (uint *)(param_1 + 0x14);
  iVar26 = *(int *)(param_1 + 0x10);
  lVar27 = *(long *)(param_1 + 8);
  iVar11 = iVar26 + iVar11;
  if ((int)(*puVar30 & 0x3fffffff) < iVar11) {
    lVar27 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar11,1,lVar27,iVar26,puVar30);
    *(long *)(param_1 + 8) = lVar27;
  }
  *(int *)(param_1 + 0x10) = iVar11;
  FUN_0043a4d0(lVar27 + iVar26,0,uVar9);
  lVar22 = *param_2;
  uVar12 = FUN_00426fc0(param_2[1]);
  FUN_00497e10(local_338,uVar19,lVar27 + iVar26,uVar9,lVar22,uVar12,uVar12,uVar9,1);
  if ((int)local_a0 < 1) {
    uVar18 = *(undefined8 *)PTR_PTR_04bd4d20;
    bVar8 = false;
    uVar14 = local_a0._4_4_;
  }
  else {
    uVar18 = *(undefined8 *)PTR_PTR_04bd4d20;
    lVar27 = 0;
    puVar3 = (uint *)(param_1 + 0x16c);
    do {
      plVar4 = (long *)(local_a8 + lVar27 * 0x20);
      uVar17 = plVar4[2];
      lVar22 = *plVar4;
      lVar5 = plVar4[1];
      uVar32 = uVar17 & 1;
      if ((uVar17 & 1) != 0) {
        FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
      }
      if (lVar5 == 0) {
        uVar20 = 0;
        uVar31 = 0;
        goto LAB_00496ccc;
      }
      iVar11 = *(int *)(local_a8 + lVar27 * 0x20 + 0x18);
      uVar20 = FUN_00428440(lVar5);
      if ((uVar20 & 0x1f) == 8) {
        if (uVar32 != 0) {
          FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
        }
        uVar31 = uVar17;
        if (lVar22 == 0) goto LAB_00496af0;
        local_358 = (undefined1 *)0x0;
        local_348 = 0;
        local_340 = 0;
        local_350 = 0;
        (**(code **)(*(long *)(uVar17 & 0xfffffffffffffffe) + 0x50))
                  ((long *)(uVar17 & 0xfffffffffffffffe),lVar22,lVar5,&local_358);
        uVar19 = local_350;
        auVar34 = FUN_00497230(param_1,local_350,0);
        iVar10 = (int)local_348;
        iVar26 = *(int *)(param_1 + 0x224);
        iVar13 = FUN_00427030();
        if (iVar26 <= iVar13) {
          iVar26 = iVar13;
        }
        iVar13 = *(int *)(param_1 + 0x10);
        iVar15 = 0;
        if ((long)iVar26 != 0) {
          iVar15 = (int)((ulong)(long)iVar13 / (ulong)(long)iVar26);
        }
        iVar15 = iVar13 - iVar15 * iVar26;
        uVar14 = iVar26 - iVar15;
        if (iVar15 != 0 && uVar14 != 0) {
          lVar22 = *(long *)(param_1 + 8);
          iVar15 = uVar14 + iVar13;
          if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar15) {
            lVar22 = FUN_00426720(uVar18,iVar15,1,lVar22,iVar13,puVar30);
            *(long *)(param_1 + 8) = lVar22;
          }
          if (0 < (int)uVar14) {
            memset((void *)(lVar22 + iVar13),0,(ulong)uVar14);
          }
          *(int *)(param_1 + 0x10) = iVar15;
        }
        iVar13 = *(int *)(param_1 + 0x368);
        if (*(int *)(param_1 + 0x368) <= iVar26) {
          iVar13 = iVar26;
        }
        *(int *)(param_1 + 0x368) = iVar13;
        local_78 = auVar34;
        if (*(char *)(param_1 + 0x290) != '\0') {
          FUN_0049ba50(param_1 + 0x2e8,puVar2);
          if ((extraout_x1_01 & 1) != 0) {
            if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
              *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
            }
            lVar22 = FUN_004514d0(param_1 + 0x2a0,local_78._0_8_);
            uVar20 = local_78._8_8_ & 0xffffffff;
            uVar14 = *(uint *)(param_1 + 0x20);
            if (uVar14 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
              FUN_00426990(uVar18,param_1 + 0x18,8);
              uVar14 = *(uint *)(param_1 + 0x20);
            }
            *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar14 * 8) = uVar20 | lVar22 << 0x20;
            *(uint *)(param_1 + 0x20) = uVar14 + 1;
          }
        }
        iVar26 = *(int *)(param_1 + 0x168);
        uVar9 = *(undefined4 *)(param_1 + 0x10);
        if (iVar26 <= iVar11) {
          iVar13 = iVar11 + 1;
          if ((int)(*puVar3 & 0x3fffffff) <= iVar11) {
            uVar21 = FUN_00426720(uVar18,iVar13,0xc,*(undefined8 *)(param_1 + 0x160),iVar26,puVar3);
            iVar26 = *(int *)(param_1 + 0x168);
            *(undefined8 *)(param_1 + 0x160) = uVar21;
          }
          if (iVar11 < iVar26) {
            if (iVar13 < iVar26) {
              *(int *)(param_1 + 0x168) = iVar13;
            }
          }
          else {
            *(int *)(param_1 + 0x168) = iVar13;
            if (0 < iVar13 - iVar26) {
              memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar26 * 0xc),0,
                     (ulong)(uint)(iVar13 - iVar26) * 0xc);
            }
          }
        }
        lVar22 = (long)iVar11 * 0xc;
        *(uint *)(*(long *)(param_1 + 0x160) + lVar22) = auVar34._8_4_ | 0x20000000;
        *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar22 + 4) = uVar9;
        *(int *)(*(long *)(param_1 + 0x160) + lVar22 + 8) = iVar10;
        if (iVar10 != 0) {
          iVar15 = FUN_00426fc0(uVar19);
          iVar16 = FUN_00426fc0(auVar34._0_8_);
          iVar13 = iVar16 * iVar10;
          uVar19 = FUN_00461bf0(param_1 + 0x228,uVar19,auVar34._0_8_);
          iVar26 = *(int *)(param_1 + 0x10);
          lVar22 = *(long *)(param_1 + 8);
          iVar11 = iVar26 + iVar13;
          if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar11) {
            lVar22 = FUN_00426720(uVar18,iVar11,1,lVar22,iVar26,puVar30);
            *(long *)(param_1 + 8) = lVar22;
          }
          *(int *)(param_1 + 0x10) = iVar11;
          FUN_0043a4d0(lVar22 + iVar26,0,iVar13);
          FUN_00497e10(local_338,uVar19,lVar22 + iVar26,iVar13,local_358,iVar15 * iVar10,iVar16,
                       iVar15,iVar10);
        }
        if ((local_340 & 1) != 0) {
          FUN_0043dd50(local_340 & 0xfffffffffffffffe);
        }
LAB_00496e60:
        bVar8 = false;
      }
      else {
        uVar31 = 0;
LAB_00496af0:
        uVar20 = FUN_00428440(lVar5);
        if ((uVar20 & 0x1f) == 3) {
          if (uVar32 != 0) {
            FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
          }
          uVar20 = uVar17;
          if (lVar22 == 0) goto LAB_00496ccc;
          auVar34 = FUN_00497230(param_1,PTR_DAT_04bd4f98,0);
          local_358 = (undefined1 *)0x0;
          (**(code **)(*(long *)(uVar17 & 0xfffffffffffffffe) + 0x38))
                    ((long *)(uVar17 & 0xfffffffffffffffe),lVar22,lVar5,&local_358);
          puVar33 = local_358;
          uVar14 = FUN_0043a2d0(local_358);
          local_78 = auVar34;
          if (*(char *)(param_1 + 0x290) != '\0') {
            FUN_0049ba50(param_1 + 0x2e8,puVar2);
            if ((extraout_x1_02 & 1) != 0) {
              if (*(int *)(param_1 + 0x210) < (int)local_78._8_4_) {
                *(undefined4 *)(param_1 + 0x210) = local_78._8_4_;
              }
              lVar22 = FUN_004514d0(param_1 + 0x2a0,local_78._0_8_);
              uVar28 = local_78._8_8_ & 0xffffffff;
              uVar23 = *(uint *)(param_1 + 0x20);
              if (uVar23 == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
                FUN_00426990(uVar18,param_1 + 0x18,8);
                uVar23 = *(uint *)(param_1 + 0x20);
              }
              *(ulong *)(*(long *)(param_1 + 0x18) + (long)(int)uVar23 * 8) =
                   uVar28 | lVar22 << 0x20;
              *(uint *)(param_1 + 0x20) = uVar23 + 1;
            }
            if (*(char *)(param_1 + 0x290) != '\0') {
              uVar23 = *(uint *)(param_1 + 0x10);
              if (((long)(int)uVar23 & 1U) != 0) {
                uVar7 = 2 - (uVar23 & 1);
                if (uVar7 != 0) {
                  lVar22 = *(long *)(param_1 + 8);
                  iVar26 = uVar7 + uVar23;
                  if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar26) {
                    lVar22 = FUN_00426720(uVar18,iVar26,1,lVar22,uVar23,puVar30);
                    *(long *)(param_1 + 8) = lVar22;
                  }
                  memset((void *)(lVar22 + (int)uVar23),0,(ulong)uVar7);
                  *(int *)(param_1 + 0x10) = iVar26;
                }
              }
              iVar26 = *(int *)(param_1 + 0x368);
              if (iVar26 < 3) {
                iVar26 = 2;
              }
              *(int *)(param_1 + 0x368) = iVar26;
            }
          }
          iVar26 = *(int *)(param_1 + 0x168);
          uVar9 = *(undefined4 *)(param_1 + 0x10);
          if (iVar26 <= iVar11) {
            iVar10 = iVar11 + 1;
            if ((int)(*puVar3 & 0x3fffffff) <= iVar11) {
              uVar19 = FUN_00426720(uVar18,iVar10,0xc,*(undefined8 *)(param_1 + 0x160));
              iVar26 = *(int *)(param_1 + 0x168);
              *(undefined8 *)(param_1 + 0x160) = uVar19;
            }
            if (iVar11 < iVar26) {
              if (iVar10 < iVar26) {
                *(int *)(param_1 + 0x168) = iVar10;
              }
            }
            else {
              *(int *)(param_1 + 0x168) = iVar10;
              if (0 < iVar10 - iVar26) {
                memset((void *)(*(long *)(param_1 + 0x160) + (long)iVar26 * 0xc),0,
                       (ulong)(uint)(iVar10 - iVar26) * 0xc);
              }
            }
          }
          lVar22 = (long)iVar11 * 0xc;
          *(uint *)(*(long *)(param_1 + 0x160) + lVar22) = auVar34._8_4_ | 0x20000000;
          *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar22 + 4) = uVar9;
          *(uint *)(*(long *)(param_1 + 0x160) + lVar22 + 8) = uVar14 + 1;
          lVar22 = *(long *)(param_1 + 8);
          iVar26 = *(int *)(param_1 + 0x10);
          iVar11 = iVar26 + uVar14 + 1;
          if ((int)(*(uint *)(param_1 + 0x14) & 0x3fffffff) < iVar11) {
            lVar22 = FUN_00426720(uVar18,iVar11,1,lVar22,iVar26,puVar30);
            *(long *)(param_1 + 8) = lVar22;
          }
          if (-1 < (int)uVar14) {
            puVar25 = (undefined1 *)(lVar22 + iVar26);
            uVar23 = uVar14 + 1 & 7;
            if (6 < uVar14) {
              iVar26 = (uVar23 - 1) - uVar14;
              puVar24 = puVar25;
              do {
                *puVar24 = *puVar33;
                puVar24[1] = puVar33[1];
                puVar24[2] = puVar33[2];
                puVar24[3] = puVar33[3];
                puVar24[4] = puVar33[4];
                puVar24[5] = puVar33[5];
                puVar24[6] = puVar33[6];
                puVar1 = puVar33 + 7;
                puVar25 = puVar24 + 8;
                puVar33 = puVar33 + 8;
                puVar24[7] = *puVar1;
                iVar26 = iVar26 + 8;
                puVar24 = puVar25;
              } while (iVar26 != 0);
            }
            if (uVar23 != 0) {
              iVar26 = -uVar23;
              do {
                iVar26 = iVar26 + 1;
                *puVar25 = *puVar33;
                puVar25 = puVar25 + 1;
                puVar33 = puVar33 + 1;
              } while (iVar26 != 0);
            }
          }
          *(int *)(param_1 + 0x10) = iVar11;
          bVar8 = false;
          uVar28 = uVar32;
        }
        else {
          uVar20 = 0;
LAB_00496ccc:
          local_80[0] = 0x80040200;
          bVar8 = true;
          uVar28 = uVar20 & 1;
        }
        if (uVar28 != 0) {
          FUN_0043dd50(uVar20 & 0xfffffffffffffffe);
        }
        if (!bVar8) goto LAB_00496e60;
        bVar8 = true;
      }
      if ((uVar31 & 1) != 0) {
        FUN_0043dd50(uVar31 & 0xfffffffffffffffe);
      }
      if (uVar32 == 0) {
        iVar11 = (int)local_a0;
      }
      else {
        FUN_0043dd50(uVar17 & 0xfffffffffffffffe);
        iVar11 = (int)local_a0;
      }
      if (bVar8) {
        bVar8 = true;
        goto joined_r0x00496fe4;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < iVar11);
    bVar8 = false;
joined_r0x00496fe4:
    if (0 < iVar11) {
      puVar29 = (ulong *)(local_a8 + (long)iVar11 * 0x20 + -0x10);
      do {
        if ((*puVar29 & 1) != 0) {
          FUN_0043dd50(*puVar29 & 0xfffffffffffffffe);
        }
        iVar11 = iVar11 + -1;
        puVar29 = puVar29 + -4;
      } while (iVar11 != 0);
    }
    uVar14 = local_a0._4_4_;
  }
  if ((-1 < local_a0) && (local_a0 = (ulong)uVar14 << 0x20, local_a8 != 0)) {
    FUN_00421f90(uVar18,local_a8,0x20,uVar14 & 0x3fffffff);
  }
  if (!bVar8) {
    return 0;
  }
  return local_80[0];
}

