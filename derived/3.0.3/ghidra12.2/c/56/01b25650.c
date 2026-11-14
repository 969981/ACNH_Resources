
bool FUN_01b25650(long param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined **local_16a0;
  uint *apuStack_1698 [234];
  uint local_f44;
  uint local_f40;
  uint local_f3c;
  int local_f38;
  undefined **local_f30;
  undefined1 auStack_f28 [1876];
  uint local_7d4;
  uint local_7d0;
  uint local_7cc;
  int local_7c8;
  uint local_7bc [471];
  
  ppuVar2 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f30 = ppuVar2;
  memset(auStack_f28,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar5,0,0x754);
  local_7bc[0] = 0x72;
  local_16a0 = &PTR_FUN_049ff448;
  apuStack_1698[0] = local_7bc;
  FUN_008a1ba0(&local_f30,&local_16a0);
  pvVar5 = *(void **)(param_1 + 0x28);
  local_16a0 = ppuVar2;
  uVar4 = nn::os::GetSystemTick();
  local_f44 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  memcpy(apuStack_1698,pvVar5,0x754);
  pvVar5 = (void *)FUN_01a451fc(&local_16a0);
  lVar6 = (*(code *)local_f30[4])(&local_f30);
  for (lVar7 = 0;
      *(uint *)((long)local_7bc + lVar7) =
           *(uint *)(lVar6 + lVar7) & *(uint *)((long)pvVar5 + lVar7), lVar7 != 0x750;
      lVar7 = lVar7 + 8) {
    *(uint *)((long)local_7bc + lVar7 + 4) =
         *(uint *)(lVar6 + lVar7 + 4) & *(uint *)((long)pvVar5 + lVar7 + 4);
  }
  memcpy(pvVar5,local_7bc,0x754);
  *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
  lVar6 = (*(code *)local_16a0[4])(&local_16a0);
  lVar7 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)(lVar6 + lVar7);
    lVar7 = lVar7 + 4;
    uVar3 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
    uVar3 = uVar3 + (uVar3 >> 8);
    uVar4 = (uVar3 + (uVar3 >> 0x10) & 0x3f) + uVar4;
  } while (lVar7 != 0x754);
  return 9 < uVar4;
}

