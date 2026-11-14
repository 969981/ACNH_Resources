
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01cb6fb0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  long lStack_48;
  
  uVar2 = (*(code *)*DAT_0535b4b0)(&DAT_0535b4b0);
  uVar3 = (*(code *)*DAT_0535b560)(&DAT_0535b560,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar4 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar4 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar4 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    lStack_48 = param_1[1];
    local_50 = &PTR_LAB_048f9770;
    local_60 = param_2;
    uStack_58 = param_3;
    uVar4 = (*(code *)*DAT_0535b4b0)(&DAT_0535b4b0,param_2);
    if (((uVar4 & 1) == 0) &&
       (uVar4 = (*(code *)*DAT_0535b470)(&DAT_0535b470,&local_60), (uVar4 & 1) == 0)) {
      return 0;
    }
    uVar4 = (*(code *)*DAT_0535b560)(&DAT_0535b560,param_2);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    uVar4 = (*(code *)*DAT_0535b520)(&DAT_0535b520,&local_60);
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  return 1;
}

