
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d01030(long *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar12;
  ulong uVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_053661b0)(&DAT_053661b0);
  uVar3 = (*(code *)*DAT_05366260)(&DAT_05366260,param_2);
  uVar4 = (*(code *)*DAT_05366310)(&DAT_05366310,param_2);
  uVar5 = (*(code *)*DAT_053663c0)(&DAT_053663c0,param_2);
  uVar6 = (*(code *)*DAT_05366470)(&DAT_05366470,param_2);
  uVar7 = (*(code *)*DAT_05366520)(&DAT_05366520,param_2);
  uVar8 = (*(code *)*DAT_053665d0)(&DAT_053665d0,param_2);
  uVar9 = (*(code *)*DAT_05366680)(&DAT_05366680,param_2);
  uVar10 = (*(code *)*DAT_05366730)(&DAT_05366730,param_2);
  uVar11 = (*(code *)*DAT_053667e0)(&DAT_053667e0,param_2);
  uVar12 = (*(code *)*DAT_05366890)(&DAT_05366890,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar13 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    uVar13 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar13 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar13 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar13 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar13 = (*(code *)*DAT_053661b0)(&DAT_053661b0,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366170)(&DAT_05366170,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366260)(&DAT_05366260,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366220)(&DAT_05366220,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366310)(&DAT_05366310,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_053662d0)(&DAT_053662d0,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_053663c0)(&DAT_053663c0,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366380)(&DAT_05366380,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366470)(&DAT_05366470,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366430)(&DAT_05366430,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366520)(&DAT_05366520,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_053664e0)(&DAT_053664e0,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_053665d0)(&DAT_053665d0,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366590)(&DAT_05366590,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366680)(&DAT_05366680,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_05366640)(&DAT_05366640,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366730)(&DAT_05366730,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_053666f0)(&DAT_053666f0,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_053667e0)(&DAT_053667e0,param_2);
    if (((uVar13 & 1) == 0) &&
       (uVar13 = (*(code *)*DAT_053667a0)(&DAT_053667a0,&local_70), (uVar13 & 1) == 0)) {
      return 0;
    }
    uVar13 = (*(code *)*DAT_05366890)(&DAT_05366890,param_2);
    if ((uVar13 & 1) != 0) {
      return 1;
    }
    uVar13 = (*(code *)*DAT_05366850)(&DAT_05366850,&local_70);
  }
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  return 1;
}

