
void FUN_004c88b0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  uVar1 = FUN_00428440(param_2);
  switch(uVar1 & 0x1f) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
    break;
  case 3:
    param_2 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x38,0);
    FUN_00453fd0(param_2,8,8,*(undefined8 *)(param_1 + 0x18),"const char*",0,0);
    if (param_3 == (undefined8 *)0x0) {
      return;
    }
    goto LAB_004c8900;
  case 6:
    FUN_004c9de0(param_1,param_2,param_3);
    return;
  case 7:
    FUN_004c9fd0(param_1,param_2,param_3);
    return;
  case 8:
    FUN_004ca0f0(param_1,param_2,param_3);
    return;
  default:
    local_38 = 0;
    local_48 = 0;
    puStack_40 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_48);
  }
  if (param_3 != (undefined8 *)0x0) {
LAB_004c8900:
    *param_3 = param_2;
  }
  return;
}

