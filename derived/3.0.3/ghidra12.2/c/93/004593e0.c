
void FUN_004593e0(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  undefined1 auStack_1b8 [64];
  undefined8 local_178;
  undefined8 uStack_170;
  ulong local_168;
  long local_160;
  long local_158;
  ulong local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined1 auStack_e8 [64];
  char *local_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  long local_70;
  
  plVar6 = param_1 + 2;
  uVar2 = FUN_0045b290(plVar6,param_3);
  if (*(uint *)(param_1 + 3) == uVar2) {
    if ((*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) == uVar2) {
      FUN_00426990(PTR_DAT_048607b8,plVar6,0x30);
      uVar2 = *(uint *)(param_1 + 3);
    }
    lVar11 = *plVar6;
    puVar8 = (undefined8 *)(lVar11 + (long)(int)uVar2 * 0x30);
    uVar10 = param_3[1];
    *puVar8 = *param_3;
    puVar8[1] = uVar10;
    uVar5 = param_3[2];
    puVar8[2] = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
    lVar11 = lVar11 + (long)(int)uVar2 * 0x30;
    lVar4 = param_2[1];
    *(long *)(lVar11 + 0x18) = *param_2;
    *(long *)(lVar11 + 0x20) = lVar4;
    uVar5 = param_2[2];
    *(ulong *)(lVar11 + 0x28) = uVar5;
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
    }
    *(uint *)(param_1 + 3) = uVar2 + 1;
  }
  else {
    lVar4 = *plVar6 + (long)(int)uVar2 * 0x30;
    lVar11 = param_2[1];
    *(long *)(lVar4 + 0x18) = *param_2;
    *(long *)(lVar4 + 0x20) = lVar11;
    if ((param_2[2] & 1U) != 0) {
      FUN_0043dd30(param_2[2] & 0xfffffffffffffffe);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    if ((uVar5 & 1) != 0) {
      FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    }
    *(ulong *)(lVar4 + 0x28) = param_2[2];
  }
  lVar11 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar11 != 0) {
    FUN_00443b90(lVar11,"LtReflect.Clone","StStart");
  }
  local_a8 = "clone dst={} src={}";
  local_a0 = *param_2;
  lStack_98 = param_2[1];
  local_90 = param_2[2];
  local_70 = lVar11;
  if ((local_90 & 1) != 0) {
    FUN_0043dd30(local_90 & 0xfffffffffffffffe);
  }
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_78 = param_3[2];
  if ((local_78 & 1) != 0) {
    FUN_0043dd30(local_78 & 0xfffffffffffffffe);
  }
  FUN_00444c30(auStack_e8,&DAT_04c700c0,&local_a8,&DAT_04c1f600,
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
               ,0xc3,1);
  local_118 = 0;
  uStack_110 = 0x8000000000000000;
  local_f8 = 0;
  local_f4 = 0x80000000;
  local_108 = 0;
  local_100 = 0;
  lVar4 = param_1[6];
  if (lVar4 == 0) {
    param_1[6] = &local_118;
  }
  (**(code **)(*param_4 + 0x30))(param_4,param_1 + 2);
  *param_1 = param_4;
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443c20(lVar3,"StClone");
  }
  puVar1 = PTR_DAT_048607b8;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  local_140 = 0x8000000000000000;
  FUN_00426990(PTR_DAT_048607b8,&local_148,0x30);
  lVar7 = local_148;
  lVar13 = (long)(int)(uint)local_140;
  plVar6 = (long *)(local_148 + lVar13 * 0x30);
  lVar3 = param_2[1];
  iVar14 = (uint)local_140 + 1;
  *plVar6 = *param_2;
  plVar6[1] = lVar3;
  uVar5 = param_2[2];
  plVar6[2] = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  lVar7 = lVar7 + lVar13 * 0x30;
  uVar10 = param_3[1];
  *(undefined8 *)(lVar7 + 0x18) = *param_3;
  *(undefined8 *)(lVar7 + 0x20) = uVar10;
  uVar5 = param_3[2];
  *(ulong *)(lVar7 + 0x28) = uVar5;
  if ((uVar5 & 1) != 0) {
    FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
  }
  local_140 = CONCAT44(local_140._4_4_,iVar14);
  uVar2 = *(uint *)(param_1 + 8);
  plVar6 = param_1 + 7;
  if (uVar2 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
    FUN_00426990(puVar1,plVar6,0x30);
    uVar2 = *(uint *)(param_1 + 8);
  }
  uVar12 = 1;
  puVar8 = (undefined8 *)(param_1[7] + (long)(int)uVar2 * 0x30);
  *puVar8 = local_128;
  puVar8[1] = uStack_120;
  puVar8[2] = 0;
  puVar8[3] = local_138;
  puVar8[4] = uStack_130;
  puVar8[5] = 0;
  *(uint *)(param_1 + 8) = uVar2 + 1;
  FUN_0045aa20(param_1,param_2,param_3,1);
  iVar14 = *(int *)(param_1 + 8);
  if (iVar14 != 0) {
    uVar12 = 1;
LAB_00458c5c:
    if (-1 < *(int *)(param_1 + 1)) {
      lVar3 = *plVar6;
      puVar8 = (undefined8 *)(lVar3 + ((long)iVar14 + -1) * 0x30);
      local_178 = *puVar8;
      uStack_170 = puVar8[1];
      local_168 = puVar8[2];
      if ((local_168 & 1) != 0) {
        FUN_0043dd30(local_168 & 0xfffffffffffffffe);
      }
      lVar3 = lVar3 + ((long)iVar14 + -1) * 0x30;
      local_160 = *(long *)(lVar3 + 0x18);
      local_158 = *(long *)(lVar3 + 0x20);
      local_150 = *(ulong *)(lVar3 + 0x28);
      if ((local_150 & 1) != 0) {
        FUN_0043dd30(local_150 & 0xfffffffffffffffe);
      }
      lVar3 = param_1[7] + (long)*(int *)(param_1 + 8) * 0x30;
      uVar5 = *(ulong *)(lVar3 + -8);
      if ((uVar5 & 1) != 0) {
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      }
      uVar5 = *(ulong *)(lVar3 + -0x20);
      if ((uVar5 & 1) != 0) {
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      }
      lVar3 = local_158;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      if (local_160 != 0) {
        uVar5 = FUN_00428440(local_158);
        if (((lVar3 != 0) && ((uVar5 & 0x1f) == 8)) &&
           ((puVar8 = (undefined8 *)FUN_00426e90(lVar3,1), puVar8 == (undefined8 *)0x0 ||
            ((int)((ulong)*puVar8 >> 8) == 0)))) {
          if ((uint)local_140 != 0) {
            if (local_160 == 0) {
              lVar3 = (long)(int)(uint)local_140 * 0x30;
              do {
                if (*(long *)(local_148 + -0x18 + lVar3) == 0) goto LAB_00458dd4;
                lVar3 = lVar3 + -0x30;
              } while (lVar3 != 0);
            }
            else {
              lVar3 = (long)(int)(uint)local_140 * 0x30;
              do {
                if ((local_160 == *(long *)(local_148 + lVar3 + -0x18)) &&
                   (local_158 == *(long *)(local_148 + lVar3 + -0x10))) goto LAB_00458dd4;
                lVar3 = lVar3 + -0x30;
              } while (lVar3 != 0);
            }
          }
        }
        goto LAB_00458e38;
      }
      lVar3 = local_148 + (long)(int)(uint)local_140 * 0x30;
      uVar5 = *(ulong *)(lVar3 + -8);
      if ((uVar5 & 1) != 0) {
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      }
      uVar5 = *(ulong *)(lVar3 + -0x20);
      if ((uVar5 & 1) != 0) {
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      }
      local_140 = CONCAT44(local_140._4_4_,(uint)local_140 + -1);
      goto joined_r0x00458f10;
    }
    if (0 < iVar14) {
      puVar9 = (ulong *)(*plVar6 + (long)iVar14 * 0x30 + -0x20);
      goto LAB_00458f5c;
    }
  }
  goto LAB_00458fa0;
