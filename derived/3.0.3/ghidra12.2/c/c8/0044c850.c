
undefined8 FUN_0044c850(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong local_140;
  char local_138;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 local_f0 [16];
  ulong local_70 [2];
  
  lVar3 = FUN_0044c7a0();
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_00422d90(param_3,lVar3);
    return *puVar4;
  }
  lVar3 = *(long *)(param_1 + 8);
  uVar5 = FUN_00428440(lVar3);
  if (lVar3 == 0) {
    return 0;
  }
  if ((uVar5 & 0x1f) != 4) {
    return 0;
  }
  if ((param_2[1] == 0) || (uVar5 = FUN_00428440(), (uVar5 & 0x1f) != 4)) {
    uVar9 = 0;
    uVar10 = 0;
    uVar5 = 0;
  }
  else {
    uVar9 = *param_2;
    uVar10 = param_2[1];
    uVar5 = param_2[2];
    if ((uVar5 & 1) != 0) {
      FUN_0043dd30(uVar5 & 0xfffffffffffffffe);
      uVar5 = param_2[2];
    }
  }
  local_140 = 0;
  local_138 = '\0';
  plVar8 = (long *)(uVar5 & 0xfffffffffffffffe);
  (**(code **)(*plVar8 + 0x38))(plVar8,uVar9,uVar10,&local_140);
  local_70[0] = -local_140;
  if (local_138 == '\0') {
    local_70[0] = local_140;
  }
  if ((uVar5 & 1) != 0) {
    FUN_0043dd50(plVar8);
  }
  puVar2 = PTR_DAT_048607c0;
  if (local_70[0] == 0) {
    return 0;
  }
  local_100 = local_f0;
  local_f8 = -0x7ffffff000000000;
  if (*(int *)(param_1 + 0x10) < 1) {
    if (local_70[0] == 0) goto LAB_0044cb24;
  }
  else {
    lVar3 = 0;
    uVar5 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x20) + lVar3 * 8);
      lVar12 = *(long *)(param_1 + 8);
      if (lVar12 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_00428370(lVar12);
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
        }
      }
      if ((lVar12 == 0) || (uVar7 = FUN_00428440(lVar12), (uVar7 & 0x1f) != 4)) {
        if ((uVar6 & 1) != 0) {
          lVar12 = 0;
          lVar11 = 0;
          uVar7 = 0;
          goto LAB_0044ca14;
        }
      }
      else {
        uVar7 = uVar6;
        if ((uVar6 & 1) != 0) {
          FUN_0043dd30(uVar6 & 0xfffffffffffffffe);
LAB_0044ca14:
          FUN_0043dd50(uVar6 & 0xfffffffffffffffe);
        }
        if (lVar11 != 0) {
          local_140 = 0;
          local_138 = '\0';
          (**(code **)(*(long *)(uVar7 & 0xfffffffffffffffe) + 0x38))
                    ((long *)(uVar7 & 0xfffffffffffffffe),lVar11,lVar12,&local_140);
          uVar6 = -local_140;
          if (local_138 == '\0') {
            uVar6 = local_140;
          }
          if ((uVar6 & (local_70[0] ^ 0xffffffffffffffff)) == 0) {
            lVar11 = *(long *)(param_1 + 0x18);
            if ((uint)local_f8 == (local_f8._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar2,&local_100,8);
            }
            local_100[(int)(uint)local_f8] = *(undefined8 *)(lVar11 + lVar3 * 8);
            uVar5 = uVar6 | uVar5;
            local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 + 1);
          }
        }
        if ((uVar7 & 1) != 0) {
          FUN_0043dd50(uVar7 & 0xfffffffffffffffe);
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x10));
    if (uVar5 == local_70[0]) goto LAB_0044cb24;
  }
  if (1 < DAT_04c6f828) {
    FUN_00444bc0(&local_140,&DAT_04c6f7d8,2);
    lVar3 = FUN_004446b0(&local_140,"Unmatched bits while decoding {}, value {}",&DAT_04861838,
                         (long *)(param_1 + 8),local_70);
    *(char **)(lVar3 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    *(undefined8 *)(lVar3 + 0x30) = 0x8e;
    FUN_00444c00(&local_140);
  }
LAB_0044cb24:
  if ((uint)local_f8 == 0) {
    uVar9 = 0;
    uVar1 = local_f8._4_4_;
  }
  else if ((uint)local_f8 == 1) {
    puVar4 = (undefined8 *)FUN_004225f0(param_3,*local_100,0xffffffff);
    uVar9 = *puVar4;
    uVar1 = local_f8._4_4_;
  }
  else {
    puVar4 = (undefined8 *)
             FUN_00423640(param_3,&DAT_040c84ef,local_100,local_100 + (int)(uint)local_f8);
    uVar9 = *puVar4;
    uVar1 = local_f8._4_4_;
  }
  if ((-1 < local_f8) && (local_f8 = (ulong)uVar1 << 0x20, local_100 != (undefined8 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607c0,local_100,8,uVar1 & 0x3fffffff);
  }
  return uVar9;
}

