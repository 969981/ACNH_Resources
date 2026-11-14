
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01ce3918(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_05362428)(&DAT_05362428);
  uVar3 = (*(code *)*DAT_053624d8)(&DAT_053624d8,param_2);
  uVar4 = (*(code *)*DAT_05362588)(&DAT_05362588,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar5 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    uVar5 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar5 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar5 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar5 = (*(code *)*DAT_05362428)(&DAT_05362428,param_2);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = (*(code *)*DAT_053623e8)(&DAT_053623e8,&local_70), (uVar5 & 1) == 0)) {
      return 0;
    }
    uVar5 = (*(code *)*DAT_053624d8)(&DAT_053624d8,param_2);
    if (((uVar5 & 1) == 0) &&
       (uVar5 = (*(code *)*DAT_05362498)(&DAT_05362498,&local_70), (uVar5 & 1) == 0)) {
      return 0;
    }
    uVar5 = (*(code *)*DAT_05362588)(&DAT_05362588,param_2);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    uVar5 = (*(code *)*DAT_05362548)(&DAT_05362548,&local_70);
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  return 1;
}

