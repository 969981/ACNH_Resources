
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d18fec(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_05368d40)(&DAT_05368d40);
  uVar3 = (*(code *)*DAT_05368df0)(&DAT_05368df0,param_2);
  uVar4 = (*(code *)*DAT_05368ea0)(&DAT_05368ea0,param_2);
  uVar5 = (*(code *)*DAT_05368f50)(&DAT_05368f50,param_2);
  uVar6 = (*(code *)*DAT_05369000)(&DAT_05369000,param_2);
  uVar7 = (*(code *)*DAT_053690b0)(&DAT_053690b0,param_2);
  uVar8 = (*(code *)*DAT_05369160)(&DAT_05369160,param_2);
  uVar9 = (*(code *)*DAT_05369210)(&DAT_05369210,param_2);
  uVar10 = (*(code *)*DAT_053692c0)(&DAT_053692c0,param_2);
  uVar11 = (*(code *)*DAT_05369370)(&DAT_05369370,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar12 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    uVar12 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar12 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar12 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar12 = (*(code *)*DAT_05368d40)(&DAT_05368d40,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05368d00)(&DAT_05368d00,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05368df0)(&DAT_05368df0,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05368db0)(&DAT_05368db0,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05368ea0)(&DAT_05368ea0,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05368e60)(&DAT_05368e60,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05368f50)(&DAT_05368f50,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05368f10)(&DAT_05368f10,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05369000)(&DAT_05369000,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05368fc0)(&DAT_05368fc0,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_053690b0)(&DAT_053690b0,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05369070)(&DAT_05369070,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05369160)(&DAT_05369160,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05369120)(&DAT_05369120,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05369210)(&DAT_05369210,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_053691d0)(&DAT_053691d0,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_053692c0)(&DAT_053692c0,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05369280)(&DAT_05369280,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05369370)(&DAT_05369370,param_2);
    if ((uVar12 & 1) != 0) {
      return 1;
    }
    uVar12 = (*(code *)*DAT_05369330)(&DAT_05369330,&local_70);
  }
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  return 1;
}

