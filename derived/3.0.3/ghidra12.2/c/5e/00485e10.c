
undefined8 FUN_00485e10(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_80 [64];
  
  FUN_0047aa40(param_3,0);
  if ((*(char *)(param_3 + 0x79) == '\0') || (param_1[1] != 0)) {
LAB_00485e8c:
    if (*(char *)(param_3 + 0x78) != '\0') {
      if (DAT_04c70d20 == (code *)0x0) {
        if (DAT_04c70c68 != '\0') {
          FUN_00444bc0(auStack_80,&DAT_04c70c18,1);
          lVar1 = FUN_004446b0(auStack_80,
                               "Versioning is trying to create a patcher but there is no registered patcher creation function. Ensure you have linked against hkCompat and not excluded it from hkProductFeatures"
                               ,&DAT_0413df78);
          uVar3 = 0x62;
          goto LAB_00485fe0;
        }
        goto LAB_00485fec;
      }
      if ((*(char *)(param_3 + 0x79) != '\0') && (DAT_04c70d30 != (code *)0x0)) {
        param_4 = (**(code **)(*(long *)param_1[1] + 0x20))();
      }
      plVar2 = (long *)*param_1;
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(*DAT_04c70d20)(param_4,param_3);
        plVar4 = (long *)*param_1;
        if ((plVar4 != plVar2) && (*param_1 = (long)plVar2, plVar4 != (long *)0x0)) {
          FUN_004435c0(plVar4);
          plVar2 = (long *)*param_1;
        }
      }
      param_2 = (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3);
    }
    if (*(char *)(param_3 + 0x79) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00485f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],param_2,0);
      return uVar3;
    }
  }
  else {
    if (DAT_04c70d30 != (code *)0x0) {
      lVar1 = (*DAT_04c70d30)(*(undefined8 *)(param_3 + 0x68),param_4);
      plVar2 = (long *)param_1[1];
      param_1[1] = lVar1;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      goto LAB_00485e8c;
    }
    if (DAT_04c70c68 != '\0') {
      FUN_00444bc0(auStack_80,&DAT_04c70c18,1);
      lVar1 = FUN_004446b0(auStack_80,
                           "Versioning is trying to create a versionbundle but there is no registered patcher function. Ensure you have not excluded it from hkProductFeatures"
                           ,&DAT_0413df78);
      uVar3 = 0x45;
LAB_00485fe0:
      *(char **)(lVar1 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectVersionPatcher.cpp"
      ;
      *(undefined8 *)(lVar1 + 0x30) = uVar3;
      FUN_00444c00(auStack_80);
    }
LAB_00485fec:
    param_2 = 0;
  }
  return param_2;
}

