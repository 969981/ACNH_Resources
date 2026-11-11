
/* WARNING: Removing unreachable block (ram,0x004251b4) */
/* WARNING: Type propagation algorithm not settling */

int FUN_00424f20(long *param_1,char *param_2,ulong *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  char *pcVar25;
  uint unaff_w28;
  uint local_188;
  uint local_164;
  undefined1 *local_150;
  undefined8 local_148;
  undefined1 auStack_140 [16];
  undefined1 *local_130;
  int local_128;
  uint local_124;
  undefined1 local_120 [24];
  char *local_108;
  undefined8 local_100;
  int local_a0;
  undefined4 uStack_9c;
  ulong local_90;
  undefined4 local_84;
  undefined8 local_80;
  char *local_78;
  int local_70;
  uint local_6c [3];
  
  if (param_2 == (char *)0x0) {
    iVar7 = 0;
    if (*param_3 != 0) {
      iVar7 = -0x7ffbfda9;
    }
    return iVar7;
  }
  local_150 = auStack_140;
  local_148 = -0x7ffffff600000000;
  uVar21 = (uint)*param_3;
  if ((int)uVar21 < 0xb) {
    local_148._0_4_ = 0;
    bVar5 = SBORROW4(0,uVar21);
    iVar7 = -uVar21;
    bVar6 = uVar21 == 0;
    if (0 < (int)uVar21) goto LAB_00424fe4;
  }
  else {
    local_150 = (undefined1 *)
                FUN_00426720(PTR_DAT_048607b8,uVar21,1,local_150,0,(long)&local_148 + 4);
    bVar5 = SBORROW4((uint)local_148,uVar21);
    iVar7 = (uint)local_148 - uVar21;
    bVar6 = (uint)local_148 == uVar21;
    if ((int)(uint)local_148 < (int)uVar21) {
LAB_00424fe4:
      lVar23 = (long)(int)(uint)local_148;
      uVar20 = ~(uint)local_148;
      local_148 = CONCAT44(local_148._4_4_,uVar21);
      memset(local_150 + lVar23,0,(ulong)(uVar20 + uVar21) + 1);
      goto LAB_00425000;
    }
  }
  if (!bVar6 && iVar7 < 0 == bVar5) {
    local_148 = CONCAT44(local_148._4_4_,uVar21);
  }
LAB_00425000:
  puVar4 = PTR_DAT_048607c0;
  local_164 = 0;
  lVar23 = (long)param_1 + 0xc;
  pcVar25 = (char *)0x0;
  pcVar24 = (char *)0x0;
LAB_0042505c:
  lVar22 = 0;
  pcVar14 = param_2 + 2;
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    if (cVar2 == '{') {
      pcVar10 = param_2 + lVar22;
      pcVar11 = pcVar10 + 1;
      cVar2 = *pcVar11;
      if (cVar2 == '{') {
        pcVar14 = pcVar10 + 2;
        unaff_w28 = 1;
        pcVar10 = pcVar11;
      }
      else {
        if (lVar22 == 0) goto LAB_0042517c;
        unaff_w28 = 1;
        pcVar14 = pcVar10;
      }
      goto LAB_004250f4;
    }
    if (cVar2 == '}') {
      pcVar14 = param_2 + lVar22;
      local_80 = (char *)CONCAT44(local_80._4_4_,0x8004ffff);
      if (pcVar14[1] == '}') {
        unaff_w28 = 1;
        pcVar10 = pcVar14 + 1;
        pcVar14 = pcVar14 + 2;
        goto LAB_004250f4;
      }
      if (DAT_04c6f600 != '\0') {
        FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
        local_100 = 0x4b5;
        local_108 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
        ;
        uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853518,
                              "m_fmt[1] != \'}\'",&local_80);
        FUN_004446b0(uVar12,"Unescaped right curly brace",&DAT_0413df78);
        FUN_00444c00(&local_130);
        iVar7 = (int)local_80;
        goto joined_r0x00425334;
      }
      iVar7 = -0x7ffb0001;
      goto LAB_00425c68;
    }
    lVar22 = lVar22 + 1;
    pcVar14 = pcVar14 + 1;
    cVar2 = param_2[lVar22];
  }
  unaff_w28 = (uint)(lVar22 != 0);
  pcVar10 = param_2 + lVar22;
  pcVar14 = param_2 + lVar22;
