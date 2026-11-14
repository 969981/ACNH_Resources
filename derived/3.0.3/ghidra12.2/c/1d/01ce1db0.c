
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01ce1db0(long *param_1,undefined8 param_2,undefined8 param_3)

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
  
  uVar2 = (*(code *)*DAT_05360c18)(&DAT_05360c18);
  uVar3 = (*(code *)*DAT_05360cc8)(&DAT_05360cc8,param_2);
  uVar4 = (*(code *)*DAT_05360d78)(&DAT_05360d78,param_2);
  uVar5 = (*(code *)*DAT_05360e28)(&DAT_05360e28,param_2);
  uVar6 = (*(code *)*DAT_05360ed8)(&DAT_05360ed8,param_2);
  uVar7 = (*(code *)*DAT_05360f88)(&DAT_05360f88,param_2);
  uVar8 = (*(code *)*DAT_05361038)(&DAT_05361038,param_2);
  uVar9 = (*(code *)*DAT_053610e8)(&DAT_053610e8,param_2);
  uVar10 = (*(code *)*DAT_05361198)(&DAT_05361198,param_2);
  uVar11 = (*(code *)*DAT_05361248)(&DAT_05361248,param_2);
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
    uVar12 = (*(code *)*DAT_05360c18)(&DAT_05360c18,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360bd8)(&DAT_05360bd8,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05360cc8)(&DAT_05360cc8,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360c88)(&DAT_05360c88,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05360d78)(&DAT_05360d78,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360d38)(&DAT_05360d38,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05360e28)(&DAT_05360e28,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360de8)(&DAT_05360de8,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05360ed8)(&DAT_05360ed8,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360e98)(&DAT_05360e98,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05360f88)(&DAT_05360f88,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360f48)(&DAT_05360f48,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05361038)(&DAT_05361038,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05360ff8)(&DAT_05360ff8,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_053610e8)(&DAT_053610e8,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_053610a8)(&DAT_053610a8,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05361198)(&DAT_05361198,param_2);
    if (((uVar12 & 1) == 0) &&
       (uVar12 = (*(code *)*DAT_05361158)(&DAT_05361158,&local_70), (uVar12 & 1) == 0)) {
      return 0;
    }
    uVar12 = (*(code *)*DAT_05361248)(&DAT_05361248,param_2);
    if ((uVar12 & 1) != 0) {
      return 1;
    }
    uVar12 = (*(code *)*DAT_05361208)(&DAT_05361208,&local_70);
  }
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  return 1;
}