LAB_00458dd4:
  if (DAT_04c70110 != 0) {
    FUN_00444bc0(auStack_1b8,&DAT_04c700c0,1);
    lVar3 = FUN_004446b0(auStack_1b8,"Found loop through array {}",&DAT_04863108,&local_160);
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = 0xf0;
    FUN_00444c00(auStack_1b8);
  }
  *(undefined4 *)(param_1 + 1) = 0x80040200;
LAB_00458e38:
  if ((uint)local_140 == (local_140._4_4_ & 0x3fffffff)) {
    FUN_00426990(puVar1,&local_148,0x30);
  }
  lVar3 = local_148;
  lVar7 = (long)(int)(uint)local_140;
  puVar8 = (undefined8 *)(local_148 + (long)(int)(uint)local_140 * 0x30);
  iVar14 = (uint)local_140 + 1;
  *puVar8 = local_178;
  puVar8[1] = uStack_170;
  puVar8[2] = local_168;
  if ((local_168 & 1) != 0) {
    FUN_0043dd30(local_168 & 0xfffffffffffffffe);
  }
  lVar3 = lVar3 + lVar7 * 0x30;
  *(long *)(lVar3 + 0x18) = local_160;
  *(long *)(lVar3 + 0x20) = local_158;
  *(ulong *)(lVar3 + 0x28) = local_150;
  if ((local_150 & 1) != 0) {
    FUN_0043dd30(local_150 & 0xfffffffffffffffe);
  }
  local_140 = CONCAT44(local_140._4_4_,iVar14);
  uVar2 = *(uint *)(param_1 + 8);
  uVar12 = uVar12 + 1;
  if (uVar2 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
    FUN_00426990(puVar1,plVar6,0x30);
    uVar2 = *(uint *)(param_1 + 8);
  }
  puVar8 = (undefined8 *)(param_1[7] + (long)(int)uVar2 * 0x30);
  *puVar8 = local_128;
  puVar8[1] = uStack_120;
  puVar8[2] = 0;
  puVar8[3] = local_138;
  puVar8[4] = uStack_130;
  puVar8[5] = 0;
  *(uint *)(param_1 + 8) = uVar2 + 1;
  FUN_0045aa20(param_1,&local_178,&local_160,0);
