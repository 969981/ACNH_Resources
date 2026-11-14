
void FUN_01c0fec4(long *param_1,undefined4 *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 *puVar9;
  short *psVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0x17;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *param_1 = (long)&DAT_04a3fa18;
  param_1[1] = (long)(param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  *(undefined8 *)((long)param_1 + 0x106) = 0;
  param_1[0x1c] = 0;
  param_1[6] = (long)(puVar3 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  uVar1 = (long)param_1 + 0x10eU;
  if ((long)param_1 + 0x10eU <= (long)param_1 + 0xe2U) {
    uVar1 = (long)param_1 + 0xe2U;
  }
  param_1[0x11] = (long)(puVar3 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  memset(param_1 + 0x1c,0,((uVar1 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  lVar8 = FUN_0265dc40(*param_2);
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar9)();
      uVar5 = uVar5 ^ 1;
    }
    uVar2 = **(uint **)PTR_DAT_04bb3448;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar2);
    if (uVar2 < 0x10) {
      lVar11 = *(long *)(&DAT_041785a8 + (long)(int)uVar2 * 8);
    }
    else {
      lVar11 = 1;
    }
    local_78 = *(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + lVar11 * 0x2c;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,0x16);
    (**(code **)(*param_1 + 0x38))(param_1);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    local_48 = 1;
    local_44 = 0;
    local_70 = PTR_DAT_04bc0cd8 + 0x10;
    pcStack_68 = (char *)0x0;
    FUN_02906b00(&local_70,param_1,&local_80);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  psVar10 = (short *)(**(code **)(*param_1 + 0x18))(param_1);
  iVar6 = (**(code **)(*param_1 + 0x20))(param_1);
  bVar4 = true;
  if ((psVar10 != (short *)0x0) && (iVar6 != 0)) {
    bVar4 = *psVar10 == 0;
  }
  if ((param_3 != 0) && (bVar4)) {
    uVar12 = *(undefined8 *)PTR_DAT_04bb4138;
    uVar7 = FUN_006bd550(param_3,0);
    local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar7);
    lVar8 = FUN_0079e770(uVar12,&local_70);
    if (lVar8 != 0) {
      local_80 = PTR_DAT_04bb2020 + 0x10;
      pcStack_68 = "STR_NNpcPhrase";
      local_78 = param_3;
      local_70 = local_80;
      FUN_006f50a0(param_1,&local_70,&local_80,0);
    }
  }
  return;
}

