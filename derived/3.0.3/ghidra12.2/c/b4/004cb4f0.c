
undefined8 * FUN_004cb4f0(undefined8 *param_1,undefined8 *param_2,long param_3,byte param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [144];
  ulong local_50;
  ulong local_48;
  
  FUN_004292f0(&local_50,param_3);
  if (1 < local_50) {
    uVar2 = FUN_004290b0(&local_50);
    if ((uVar2 & 1) != 0) {
      puVar3 = (undefined8 *)FUN_00438810(0x28);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0xffffffff00000000;
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfc;
      FUN_0043bf00(puVar3,*param_2,param_2[1]);
      FUN_004225b0(auStack_e0);
      local_f0 = FUN_004273b0(param_3);
      uVar4 = FUN_00428a00(local_f0,auStack_e0);
      FUN_0043be70(puVar3 + 1,uVar4);
      puVar3[2] = &DAT_04c161d0;
      puVar3[3] = 0;
      *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe;
      goto LAB_004cb6fc;
    }
    uVar2 = FUN_00428440(param_3);
    if ((((param_3 == 0) || ((uVar2 & 0x1f) != 0)) &&
        (uVar2 = FUN_004274f0(param_3), (uVar2 & 3) != 0)) &&
       (uVar1 = FUN_004274f0(param_3), (uVar1 >> 1 & 1) == 0)) {
      return (undefined8 *)0x0;
    }
  }
  puVar3 = (undefined8 *)FUN_00438810(0x28);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0xffffffff00000000;
  *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfc;
  FUN_0043bf00(puVar3,*param_2,param_2[1]);
  FUN_004225b0(auStack_e0);
  local_f0 = FUN_004273b0(param_3);
  uVar4 = FUN_00428a00(local_f0,auStack_e0);
  FUN_0043be70(puVar3 + 1,uVar4);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(byte *)(puVar3 + 4) = *(byte *)(puVar3 + 4) & 0xfe | param_4 & 1;
  uVar1 = FUN_00428440(param_3);
  if ((param_3 == 0) || (3 < (uVar1 & 0x1f) - 2)) {
    uVar2 = FUN_00428440(param_3);
    if ((param_3 == 0) || ((uVar2 & 0x1f) != 0)) {
      uVar2 = FUN_004cb400(param_3);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_00428440(param_3);
        if ((param_3 == 0) || ((uVar2 & 0x1f) != 6)) {
          uVar2 = FUN_00428440(param_3);
          if ((param_3 == 0) || ((uVar2 & 0x1f) != 8)) {
            uVar2 = FUN_00428440(param_3);
            if ((param_3 == 0) || ((uVar2 & 0x1f) != 7)) {
              uVar2 = FUN_0043d930(0x6ae11bd3,
                                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionBundleUtil.cpp"
                                   ,0x15e,
                                   "static hkVersionBundleUtil::Field *hkVersionBundleUtil::Field::createFromStaticType(hkVersionBundleUtil::TypeFromTypeCb &, const hkStringView &, const hkReflect::Type *, bool)"
                                   ,&DAT_0407ebb1,"Not implemented",&DAT_0413df78);
              if ((uVar2 & 1) != 0) {
                CallSupervisor(0x26);
              }
              goto LAB_004cb6fc;
            }
            uVar4 = (**(code **)*param_1)(param_1,param_3);
            uVar7 = 3;
          }
          else {
            puVar6 = (undefined8 *)FUN_00426e90(param_3,1);
            if ((puVar6 == (undefined8 *)0x0) || (iVar8 = (int)((ulong)*puVar6 >> 8), iVar8 == 0)) {
              lVar5 = FUN_00426d90(param_3);
              uVar4 = 0;
              if (lVar5 != 0) {
                local_f0._0_8_ = &DAT_0407ebb1;
                local_f0._8_8_ = &DAT_0407ebb1;
                uVar4 = FUN_00426d90(param_3);
                uVar4 = FUN_004cb4f0(param_1,local_f0,uVar4,1);
              }
              uVar7 = 4;
            }
            else {
              local_f0._0_8_ = &DAT_0407ebb1;
              local_f0._8_8_ = &DAT_0407ebb1;
              uVar4 = FUN_00426d90(param_3);
              uVar4 = FUN_004cb4f0(param_1,local_f0,uVar4,1);
              uVar7 = 5;
              *(int *)(puVar3 + 3) = iVar8;
            }
          }
          *(undefined4 *)((long)puVar3 + 0x1c) = uVar7;
          puVar3[2] = uVar4;
          goto LAB_004cb6fc;
        }
        lVar5 = FUN_00426d90(param_3);
        if (lVar5 == 0) {
LAB_004cb7c4:
          lVar5 = FUN_00426d90(param_3);
          if (lVar5 != 0) {
            local_f0._0_8_ = &DAT_0407ebb1;
            local_f0._8_8_ = &DAT_0407ebb1;
            uVar4 = FUN_00426d90(param_3);
            uVar4 = FUN_004cb4f0(param_1,local_f0,uVar4,1);
            *(undefined4 *)((long)puVar3 + 0x1c) = 1;
            puVar3[2] = uVar4;
            goto LAB_004cb6fc;
          }
          uVar7 = 1;
        }
        else {
          uVar2 = FUN_0044f8a0(lVar5,&DAT_04c16210);
          if ((uVar2 & 1) == 0) goto LAB_004cb7c4;
          uVar7 = 2;
        }
        *(undefined4 *)((long)puVar3 + 0x1c) = uVar7;
        puVar3[2] = 0;
        goto LAB_004cb6fc;
      }
    }
  }
  for (; param_3 != 0; param_3 = *(long *)(param_3 + 8)) {
    uVar1 = FUN_004274f0(param_3);
    if ((uVar1 >> 3 & 1) == 0) {
      FUN_00429460(local_f0,param_3);
      if ((ulong)local_f0._0_8_ < 2) break;
      FUN_00429460(local_f0,param_3);
      local_48 = local_f0._0_8_;
      uVar1 = FUN_004290b0(&local_48);
      if ((uVar1 >> 6 & 1) == 0) break;
    }
  }
  *(undefined4 *)((long)puVar3 + 0x1c) = 0;
  puVar3[2] = param_3;
LAB_004cb6fc:
  FUN_00422550(auStack_e0);
  return puVar3;
}