LAB_004250f4:
  local_80 = (char *)((ulong)local_80 & 0xffffffff00000000);
  pcVar11 = param_2;
  pcVar25 = pcVar10;
  if (unaff_w28 != 1) goto LAB_00425238;
  goto LAB_0042510c;
LAB_0042517c:
  if (cVar2 == '\0') goto LAB_00425248;
  if (cVar2 == '{') {
    local_a0 = -0x7ffb0001;
    if (DAT_04c6f600 == '\0') goto LAB_00425328;
    FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
    local_100 = 0x4e2;
    local_108 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048534e0,
                          &DAT_040a395f,&local_a0);
    pcVar10 = "Left curly brace within placeholder";
    goto LAB_00425314;
  }
  if (cVar2 == '}') {
    pcVar25 = pcVar14 + -1;
    local_a0 = 0;
    unaff_w28 = 2;
    local_80 = (char *)((ulong)local_80._4_4_ << 0x20);
    goto LAB_00425230;
  }
  cVar2 = *pcVar14;
  pcVar14 = pcVar14 + 1;
  goto LAB_0042517c;
LAB_00425248:
  local_a0 = -0x7ffb0001;
  if (DAT_04c6f600 != '\0') {
    FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
    local_100 = 0x4e6;
    local_108 = 
    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
    ;
    uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048534e0,
                          &DAT_040a395f,&local_a0);
    pcVar10 = "Truncated placeholder string";
LAB_00425314:
    FUN_004446b0(uVar12,pcVar10,&DAT_0413df78);
    FUN_00444c00(&local_130);
  }
LAB_00425328:
  pcVar14 = pcVar14 + -1;
  local_80 = (char *)CONCAT44(local_80._4_4_,local_a0);
  iVar7 = local_a0;
joined_r0x00425334:
  pcVar11 = pcVar24;
  if (iVar7 < 0) goto LAB_00425c68;
LAB_00425230:
  if (unaff_w28 == 1) {
LAB_0042510c:
    pcVar24 = pcVar11;
    param_2 = pcVar14;
    if (pcVar11 != (char *)0x0) {
      iVar7 = (int)pcVar25 - (int)pcVar11;
      if (iVar7 < 0) {
        iVar7 = FUN_0043a2d0(pcVar11);
      }
      iVar8 = (int)param_1[1];
      lVar22 = (long)iVar8 + -1;
      iVar1 = (int)lVar22 + iVar7;
      iVar18 = iVar8 + iVar7;
      if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
        lVar9 = FUN_00426720(puVar4,iVar18,1,*param_1,(long)iVar8,lVar23);
        iVar8 = (int)param_1[1];
        *param_1 = lVar9;
      }
      if ((iVar8 <= iVar1) || (iVar18 < iVar8)) {
        *(int *)(param_1 + 1) = iVar18;
      }
      *(undefined1 *)(*param_1 + (long)iVar1) = 0;
      FUN_0043a4c0(*param_1 + lVar22,pcVar11,iVar7);
    }
    goto LAB_0042505c;
  }
