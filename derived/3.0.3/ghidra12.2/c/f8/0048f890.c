
void FUN_0048f890(ulong *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int *piVar9;
  int *piVar8;
  undefined8 uVar10;
  uint *puVar11;
  long lVar12;
  ulong uVar13;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  ulong local_b0;
  long lStack_a8;
  ulong local_a0;
  undefined1 local_98;
  undefined1 *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  
  local_70 = auStack_60;
  local_68 = -0x7ffffff000000000;
  iVar5 = (int)((ulong)((long)param_4 - (long)param_3) >> 4);
  uVar1 = iVar5 * -0x55555555;
  if ((int)uVar1 < 0x11) {
    local_68._0_4_ = 0;
    bVar3 = SBORROW4(0,uVar1);
    iVar5 = iVar5 * 0x55555555;
    bVar4 = uVar1 == 0;
    if ((int)uVar1 < 1) goto LAB_0048f920;
  }
  else {
    local_70 = (undefined1 *)FUN_00426720(PTR_DAT_048607c0,uVar1,1,local_70,0,(long)&local_68 + 4);
    bVar3 = SBORROW4((uint)local_68,uVar1);
    iVar5 = (uint)local_68 + iVar5 * 0x55555555;
    bVar4 = (uint)local_68 == uVar1;
    if ((int)uVar1 <= (int)(uint)local_68) {
LAB_0048f920:
      if (!bVar4 && iVar5 < 0 == bVar3) {
        local_68 = CONCAT44(local_68._4_4_,uVar1);
      }
      iVar5 = *param_2;
      goto joined_r0x0048f960;
    }
  }
  lVar6 = (long)(int)(uint)local_68;
  uVar2 = ~(uint)local_68;
  local_68 = CONCAT44(local_68._4_4_,uVar1);
  memset(local_70 + lVar6,0,(ulong)(uVar2 + uVar1) + 1);
  iVar5 = *param_2;
joined_r0x0048f960:
  if (-1 < iVar5) {
LAB_0048f974:
    do {
      iVar5 = FUN_0048f760(param_1,0);
      if (iVar5 == 0) goto LAB_0048fba8;
      if (iVar5 == 1) {
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_b0,&DAT_04c70f28,2);
          lVar6 = FUN_004446b0(&local_b0,"IO error",&DAT_0413df78);
          uVar10 = 0x4a7;
LAB_0048fb94:
          *(char **)(lVar6 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar6 + 0x30) = uVar10;
          FUN_00444c00(&local_b0);
        }
LAB_0048fba0:
        *param_2 = -0x7ffbfe00;
        break;
      }
      if (param_3 == param_4) {
LAB_0048fb28:
        local_b8 = (undefined1)((uint)iVar5 >> 0x18);
        local_b7 = (undefined1)((uint)iVar5 >> 0x10);
        local_b6 = (undefined1)((uint)iVar5 >> 8);
        local_b5 = (undefined1)iVar5;
        local_b4 = 0;
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_b0,&DAT_04c70f28,2);
          lVar6 = FUN_004446b0(&local_b0,"Unexpected section {}",&DAT_04866950,&local_b8);
          uVar10 = 0x4d1;
          goto LAB_0048fb94;
        }
        goto LAB_0048fba0;
      }
      piVar8 = param_3;
      while (piVar9 = piVar8 + 0xc, *piVar8 != iVar5) {
        piVar8 = piVar9;
        if (param_4 == piVar9) goto LAB_0048fb28;
      }
      if (piVar8 == (int *)0x0) goto LAB_0048fb28;
      iVar5 = (int)((ulong)((long)piVar8 - (long)param_3) >> 4) * -0x55555555;
      if (local_70[iVar5] != '\0') {
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(&local_b0,&DAT_04c70f28,2);
          lVar6 = FUN_004446b0(&local_b0,"Duplicate section",&DAT_0413df78);
          uVar10 = 0x4ca;
          goto LAB_0048fb94;
        }
        goto LAB_0048fba0;
      }
      local_70[iVar5] = 1;
      pcVar7 = *(code **)(piVar8 + 10);
      if (pcVar7 == (code *)0x0) {
        uVar13 = (*param_1 +
                 ((ulong)*(uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14) & 0x3fffffff))
                 - 8;
        if (param_1[1] < uVar13) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          *param_2 = -0x7ffbfe00;
        }
        else {
          iVar5 = 0;
          if ((char)param_1[3] != '\0') {
            iVar5 = -0x7ffbfe00;
          }
          *param_1 = uVar13;
          *param_2 = iVar5;
          if (-1 < iVar5) goto LAB_0048fa9c;
        }
LAB_0048fb1c:
        iVar5 = *param_2;
      }
      else {
        puVar11 = (uint *)(param_1[5] + (long)(int)param_1[6] * 0x18 + -0x14);
        local_b0 = *param_1;
        uVar13 = (local_b0 + ((ulong)*puVar11 & 0x3fffffff)) - 8;
        if (param_1[1] < uVar13) {
          *param_1 = param_1[1];
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        }
        else {
          *param_1 = uVar13;
        }
        local_98 = 0;
        lStack_a8 = local_b0 + ((ulong)*puVar11 & 0x3fffffff) + -8;
        local_a0 = local_b0;
        (*pcVar7)(&local_b0,param_2);
        if (*param_2 < 0) goto LAB_0048fb1c;
LAB_0048fa9c:
        lVar6 = (long)(int)param_1[6] + -1;
        lVar12 = param_1[5] + lVar6 * 0x18;
        if (*param_1 - param_1[2] ==
            ((ulong)*(uint *)(lVar12 + 4) & 0x3fffffff) + (long)*(int *)(lVar12 + 8)) {
          param_1[4] = *(ulong *)(param_1[5] + lVar6 * 0x18 + 0x10);
          *(int *)(param_1 + 6) = (int)lVar6;
          if (*param_2 < 0) break;
          goto LAB_0048f974;
        }
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
        iVar5 = *param_2;
      }
    } while (-1 < iVar5);
  }
  *(undefined4 *)(param_1 + 6) = 0;
LAB_0048fba8:
  lVar6 = local_68;
  uVar1 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_70,1,uVar1 & 0x3fffffff);
  }
  return;
}