joined_r0x00458f10:
  if ((local_150 & 1) != 0) {
    FUN_0043dd50(local_150 & 0xfffffffffffffffe);
  }
  if ((local_168 & 1) == 0) {
    iVar14 = *(int *)(param_1 + 8);
  }
  else {
    FUN_0043dd50(local_168 & 0xfffffffffffffffe);
    iVar14 = *(int *)(param_1 + 8);
  }
  if (iVar14 == 0) goto LAB_00458fa0;
  goto LAB_00458c5c;
LAB_00458f5c:
  do {
    if ((puVar9[3] & 1) != 0) {
      FUN_0043dd50(puVar9[3] & 0xfffffffffffffffe);
      uVar5 = *puVar9;
      if ((uVar5 & 1) == 0) goto LAB_00458f6c;
LAB_00458f8c:
      FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
      iVar14 = iVar14 + -1;
      puVar9 = puVar9 + -6;
      if (iVar14 == 0) break;
      goto LAB_00458f5c;
    }
    uVar5 = *puVar9;
    if ((uVar5 & 1) != 0) goto LAB_00458f8c;
LAB_00458f6c:
    iVar14 = iVar14 + -1;
    puVar9 = puVar9 + -6;
  } while (iVar14 != 0);
LAB_00458fa0:
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443d20((float)uVar12,lVar3,"MiNumClones");
  }
  lVar3 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar3 != 0) {
    FUN_00443c20(lVar3,"StEnd");
  }
  (**(code **)(*param_4 + 0x38))(param_4,param_1 + 1);
  if (*(int *)(param_1 + 1) < 0) {
    if (1 < DAT_04c70110) {
      FUN_00444bc0(auStack_1b8,&DAT_04c700c0,2);
      lVar3 = FUN_004446b0(auStack_1b8,"Unable to clone object {} or one of its dependencies",
                           &DAT_04863108,param_3);
      *(char **)(lVar3 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x30) = 0x134;
      FUN_00444c00(auStack_1b8);
    }
    uVar5 = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((uVar5 & 1) != 0) {
      FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
    }
LAB_0045914c:
    if (lVar4 != 0) goto LAB_00459158;
  }
  else {
    if (*(int *)(param_1[6] + 0x28) != 0) goto LAB_0045914c;
    lVar3 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar3 != 0) {
      FUN_00443c20(lVar3,"StAfterReflectNew");
    }
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      lVar7 = *param_2;
      uVar5 = FUN_00427110(lVar3,PTR_DAT_04bd71b0);
      if ((((uVar5 & 1) != 0) && (uVar2 = FUN_004274f0(lVar3), lVar7 != 0)) &&
         ((uVar2 >> 3 & 1) == 0)) {
        lVar13 = param_1[6];
        FUN_004435a0(lVar7);
        lVar3 = *(long *)(lVar13 + 0x10);
        *(long *)(lVar13 + 0x10) = lVar7;
        if (lVar3 != 0) {
          FUN_004435c0();
        }
      }
    }
    if (*(int *)(param_1 + 10) != 0) {
      puVar8 = (undefined8 *)param_1[9];
      lVar3 = (long)*(int *)(param_1 + 10) << 3;
      do {
        lVar7 = param_1[6];
        uVar2 = *(uint *)(lVar7 + 0x20);
        uVar10 = *puVar8;
        if (uVar2 == (*(uint *)(lVar7 + 0x24) & 0x3fffffff)) {
          FUN_00426990(puVar1,lVar7 + 0x18,8);
          uVar2 = *(uint *)(lVar7 + 0x20);
        }
        puVar8 = puVar8 + 1;
        lVar3 = lVar3 + -8;
        *(undefined8 *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar2 * 8) = uVar10;
        *(uint *)(lVar7 + 0x20) = uVar2 + 1;
      } while (lVar3 != 0);
    }
    if (lVar4 != 0) goto LAB_00459158;
    FUN_004585f0(&local_118);
  }
  param_1[6] = 0;
