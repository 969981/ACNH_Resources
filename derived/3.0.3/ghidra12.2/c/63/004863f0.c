
void FUN_004863f0(long *param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_a8;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [8];
  long local_58;
  ulong local_48;
  
  local_48 = param_5;
  lVar2 = FUN_0043c4e0(DAT_04c6f410);
  if (lVar2 != 0) {
    FUN_00443a00(lVar2,"TthkSerialize::Load::toVarInplace");
  }
  local_58 = lVar2;
  if (param_3 != 0) {
    plVar7 = (long *)*param_2;
    if (plVar7 == (long *)0x0) {
      plVar7 = (long *)FUN_00438810(0x20);
      FUN_0048fc90();
      plVar3 = (long *)*param_2;
      *param_2 = (long)plVar7;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        plVar7 = (long *)*param_2;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,param_3,param_4,auStack_60,param_2[1]);
    if (plVar7 == (long *)0x0) {
      if (1 < DAT_04c70d08) {
        FUN_00444bc0(auStack_a0,&DAT_04c70cb8,2);
        lVar5 = FUN_004446b0(auStack_a0,"Failed to load",&DAT_0413df78);
        *(char **)(lVar5 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/hkSerialize.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x30) = 900;
        FUN_00444c00(auStack_a0);
      }
    }
    else {
      (**(code **)(*plVar7 + 0x10))(param_1);
      if (param_5 < 2) goto LAB_004865c4;
      lVar5 = param_1[1];
      if (lVar5 != 0) {
        lVar6 = *param_1;
        uVar4 = FUN_00427110(lVar5,param_5);
        if ((((uVar4 & 1) != 0) && (uVar1 = FUN_004274f0(lVar5), lVar6 != 0)) &&
           ((uVar1 >> 3 & 1) == 0)) goto LAB_004865c4;
      }
      if (1 < DAT_04c70d08) {
        FUN_00444bc0(auStack_a0,&DAT_04c70cb8,2);
        local_a8 = param_1[1];
        lVar5 = FUN_004446b0(auStack_a0,"Type mismatch - requested {}, but got {}",&DAT_04865db8,
                             &local_48,&local_a8);
        *(char **)(lVar5 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/hkSerialize.cpp"
        ;
        *(undefined8 *)(lVar5 + 0x30) = 0x37f;
        FUN_00444c00(auStack_a0);
      }
      if ((param_1[2] & 1U) != 0) {
        FUN_0043dd50(param_1[2] & 0xfffffffffffffffe);
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_004865c4:
  if (lVar2 != 0) {
    FUN_00443a70(lVar2,&DAT_04085310);
  }
  return;
}

