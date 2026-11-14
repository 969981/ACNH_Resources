
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01cb2524(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_0535a1e0)(&DAT_0535a1e0);
  uVar3 = (*(code *)*DAT_0535a290)(&DAT_0535a290,param_2);
  uVar4 = (*(code *)*DAT_0535a340)(&DAT_0535a340,param_2);
  uVar5 = (*(code *)*DAT_0535a3f0)(&DAT_0535a3f0,param_2);
  uVar6 = (*(code *)*DAT_0535a4a0)(&DAT_0535a4a0,param_2);
  uVar7 = (*(code *)*DAT_0535a550)(&DAT_0535a550,param_2);
  uVar8 = (*(code *)*DAT_0535a600)(&DAT_0535a600,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar9 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    uVar9 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar9 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar9 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar9 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar9 = (*(code *)*DAT_0535a1e0)(&DAT_0535a1e0,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a1a0)(&DAT_0535a1a0,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a290)(&DAT_0535a290,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a250)(&DAT_0535a250,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a340)(&DAT_0535a340,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a300)(&DAT_0535a300,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a3f0)(&DAT_0535a3f0,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a3b0)(&DAT_0535a3b0,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a4a0)(&DAT_0535a4a0,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a460)(&DAT_0535a460,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a550)(&DAT_0535a550,param_2);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = (*(code *)*DAT_0535a510)(&DAT_0535a510,&local_70), (uVar9 & 1) == 0)) {
      return 0;
    }
    uVar9 = (*(code *)*DAT_0535a600)(&DAT_0535a600,param_2);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
    uVar9 = (*(code *)*DAT_0535a5c0)(&DAT_0535a5c0,&local_70);
  }
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  return 1;
}

