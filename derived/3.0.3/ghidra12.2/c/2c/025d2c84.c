
void FUN_025d2c84(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 uVar11;
  undefined *local_19b0;
  undefined8 *puStack_19a8;
  undefined4 local_19a0;
  undefined1 local_199c [4];
  undefined8 local_1998;
  undefined8 uStack_1990;
  undefined4 local_1988;
  undefined *local_1980;
  undefined1 *puStack_1978;
  undefined4 local_1970;
  undefined1 local_196c [15];
  undefined1 local_195d;
  undefined1 local_192d;
  undefined *local_1928;
  undefined1 *puStack_1920;
  undefined4 local_1918;
  undefined1 local_1914 [63];
  undefined1 local_18d5;
  undefined8 local_18d0;
  undefined6 uStack_18c8;
  undefined2 local_18c2;
  undefined6 uStack_18c0;
  undefined1 auStack_18ba [2];
  undefined *local_18b8;
  char *pcStack_18b0;
  undefined4 local_18a8;
  undefined1 local_18a4;
  undefined8 local_18a0;
  undefined8 uStack_1898;
  undefined4 local_1890;
  undefined *local_1888;
  undefined1 *puStack_1880;
  undefined4 local_1878;
  undefined1 local_1874 [63];
  undefined1 local_1835;
  undefined *local_1830;
  undefined1 *puStack_1828;
  undefined4 local_1820;
  undefined1 local_181c [63];
  undefined1 local_17dd;
  undefined8 local_17d8;
  undefined8 local_17d0;
  undefined8 uStack_17c8;
  undefined8 local_17c0;
  undefined8 uStack_17b8;
  undefined2 local_17b0;
  undefined1 auStack_17ae [12];
  undefined1 auStack_17a2 [2];
  short local_17a0 [4];
  long local_1798;
  long local_1790;
  undefined4 local_100 [2];
  undefined1 *local_f8;
  undefined *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined *local_c0;
  char *pcStack_b8;
  undefined4 local_b0;
  char local_ac [12];
  undefined1 auStack_a0 [20];
  int local_8c;
  undefined1 local_6d;
  
  FUN_02602950(param_1,0x4e);
  FUN_007ef010(auStack_17a2,param_2);
  FUN_007e4920(local_17a0,auStack_17a2);
  puVar4 = PTR_DAT_04bb2020;
  if (local_17a0[0] == *(short *)PTR_DAT_04bb3170) {
    return;
  }
  if (local_1790 == 0 && local_1798 == 0) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18b0 = "IsPro";
  local_18b8 = puVar1;
  uVar6 = FUN_007e4bb0(local_17a0);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_18b8,uVar6 & 1);
  }
  puVar5 = PTR_DAT_04bb2bc0;
  local_18a4 = 0;
  local_18a8 = 0x15;
  local_18a0 = 0xffffffff;
  uStack_1898 = 0xffffffff00000000;
  puStack_1880 = local_1874;
  local_1890 = 0xffffffff;
  pcStack_18b0 = (char *)&local_17d8;
  local_1878 = 0x40;
  local_1835 = 0;
  local_1874[0] = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_1820 = 0x40;
  local_17dd = 0;
  local_181c[0] = 0;
  puStack_1828 = local_181c;
  local_17b0 = 0;
  local_17d8 = 0;
  local_18b8 = PTR_DAT_04bc0ce8 + 0x10;
  local_17c0 = 0;
  uStack_17b8 = 0;
  local_17d0 = 0;
  uStack_17c8 = 0;
  puVar3 = auStack_17ae;
  if (auStack_17ae <= (undefined1 *)((long)&local_17d8 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_17d8 + 2U);
  }
  local_1888 = puVar2;
  local_1830 = puVar2;
  memset(pcStack_18b0,0,(ulong)(puVar3 + (-0xe1 - (long)&local_18b8)) & 0xfffffffffffffff8 | 2);
  FUN_007e5d30(local_17a0,&local_18b8);
  pcStack_b8 = "TitleName";
  local_c0 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    local_19a0 = 0x40;
    puStack_19a8 = (undefined8 *)local_199c;
    local_195d = 0;
    local_199c[0] = 0;
    local_19b0 = puVar2;
    FUN_006f4bf4(&local_18b8,&local_19b0,0);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_c0,&local_19b0);
    }
  }
  FUN_007e6230(&local_c0,local_17a0);
  local_199c[0] = 0;
  local_19a0 = 0xb;
  puStack_1978 = local_196c;
  local_1998 = 0xffffffff;
  uStack_1990 = 0xffffffff00000000;
  puStack_19a8 = &local_18d0;
  local_1988 = 0xffffffff;
  local_1970 = 0x40;
  local_192d = 0;
  local_196c[0] = 0;
  local_1918 = 0x40;
  local_18d5 = 0;
  local_1914[0] = 0;
  puStack_1920 = local_1914;
  uStack_18c0 = 0;
  local_19b0 = PTR_DAT_04bb5128 + 0x10;
  puVar3 = auStack_18ba;
  if (auStack_18ba <= (undefined1 *)((long)&local_18d0 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_18d0 + 2U);
  }
  local_18d0 = 0;
  uStack_18c8 = 0;
  local_18c2 = 0;
  local_1980 = puVar2;
  local_1928 = puVar2;
  memset(puStack_19a8,0,(ulong)(puVar3 + (-0xe1 - (long)&local_19b0)) & 0xfffffffffffffffc | 2);
  local_100[0] = 10;
  local_f8 = auStack_a0;
  FUN_0082b014(&local_19b0);
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = 0;
  local_c8 = 1;
  local_c4 = 0;
  local_f0 = PTR_DAT_04bc0cd8 + 0x10;
  pcStack_e8 = (char *)0x0;
  FUN_02906b00(&local_f0,&local_19b0,local_100);
  puVar7 = (undefined4 *)(**(code **)(local_19b0 + 0x40))(&local_19b0);
  uVar11 = 1;
  if (local_8c == 1) {
    uVar11 = 2;
  }
  *puVar7 = uVar11;
  local_f0 = puVar4 + 0x10;
  pcStack_e8 = "AuthorName";
  if (*(long *)(param_1 + 8) != 0) {
    pcStack_b8 = local_ac;
    local_6d = 0;
    local_b0 = 0x40;
    local_c0 = puVar5 + 0x10;
    local_ac[0] = '\0';
    FUN_006f4bf4(&local_19b0,&local_c0,0);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_f0,&local_c0);
      local_c0 = puVar4 + 0x10;
      pcStack_b8 = "MyDesignID";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_c0,*param_2);
      }
    }
  }
  uVar6 = FUN_007e4bb0(local_17a0);
  if ((uVar6 & 1) == 0) {
    if (local_1798 == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      return;
    }
    lVar10 = 0;
  }
  else {
    if (local_1790 == 0) {
      return;
    }
    if ((*(long **)(local_1790 + 0x28) == (long *)0x0) ||
       (puVar8 = (undefined8 *)**(long **)(local_1790 + 0x28), puVar8 == (undefined8 *)0x0)) {
      local_f0 = (undefined *)
                 CONCAT44(local_f0._4_4_,
                          (uint)*(byte *)(*(long *)(local_1790 + 0x10) + *(long *)(local_1790 + 8) +
                                         0x8a5));
    }
    else {
      uVar6 = (**(code **)*puVar8)();
      local_f0 = (undefined *)
                 CONCAT44(local_f0._4_4_,
                          (uint)*(byte *)(*(long *)(local_1790 + 0x10) + *(long *)(local_1790 + 8) +
                                         0x8a5));
      if ((((uVar6 & 1) != 0) && (*(long *)(local_1790 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(local_1790 + 0x28) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
    lVar10 = (long)(int)local_f0;
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      return;
    }
  }
  pcStack_b8 = "SaveProUsage";
  local_c0 = puVar4 + 0x10;
  FUN_02605660(lVar9,&local_c0,lVar10);
  return;
}

