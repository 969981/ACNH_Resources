
uint FUN_01cd4580(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_50 = param_2;
  uStack_48 = param_3;
  uVar1 = (*(code *)*DAT_0535e6b8)(&DAT_0535e6b8,&local_50);
  uVar2 = (*(code *)*DAT_0535e768)(&DAT_0535e768,&local_50);
  uVar3 = (*(code *)*DAT_0535e818)(&DAT_0535e818,&local_50);
  uVar4 = (*(code *)*DAT_0535e8c8)(&DAT_0535e8c8,&local_50);
  uVar5 = (*(code *)*DAT_0535e978)(&DAT_0535e978,&local_50);
  uVar6 = (*(code *)*DAT_0535ea28)(&DAT_0535ea28,&local_50);
  uVar7 = (*(code *)*DAT_0535ead8)(&DAT_0535ead8,&local_50);
  uVar8 = (*(code *)*DAT_0535eb88)(&DAT_0535eb88,&local_50);
  uVar9 = (*(code *)*DAT_0535ec38)(&DAT_0535ec38,&local_50);
  uVar10 = (*(code *)*DAT_0535ece8)(&DAT_0535ece8,&local_50);
  uVar11 = (*(code *)*DAT_0535ed98)(&DAT_0535ed98,&local_50);
  uVar12 = (*(code *)*DAT_0535ee48)(&DAT_0535ee48,&local_50);
  uVar13 = (*(code *)*DAT_0535eef8)(&DAT_0535eef8,&local_50);
  uVar14 = (*(code *)*DAT_0535efa8)(&DAT_0535efa8,&local_50);
  uVar15 = (*(code *)*DAT_0535f058)(&DAT_0535f058,&local_50);
  uVar16 = (*(code *)*DAT_0535f108)(&DAT_0535f108,&local_50);
  uVar17 = (*(code *)*DAT_0535f1b8)(&DAT_0535f1b8,&local_50);
  uVar18 = (*(code *)*DAT_0535f268)(&DAT_0535f268,&local_50);
  uVar19 = (*(code *)*DAT_0535f318)(&DAT_0535f318,&local_50);
  uVar20 = (*(code *)*DAT_0535f3c8)(&DAT_0535f3c8,&local_50);
  return (uVar19 | uVar20 |
          uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 |
         uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9) & 1;
}

