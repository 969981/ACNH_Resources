
uint FUN_01d00a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
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
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(param_1 + 8);
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_60 = param_2;
  uStack_58 = param_3;
  uVar1 = (*(code *)*DAT_053642a0)(&DAT_053642a0,&local_60);
  uVar2 = (*(code *)*DAT_05364350)(&DAT_05364350,&local_60);
  uVar3 = (*(code *)*DAT_05364400)(&DAT_05364400,&local_60);
  uVar4 = (*(code *)*DAT_053644b0)(&DAT_053644b0,&local_60);
  uVar5 = (*(code *)*DAT_05364560)(&DAT_05364560,&local_60);
  uVar6 = (*(code *)*DAT_05364610)(&DAT_05364610,&local_60);
  uVar7 = (*(code *)*DAT_053646c0)(&DAT_053646c0,&local_60);
  uVar8 = (*(code *)*DAT_05364770)(&DAT_05364770,&local_60);
  uVar9 = (*(code *)*DAT_05364820)(&DAT_05364820,&local_60);
  uVar10 = (*(code *)*DAT_053648d0)(&DAT_053648d0,&local_60);
  uVar11 = (*(code *)*DAT_05364980)(&DAT_05364980,&local_60);
  uVar12 = (*(code *)*DAT_05364a30)(&DAT_05364a30,&local_60);
  uVar13 = (*(code *)*DAT_05364ae0)(&DAT_05364ae0,&local_60);
  uVar14 = (*(code *)*DAT_05364b90)(&DAT_05364b90,&local_60);
  uVar15 = (*(code *)*DAT_05364c40)(&DAT_05364c40,&local_60);
  uVar16 = (*(code *)*DAT_05364cf0)(&DAT_05364cf0,&local_60);
  uVar17 = (*(code *)*DAT_05364da0)(&DAT_05364da0,&local_60);
  uVar18 = (*(code *)*DAT_05364e50)(&DAT_05364e50,&local_60);
  uVar19 = (*(code *)*DAT_05364f00)(&DAT_05364f00,&local_60);
  uVar20 = (*(code *)*DAT_05364fb0)(&DAT_05364fb0,&local_60);
  uVar21 = (*(code *)*DAT_05365060)(&DAT_05365060,&local_60);
  uVar22 = (*(code *)*DAT_05365110)(&DAT_05365110,&local_60);
  uVar23 = (*(code *)*DAT_053651c0)(&DAT_053651c0,&local_60);
  return (uVar19 | uVar20 | uVar21 | uVar22 | uVar23 |
          uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 |
         uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9) & 1;
}

