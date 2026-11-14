
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01cf34e0(long *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar13;
  ulong uVar14;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_05363148)(&DAT_05363148);
  uVar3 = (*(code *)*DAT_053631f8)(&DAT_053631f8,param_2);
  uVar4 = (*(code *)*DAT_053632a8)(&DAT_053632a8,param_2);
  uVar5 = (*(code *)*DAT_05363358)(&DAT_05363358,param_2);
  uVar6 = (*(code *)*DAT_05363408)(&DAT_05363408,param_2);
  uVar7 = (*(code *)*DAT_053634b8)(&DAT_053634b8,param_2);
  uVar8 = (*(code *)*DAT_05363568)(&DAT_05363568,param_2);
  uVar9 = (*(code *)*DAT_05363618)(&DAT_05363618,param_2);
  uVar10 = (*(code *)*DAT_053636c8)(&DAT_053636c8,param_2);
  uVar11 = (*(code *)*DAT_05363778)(&DAT_05363778,param_2);
  uVar12 = (*(code *)*DAT_05363828)(&DAT_05363828,param_2);
  uVar13 = (*(code *)*DAT_053638d8)(&DAT_053638d8,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
          ((uVar13 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar14 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    uVar14 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar14 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar14 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar14 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar14 = (*(code *)*DAT_05363148)(&DAT_05363148,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363108)(&DAT_05363108,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_053631f8)(&DAT_053631f8,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_053631b8)(&DAT_053631b8,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_053632a8)(&DAT_053632a8,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363268)(&DAT_05363268,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363358)(&DAT_05363358,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363318)(&DAT_05363318,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363408)(&DAT_05363408,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_053633c8)(&DAT_053633c8,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_053634b8)(&DAT_053634b8,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363478)(&DAT_05363478,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363568)(&DAT_05363568,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363528)(&DAT_05363528,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363618)(&DAT_05363618,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_053635d8)(&DAT_053635d8,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_053636c8)(&DAT_053636c8,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363688)(&DAT_05363688,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363778)(&DAT_05363778,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_05363738)(&DAT_05363738,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_05363828)(&DAT_05363828,param_2);
    if (((uVar14 & 1) == 0) &&
       (uVar14 = (*(code *)*DAT_053637e8)(&DAT_053637e8,&local_70), (uVar14 & 1) == 0)) {
      return 0;
    }
    uVar14 = (*(code *)*DAT_053638d8)(&DAT_053638d8,param_2);
    if ((uVar14 & 1) != 0) {
      return 1;
    }
    uVar14 = (*(code *)*DAT_05363898)(&DAT_05363898,&local_70);
  }
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  return 1;
}

