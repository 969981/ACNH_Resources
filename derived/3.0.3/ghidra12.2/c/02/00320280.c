
void FUN_00320280(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04bcee08;
  *(undefined4 *)PTR_DAT_04bcee08 = 0x20;
  *(undefined1 **)(puVar1 + 8) = &DAT_04111df6;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_64 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  FUN_0034fd48(&local_80);
  uStack_6c = 0x20;
  uStack_68 = 0x20;
  local_80._0_2_ = CONCAT11(3,(undefined1)local_80);
  local_64 = 0x20;
  local_90 = 0;
  uStack_88 = 0;
  uStack_74 = 0xb01;
  local_70 = 0x20;
  local_a0 = 0;
  local_98 = 0;
  FUN_0034fb74(&local_a0);
  local_a0 = CONCAT44(local_a0._4_4_,0x24);
  lVar2 = FUN_0034f59c(param_1,&local_80);
  uVar3 = FUN_003490a4(param_1,&local_a0);
  DAT_04c61bb0 = 0x20000;
  DAT_04c61bc0 = lVar2 + 0x20000;
  lVar4 = FUN_003490ac(param_1,&local_a0);
  DAT_04c61bc0 = lVar2 + lVar4 + 0x1ffffU & -lVar4;
  DAT_04c61bb8 = (**(code **)(*param_2 + 0x10))(param_2,DAT_04c61bc0,uVar3);
  local_90 = DAT_04c61bc0;
  local_a0 = CONCAT44((int)DAT_04c61bc0,(undefined4)local_a0);
  local_98 = DAT_04c61bb8;
  FUN_003490c4(&DAT_04c61968,param_1,&local_a0);
  FUN_003491ac(&DAT_04c61968,param_1,"NnVfx2GfxMemoryPool");
  DAT_04c61ba8 = DAT_04c61bb8 + lVar2;
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,0x20000,0x80);
  lVar6 = 0;
  lVar4 = 0;
  lVar8 = lVar5;
  do {
    lVar9 = 0;
    lVar10 = lVar8;
    do {
      lVar11 = 0;
      lVar7 = (long)(int)lVar4;
      do {
        lVar4 = lVar7 + 3;
        *(uint *)(lVar10 + lVar11) =
             ((byte)(&DAT_04111df6)[lVar7] ^ 0x80) << 0x10 |
             ((byte)(&DAT_04111df7)[lVar7] ^ 0x80) << 8 | (byte)(&DAT_04111df8)[lVar7] ^ 0x80 |
             0xff000000;
        lVar11 = lVar11 + 4;
        lVar7 = lVar4;
      } while (lVar11 != 0x80);
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x80;
    } while (lVar9 != 0x20);
    lVar6 = lVar6 + 1;
    lVar8 = lVar8 + 0x1000;
  } while (lVar6 != 0x20);
  local_80 = CONCAT26(1,(undefined6)local_80);
  FUN_0034f6d4(&DAT_04c61ad0,param_1,&local_80,&DAT_04c61968,lVar2,DAT_04c61bb0);
  FUN_0034f7fc(&DAT_04c61ad0,param_1,"NnVfx2GfxTexture");
  local_b0 = (undefined *)0x0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_0034fd78(&local_e0);
  local_b0 = &DAT_04c61ad0;
  local_e0 = CONCAT71(local_e0._1_7_,2);
  local_e0 = CONCAT44(0xb01,(undefined4)local_e0);
  FUN_0034f830(&DAT_04c61a88,param_1,&local_e0);
  local_e0 = 0;
  uStack_d8 = 0x2000000000;
  local_d0 = 0x2000000020;
  (**(code **)PTR_DAT_04bcee18)(DAT_04c61ad8,0,&local_e0,lVar5);
  (**(code **)PTR_DAT_04bcee20)(DAT_04c61ad8,0,&local_e0);
  (**(code **)(*param_2 + 0x18))(param_2,lVar5);
  return;
}

