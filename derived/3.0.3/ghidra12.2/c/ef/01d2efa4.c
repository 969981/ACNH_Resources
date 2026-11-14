
uint FUN_01d2efa4(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_50 = param_2;
  uStack_48 = param_3;
  uVar1 = (*(code *)*DAT_0536aac0)(&DAT_0536aac0,&local_50);
  uVar2 = (*(code *)*DAT_0536ab70)(&DAT_0536ab70,&local_50);
  uVar3 = (*(code *)*DAT_0536ac20)(&DAT_0536ac20,&local_50);
  uVar4 = (*(code *)*DAT_0536acd0)(&DAT_0536acd0,&local_50);
  uVar5 = (*(code *)*DAT_0536ad80)(&DAT_0536ad80,&local_50);
  uVar6 = (*(code *)*DAT_0536ae30)(&DAT_0536ae30,&local_50);
  uVar7 = (*(code *)*DAT_0536aee0)(&DAT_0536aee0,&local_50);
  uVar8 = (*(code *)*DAT_0536af90)(&DAT_0536af90,&local_50);
  uVar9 = (*(code *)*DAT_0536b040)(&DAT_0536b040,&local_50);
  uVar10 = (*(code *)*DAT_0536b0f0)(&DAT_0536b0f0,&local_50);
  uVar11 = (*(code *)*DAT_0536b1a0)(&DAT_0536b1a0,&local_50);
  uVar12 = (*(code *)*DAT_0536b250)(&DAT_0536b250,&local_50);
  uVar13 = (*(code *)*DAT_0536b300)(&DAT_0536b300,&local_50);
  uVar14 = (*(code *)*DAT_0536b3b0)(&DAT_0536b3b0,&local_50);
  uVar15 = (*(code *)*DAT_0536b460)(&DAT_0536b460,&local_50);
  uVar16 = (*(code *)*DAT_0536b510)(&DAT_0536b510,&local_50);
  uVar17 = (*(code *)*DAT_0536b5c0)(&DAT_0536b5c0,&local_50);
  uVar18 = (*(code *)*DAT_0536b670)(&DAT_0536b670,&local_50);
  uVar19 = (*(code *)*DAT_0536b720)(&DAT_0536b720,&local_50);
  uVar20 = (*(code *)*DAT_0536b7d0)(&DAT_0536b7d0,&local_50);
  uVar21 = (*(code *)*DAT_0536b880)(&DAT_0536b880,&local_50);
  return (uVar19 | uVar20 | uVar21 |
          uVar10 | uVar11 | uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 |
         uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9) & 1;
}

