
undefined4 FUN_004bda30(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong extraout_x1;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long local_80;
  undefined8 local_78;
  undefined1 auStack_70 [48];
  long local_38;
  
  local_38 = param_1;
  lVar3 = FUN_004bde20(param_2,&local_38);
  if ((lVar3 == 0) ||
     ((int)(*(uint *)(lVar3 + 4) | ((int)lVar3 - (int)*(undefined8 *)(param_2 + 0x10)) * 0x20000000)
      < 0)) {
    uVar7 = 0x80040200;
    FUN_004bdec0(param_3,&local_38);
    if ((extraout_x1 & 1) == 0) {
      if (DAT_04c716a0 != '\0') {
        FUN_00444bc0(&local_80,&DAT_04c71650,1);
        lVar3 = FUN_004446b0(&local_80,
                             "Loop in field or parents detected while trying to process {}/{}",
                             &DAT_048683f8,local_38 + 0x18,local_38 + 0x20);
        *(char **)(lVar3 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundle.cpp"
        ;
        *(undefined8 *)(lVar3 + 0x30) = 0x5a6;
        *(undefined4 *)(lVar3 + 0xc) = 0xa71bbc06;
        FUN_00444c00(&local_80);
      }
    }
    else {
      lVar3 = local_38;
      if (*(int *)(local_38 + 0x40) < 1) {
        uVar6 = 0;
        iVar2 = *(int *)(local_38 + 0x30);
      }
      else {
        lVar8 = 0;
        uVar5 = 0;
        do {
          lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + lVar8 * 8);
          uVar6 = uVar5;
          if (lVar4 != 0) {
            iVar2 = FUN_004bda30(lVar4,param_2,param_3);
            uVar6 = uVar7;
            if (-1 < iVar2) {
              uVar6 = uVar5;
            }
            lVar3 = local_38;
          }
          lVar8 = lVar8 + 1;
          uVar5 = uVar6;
        } while (lVar8 < *(int *)(lVar3 + 0x40));
        iVar2 = *(int *)(lVar3 + 0x30);
      }
      if (0 < iVar2) {
        lVar8 = 0;
        do {
          iVar2 = FUN_004bdd60(*(undefined8 *)(*(long *)(lVar3 + 0x28) + lVar8 * 8),param_2,param_3)
          ;
          lVar8 = lVar8 + 1;
          uVar5 = uVar7;
          if (-1 < iVar2) {
            uVar5 = uVar6;
          }
          lVar3 = local_38;
          uVar6 = uVar5;
        } while (lVar8 < *(int *)(local_38 + 0x30));
      }
      uVar7 = uVar6;
      local_80 = 0;
      local_78 = -0x8000000000000000;
      FUN_0043d3a0(auStack_70);
      FUN_004c1a00(local_38,&local_80);
      FUN_004bdec0(param_2,&local_38);
      lVar3 = FUN_004bde20(param_3,&local_38);
      if (lVar3 != 0) {
        FUN_004be060(param_3,lVar3);
      }
      FUN_0043d280(auStack_70);
      lVar3 = local_78;
      uVar1 = local_78._4_4_;
      local_78 = (ulong)local_78._4_4_ << 0x20;
      if ((-1 < lVar3) && (local_80 != 0)) {
        FUN_00421f90(PTR_DAT_048607b8,local_80,8,uVar1 & 0x3fffffff);
      }
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

