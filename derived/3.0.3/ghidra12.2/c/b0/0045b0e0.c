
void FUN_0045b0e0(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  uVar1 = FUN_00428440(*(undefined8 *)(param_2 + 8));
  switch(uVar1 & 0x1f) {
  case 0:
    break;
  case 1:
    FUN_0045b570(param_1,param_2,param_3);
    return;
  case 2:
    FUN_0045b700(param_1,param_2,param_3);
    return;
  case 3:
    FUN_0045b850(param_1,param_2,param_3);
    return;
  case 4:
    FUN_0045b9a0(param_1,param_2,param_3);
    return;
  case 5:
    FUN_0045baf0(param_1,param_2,param_3);
    return;
  case 6:
    FUN_0045bc40(param_1,param_2,param_3);
    return;
  case 7:
    FUN_0045bd90(param_1,param_2,param_3);
    return;
  case 8:
    FUN_0045bee0(param_1,param_2,param_3);
    return;
  default:
    local_38 = 0;
    local_48 = 0;
    puStack_40 = &DAT_0413df78;
    FUN_004223c0(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3c,"Bad var visitor switch",&local_48);
  }
  FUN_0045b3f0(param_1,param_2,param_3);
  return;
}

