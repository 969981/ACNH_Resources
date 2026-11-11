
void FUN_0045c490(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_28;
  
  local_40 = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                    ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_40);
  if (iVar1 < 0) {
    if (DAT_04c70110 < 2) goto LAB_0045c5c4;
    FUN_00444bc0(&local_80,&DAT_04c700c0,2);
    lVar2 = FUN_004446b0(&local_80,"Failed to get value from Var \'{}\'",&DAT_04862dc8,param_2);
    uVar3 = 0x1ee;
  }
  else {
    uStack_78 = CONCAT71(uStack_37,local_38);
    local_80 = local_40;
    iVar1 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],&local_80);
    if (-1 < iVar1) {
      return;
    }
    if (DAT_04c70110 < 2) goto LAB_0045c5c4;
    FUN_00444bc0(&local_80,&DAT_04c700c0,2);
    local_28 = param_2[1];
    local_88 = param_3[1];
    lVar2 = FUN_004446b0(&local_80,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                         &DAT_04862dd8,param_2,&local_28,&local_88);
    uVar3 = 499;
  }
  *(char **)(lVar2 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
  ;
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_00444c00(&local_80);
LAB_0045c5c4:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}

