
undefined8 FUN_01cd4210(long *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_0535e6d8)(&DAT_0535e6d8);
  uVar3 = (*(code *)*DAT_0535e788)(&DAT_0535e788,param_2);
  uVar4 = (*(code *)*DAT_0535e838)(&DAT_0535e838,param_2);
  uVar5 = (*(code *)*DAT_0535e8e8)(&DAT_0535e8e8,param_2);
  uVar6 = (*(code *)*DAT_0535e998)(&DAT_0535e998,param_2);
  uVar7 = (*(code *)*DAT_0535ea48)(&DAT_0535ea48,param_2);
  uVar8 = (*(code *)*DAT_0535eaf8)(&DAT_0535eaf8,param_2);
  uVar9 = (*(code *)*DAT_0535eba8)(&DAT_0535eba8,param_2);
  uVar10 = (*(code *)*DAT_0535ec58)(&DAT_0535ec58,param_2);
  uVar11 = (*(code *)*DAT_0535ed08)(&DAT_0535ed08,param_2);
  uVar12 = (*(code *)*DAT_0535edb8)(&DAT_0535edb8,param_2);
  uVar13 = (*(code *)*DAT_0535ee68)(&DAT_0535ee68,param_2);
  uVar14 = (*(code *)*DAT_0535ef18)(&DAT_0535ef18,param_2);
  uVar15 = (*(code *)*DAT_0535efc8)(&DAT_0535efc8,param_2);
  uVar16 = (*(code *)*DAT_0535f078)(&DAT_0535f078,param_2);
  uVar17 = (*(code *)*DAT_0535f128)(&DAT_0535f128,param_2);
  uVar18 = (*(code *)*DAT_0535f1d8)(&DAT_0535f1d8,param_2);
  uVar19 = (*(code *)*DAT_0535f288)(&DAT_0535f288,param_2);
  uVar20 = (*(code *)*DAT_0535f338)(&DAT_0535f338,param_2);
  uVar21 = (*(code *)*DAT_0535f3e8)(&DAT_0535f3e8,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
          ((uVar13 ^ 0xffffffff) & 1) +
          ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1) + ((uVar16 ^ 0xffffffff) & 1) +
          ((uVar17 ^ 0xffffffff) & 1) + ((uVar18 ^ 0xffffffff) & 1) +
          ((uVar19 ^ 0xffffffff) & 1) + ((uVar20 ^ 0xffffffff) & 1) + ((uVar21 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar22 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if (((uVar22 & 1) != 0) &&
       (uVar22 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue"), (uVar22 & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar22 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar22 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar22 & 1) != 0) {
      lVar23 = 0;
      lStack_58 = param_1[1];
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_70 = param_2;
      uStack_68 = param_3;
      while ((uVar22 = (*(code *)**(undefined8 **)((long)&DAT_0535e6d8 + lVar23))
                                 ((undefined8 *)((long)&DAT_0535e6d8 + lVar23),param_2),
             (uVar22 & 1) != 0 ||
             (uVar22 = (*(code *)**(undefined8 **)((long)&DAT_0535e698 + lVar23))
                                 ((undefined8 *)((long)&DAT_0535e698 + lVar23),&local_70),
             (uVar22 & 1) != 0))) {
        lVar23 = lVar23 + 0xb0;
        if (lVar23 == 0xdc0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

