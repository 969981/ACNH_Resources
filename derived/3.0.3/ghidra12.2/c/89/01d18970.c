
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01d18970(long *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined **local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_05367c10)(&DAT_05367c10);
  uVar3 = (*(code *)*DAT_05367cc0)(&DAT_05367cc0,param_2);
  uVar4 = (*(code *)*DAT_05367d70)(&DAT_05367d70,param_2);
  uVar5 = (*(code *)*DAT_05367e20)(&DAT_05367e20,param_2);
  uVar6 = (*(code *)*DAT_05367ed0)(&DAT_05367ed0,param_2);
  uVar7 = (*(code *)*DAT_05367f80)(&DAT_05367f80,param_2);
  uVar8 = (*(code *)*DAT_05368030)(&DAT_05368030,param_2);
  uVar9 = (*(code *)*DAT_053680e0)(&DAT_053680e0,param_2);
  uVar10 = (*(code *)*DAT_05368190)(&DAT_05368190,param_2);
  uVar11 = (*(code *)*DAT_05368240)(&DAT_05368240,param_2);
  uVar12 = (*(code *)*DAT_053682f0)(&DAT_053682f0,param_2);
  uVar13 = (*(code *)*DAT_053683a0)(&DAT_053683a0,param_2);
  uVar14 = (*(code *)*DAT_05368450)(&DAT_05368450,param_2);
  uVar15 = (*(code *)*DAT_05368500)(&DAT_05368500,param_2);
  uVar16 = (*(code *)*DAT_053685b0)(&DAT_053685b0,param_2);
  uVar17 = (*(code *)*DAT_05368660)(&DAT_05368660,param_2);
  uVar18 = (*(code *)*DAT_05368710)(&DAT_05368710,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
          ((uVar13 ^ 0xffffffff) & 1) +
          ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1) + ((uVar16 ^ 0xffffffff) & 1) +
          ((uVar17 ^ 0xffffffff) & 1) + ((uVar18 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar19 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    uVar19 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue");
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar19 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar19 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar19 & 1) == 0) {
      return 0;
    }
    lStack_58 = param_1[1];
    local_60 = &PTR_LAB_048f9770;
    local_70 = param_2;
    uStack_68 = param_3;
    uVar19 = (*(code *)*DAT_05367c10)(&DAT_05367c10,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367bd0)(&DAT_05367bd0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05367cc0)(&DAT_05367cc0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367c80)(&DAT_05367c80,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05367d70)(&DAT_05367d70,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367d30)(&DAT_05367d30,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05367e20)(&DAT_05367e20,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367de0)(&DAT_05367de0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05367ed0)(&DAT_05367ed0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367e90)(&DAT_05367e90,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05367f80)(&DAT_05367f80,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367f40)(&DAT_05367f40,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368030)(&DAT_05368030,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05367ff0)(&DAT_05367ff0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_053680e0)(&DAT_053680e0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_053680a0)(&DAT_053680a0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368190)(&DAT_05368190,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368150)(&DAT_05368150,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368240)(&DAT_05368240,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368200)(&DAT_05368200,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_053682f0)(&DAT_053682f0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_053682b0)(&DAT_053682b0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_053683a0)(&DAT_053683a0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368360)(&DAT_05368360,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368450)(&DAT_05368450,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368410)(&DAT_05368410,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368500)(&DAT_05368500,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_053684c0)(&DAT_053684c0,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_053685b0)(&DAT_053685b0,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368570)(&DAT_05368570,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368660)(&DAT_05368660,param_2);
    if (((uVar19 & 1) == 0) &&
       (uVar19 = (*(code *)*DAT_05368620)(&DAT_05368620,&local_70), (uVar19 & 1) == 0)) {
      return 0;
    }
    uVar19 = (*(code *)*DAT_05368710)(&DAT_05368710,param_2);
    if ((uVar19 & 1) != 0) {
      return 1;
    }
    uVar19 = (*(code *)*DAT_053686d0)(&DAT_053686d0,&local_70);
  }
  if ((uVar19 & 1) == 0) {
    return 0;
  }
  return 1;
}

