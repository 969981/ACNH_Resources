
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01cb7138(long *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  long lStack_48;
  
  uVar1 = (*(code *)*DAT_0535b610)(&DAT_0535b610);
  if ((uVar1 & 1) == 0) {
    if (*(char *)param_1[1] == '\0') {
      uVar2 = FUN_0069aa8c(param_3,(uVar1 ^ 1) & 1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar2 = FUN_0069b1d4(param_3,param_1[1],(uVar1 ^ 1) & 1);
    }
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lStack_48 = param_1[1];
    local_50 = &PTR_LAB_048f9770;
    local_60 = param_2;
    uStack_58 = param_3;
    uVar2 = (*(code *)*DAT_0535b610)(&DAT_0535b610,param_2);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
    uVar2 = (*(code *)*DAT_0535b5d0)(&DAT_0535b5d0,&local_60);
  }
  else {
    uVar2 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  return 1;
}

