
undefined8 FUN_01d2ec20(long *param_1,undefined8 param_2,undefined8 param_3)

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
  uint uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  uVar2 = (*(code *)*DAT_0536aae0)(&DAT_0536aae0);
  uVar3 = (*(code *)*DAT_0536ab90)(&DAT_0536ab90,param_2);
  uVar4 = (*(code *)*DAT_0536ac40)(&DAT_0536ac40,param_2);
  uVar5 = (*(code *)*DAT_0536acf0)(&DAT_0536acf0,param_2);
  uVar6 = (*(code *)*DAT_0536ada0)(&DAT_0536ada0,param_2);
  uVar7 = (*(code *)*DAT_0536ae50)(&DAT_0536ae50,param_2);
  uVar8 = (*(code *)*DAT_0536af00)(&DAT_0536af00,param_2);
  uVar9 = (*(code *)*DAT_0536afb0)(&DAT_0536afb0,param_2);
  uVar10 = (*(code *)*DAT_0536b060)(&DAT_0536b060,param_2);
  uVar11 = (*(code *)*DAT_0536b110)(&DAT_0536b110,param_2);
  uVar12 = (*(code *)*DAT_0536b1c0)(&DAT_0536b1c0,param_2);
  uVar13 = (*(code *)*DAT_0536b270)(&DAT_0536b270,param_2);
  uVar14 = (*(code *)*DAT_0536b320)(&DAT_0536b320,param_2);
  uVar15 = (*(code *)*DAT_0536b3d0)(&DAT_0536b3d0,param_2);
  uVar16 = (*(code *)*DAT_0536b480)(&DAT_0536b480,param_2);
  uVar17 = (*(code *)*DAT_0536b530)(&DAT_0536b530,param_2);
  uVar18 = (*(code *)*DAT_0536b5e0)(&DAT_0536b5e0,param_2);
  uVar19 = (*(code *)*DAT_0536b690)(&DAT_0536b690,param_2);
  uVar20 = (*(code *)*DAT_0536b740)(&DAT_0536b740,param_2);
  uVar21 = (*(code *)*DAT_0536b7f0)(&DAT_0536b7f0,param_2);
  uVar22 = (*(code *)*DAT_0536b8a0)(&DAT_0536b8a0,param_2);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
          ((uVar13 ^ 0xffffffff) & 1) +
          ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1) + ((uVar16 ^ 0xffffffff) & 1) +
          ((uVar17 ^ 0xffffffff) & 1) + ((uVar18 ^ 0xffffffff) & 1) +
          ((uVar19 ^ 0xffffffff) & 1) + ((uVar20 ^ 0xffffffff) & 1) + ((uVar21 ^ 0xffffffff) & 1) +
          ((uVar22 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar23 = FUN_0069b1d4(param_3,"_DummyMap",1);
    if (((uVar23 & 1) != 0) &&
       (uVar23 = FUN_0069bad0(param_3,"_DummyKey","_DummyValue"), (uVar23 & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (*(char *)param_1[1] == '\0') {
      uVar23 = FUN_0069aa8c(param_3,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x18))(param_1);
      uVar23 = FUN_0069b1d4(param_3,param_1[1],iVar1);
    }
    if ((uVar23 & 1) != 0) {
      lVar24 = 0;
      lStack_58 = param_1[1];
      local_60 = PTR_DAT_04bb2020 + 0x10;
      local_70 = param_2;
      uStack_68 = param_3;
      while ((uVar23 = (*(code *)**(undefined8 **)((long)&DAT_0536aae0 + lVar24))
                                 ((undefined8 *)((long)&DAT_0536aae0 + lVar24),param_2),
             (uVar23 & 1) != 0 ||
             (uVar23 = (*(code *)**(undefined8 **)((long)&DAT_0536aaa0 + lVar24))
                                 ((undefined8 *)((long)&DAT_0536aaa0 + lVar24),&local_70),
             (uVar23 & 1) != 0))) {
        lVar24 = lVar24 + 0xb0;
        if (lVar24 == 0xe70) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

