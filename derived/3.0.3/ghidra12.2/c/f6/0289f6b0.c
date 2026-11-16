
void FUN_0289f6b0(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined **local_16b0;
  undefined8 *apuStack_16a8 [234];
  uint local_f54;
  uint local_f50;
  uint local_f4c;
  int local_f48;
  undefined **local_f40;
  undefined1 auStack_f38 [1876];
  uint local_7e4;
  uint local_7e0;
  uint local_7dc;
  int local_7d8;
  undefined1 local_7cc [4];
  undefined8 local_7c8;
  undefined4 *local_7c0;
  undefined4 local_70 [4];
  
  local_7cc[0] = 0;
  FUN_01b02920(local_7cc,param_2 + 0x10,0);
  ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f40 = ppuVar1;
  memset(auStack_f38,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_7e4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 2;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 3;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_f40);
  memset(pvVar5,0,0x754);
  local_7c8 = (undefined **)((ulong)local_7c8._4_4_ << 0x20);
  local_16b0 = &PTR_FUN_049ff448;
  apuStack_16a8[0] = &local_7c8;
  FUN_008a1ba0(&local_f40,&local_16b0);
  local_7c8._0_4_ = 0x77;
  local_16b0 = &PTR_FUN_049ff448;
  apuStack_16a8[0] = &local_7c8;
  FUN_008a1ba0(&local_f40,&local_16b0);
  local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,0x29);
  local_16b0 = &PTR_FUN_049ff448;
  apuStack_16a8[0] = &local_7c8;
  FUN_008a1ba0(&local_f40,&local_16b0);
  local_16b0 = ppuVar1;
  memset(apuStack_16a8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_f54 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_f50 = (local_f54 ^ local_f54 >> 0x1e) * 0x6c078965 + 2;
  local_f4c = (local_f50 ^ local_f50 >> 0x1e) * 0x6c078965 + 3;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_16b0);
  memset(pvVar5,0,0x754);
  local_7c0 = local_70;
  local_70[0] = 1;
  local_7c8 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_16b0,&local_7c8);
  pvVar5 = (void *)(*(code *)local_16b0[3])(&local_16b0);
  lVar6 = (*(code *)local_f40[4])(&local_f40);
  for (lVar8 = 0;
      *(uint *)((long)&local_7c8 + lVar8) =
           *(uint *)(lVar6 + lVar8) & *(uint *)((long)pvVar5 + lVar8), lVar8 != 0x750;
      lVar8 = lVar8 + 8) {
    *(uint *)(local_7cc + lVar8 + 8) =
         *(uint *)(lVar6 + lVar8 + 4) & *(uint *)((long)pvVar5 + lVar8 + 4);
  }
  memcpy(pvVar5,&local_7c8,0x754);
  local_7c0 = (undefined4 *)local_7cc;
  local_7c8 = &PTR_FUN_049ff6a0;
  uVar3 = 0;
  *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
  do {
    (*(code *)local_16b0[2])(local_70,&local_16b0,uVar3);
    lVar6 = (*(code *)local_16b0[4])(&local_16b0);
    lVar8 = DAT_053274a0;
    uVar2 = 1 << (ulong)(uVar3 & 0x1f);
    if ((*(uint *)(lVar6 + (ulong)(uVar3 >> 5) * 4) & uVar2) != 0) {
      uVar4 = FUN_0277d6c4(local_70);
      if (DAT_053274a0 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
           (uVar7 = (*(code *)*local_7c8)(&local_7c8,local_70), (uVar7 & 1) != 0))
        goto LAB_0289f930;
      }
      lVar8 = (*(code *)local_16b0[3])(&local_16b0);
      lVar6 = (ulong)(uVar3 >> 5) * 4;
      *(uint *)(lVar8 + lVar6) = *(uint *)(lVar8 + lVar6) & (uVar2 ^ 0xffffffff);
    }
LAB_0289f930:
    uVar3 = uVar3 + 1;
    if (uVar3 == 15000) {
      FUN_0289e6c0(param_1,&local_16b0,2,0);
      FUN_0289e220(param_1,param_2,1);
      return;
    }
  } while( true );
}

