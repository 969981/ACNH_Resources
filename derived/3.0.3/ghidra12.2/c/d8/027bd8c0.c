
int FUN_027bd8c0(void)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined4 local_8c;
  undefined **local_88;
  undefined4 *puStack_80;
  
  local_8c = 0x6a;
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f8,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  local_a4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar3 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar3,0,0x754);
  puStack_80 = &local_8c;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_88);
  lVar4 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar6 = 0;
  iVar7 = 0;
  do {
    puVar1 = (uint *)(lVar4 + lVar6);
    lVar6 = lVar6 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar7 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar7;
  } while (lVar6 != 0x754);
  local_8c = 0x6b;
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f8,0,0x754);
  uVar2 = nn::os::GetSystemTick();
  local_a4 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  pvVar3 = (void *)FUN_01a451fc(&local_800);
  memset(pvVar3,0,0x754);
  puStack_80 = &local_8c;
  local_88 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_800,&local_88);
  lVar4 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar6 = 0;
  iVar5 = 0;
  do {
    puVar1 = (uint *)(lVar4 + lVar6);
    lVar6 = lVar6 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar5 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar5;
  } while (lVar6 != 0x754);
  return iVar5 + iVar7;
}