LAB_00425238:
  pcVar24 = pcVar11;
  param_2 = pcVar14;
  if (unaff_w28 != 2) {
    if (unaff_w28 == 0) goto LAB_00425c38;
    goto LAB_0042505c;
  }
  local_80 = pcVar11;
  local_78 = pcVar25;
  pcVar10 = (char *)FUN_004299c0(&local_80,0x3a);
  pcVar14 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    pcVar14 = pcVar10 + 1;
  }
  pcVar11 = local_78;
  pcVar3 = (char *)0x0;
  if (pcVar10 != (char *)0x0) {
    pcVar11 = pcVar10;
    pcVar3 = local_78;
  }
  local_78 = pcVar11;
  pcVar11 = (char *)FUN_004299c0(&local_80,0x2c);
  pcVar10 = local_80;
  if (pcVar11 == (char *)0x0) {
    uVar21 = 0;
    pcVar11 = local_78;
joined_r0x0042565c:
    local_78 = pcVar11;
    local_80 = pcVar10;
    local_6c[0] = local_164;
    if (local_78 != pcVar10) {
      local_70 = FUN_004263a0(pcVar10,local_78,local_6c);
      if (local_70 < 0) {
        if (DAT_04c6f600 != '\0') {
          FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
          local_100 = 0x45c;
          puVar16 = &DAT_048536a0;
          pcVar14 = "parseUnsignedDecimal(spec, &num)";
          goto LAB_00425858;
        }
        goto joined_r0x00425890;
      }
    }
    local_188 = local_6c[0];
    local_84 = 0;
    if ((ulong)local_6c[0] < *param_3) {
      local_70 = -0x7ffbfda9;
      FUN_0043dae0(&local_a0);
      if (CONCAT44(uStack_9c,local_a0) == 0) {
        iVar8 = FUN_0043a2d0("(NullVar)");
        iVar18 = (int)param_1[1];
        lVar22 = (long)iVar18 + -1;
        iVar7 = (int)lVar22 + iVar8;
        iVar1 = iVar18 + iVar8;
        if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar7) {
          lVar9 = FUN_00426720(puVar4,iVar1,1,*param_1,(long)iVar18,lVar23);
          iVar18 = (int)param_1[1];
          *param_1 = lVar9;
        }
        if ((iVar18 <= iVar7) || (iVar1 < iVar18)) {
          *(int *)(param_1 + 1) = iVar1;
        }
        *(undefined1 *)(*param_1 + (long)iVar7) = 0;
        FUN_0043a4c0(*param_1 + lVar22,"(NullVar)",iVar8);
        local_70 = -0x7ffbfda9;
        bVar6 = true;
      }
      else {
        local_124 = 0x80000080;
        local_120[0] = 0;
        local_128 = 1;
        local_130 = local_120;
        FUN_0043f3f0(&local_a0,&local_130,pcVar14,pcVar3);
        puVar15 = local_130;
        uVar20 = -uVar21;
        if (-1 < (int)uVar21) {
          uVar20 = uVar21;
        }
        iVar7 = local_128 + -1;
        iVar1 = uVar20 - iVar7;
        if (iVar1 < 1) {
          if (local_130 != (undefined1 *)0x0) {
            if (local_128 < 1) {
              iVar7 = FUN_0043a2d0(local_130);
            }
            iVar8 = (int)param_1[1];
            lVar22 = (long)iVar8 + -1;
            iVar1 = (int)lVar22 + iVar7;
            iVar18 = iVar8 + iVar7;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
              lVar9 = FUN_00426720(puVar4,iVar18,1,*param_1,(long)iVar8,lVar23);
              iVar8 = (int)param_1[1];
              *param_1 = lVar9;
            }
            if ((iVar8 <= iVar1) || (iVar18 < iVar8)) {
              *(int *)(param_1 + 1) = iVar18;
            }
            *(undefined1 *)(*param_1 + (long)iVar1) = 0;
            lVar22 = *param_1 + lVar22;
LAB_00425bc8:
            FUN_0043a4c0(lVar22,puVar15,iVar7);
          }
        }
        else if ((int)uVar21 < 1) {
          if (local_130 != (undefined1 *)0x0) {
            if (local_128 < 1) {
              iVar7 = FUN_0043a2d0(local_130);
            }
            iVar19 = (int)param_1[1];
            lVar22 = (long)iVar19 + -1;
            iVar18 = (int)lVar22 + iVar7;
            iVar8 = iVar19 + iVar7;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar18) {
              lVar9 = FUN_00426720(puVar4,iVar8,1,*param_1,(long)iVar19,lVar23);
              *param_1 = lVar9;
              iVar19 = (int)param_1[1];
            }
            if ((iVar19 <= iVar18) || (iVar8 < iVar19)) {
              *(int *)(param_1 + 1) = iVar8;
            }
            *(undefined1 *)(*param_1 + (long)iVar18) = 0;
            FUN_0043a4c0(*param_1 + lVar22,puVar15,iVar7);
          }
          *(undefined1 *)(*param_1 + (long)(int)param_1[1] + -1) = 0x20;
          uVar20 = *(uint *)(param_1 + 1);
          uVar21 = uVar20 + iVar1;
          if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar21) {
            lVar22 = FUN_00426720(puVar4,uVar21,1,*param_1,uVar20,lVar23);
            uVar20 = *(uint *)(param_1 + 1);
            *param_1 = lVar22;
          }
          if ((int)uVar20 < (int)uVar21) {
            *(uint *)(param_1 + 1) = uVar21;
            memset((void *)(*param_1 + (long)(int)uVar20),0x20,(ulong)(uVar21 + ~uVar20) + 1);
            uVar20 = *(uint *)(param_1 + 1);
          }
          else if ((int)uVar21 < (int)uVar20) {
            *(uint *)(param_1 + 1) = uVar21;
            uVar20 = uVar21;
          }
          *(undefined1 *)(*param_1 + (long)(int)uVar20 + -1) = 0;
        }
        else {
          *(undefined1 *)(*param_1 + (long)(int)param_1[1] + -1) = 0x20;
          uVar20 = *(uint *)(param_1 + 1);
          uVar21 = uVar20 + iVar1;
          if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) < (int)uVar21) {
            lVar22 = FUN_00426720(puVar4,uVar21,1,*param_1,uVar20,lVar23);
            uVar20 = *(uint *)(param_1 + 1);
            *param_1 = lVar22;
          }
          if ((int)uVar20 < (int)uVar21) {
            *(uint *)(param_1 + 1) = uVar21;
            memset((void *)(*param_1 + (long)(int)uVar20),0x20,(ulong)(uVar21 + ~uVar20) + 1);
            uVar20 = *(uint *)(param_1 + 1);
          }
          else if ((int)uVar21 < (int)uVar20) {
            *(uint *)(param_1 + 1) = uVar21;
            uVar20 = uVar21;
          }
          puVar15 = local_130;
          *(undefined1 *)(*param_1 + (long)(int)uVar20 + -1) = 0;
          if (local_130 != (undefined1 *)0x0) {
            if (local_128 < 1) {
              iVar7 = FUN_0043a2d0(local_130);
            }
            else {
              iVar7 = local_128 + -1;
            }
            iVar8 = (int)param_1[1];
            lVar22 = (long)iVar8 + -1;
            iVar1 = (int)lVar22 + iVar7;
            iVar18 = iVar8 + iVar7;
            if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar1) {
              lVar9 = FUN_00426720(puVar4,iVar18,1,*param_1,(long)iVar8,lVar23);
              iVar8 = (int)param_1[1];
              *param_1 = lVar9;
            }
            if ((iVar8 <= iVar1) || (iVar18 < iVar8)) {
              *(int *)(param_1 + 1) = iVar18;
            }
            *(undefined1 *)(*param_1 + (long)iVar1) = 0;
            lVar22 = *param_1 + lVar22;
            goto LAB_00425bc8;
          }
        }
        local_128 = 0;
        if ((-1 < (int)local_124) && (local_128 = 0, local_130 != (undefined1 *)0x0)) {
          FUN_00421f90(puVar4,local_130,1,local_124 & 0x3fffffff);
        }
        bVar6 = false;
      }
      if ((local_90 & 1) != 0) {
        FUN_0043dd50(local_90 & 0xfffffffffffffffe);
      }
      if (!bVar6) {
        local_70 = 0;
      }
    }
    else {
      local_84 = 3;
      local_70 = -0x7ffbfda9;
      if (DAT_04c6f600 != '\0') {
        FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
        local_100 = 0x467;
        local_108 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
        ;
        uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048536d8,
                              "num >= args.getSize()",&local_70);
        FUN_004446b0(uVar12,&DAT_0407ebb1,&DAT_0413df78);
        FUN_00444c00(&local_130);
      }
    }
  }
  else {
    pcVar13 = pcVar11 + 1;
    local_a0 = -0x7ffbfda9;
    if (pcVar13 == local_78) {
      if (DAT_04c6f600 == '\0') {
        local_70 = -0x7ffbfda9;
      }
      else {
        FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
        local_100 = 0x49;
        local_108 = 
        "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
        ;
        uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_04853550,
                              "s.isEmpty()",&local_a0);
        FUN_004446b0(uVar12,&DAT_0407ebb1,&DAT_0413df78);
        FUN_00444c00(&local_130);
        uVar21 = 0;
        local_70 = local_a0;
        if (-1 < local_a0) goto LAB_004255cc;
      }
LAB_004254e8:
      iVar7 = local_70;
      local_a0 = local_70;
      if (DAT_04c6f600 == '\0') goto LAB_00425c68;
      FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
      local_100 = 0x453;
      puVar16 = &DAT_048535c0;
      pcVar14 = "parseSignedDecimal(numAndWidth.right, &width)";
LAB_00425858:
      local_108 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
      ;
      uVar12 = FUN_004446b0(&local_130,"HK_RETURN_IF_FAILED({}) returning {}. ",puVar16,pcVar14,
                            &local_70);
      pcVar14 = "";
    }
    else {
      bVar6 = false;
      bVar5 = false;
      if (*pcVar13 == '+') {
LAB_004253b8:
        bVar6 = bVar5;
        pcVar13 = pcVar11 + 2;
      }
      else if (*pcVar13 == '-') {
        bVar5 = true;
        goto LAB_004253b8;
      }
      local_a0 = FUN_004263a0(pcVar13,local_78,local_6c);
      if (local_a0 < 0) {
        if (DAT_04c6f600 != '\0') {
          FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
          local_100 = 0x52;
          puVar16 = &DAT_04853588;
          pcVar13 = "HK_RETURN_IF_FAILED({}) returning {}. ";
          pcVar17 = "parseUnsignedDecimal(s, &num)";
LAB_00425584:
          local_108 = 
          "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
          ;
          uVar12 = FUN_004446b0(&local_130,pcVar13,puVar16,pcVar17,&local_a0);
          FUN_004446b0(uVar12,&DAT_0407ebb1,&DAT_0413df78);
          FUN_00444c00(&local_130);
        }
LAB_004255a4:
        uVar21 = 0;
      }
      else {
        uVar21 = 0x80000000;
        if (!bVar6) {
          uVar21 = 0x7fffffff;
        }
        local_a0 = -0x7ffbfda9;
        if (uVar21 < local_6c[0]) {
          if (DAT_04c6f600 != '\0') {
            FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
            local_100 = 0x55;
            puVar16 = &DAT_04853550;
            pcVar13 = "HK_RETURN_RES_IF({}) returning {}. ";
            pcVar17 = "num > limit";
            goto LAB_00425584;
          }
          goto LAB_004255a4;
        }
        uVar21 = -local_6c[0];
        if (!bVar6) {
          uVar21 = local_6c[0];
        }
        local_a0 = 0;
      }
      local_70 = local_a0;
      if (local_a0 < 0) goto LAB_004254e8;
LAB_004255cc:
      local_70 = -0x7ffbfda9;
      uVar20 = -uVar21;
      if (-1 < (int)uVar21) {
        uVar20 = uVar21;
      }
      if ((int)uVar20 < 0x101) goto joined_r0x0042565c;
      if (DAT_04c6f600 == '\0') goto joined_r0x00425890;
      FUN_00444bc0(&local_130,&DAT_04c6f5b0,1);
      local_100 = 0x454;
      local_108 = 
      "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Container/String/hkStringBuf.cpp"
      ;
      uVar12 = FUN_004446b0(&local_130,"HK_RETURN_RES_IF({}) returning {}. ",&DAT_048535f8,
                            "hkMath::abs(width) > 256",&local_70);
      pcVar14 = "Width field too large";
    }
    FUN_004446b0(uVar12,pcVar14,&DAT_0413df78);
    FUN_00444c00(&local_130);
  }
joined_r0x00425890:
  iVar7 = local_70;
  if (-1 < local_70) {
    local_150[(int)local_188] = 1;
    local_164 = local_188 + 1;
    goto LAB_0042505c;
  }
LAB_00425c68:
  uVar21 = local_148._4_4_;
  goto joined_r0x00425cac;
LAB_00425c38:
  uVar21 = local_148._4_4_;
  if (0 < (int)(uint)local_148) {
    lVar23 = 0;
    do {
      if (local_150[lVar23] == '\0') {
        if (-1 < (int)lVar23) {
          iVar7 = -0x7ffb7ffb;
          goto joined_r0x00425cac;
        }
        break;
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 < (int)(uint)local_148);
  }
  iVar7 = 0;
joined_r0x00425cac:
  if ((-1 < local_148) && (local_148 = (ulong)uVar21 << 0x20, local_150 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_150,1,uVar21 & 0x3fffffff);
  }
  return iVar7;
}

