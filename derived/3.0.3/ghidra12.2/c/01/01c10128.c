
void FUN_01c10128(long *param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  short *psVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_65;
  undefined *local_60;
  long lStack_58;
  undefined *local_50;
  char *local_48;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x17;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[6] = (long)(puVar2 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  param_1[0x1c] = 0;
  *param_1 = (long)&DAT_04a3fa18;
  param_1[1] = (long)(param_1 + 0x1c);
  uVar9 = (long)param_1 + 0x10eU;
  if ((long)param_1 + 0x10eU <= (long)param_1 + 0xe2U) {
    uVar9 = (long)param_1 + 0xe2U;
  }
  param_1[0x11] = (long)(puVar2 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  memset(param_1 + 0x1c,0,((uVar9 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  uVar9 = (ulong)*param_2;
  if (((uVar9 < 0x23) && (param_2[1] <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(param_2[1] & 0x1f) & 1) != 0)) {
    FUN_021d7d60(param_2);
    lVar6 = FUN_0265dc40();
    if (lVar6 != 0) {
      if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar7)();
        uVar3 = uVar3 ^ 1;
      }
      uVar1 = **(uint **)PTR_DAT_04bb3448;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar1);
      if (uVar1 < 0x10) {
        lVar10 = *(long *)(&DAT_041785a8 + (long)(int)uVar1 * 8);
      }
      else {
        lVar10 = 1;
      }
      local_48 = (char *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + lVar10 * 0x2c);
      local_50 = (undefined *)CONCAT44(local_50._4_4_,0x16);
      (**(code **)(*param_1 + 0x38))(param_1);
      local_80 = 0;
      uStack_78 = 0;
      local_88 = 0;
      local_70 = 1;
      local_6c = 0;
      local_98 = PTR_DAT_04bc0cd8 + 0x10;
      local_90 = 0;
      FUN_02906b00(&local_98,param_1,&local_50);
      if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
    psVar8 = (short *)(**(code **)(*param_1 + 0x18))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    if (((psVar8 == (short *)0x0) || (iVar4 == 0)) || (*psVar8 == 0)) {
      local_65 = 0;
      local_90 = (long)&local_88 + 4;
      local_88 = CONCAT35(local_88._5_3_,0x20);
      local_98 = PTR_DAT_04bb2028 + 0x10;
      FUN_038d1270(&local_98,"-----");
      if ((ulong)*param_2 < 0x23) {
        FUN_038d1270(&local_98,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_2 * 8 + 0xb0),param_2[1]);
      }
      (**(code **)(local_98 + 0x18))(&local_98);
      lVar6 = local_90;
      uVar11 = *(undefined8 *)PTR_DAT_04bb4138;
      uVar5 = FUN_006bd550(local_90,0);
      local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar5);
      lVar10 = FUN_0079e770(uVar11,&local_50);
      if (lVar10 != 0) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        local_48 = "STR_NNpcPhrase";
        lStack_58 = lVar6;
        local_50 = local_60;
        FUN_006f50a0(param_1,&local_50,&local_60,0);
      }
    }
  }
  return;
}

