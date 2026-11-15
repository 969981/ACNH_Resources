
uint FUN_022bb6dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  byte local_60 [4];
  byte local_5c [4];
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_44;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_34 = 0;
  local_3c = 0xfffe;
  FUN_0277d4ac(&local_3c);
  local_44 = 0xfffe;
  FUN_0277d4ac(&local_44);
  local_5c[0] = *(byte *)(param_1 + 0x10);
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  uVar6 = FUN_022a62a8(0x40a00000,local_5c,&local_3c,&local_58,1);
  if ((uVar6 & 1) != 0) {
LAB_022bb7dc:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x17df00c3) goto LAB_022bb968;
    uVar4 = 0;
    lVar7 = *(long *)PTR_DAT_04bb59d8;
    if (((int)local_50 < *(int *)(lVar7 + 0x28)) || (*(int *)(lVar7 + 0x38) < (int)local_50))
    goto LAB_022bba74;
    if ((*(int *)(lVar7 + 0x2c) <= local_50._4_4_) && (local_50._4_4_ <= *(int *)(lVar7 + 0x3c)))
    goto LAB_022bb968;
LAB_022bb840:
    uVar4 = 0;
    goto LAB_022bba74;
  }
  local_60[0] = *(byte *)(param_1 + 0x10);
  if (7 < local_60[0]) {
    local_60[0] = 0xff;
  }
  uVar6 = FUN_022a62a8(0,local_60,&local_3c,&local_58,1);
  if ((uVar6 & 1) != 0) goto LAB_022bb7dc;
  local_64[0] = *(byte *)(param_1 + 0x10);
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  uVar6 = FUN_022a62a8(0x40a00000,local_64,&local_3c,&local_58,0);
  if ((uVar6 & 1) != 0) goto LAB_022bb7dc;
  local_68[0] = *(byte *)(param_1 + 0x10);
  if (7 < local_68[0]) {
    local_68[0] = 0xff;
  }
  uVar6 = FUN_022a62a8(0,local_68,&local_3c,&local_58,0);
  if ((uVar6 & 1) != 0) goto LAB_022bb7dc;
  local_6c[0] = *(byte *)(param_1 + 0x10);
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  uVar6 = FUN_022a62a8(0x40f00000,local_6c,&local_3c,&local_58,0);
  lVar7 = DAT_05150358;
  uVar4 = 0;
  if ((uVar6 & 1) == 0) goto LAB_022bba74;
  if (((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x488) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)))) ||
     ((*(long *)(DAT_05150358 + 0x2b0) == 0 || (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)
      ))) goto LAB_022bb840;
  uVar4 = FUN_0277d6c4(&local_3c);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_022bb840;
  FUN_0124c030(auStack_88,&local_3c);
  iVar5 = FUN_0123db50(auStack_80,local_78);
  FUN_0124c030(auStack_88,&local_3c);
  iVar2 = FUN_0123db50(auStack_80,local_78);
  uVar6 = FUN_035a3310();
  if ((uVar6 & 1) == 0) {
    if (iVar5 != 0x21 && iVar2 != 0x22) goto LAB_022bb840;
  }
  else {
    uVar3 = FUN_0123d710(&local_3c,3,0);
    uVar4 = 0;
    if ((iVar5 != 0x21 && iVar2 != 0x22) && ((uVar3 ^ 0xffffffff) & 1) == 0) goto LAB_022bba74;
  }
LAB_022bb968:
  lVar7 = DAT_05150358;
  if ((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
      (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
     (((*(long *)(DAT_05150358 + 0x488) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))))) {
LAB_022bba50:
    local_90 = (undefined4)local_3c;
    uStack_8c = local_3c._4_4_;
LAB_022bba54:
    local_44 = CONCAT44(uStack_8c,local_90);
  }
  else {
    uVar4 = FUN_0277d6c4(&local_3c);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_022bba50;
    FUN_0124c030(auStack_88,&local_3c);
    puVar1 = PTR_DAT_04bc3a80;
    iVar5 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
    if (iVar5 == -0x6efba09b) {
      iVar5 = FUN_0123db50(auStack_80,local_78);
      if (iVar5 - 0x18U < 7) goto LAB_022bb840;
      iVar5 = *(int *)(puVar1 + 0x38);
    }
    if (iVar5 == -0x24a26848) {
      uVar6 = FUN_0277e158(auStack_80);
      if (((uVar6 & 1) != 0) ||
         (((uVar6 = FUN_0123d890(local_78,3), (uVar6 & 1) != 0 ||
           (iVar5 = FUN_0123db50(auStack_80,local_78), iVar5 == 0x2d)) &&
          ((iVar5 = FUN_0123d070(local_78), iVar5 == 0 || (iVar5 == 0xfffe)))))) goto LAB_022bba40;
      FUN_0124d4b4(&local_90,&local_3c);
      goto LAB_022bba54;
    }
LAB_022bba40:
    FUN_0124c70c(auStack_88,&local_44);
  }
  uVar4 = FUN_022baf28(param_1,param_2,&local_3c,&local_44,&local_58,&local_34);
LAB_022bba74:
  return uVar4 & 1;
}

