
void FUN_004c20e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_a0 [64];
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  local_60 = &PTR_LAB_04868700;
  uStack_58 = param_2;
  local_50 = param_1;
  local_48 = (**(code **)(*(long *)*param_1 + 0x40))();
  lVar2 = FUN_004ca820(&local_60,param_3,param_4);
  if (lVar2 == 0) {
    if (DAT_04c71768 != '\0') {
      FUN_00444bc0(auStack_a0,&DAT_04c71718,1);
      lVar2 = FUN_004446b0(auStack_a0,"Versioning was unable to create field {} in type {} ({})",
                           &DAT_048687c8,param_3,param_1 + 1,param_4);
      *(char **)(lVar2 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Version/hkVersionedTypeBuilder.cpp"
      ;
      *(undefined8 *)(lVar2 + 0x30) = 0x3dd;
      FUN_00444c00(auStack_a0);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 6);
    plVar1 = param_1 + 5;
    if (param_5 < 0) {
      if (uVar4 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,plVar1,8);
        uVar4 = *(uint *)(param_1 + 6);
      }
      *(uint *)(param_1 + 6) = uVar4 + 1;
      *(long *)(param_1[5] + (long)(int)uVar4 * 8) = lVar2;
    }
    else {
      if ((int)uVar4 < (int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
        lVar3 = *plVar1;
      }
      else {
        lVar3 = FUN_00426720(PTR_DAT_048607b8,uVar4 + 1,8,*plVar1);
        *plVar1 = lVar3;
      }
      plVar1 = (long *)(lVar3 + (long)param_5 * 8);
      FUN_0043aa30(plVar1 + 1,plVar1,
                   -(ulong)(uVar4 - param_5 >> 0x1f) & 0xfffffff800000000 |
                   (ulong)(uVar4 - param_5) << 3);
      *plVar1 = 0;
      *(uint *)(param_1 + 6) = uVar4 + 1;
      lVar3 = *plVar1;
      *plVar1 = lVar2;
      if (lVar3 != 0) {
        FUN_004ca7b0(lVar3);
        FUN_00438870(lVar3,0x28);
      }
    }
  }
  return;
}

