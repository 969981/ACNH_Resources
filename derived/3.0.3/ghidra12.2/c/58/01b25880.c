
bool FUN_01b25880(long param_1)

{
  undefined **ppuVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
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
  
  ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f30 = ppuVar1;
  memset(auStack_f28,0,0x754);
  uVar4 = nn::os::GetSystemTick();
  local_7d4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 2;
  local_7cc = (local_7d0 ^ local_7d0 >> 0x1e) * 0x6c078965 + 3;
  local_7c8 = (local_7cc ^ local_7cc >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_f30);
  memset(pvVar5,0,0x754);
  local_7bc[0] = 0x4a;
  local_16a0 = &PTR_FUN_049ff448;
  apuStack_1698[0] = local_7bc;
  FUN_008a1ba0(&local_f30,&local_16a0);
  pvVar5 = *(void **)(param_1 + 0x28);
  local_16a0 = ppuVar1;
  uVar4 = nn::os::GetSystemTick();
  local_f44 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 2;
  local_f3c = (local_f40 ^ local_f40 >> 0x1e) * 0x6c078965 + 3;
  local_f38 = (local_f3c ^ local_f3c >> 0x1e) * 0x6c078965 + 4;
  memcpy(apuStack_1698,pvVar5,0x754);
  pvVar5 = (void *)FUN_01a451fc(&local_16a0);
  lVar6 = (*(code *)local_f30[4])(&local_f30);
  for (lVar8 = 0;
      *(uint *)((long)local_7bc + lVar8) =
           *(uint *)(lVar6 + lVar8) & *(uint *)((long)pvVar5 + lVar8), lVar8 != 0x750;
      lVar8 = lVar8 + 8) {
    *(uint *)((long)local_7bc + lVar8 + 4) =
         *(uint *)(lVar6 + lVar8 + 4) & *(uint *)((long)pvVar5 + lVar8 + 4);
  }
  memcpy(pvVar5,local_7bc,0x754);
  *(uint *)((long)pvVar5 + 0x750) = *(uint *)((long)pvVar5 + 0x750) & 0xffffff;
  piVar7 = (int *)(*(code *)local_16a0[4])(&local_16a0);
  if (*piVar7 == 0) {
    uVar2 = 0;
    do {
      uVar9 = uVar2;
      if ((uVar9 == 0x1d4) || (piVar7[uVar9 + 1] != 0)) goto LAB_01b25a74;
      uVar2 = uVar9 + 2;
    } while (piVar7[uVar9 + 2] == 0);
    uVar9 = uVar9 + 1;
LAB_01b25a74:
    bVar3 = uVar9 < 0x1d4;
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

