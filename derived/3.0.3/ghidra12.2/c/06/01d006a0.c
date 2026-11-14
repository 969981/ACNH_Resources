
undefined8 FUN_01d006a0(undefined8 param_1,undefined8 param_2)

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
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  uVar2 = (*(code *)*DAT_053642c0)(&DAT_053642c0,param_1);
  uVar3 = (*(code *)*DAT_05364370)(&DAT_05364370,param_1);
  uVar4 = (*(code *)*DAT_05364420)(&DAT_05364420,param_1);
  uVar5 = (*(code *)*DAT_053644d0)(&DAT_053644d0,param_1);
  uVar6 = (*(code *)*DAT_05364580)(&DAT_05364580,param_1);
  uVar7 = (*(code *)*DAT_05364630)(&DAT_05364630,param_1);
  uVar8 = (*(code *)*DAT_053646e0)(&DAT_053646e0,param_1);
  uVar9 = (*(code *)*DAT_05364790)(&DAT_05364790,param_1);
  uVar10 = (*(code *)*DAT_05364840)(&DAT_05364840,param_1);
  uVar11 = (*(code *)*DAT_053648f0)(&DAT_053648f0,param_1);
  uVar12 = (*(code *)*DAT_053649a0)(&DAT_053649a0,param_1);
  uVar13 = (*(code *)*DAT_05364a50)(&DAT_05364a50,param_1);
  uVar14 = (*(code *)*DAT_05364b00)(&DAT_05364b00,param_1);
  uVar15 = (*(code *)*DAT_05364bb0)(&DAT_05364bb0,param_1);
  uVar16 = (*(code *)*DAT_05364c60)(&DAT_05364c60,param_1);
  uVar17 = (*(code *)*DAT_05364d10)(&DAT_05364d10,param_1);
  uVar18 = (*(code *)*DAT_05364dc0)(&DAT_05364dc0,param_1);
  uVar19 = (*(code *)*DAT_05364e70)(&DAT_05364e70,param_1);
  uVar20 = (*(code *)*DAT_05364f20)(&DAT_05364f20,param_1);
  uVar21 = (*(code *)*DAT_05364fd0)(&DAT_05364fd0,param_1);
  uVar22 = (*(code *)*DAT_05365080)(&DAT_05365080,param_1);
  uVar23 = (*(code *)*DAT_05365130)(&DAT_05365130,param_1);
  uVar24 = (*(code *)*DAT_053651e0)(&DAT_053651e0,param_1);
  iVar1 = ((uVar3 ^ 0xffffffff) & 1) + ((uVar2 ^ 0xffffffff) & 1) + ((uVar4 ^ 0xffffffff) & 1) +
          ((uVar5 ^ 0xffffffff) & 1) + ((uVar6 ^ 0xffffffff) & 1) +
          ((uVar7 ^ 0xffffffff) & 1) + ((uVar8 ^ 0xffffffff) & 1) + ((uVar9 ^ 0xffffffff) & 1) +
          ((uVar10 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
          ((uVar13 ^ 0xffffffff) & 1) +
          ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1) + ((uVar16 ^ 0xffffffff) & 1) +
          ((uVar17 ^ 0xffffffff) & 1) + ((uVar18 ^ 0xffffffff) & 1) +
          ((uVar19 ^ 0xffffffff) & 1) + ((uVar20 ^ 0xffffffff) & 1) + ((uVar21 ^ 0xffffffff) & 1) +
          ((uVar22 ^ 0xffffffff) & 1) + ((uVar23 ^ 0xffffffff) & 1) + ((uVar24 ^ 0xffffffff) & 1);
  if (iVar1 == 0) {
    uVar25 = FUN_0069b1d4(param_2,"_DummyMap",1);
    if (((uVar25 & 1) != 0) &&
       (uVar25 = FUN_0069bad0(param_2,"_DummyKey","_DummyValue"), (uVar25 & 1) != 0)) {
      return 1;
    }
  }
  else {
    if (*PTR_DAT_04c4b988 == '\0') {
      uVar25 = FUN_0069aa8c(param_2,iVar1);
    }
    else {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      uVar25 = FUN_0069b1d4(param_2,PTR_DAT_04c4b988,iVar1);
    }
    if ((uVar25 & 1) != 0) {
      lVar26 = 0;
      local_50 = PTR_DAT_04bb2020 + 0x10;
      local_60 = param_1;
      uStack_58 = param_2;
      puStack_48 = PTR_DAT_04c4b988;
      while ((uVar25 = (*(code *)**(undefined8 **)((long)&DAT_053642c0 + lVar26))
                                 ((undefined8 *)((long)&DAT_053642c0 + lVar26),param_1),
             (uVar25 & 1) != 0 ||
             (uVar25 = (*(code *)**(undefined8 **)((long)&DAT_05364280 + lVar26))
                                 ((undefined8 *)((long)&DAT_05364280 + lVar26),&local_60),
             (uVar25 & 1) != 0))) {
        lVar26 = lVar26 + 0xb0;
        if (lVar26 == 0xfd0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 0;
}

