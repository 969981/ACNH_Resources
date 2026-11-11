
undefined8
FUN_004bf220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  ulong local_120 [2];
  ulong local_110;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [18];
  
  FUN_004225d0(local_d0,&DAT_04084559);
  FUN_00423880(local_d0,*param_4,*(int *)(param_4 + 1) - (int)*param_4);
  uVar3 = FUN_00427d40(param_3,local_d0[0],0);
  if (uVar3 < 2) {
    FUN_0043bd90(local_120,*param_4,param_4[1]);
    uVar3 = FUN_00427d40(param_3,local_120[0] & 0xfffffffffffffffe,0);
    FUN_0043be10(local_120);
    if (uVar3 < 2) {
      uVar4 = 0x80040200;
      if (DAT_04c716a0 != 0) {
        FUN_00444bc0(local_120,&DAT_04c71650,1);
        lVar6 = FUN_004446b0(local_120,
                             "Field {} not found applying patch {}. This often indicates version mismatches or missing patches."
                             ,&DAT_04868548,param_4,param_1);
        *(char **)(lVar6 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundle.cpp"
        ;
        *(undefined8 *)(lVar6 + 0x30) = 0x979;
        *(undefined4 *)(lVar6 + 0xc) = 0xa71bbc08;
        FUN_00444c00(local_120);
      }
      goto LAB_004bf498;
    }
    if (3 < DAT_04c716a0) {
      FUN_00444bc0(local_120,&DAT_04c71650,4);
      lVar6 = FUN_004446b0(local_120,
                           "Field {} was already present when applying patch {}. This often indicates version mismatches or missing patches."
                           ,&DAT_04868548,param_4,param_1);
      *(char **)(lVar6 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundle.cpp"
      ;
      *(undefined8 *)(lVar6 + 0x30) = 0x974;
      FUN_00444c00(local_120);
    }
  }
  else {
    uVar4 = FUN_004adce0(*param_4,*(int *)(param_4 + 1) - (int)*param_4);
    puVar5 = (undefined8 *)FUN_00426d40(uVar3,0x10000);
    *puVar5 = uVar4;
    local_e0 = 0;
    local_d8 = -0x8000000000000000;
    FUN_004c1060(param_2,&local_e0);
    if ((int)local_d8 == 0) {
      uVar1 = local_d8._4_4_;
      puVar2 = PTR_DAT_048607c0;
      lVar6 = local_d8;
    }
    else {
      lVar8 = (long)(int)local_d8 * 0x18;
      lVar6 = local_e0;
      do {
        FUN_0043f390(local_120,lVar6,*param_4,param_4[1]);
        if (local_120[0] != 0) {
          FUN_00440bc0(local_120);
        }
        if ((local_110 & 1) != 0) {
          FUN_0043dd50(local_110 & 0xfffffffffffffffe);
        }
        puVar2 = PTR_DAT_048607c0;
        lVar6 = lVar6 + 0x18;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
      if (0 < (int)local_d8) {
        puVar9 = (ulong *)(local_e0 + (long)(int)local_d8 * 0x18 + -8);
        iVar7 = (int)local_d8;
        do {
          if ((*puVar9 & 1) != 0) {
            FUN_0043dd50(*puVar9 & 0xfffffffffffffffe);
          }
          iVar7 = iVar7 + -1;
          puVar9 = puVar9 + -3;
        } while (iVar7 != 0);
      }
      uVar1 = local_d8._4_4_;
      lVar6 = local_d8;
    }
    local_d8 = (ulong)uVar1 << 0x20;
    if ((-1 < lVar6) && (local_e0 != 0)) {
      FUN_00421f90(puVar2,local_e0,0x18,uVar1 & 0x3fffffff);
    }
  }
  uVar4 = 0;
LAB_004bf498:
  FUN_00422550(local_d0);
  return uVar4;
}

