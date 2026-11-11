
void FUN_0045c620(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [64];
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                    ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_28);
  if (iVar1 < 0) {
    if (DAT_04c70110 < 2) goto LAB_0045c748;
    FUN_00444bc0(auStack_70,&DAT_04c700c0,2);
    lVar2 = FUN_004446b0(auStack_70,"Failed to get value from Var \'{}\'",&DAT_04862e98,param_2);
    uVar3 = 0x1ee;
  }
  else {
    iVar1 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
                      (local_28,(long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1]);
    if (-1 < iVar1) {
      return;
    }
    if (DAT_04c70110 < 2) goto LAB_0045c748;
    FUN_00444bc0(auStack_70,&DAT_04c700c0,2);
    local_78 = param_2[1];
    local_80 = param_3[1];
    lVar2 = FUN_004446b0(auStack_70,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                         &DAT_04862ea8,param_2,&local_78,&local_80);
    uVar3 = 499;
  }
  *(char **)(lVar2 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_00444c00(auStack_70);
LAB_0045c748:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}

