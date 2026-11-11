
undefined8 FUN_004d1de0(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 **ppuVar4;
  undefined4 uVar5;
  ulong *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  byte bVar16;
  undefined1 **ppuVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined1 *puVar22;
  char *pcVar23;
  undefined1 **ppuVar24;
  undefined1 **ppuVar25;
  undefined1 **ppuVar26;
  undefined1 **local_808;
  ulong local_800;
  undefined1 **local_7f8;
  undefined8 local_7f0;
  undefined1 *local_7e8;
  undefined1 *local_7e0;
  ulong local_788;
  undefined8 local_748;
  undefined8 local_738;
  undefined *local_6e8;
  undefined8 uStack_6e0;
  ulong local_4e8;
  ulong local_4e0;
  long local_4d8;
  undefined1 **local_4d0 [18];
  undefined8 *local_440;
  undefined8 local_438;
  undefined8 local_430 [32];
  undefined1 local_330 [16];
  undefined1 auStack_320 [192];
  undefined1 *local_260;
  undefined4 local_258;
  uint local_254;
  undefined1 auStack_250 [256];
  undefined8 local_150 [18];
  ulong *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined1 **local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  ppuVar24 = (undefined1 **)(param_1 + 0x30);
  puVar1 = (undefined8 *)(param_1 + 0x40);
  FUN_004d1cf0(puVar1,*ppuVar24);
  uVar10 = FUN_00467bd0(param_1);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  FUN_004225b0(local_150);
  iVar7 = FUN_00468250(param_1,local_150);
  if (iVar7 < 0) {
    if (3 < DAT_04c719d8) {
      FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
      lVar21 = FUN_004446b0(&local_7f8,local_150[0],PTR_DAT_04bd4920);
      uVar20 = 0x18a;
LAB_004d2044:
      *(char **)(lVar21 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
      ;
      *(undefined8 *)(lVar21 + 0x30) = uVar20;
      FUN_00444c00(&local_7f8);
    }
LAB_004d2050:
    FUN_00440b30(puVar1,3,1);
    goto LAB_004d2060;
  }
  lVar21 = 0;
  do {
    if (*(int *)(param_1 + 0x60) <= lVar21) {
      puVar11 = (undefined1 *)FUN_00446e70(local_150[0]);
      if (puVar11 == (undefined1 *)0x0) {
        if (DAT_04c719d8 < 4) goto LAB_004d2050;
        FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
        lVar21 = FUN_004446b0(&local_7f8,"Invalid type name: \'{}\'",&DAT_048612f8,local_150);
        uVar20 = 0x19d;
        goto LAB_004d2044;
      }
      break;
    }
    FUN_004225b0(&local_7f8);
    FUN_00422d90(&local_7f8,"%s::%s",*(undefined8 *)(*(long *)(param_1 + 0x58) + lVar21 * 8),
                 local_150[0]);
    puVar11 = (undefined1 *)FUN_00446e70(local_7f8);
    FUN_00422550(&local_7f8);
    lVar21 = lVar21 + 1;
  } while (puVar11 == (undefined1 *)0x0);
  uVar8 = FUN_004274f0(puVar11);
  if ((uVar8 >> 8 & 1) == 0) {
    if (3 < DAT_04c719d8) {
      FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
      lVar21 = FUN_004446b0(&local_7f8,"\'{}\' is not an attribute",&DAT_048612f8,local_150);
      uVar20 = 0x19e;
      goto LAB_004d2044;
    }
    goto LAB_004d2050;
  }
  if (3 < DAT_04c719d8) {
    FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
    lVar21 = FUN_004446b0(&local_7f8,"Attribute \'{}\'",&DAT_048612f8,local_150);
    *(char **)(lVar21 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
    ;
    *(undefined8 *)(lVar21 + 0x30) = 0x1a0;
    *(undefined1 *)(lVar21 + 9) = 1;
    FUN_00444c00(&local_7f8);
  }
  FUN_0044ed80(&local_7f8,puVar11,&DAT_04c152b8);
  ppuVar26 = local_7f8;
  if (((ulong)local_7e8 & 1) != 0) {
    FUN_0043dd50((ulong)local_7e8 & 0xfffffffffffffffe);
  }
  uVar10 = FUN_00427110(puVar11,&DAT_04c14630);
  if (ppuVar26 == (undefined1 **)0x0) {
    ppuVar17 = ppuVar24;
    puVar19 = puVar11;
    if ((uVar10 & 1) != 0) goto LAB_004d209c;
LAB_004d20a0:
    local_330._0_8_ = auStack_320;
    local_260 = auStack_250;
    local_254 = 0x80000010;
    local_440 = local_430;
    local_330._8_8_ = -0x7ffffff800000000;
    local_258 = 0;
    local_438 = -0x7fffffe000000000;
    uVar12 = FUN_00428440(puVar19);
    if ((puVar19 != (undefined1 *)0x0) && ((uVar12 & 0x1f) == 7)) {
      FUN_00427c30(&local_7f8,puVar19,0);
      puVar3 = PTR_DAT_048607c0;
LAB_004d2140:
      if (local_7f8 + 1 < local_7f0) {
        local_7f8 = local_7f8 + 1;
        uVar12 = FUN_004290b0();
        lVar21 = local_438;
      }
      else {
        uVar12 = FUN_00427c40(&local_7f8);
        if ((uVar12 & 1) == 0) goto LAB_004d21fc;
        uVar12 = FUN_004290b0(local_7f8);
        lVar21 = local_438;
      }
      local_438 = lVar21;
      if ((uVar12 & 0x30) != 0) {
        local_438._4_4_ = (uint)((ulong)lVar21 >> 0x20);
        puVar22 = *local_7f8;
        local_438._0_4_ = (uint)lVar21;
        if ((uint)local_438 == (local_438._4_4_ & 0x3fffffff)) {
          FUN_00426990(puVar3,&local_440,8);
          lVar21 = local_438;
        }
        local_438 = lVar21;
        iVar7 = (uint)local_438 + 1;
        lVar21 = (long)(int)(uint)local_438;
        local_440[lVar21] = puVar22;
        local_438 = CONCAT44(local_438._4_4_,iVar7);
      }
      goto LAB_004d2140;
    }
    if ((uint)local_438 == (local_438._4_4_ & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607c0,&local_440,8);
    }
    iVar7 = (uint)local_438 + 1;
    local_440[(int)(uint)local_438] = puVar19;
    local_438 = CONCAT44(local_438._4_4_,iVar7);
    puVar15 = local_440;
    goto joined_r0x004d21f4;
  }
  if (ppuVar26[1] != (undefined1 *)0x0) {
    ppuVar17 = ppuVar26;
LAB_004d209c:
    puVar19 = *ppuVar17;
    goto LAB_004d20a0;
  }
  if (3 < DAT_04c719d8) {
    FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
    local_330 = FUN_004273b0(puVar11);
    lVar21 = FUN_004446b0(&local_7f8,"Parsing type ({}) has no conversion function",&DAT_048616a0,
                          local_330);
    *(char **)(lVar21 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
    ;
    *(undefined8 *)(lVar21 + 0x30) = 0x1a6;
    FUN_00444c00(&local_7f8);
  }
  FUN_00440b30(puVar1,3,1);
  goto joined_r0x004d2970;
LAB_004d21fc:
  iVar7 = (uint)local_438;
  puVar15 = local_440;
joined_r0x004d21f4:
  local_440 = puVar15;
  if (iVar7 != 0) {
    lVar21 = (long)iVar7 << 3;
    do {
      uVar20 = *puVar15;
      FUN_00429460(&local_7f8,uVar20);
      pcVar23 = "<value>";
      if ((undefined1 **)0x1 < local_7f8) {
        FUN_00429460(&local_7f8,uVar20);
        pcVar23 = (char *)FUN_00427b40(&local_7f8);
      }
      local_4d0[0] = (undefined1 **)pcVar23;
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
        lVar13 = FUN_004446b0(&local_7f8,"Field \'{}\'",&DAT_048534d0,local_4d0);
        *(char **)(lVar13 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
        ;
        *(undefined8 *)(lVar13 + 0x30) = 0x1b8;
        *(undefined1 *)(lVar13 + 9) = 1;
        FUN_00444c00(&local_7f8);
      }
      ppuVar4 = local_4d0[0];
      ppuVar25 = (undefined1 **)*ppuVar24;
      FUN_0044ed80(&local_7f8,uVar20,PTR_DAT_04bd7458);
      ppuVar17 = local_7f8;
      if (((ulong)local_7e8 & 1) != 0) {
        FUN_0043dd50((ulong)local_7e8 & 0xfffffffffffffffe);
      }
      if (ppuVar17 == (undefined1 **)0x0) {
        bVar16 = 0;
      }
      else {
        bVar16 = *(byte *)ppuVar17 | 2;
        if (*(byte *)((long)ppuVar17 + 1) != 0) {
          bVar16 = *(byte *)ppuVar17;
        }
      }
      local_7e8 = (undefined1 *)CONCAT71(local_7e8._1_7_,bVar16);
      local_7e0 = local_330;
      local_7f8 = ppuVar4;
      local_7f0 = ppuVar25;
      iVar7 = FUN_004d3c00(&local_c0,uVar20,&local_7f8);
      if (iVar7 < 0) {
        if (3 < DAT_04c719d8) {
          FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
          lVar13 = FUN_004446b0(&local_7f8,"Invalid type",&DAT_0413df78);
          *(char **)(lVar13 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
          ;
          *(undefined8 *)(lVar13 + 0x30) = 0x1b9;
          FUN_00444c00(&local_7f8);
        }
        bVar2 = true;
        FUN_00440b30(puVar1,3,1);
      }
      else {
        bVar2 = false;
      }
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
        local_7f0._0_2_ = CONCAT11(0xff,(undefined1)local_7f0);
        FUN_00444c00(&local_7f8);
      }
      if (bVar2) goto LAB_004d28dc;
      puVar15 = puVar15 + 1;
      lVar21 = lVar21 + -8;
    } while (lVar21 != 0);
  }
  FUN_004225b0(local_4d0);
  iVar7 = FUN_004682b0(param_1,local_330,local_4d0);
  puVar15 = local_440;
  if (iVar7 < 0) {
    if (3 < DAT_04c719d8) {
      FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
      lVar21 = FUN_004446b0(&local_7f8,local_4d0[0],PTR_DAT_04bd4920);
      *(char **)(lVar21 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
      ;
      *(undefined8 *)(lVar21 + 0x30) = 0x1bf;
      FUN_00444c00(&local_7f8);
    }
    goto LAB_004d28c8;
  }
  if (ppuVar26 == (undefined1 **)0x0) {
    local_4d8 = 0;
    local_4e0 = 0;
    local_4e8 = 0;
    if ((uint)local_438 == 0) {
LAB_004d267c:
      uVar12 = FUN_00428860(puVar19);
      if ((uVar12 & 1) != 0) {
        FUN_00428940(&local_7f8,puVar19);
        puVar19 = local_7e8;
        ppuVar17 = local_7f0;
        ppuVar26 = local_7f8;
        local_7f0 = (undefined1 **)0x0;
        local_7e8 = (undefined1 *)0x0;
        local_7f8 = (undefined1 **)0x0;
        *(undefined1 ***)(param_1 + 0x40) = ppuVar26;
        *(undefined1 ***)(param_1 + 0x48) = ppuVar17;
        uVar12 = *(ulong *)(param_1 + 0x50);
        *(undefined1 **)(param_1 + 0x50) = puVar19;
        if (((uVar12 & 1) != 0) &&
           (FUN_0043dd50(uVar12 & 0xfffffffffffffffe), ((ulong)local_7e8 & 1) != 0)) {
          FUN_0043dd50((ulong)local_7e8 & 0xfffffffffffffffe);
        }
LAB_004d29cc:
        local_7f8 = &local_7e8;
        local_7f0 = (undefined1 **)0x8000002000000000;
        lVar21 = *(long *)(param_1 + 0x48);
        uVar12 = FUN_00428440(lVar21);
        if ((lVar21 != 0) && ((uVar12 & 0x1f) == 7)) {
          FUN_00427c30(&local_c0,*(undefined8 *)(param_1 + 0x48),0);
          puVar3 = PTR_DAT_048607c0;
LAB_004d2a4c:
          if (local_c0 + 1 < uStack_b8) {
            local_c0 = local_c0 + 1;
            uVar12 = FUN_004290b0();
          }
          else {
            uVar12 = FUN_00427c40(&local_c0);
            if ((uVar12 & 1) == 0) goto LAB_004d2b30;
            uVar12 = FUN_004290b0(local_c0);
          }
          if ((uVar12 & 0x30) != 0) {
            FUN_0043f280(&local_80,puVar1,*local_c0);
            if ((uint)local_7f0 == (local_7f0._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar3,&local_7f8,0x18);
            }
            ppuVar26 = local_7f8 + (long)(int)(uint)local_7f0 * 3;
            *ppuVar26 = (undefined1 *)local_80;
            ppuVar26[1] = local_78;
            ppuVar26[2] = local_70;
            local_7f0 = (undefined1 **)CONCAT44(local_7f0._4_4_,(uint)local_7f0 + 1);
          }
          goto LAB_004d2a4c;
        }
        if ((uint)local_7f0 == (local_7f0._4_4_ & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607c0,&local_7f8,0x18);
        }
        ppuVar26 = local_7f8 + (long)(int)(uint)local_7f0 * 3;
        iVar7 = (uint)local_7f0 + 1;
        puVar19 = *(undefined1 **)(param_1 + 0x48);
        *ppuVar26 = (undefined1 *)*puVar1;
        ppuVar26[1] = puVar19;
        puVar19 = *(undefined1 **)(param_1 + 0x50);
        ppuVar26[2] = puVar19;
        if (((ulong)puVar19 & 1) != 0) {
          FUN_0043dd30((ulong)puVar19 & 0xfffffffffffffffe);
        }
        local_7f0 = (undefined1 **)CONCAT44(local_7f0._4_4_,iVar7);
        ppuVar26 = local_7f8;
        goto joined_r0x004d2b28;
      }
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
        lVar21 = FUN_004446b0(&local_7f8,"Attribute type \'{}\' cannot be instantiated",
                              &DAT_0413df78);
        uVar20 = 0x1fa;
        goto LAB_004d28b8;
      }
    }
    else {
      if ((uVar10 & 1) == 0) {
        lVar21 = 0;
        ppuVar26 = (undefined1 **)0x0;
        iVar7 = 0;
        lVar13 = (long)(int)(uint)local_438 << 3;
        do {
          local_7f8 = (undefined1 **)local_330;
          local_7f0 = ppuVar26;
          if (-1 < *(int *)(local_330._0_8_ + (lVar21 >> 0x20) * 0x18 + 0x10)) {
            local_c0 = (ulong *)*ppuVar24;
            iVar9 = FUN_004d2f40(&local_c0,puVar15[(long)ppuVar26],&local_7f8);
            iVar7 = iVar9 + iVar7;
          }
          ppuVar26 = (undefined1 **)((long)ppuVar26 + 1);
          lVar21 = lVar21 + 0x100000000;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
      else {
        lVar21 = 0;
        ppuVar26 = (undefined1 **)0x0;
        iVar7 = 0;
        lVar13 = (long)(int)(uint)local_438 << 3;
        do {
          local_7f8 = (undefined1 **)local_330;
          local_7f0 = ppuVar26;
          if (-1 < *(int *)(local_330._0_8_ + (lVar21 >> 0x20) * 0x18 + 0x10)) {
            local_c0 = (ulong *)0x0;
            iVar9 = FUN_004d2f40(&local_c0,puVar15[(long)ppuVar26],&local_7f8);
            iVar7 = iVar9 + iVar7;
          }
          ppuVar26 = (undefined1 **)((long)ppuVar26 + 1);
          lVar21 = lVar21 + 0x100000000;
          lVar13 = lVar13 + -8;
        } while (lVar13 != 0);
      }
      if (iVar7 == 0) goto LAB_004d267c;
      if ((uVar10 & 1) == 0) {
        uVar12 = FUN_0044e270(puVar19);
        if ((uVar12 & 1) == 0) {
          if (3 < DAT_04c719d8) {
            FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
            lVar21 = FUN_004446b0(&local_7f8,"Attribute type \'{}\' cannot be created in place",
                                  &DAT_0413df78);
            uVar20 = 0x1dc;
            goto LAB_004d28b8;
          }
          goto LAB_004d28c8;
        }
        plVar14 = (long *)FUN_00426e90(puVar19,0x40);
        if ((plVar14 == (long *)0x0) || (*plVar14 == 0)) {
          if (3 < DAT_04c719d8) {
            FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
            lVar21 = FUN_004446b0(&local_7f8,"Attribute type \'{}\' cannot be default-constructed",
                                  &DAT_0413df78);
            uVar20 = 0x1dd;
            goto LAB_004d28b8;
          }
          goto LAB_004d28c8;
        }
        FUN_00451ea0(&local_7f8);
        uVar20 = FUN_004272d0(*(undefined8 *)(param_1 + 0x30));
        FUN_00452230(&local_7f8,uVar20);
        FUN_00452260(&local_7f8,puVar19);
        local_738 = 0;
        local_748 = 0;
        local_6e8 = PTR_DAT_04bd4df0;
        uStack_6e0 = 0;
        local_788 = local_788 | 0x180280;
        iVar9 = FUN_00426fc0(puVar19);
        uVar8 = iVar9 + 7U & 0xfffffff8;
        iVar9 = FUN_00452730(&local_7f8);
        iVar7 = iVar9 + iVar7 + uVar8;
        lVar21 = FUN_00438a70(*(undefined8 *)(param_1 + 0x38),iVar7);
        local_4e0 = lVar21 + iVar7;
        local_4e8 = lVar21 + (int)uVar8;
        local_4d8 = lVar21;
        if (local_4e0 < local_4e8) {
          local_b0 = 0;
          local_c0 = (ulong *)0x0;
          uStack_b8 = (ulong *)&DAT_0413df78;
          FUN_004223c0(0xdeadf11d,"../..\\Common/Base/Memory/Allocator/Linear/hkLinearBuffer.inl",
                       0x1e,"hkLinearBuffer exhausted",&local_c0);
        }
        lVar13 = FUN_004533c0(&local_7f8,&local_4e8);
        puVar15 = (undefined8 *)FUN_00426e90(lVar13,0x40);
        if ((puVar15 != (undefined8 *)0x0) && ((code *)*puVar15 != (code *)0x0)) {
          (*(code *)*puVar15)(lVar21,lVar13,1);
        }
        if (lVar13 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_00428370(lVar13);
          if ((uVar12 & 1) != 0) {
            FUN_0043dd30(uVar12 & 0xfffffffffffffffe);
          }
        }
        uVar18 = *(ulong *)(param_1 + 0x50);
        *(long *)(param_1 + 0x40) = lVar21;
        *(long *)(param_1 + 0x48) = lVar13;
        *(ulong *)(param_1 + 0x50) = uVar12;
        if ((uVar18 & 1) != 0) {
          FUN_0043dd50(uVar18 & 0xfffffffffffffffe);
        }
        FUN_00451fa0(&local_7f8);
        goto LAB_004d29cc;
      }
      if (DAT_04c719d8 < 4) goto LAB_004d28c8;
      FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
      lVar21 = FUN_004446b0(&local_7f8,
                            "Auto-typed attributes on objects which contain extra allocations are not supported"
                            ,&DAT_0413df78);
      uVar20 = 0x1db;
LAB_004d28b8:
      *(char **)(lVar21 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
      ;
      *(undefined8 *)(lVar21 + 0x30) = uVar20;
      FUN_00444c00(&local_7f8);
    }
LAB_004d28c8:
    FUN_00440b30(puVar1,3,1);
  }
  else {
    (*(code *)ppuVar26[1])
              (&local_7f8,local_330,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38))
    ;
    puVar11 = local_7e8;
    ppuVar26 = local_7f0;
    ppuVar24 = local_7f8;
    local_7f0 = (undefined1 **)0x0;
    local_7e8 = (undefined1 *)0x0;
    local_7f8 = (undefined1 **)0x0;
    *(undefined1 ***)(param_1 + 0x40) = ppuVar24;
    *(undefined1 ***)(param_1 + 0x48) = ppuVar26;
    uVar10 = *(ulong *)(param_1 + 0x50);
    *(undefined1 **)(param_1 + 0x50) = puVar11;
    if (((uVar10 & 1) != 0) &&
       (FUN_0043dd50(uVar10 & 0xfffffffffffffffe), ((ulong)local_7e8 & 1) != 0)) {
      FUN_0043dd50((ulong)local_7e8 & 0xfffffffffffffffe);
    }
  }
  goto LAB_004d28d4;
LAB_004d2b30:
  iVar7 = (uint)local_7f0;
  ppuVar26 = local_7f8;
joined_r0x004d2b28:
  local_7f8 = ppuVar26;
  if (iVar7 != 0) {
    uVar12 = 0;
    lVar21 = (long)iVar7 * 0x18;
    do {
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_c0,&DAT_04c71988,4);
        FUN_00429460(&local_80,ppuVar26[1]);
        pcVar23 = "<value>";
        if ((undefined1 **)0x1 < local_80) {
          FUN_00429460(&local_80,ppuVar26[1]);
          local_808 = local_80;
          pcVar23 = (char *)FUN_00427b40(&local_808);
        }
        local_80 = (undefined1 **)pcVar23;
        lVar13 = FUN_004446b0(&local_c0,"Field \'{}\'",&DAT_048534d0,&local_80);
        *(char **)(lVar13 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
        ;
        *(undefined8 *)(lVar13 + 0x30) = 0x205;
        *(undefined1 *)(lVar13 + 9) = 1;
        FUN_00444c00(&local_c0);
      }
      local_808 = (undefined1 **)local_330;
      local_800 = uVar12;
      if (*(int *)(local_330._0_8_ + (long)(int)uVar12 * 0x18 + 0x10) < 0) {
        FUN_00426f00(&local_80,ppuVar26[1]);
        if (local_80 == (undefined1 **)0x0) {
          if (3 < DAT_04c719d8) {
            FUN_00444bc0(&local_c0,&DAT_04c71988,4);
            lVar13 = FUN_004446b0(&local_c0,"No value is specified, and the field has no default",
                                  &DAT_0413df78);
            *(char **)(lVar13 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
            ;
            uVar20 = 0x20f;
LAB_004d2d60:
            *(undefined8 *)(lVar13 + 0x30) = uVar20;
            FUN_00444c00(&local_c0);
          }
LAB_004d2d6c:
          bVar2 = true;
          FUN_00440b30(puVar1,3,1);
        }
        else {
          FUN_00427bc0(&local_c0,ppuVar26[1],PTR_DAT_04bd7320);
          puVar6 = local_c0;
          if ((local_b0 & 1) != 0) {
            FUN_0043dd50(local_b0 & 0xfffffffffffffffe);
          }
          if (puVar6 == (ulong *)0x0) {
            iVar7 = FUN_00441150(ppuVar26,&local_80);
            if (iVar7 < 0) {
              if (3 < DAT_04c719d8) {
                FUN_00444bc0(&local_c0,&DAT_04c71988,4);
                lVar13 = FUN_004446b0(&local_c0,"Cannot assign default value to field",&DAT_0413df78
                                     );
                *(char **)(lVar13 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
                ;
                uVar20 = 0x217;
                goto LAB_004d2d60;
              }
              goto LAB_004d2d6c;
            }
            bVar2 = false;
          }
          else {
            FUN_0043a3b0(*ppuVar26,local_80,0x10);
            bVar2 = false;
          }
        }
        if (((ulong)local_70 & 1) != 0) {
          FUN_0043dd50((ulong)local_70 & 0xfffffffffffffffe);
        }
        if (!bVar2) goto LAB_004d2dc8;
        bVar2 = true;
      }
      else {
        if ((uVar10 & 1) == 0) {
          local_c0 = (ulong *)*ppuVar24;
        }
        else {
          local_c0 = (ulong *)0x0;
        }
        uStack_b8 = &local_4e8;
        iVar7 = FUN_004d31d0(&local_c0,ppuVar26,&local_808);
        if (iVar7 < 0) {
          if (3 < DAT_04c719d8) {
            FUN_00444bc0(&local_c0,&DAT_04c71988,4);
            lVar13 = FUN_004446b0(&local_c0,"Failed to parse value",&DAT_0413df78);
            *(char **)(lVar13 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributeReader.cpp"
            ;
            *(undefined8 *)(lVar13 + 0x30) = 0x20a;
            FUN_00444c00(&local_c0);
          }
          bVar2 = true;
          FUN_00440b30(puVar1,3,1);
        }
        else {
LAB_004d2dc8:
          bVar2 = false;
          uVar12 = (ulong)((int)uVar12 + 1);
        }
      }
      if (3 < DAT_04c719d8) {
        FUN_00444bc0(&local_c0,&DAT_04c71988,4);
        uStack_b8._0_2_ = CONCAT11(0xff,(undefined1)uStack_b8);
        FUN_00444c00(&local_c0);
      }
      if (bVar2) goto LAB_004d2e98;
      ppuVar26 = ppuVar26 + 3;
      lVar21 = lVar21 + -0x18;
    } while (lVar21 != 0);
  }
  if ((uVar10 & 1) != 0) {
    uVar20 = *puVar1;
    uVar10 = FUN_00428370(puVar11);
    if ((uVar10 & 1) != 0) {
      FUN_0043dd30(uVar10 & 0xfffffffffffffffe);
    }
    uVar12 = *(ulong *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x40) = uVar20;
    *(undefined1 **)(param_1 + 0x48) = puVar11;
    *(ulong *)(param_1 + 0x50) = uVar10;
    if ((uVar12 & 1) != 0) {
      FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
    }
  }
LAB_004d2e98:
  if (0 < (int)(uint)local_7f0) {
    ppuVar24 = local_7f8 + (long)(int)(uint)local_7f0 * 3 + -1;
    iVar7 = (uint)local_7f0;
    do {
      if (((ulong)*ppuVar24 & 1) != 0) {
        FUN_0043dd50((ulong)*ppuVar24 & 0xfffffffffffffffe);
      }
      iVar7 = iVar7 + -1;
      ppuVar24 = ppuVar24 + -3;
    } while (iVar7 != 0);
  }
  lVar21 = (long)local_7f0;
  uVar8 = local_7f0._4_4_;
  local_7f0 = (undefined1 **)((ulong)local_7f0._4_4_ << 0x20);
  if ((-1 < lVar21) && (local_7f8 != (undefined1 **)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_7f8,0x18,uVar8 & 0x3fffffff);
  }
LAB_004d28d4:
  FUN_00422550(local_4d0);
LAB_004d28dc:
  lVar21 = local_438;
  uVar8 = local_438._4_4_;
  local_438 = (ulong)local_438._4_4_ << 0x20;
  if ((-1 < lVar21) && (local_440 != (undefined8 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_440,8,uVar8 & 0x3fffffff);
  }
  puVar3 = PTR_DAT_048607b8;
  local_258 = 0;
  if ((-1 < (int)local_254) && (local_260 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_260,0x10,local_254 & 0x3fffffff);
  }
  uVar20 = local_330._8_8_;
  local_254 = 0x80000000;
  uVar5 = local_330._12_4_;
  local_260 = (undefined1 *)0x0;
  local_330._8_8_ = (ulong)(uint)local_330._12_4_ << 0x20;
  if ((-1 < (long)uVar20) && ((undefined1 *)local_330._0_8_ != (undefined1 *)0x0)) {
    FUN_00421f90(puVar3,local_330._0_8_,0x18,uVar5 & 0x3fffffff);
  }
joined_r0x004d2970:
  if (3 < DAT_04c719d8) {
    FUN_00444bc0(&local_7f8,&DAT_04c71988,4);
    local_7f0._0_2_ = CONCAT11(0xff,(undefined1)local_7f0);
    FUN_00444c00(&local_7f8);
  }
LAB_004d2060:
  FUN_00422550(local_150);
  return 1;
}

