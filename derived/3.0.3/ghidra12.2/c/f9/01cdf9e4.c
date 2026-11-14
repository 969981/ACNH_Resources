
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01cdf9e4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_0535fd98)(&DAT_0535fd98);
  uVar3 = (*(code *)*DAT_0535fe48)(&DAT_0535fe48,param_2);
  uVar4 = (*(code *)*DAT_0535fef8)(&DAT_0535fef8,param_2);
  uVar5 = (*(code *)*DAT_0535ffa8)(&DAT_0535ffa8,param_2);
  uVar6 = (*(code *)*DAT_05360058)(&DAT_05360058,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar7 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    uVar7 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar7 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar7 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar7 = (*(code *)*DAT_0535fd98)(&DAT_0535fd98,param_2);
    if (((uVar7 & 1) == 0) &&
       (uVar7 = (*(code *)*DAT_0535fd58)(&DAT_0535fd58,&local_70), (uVar7 & 1) == 0)) {
      return 0;
    }
    uVar7 = (*(code *)*DAT_0535fe48)(&DAT_0535fe48,param_2);
    if (((uVar7 & 1) == 0) &&
       (uVar7 = (*(code *)*DAT_0535fe08)(&DAT_0535fe08,&local_70), (uVar7 & 1) == 0)) {
      return 0;
    }
    uVar7 = (*(code *)*DAT_0535fef8)(&DAT_0535fef8,param_2);
    if (((uVar7 & 1) == 0) &&
       (uVar7 = (*(code *)*DAT_0535feb8)(&DAT_0535feb8,&local_70), (uVar7 & 1) == 0)) {
      return 0;
    }
    uVar7 = (*(code *)*DAT_0535ffa8)(&DAT_0535ffa8,param_2);
    if (((uVar7 & 1) == 0) &&
       (uVar7 = (*(code *)*DAT_0535ff68)(&DAT_0535ff68,&local_70), (uVar7 & 1) == 0)) {
      return 0;
    }
    uVar7 = (*(code *)*DAT_05360058)(&DAT_05360058,param_2);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    uVar7 = (*(code *)*DAT_05360018)(&DAT_05360018,&local_70);
  }
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  return 1;
}

