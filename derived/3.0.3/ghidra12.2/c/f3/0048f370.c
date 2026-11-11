
/* WARNING: Type propagation algorithm not settling */

void FUN_0048f370(long *param_1,int *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  int *piVar9;
  code *pcVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 auStack_c0 [64];
  undefined1 *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  local_80 = auStack_70;
  local_78 = -0x7ffffff000000000;
  iVar6 = (int)((ulong)((long)param_4 - (long)param_3) >> 4);
  uVar2 = iVar6 * -0x55555555;
  if ((int)uVar2 < 0x11) {
    local_78._0_4_ = 0;
    bVar4 = SBORROW4(0,uVar2);
    iVar6 = iVar6 * 0x55555555;
    bVar5 = uVar2 == 0;
    if (0 < (int)uVar2) goto LAB_0048f424;
  }
  else {
    local_80 = (undefined1 *)FUN_00426720(PTR_DAT_048607c0,uVar2,1,local_80,0,(long)&local_78 + 4);
    bVar4 = SBORROW4((uint)local_78,uVar2);
    iVar6 = (uint)local_78 + iVar6 * 0x55555555;
    bVar5 = (uint)local_78 == uVar2;
    if ((int)(uint)local_78 < (int)uVar2) {
LAB_0048f424:
      lVar8 = (long)(int)(uint)local_78;
      uVar3 = ~(uint)local_78;
      local_78 = CONCAT44(local_78._4_4_,uVar2);
      memset(local_80 + lVar8,0,(ulong)(uVar3 + uVar2) + 1);
      iVar6 = *param_2;
      goto joined_r0x0048f410;
    }
  }
  if (!bVar5 && iVar6 < 0 == bVar4) {
    local_78 = CONCAT44(local_78._4_4_,uVar2);
  }
  iVar6 = *param_2;
joined_r0x0048f410:
  if (-1 < iVar6) {
    do {
      iVar6 = FUN_004932d0(param_1,0);
      if (iVar6 == 0) goto LAB_0048f70c;
      if (iVar6 == 1) {
        if (1 < DAT_04c70f78) {
          FUN_00444bc0(auStack_c0,&DAT_04c70f28,2);
          lVar8 = FUN_004446b0(auStack_c0,"IO error",&DAT_0413df78);
          uVar12 = 0x4a7;
LAB_0048f6f0:
          *(char **)(lVar8 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar8 + 0x30) = uVar12;
          FUN_00444c00(auStack_c0);
        }
LAB_0048f704:
        *param_2 = -0x7ffbfe00;
        break;
      }
      if (param_3 != param_4) {
        piVar13 = param_3;
        do {
          piVar9 = piVar13 + 0xc;
          if (*piVar13 == iVar6) {
            if (piVar13 != (int *)0x0) {
              iVar6 = (int)((ulong)((long)piVar13 - (long)param_3) >> 4) * -0x55555555;
              if (local_80[iVar6] != '\0') {
                if (DAT_04c70f78 < 2) goto LAB_0048f704;
                FUN_00444bc0(auStack_c0,&DAT_04c70f28,2);
                lVar8 = FUN_004446b0(auStack_c0,"Duplicate section",&DAT_0413df78);
                uVar12 = 0x4ca;
                goto LAB_0048f6f0;
              }
              local_80[iVar6] = 1;
              pcVar10 = *(code **)(piVar13 + 2);
              uVar1 = *(ulong *)(piVar13 + 4);
              if ((pcVar10 == (code *)0x0) && (uVar1 == 0 || (uVar1 & 1) == 0)) {
                puVar7 = (ulong *)*param_1;
                uVar1 = *puVar7 + (((ulong)*(uint *)(param_1[2] + (long)(int)param_1[3] * 0x18 +
                                                    -0x14) & 0x3fffffff) - 8);
                if (puVar7[1] < uVar1) {
                  FUN_0049e6e0();
                }
                else {
                  *puVar7 = uVar1;
                }
                iVar6 = 0;
                if (*(char *)(*param_1 + 0x20) != '\0') {
                  iVar6 = -0x7ffbfe00;
                }
                *param_2 = iVar6;
              }
              else {
                plVar11 = (long *)((long)param_2 + ((long)uVar1 >> 1));
                if ((uVar1 & 1) != 0) {
                  pcVar10 = *(code **)(pcVar10 + *plVar11);
                }
                (*pcVar10)(plVar11,param_1);
                iVar6 = *param_2;
              }
              if (iVar6 < 0) goto LAB_0048f5ac;
              plVar11 = (long *)*param_1;
              lVar8 = (long)(int)param_1[3] + -1;
              lVar14 = param_1[2] + lVar8 * 0x18;
              if ((plVar11[5] - plVar11[2]) + *plVar11 ==
                  ((ulong)*(uint *)(lVar14 + 4) & 0x3fffffff) + (long)*(int *)(lVar14 + 8)) {
                param_1[1] = *(long *)(param_1[2] + lVar8 * 0x18 + 0x10);
                *(int *)(param_1 + 3) = (int)lVar8;
                iVar6 = *param_2;
              }
              else {
                *(byte *)(plVar11 + 4) = *(byte *)(plVar11 + 4) | 2;
                iVar6 = *param_2;
              }
              goto joined_r0x0048f66c;
            }
            break;
          }
          piVar13 = piVar9;
        } while (param_4 != piVar9);
      }
      local_c8 = (undefined1)((uint)iVar6 >> 0x18);
      local_c7 = (undefined1)((uint)iVar6 >> 0x10);
      local_c6 = (undefined1)((uint)iVar6 >> 8);
      local_c5 = (undefined1)iVar6;
      local_c4 = 0;
      if (1 < DAT_04c70f78) {
        FUN_00444bc0(auStack_c0,&DAT_04c70f28,2);
        lVar8 = FUN_004446b0(auStack_c0,"Unexpected section {}",&DAT_04866950,&local_c8);
        *(char **)(lVar8 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar8 + 0x30) = 0x4d1;
        FUN_00444c00(auStack_c0);
      }
      *param_2 = -0x7ffbfe00;
LAB_0048f5ac:
      iVar6 = *param_2;
joined_r0x0048f66c:
    } while (-1 < iVar6);
  }
  *(undefined4 *)(param_1 + 3) = 0;
LAB_0048f70c:
  lVar8 = local_78;
  uVar2 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_80 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_80,1,uVar2 & 0x3fffffff);
  }
  return;
}

