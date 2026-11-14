
uint FUN_01cf39b8(long param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_50 = param_2;
  uStack_48 = param_3;
  uVar1 = (*(code *)*DAT_05363128)(&DAT_05363128,&local_50);
  uVar2 = (*(code *)*DAT_053631d8)(&DAT_053631d8,&local_50);
  uVar3 = (*(code *)*DAT_05363288)(&DAT_05363288,&local_50);
  uVar4 = (*(code *)*DAT_05363338)(&DAT_05363338,&local_50);
  uVar5 = (*(code *)*DAT_053633e8)(&DAT_053633e8,&local_50);
  uVar6 = (*(code *)*DAT_05363498)(&DAT_05363498,&local_50);
  uVar7 = (*(code *)*DAT_05363548)(&DAT_05363548,&local_50);
  uVar8 = (*(code *)*DAT_053635f8)(&DAT_053635f8,&local_50);
  uVar9 = (*(code *)*DAT_053636a8)(&DAT_053636a8,&local_50);
  uVar10 = (*(code *)*DAT_05363758)(&DAT_05363758,&local_50);
  uVar11 = (*(code *)*DAT_05363808)(&DAT_05363808,&local_50);
  uVar12 = (*(code *)*DAT_053638b8)(&DAT_053638b8,&local_50);
  return (uVar10 | uVar11 | uVar12 |
         uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9) & 1;
}