LAB_00459158:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (0 < (int)(uint)local_140) {
    puVar9 = (ulong *)(local_148 + (long)(int)(uint)local_140 * 0x30 + -0x20);
    iVar14 = (uint)local_140;
    do {
      while ((puVar9[3] & 1) != 0) {
        FUN_0043dd50(puVar9[3] & 0xfffffffffffffffe);
        uVar5 = *puVar9;
        if ((uVar5 & 1) == 0) goto LAB_00459190;
LAB_004591b0:
        FUN_0043dd50(uVar5 & 0xfffffffffffffffe);
        iVar14 = iVar14 + -1;
        puVar9 = puVar9 + -6;
        if (iVar14 == 0) goto LAB_004591c4;
      }
      uVar5 = *puVar9;
      if ((uVar5 & 1) != 0) goto LAB_004591b0;
LAB_00459190:
      iVar14 = iVar14 + -1;
      puVar9 = puVar9 + -6;
    } while (iVar14 != 0);
  }
LAB_004591c4:
  lVar4 = local_140;
  uVar2 = local_140._4_4_;
  local_140 = (ulong)local_140._4_4_ << 0x20;
  if ((-1 < lVar4) && (local_148 != 0)) {
    FUN_00421f90(puVar1,local_148,0x30,uVar2 & 0x3fffffff);
  }
  FUN_0045a320(&local_118);
  FUN_00444ca0(auStack_e8);
  if ((local_78 & 1) != 0) {
    FUN_0043dd50(local_78 & 0xfffffffffffffffe);
  }
  if ((local_90 & 1) != 0) {
    FUN_0043dd50(local_90 & 0xfffffffffffffffe);
  }
  if (lVar11 != 0) {
    FUN_00443ca0(lVar11,&DAT_040b3f27);
  }
  return;
}

