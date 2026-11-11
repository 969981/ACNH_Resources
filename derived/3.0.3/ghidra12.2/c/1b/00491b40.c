
void FUN_00491b40(ulong *param_1,long *param_2,int *param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  code *pcVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  int *piVar15;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  ulong local_c0;
  long lStack_b8;
  ulong local_b0;
  undefined1 local_a8;
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_80 = auStack_70;
  piVar15 = (int *)*param_2;
  local_78 = -0x7ffffff000000000;
  iVar6 = (int)((ulong)((long)param_4 - (long)param_3) >> 4);
  uVar2 = iVar6 * -0x55555555;
  if ((int)uVar2 < 0x11) {
    local_78._0_4_ = 0;
    bVar4 = SBORROW4(0,uVar2);
    iVar6 = iVar6 * 0x55555555;
    bVar5 = uVar2 == 0;
    if (0 < (int)uVar2) goto LAB_00491bf8;
  }
  else {
    local_80 = (undefined1 *)FUN_00426720(PTR_DAT_048607c0,uVar2,1,local_80,0,(long)&local_78 + 4);
    bVar4 = SBORROW4((uint)local_78,uVar2);
    iVar6 = (uint)local_78 + iVar6 * 0x55555555;
    bVar5 = (uint)local_78 == uVar2;
    if ((int)(uint)local_78 < (int)uVar2) {
LAB_00491bf8:
      lVar7 = (long)(int)(uint)local_78;
      uVar3 = ~(uint)local_78;
      local_78 = CONCAT44(local_78._4_4_,uVar2);
      memset(local_80 + lVar7,0,(ulong)(uVar3 + uVar2) + 1);
      iVar6 = *piVar15;
      goto joined_r0x00491be4;
    }
  }
  if (!bVar5 && iVar6 < 0 == bVar4) {
    local_78 = CONCAT44(local_78._4_4_,uVar2);
  }
  iVar6 = *piVar15;
joined_r0x00491be4:
  if (-1 < iVar6) {
LAB_00491c3c:
    do {
      iVar6 = FUN_0048f760(param_1,0);
      if (iVar6 == 0) goto LAB_00491f4c;
      if (iVar6 == 1) {
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_c0,&DAT_04c70f28,2);
          lVar7 = FUN_004446b0(&local_c0,"IO error",&DAT_0413df78);
          uVar10 = 0x4a7;
LAB_00491f30:
          *(char **)(lVar7 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x30) = uVar10;
          FUN_00444c00(&local_c0);
        }
LAB_00491f44:
        *piVar15 = -0x7ffbfe00;
        break;
      }
      if (param_3 == param_4) {
LAB_00491d2c:
        local_c8 = (undefined1)((uint)iVar6 >> 0x18);
        local_c7 = (undefined1)((uint)iVar6 >> 0x10);
        local_c6 = (undefined1)((uint)iVar6 >> 8);
        local_c5 = (undefined1)iVar6;
        local_c4 = 0;
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_c0,&DAT_04c70f28,2);
          lVar7 = FUN_004446b0(&local_c0,"Unexpected section {}",&DAT_04866950,&local_c8);
          *(char **)(lVar7 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x30) = 0x4d1;
          FUN_00444c00(&local_c0);
        }
        *piVar15 = -0x7ffbfe00;
        break;
      }
      piVar11 = param_3;
      while (piVar8 = piVar11 + 0xc, *piVar11 != iVar6) {
        piVar11 = piVar8;
        if (param_4 == piVar8) goto LAB_00491d2c;
      }
      if (piVar11 == (int *)0x0) goto LAB_00491d2c;
      iVar6 = (int)((ulong)((long)piVar11 - (long)param_3) >> 4) * -0x55555555;
      if (local_80[iVar6] != '\0') {
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_c0,&DAT_04c70f28,2);
          lVar7 = FUN_004446b0(&local_c0,"Duplicate section",&DAT_0413df78);
          uVar10 = 0x4ca;
          goto LAB_00491f30;
        }
        goto LAB_00491f44;
      }
      local_80[iVar6] = 1;
      pcVar9 = *(code **)(piVar11 + 6);
      uVar12 = *(ulong *)(piVar11 + 8);
      if ((pcVar9 == (code *)0x0) && (uVar12 == 0 || (uVar12 & 1) == 0)) {
        uVar12 = (*param_1 +
                 ((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) & 0x3fffffff))
                 - 8;
        if (param_1[1] < uVar12) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          *piVar15 = -0x7ffbfe00;
        }
        else {
          iVar6 = 0;
          if ((char)param_1[3] != '\0') {
            iVar6 = -0x7ffbfe00;
          }
          *param_1 = uVar12;
          *piVar15 = iVar6;
          if (-1 < iVar6) goto LAB_00491e4c;
        }
LAB_00491d20:
        iVar6 = *piVar15;
      }
      else {
        lVar7 = param_2[1];
        lVar14 = param_2[2];
        plVar1 = (long *)(*param_2 + ((long)uVar12 >> 1));
        if ((uVar12 & 1) != 0) {
          pcVar9 = *(code **)(pcVar9 + *plVar1);
        }
        puVar13 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
        local_c0 = *param_1;
        uVar12 = (local_c0 + ((ulong)*puVar13 & 0x3fffffff)) - 8;
        if (param_1[1] < uVar12) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = uVar12;
        }
        local_a8 = 0;
        lStack_b8 = local_c0 + ((ulong)*puVar13 & 0x3fffffff) + -8;
        local_b0 = local_c0;
        (*pcVar9)(plVar1,&local_c0,lVar7,lVar14);
        if (*piVar15 < 0) goto LAB_00491d20;
LAB_00491e4c:
        lVar7 = (long)(int)param_1[6] + -1;
        lVar14 = param_1[5] + lVar7 * 0x18;
        if (*param_1 - param_1[2] ==
            ((ulong)*(uint *)(lVar14 + 4) & 0x3fffffff) + (long)*(int *)(lVar14 + 8)) {
          param_1[4] = *(ulong *)(param_1[5] + lVar7 * 0x18 + 0x10);
          *(int *)(param_1 + 6) = (int)lVar7;
          if (*piVar15 < 0) break;
          goto LAB_00491c3c;
        }
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        iVar6 = *piVar15;
      }
    } while (-1 < iVar6);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_00491f4c:
  lVar7 = local_78;
  uVar2 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar7) && (local_80 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_80,1,uVar2 & 0x3fffffff);
  }
  return;
}

