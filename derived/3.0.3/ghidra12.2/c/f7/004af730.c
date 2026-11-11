
void FUN_004af730(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  uVar5 = FUN_00428440();
  uVar7 = (uint)param_2;
  switch(uVar5 & 0x1f) {
  case 1:
    pcVar6 = "incomplete";
    break;
  case 2:
    pcVar6 = "unsigned";
    if ((param_2 & 0x200) != 0) {
      pcVar6 = "signed";
    }
    puVar3 = &DAT_040b9657;
    if ((param_2 & 0x100) != 0) {
      puVar3 = &DAT_040f2d56;
    }
    FUN_00422d90(param_3,"bool%d (%s, %s)",param_2 >> 10 & 0x3fffff,pcVar6,puVar3);
    return;
  case 3:
    pcVar6 = "ptr";
    if ((param_2 & 0x20) != 0 && 0xffff < uVar7) {
      pcVar6 = "buffer";
    }
    FUN_00422d90(param_3,"string (%s)",pcVar6);
    return;
  case 4:
    puVar1 = (undefined8 *)&DAT_040f7ef1;
    if ((param_2 & 0x200) != 0) {
      puVar1 = &DAT_0407ebb1;
    }
    puVar3 = &DAT_040b9657;
    if ((param_2 & 0x100) != 0) {
      puVar3 = &DAT_040f2d56;
    }
    FUN_00422d90(param_3,"%sint%d (%s)",puVar1,param_2 >> 10 & 0x3fffff,puVar3);
    return;
  case 5:
    if (uVar7 == 0x345e05) {
      pcVar6 = "double";
    }
    else {
      if (uVar7 != 0x174605) {
        uVar5 = uVar7 >> 0xb & 0x1f;
        uVar4 = uVar7 >> 0x10 & 0xff;
        pcVar6 = "";
        if ((param_2 & 0x200) != 0) {
          pcVar6 = "sign bit";
        }
        pcVar2 = "";
        if ((param_2 & 0x400) != 0) {
          pcVar2 = ", implicit one";
        }
        puVar3 = &DAT_040b9657;
        if ((param_2 & 0x100) != 0) {
          puVar3 = &DAT_040f2d56;
        }
        FUN_00422d90(param_3,"fp %d bits (%s, %d exp, %d significand %s, %s)",
                     (uVar7 >> 10 & 1) + uVar5 + uVar4 + 7 >> 3,pcVar6,uVar5,uVar4,pcVar2,puVar3);
        return;
      }
      pcVar6 = "float";
    }
    break;
  case 6:
    pcVar6 = "pointer";
    break;
  case 7:
    pcVar6 = "record";
    break;
  case 8:
    FUN_00422d90(param_3,"array");
    if ((param_2 & 0xffffff00) != 0) {
      FUN_00423010(param_3,&DAT_040fd501);
    }
    return;
  default:
    local_28 = 0;
    local_38 = 0;
    puStack_30 = &DAT_0413df78;
    FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,"Bad type visitor switch",&local_38);
  case 0:
    pcVar6 = "void";
  }
  FUN_004225f0(param_3,pcVar6,0xffffffff);
  return;
}

