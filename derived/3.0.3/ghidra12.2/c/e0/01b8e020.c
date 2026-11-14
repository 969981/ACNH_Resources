
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8e020(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *__s;
  uint *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_7ec;
  uint uStack_7e8;
  uint local_7e4;
  uint uStack_7e0;
  int local_7dc;
  undefined **local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  local_7d8 = &PTR_LAB_049ff3a8;
  memset(auStack_7d0,0,0x754);
  uVar5 = nn::os::GetSystemTick();
  local_7c = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7d8);
  memset(__s,0,0x754);
  local_7dc = 0;
  uVar9 = (param_5 ^ param_5 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar11 = puVar6[3];
  uVar5 = *puVar6 ^ *puVar6 << 0xb;
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  uVar12 = uVar5 ^ uVar11;
  uVar5 = uVar5 >> 8 ^ uVar11 >> 0x13 ^ uVar12;
  puVar6[2] = uVar11;
  puVar6[3] = uVar5;
  uVar12 = (uVar5 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  uVar11 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
  uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
  uVar9 = uVar9 ^ uVar9 * 0x800;
  uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
  uVar5 = uVar9 >> 8 ^ uVar3 >> 0x13 ^ uVar9 ^ uVar3;
  local_7ec = uVar12;
  uStack_7e8 = uVar11;
  local_7e4 = uVar13;
  uStack_7e0 = uVar14;
  FUN_01b8e370(&local_7d8,&local_7dc,param_2,param_3,param_4,uVar5);
  uVar1 = uVar1 ^ uVar1 * 0x800;
  lVar7 = (*(code *)local_7d8[4])(&local_7d8);
  uVar4 = DAT_0558600c;
  lVar10 = 0;
  iVar8 = 0;
  do {
    puVar6 = (uint *)(lVar7 + lVar10);
    lVar10 = lVar10 + 4;
    uVar9 = *puVar6 - (*puVar6 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    iVar8 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar8;
  } while (lVar10 != 0x754);
  uVar5 = uVar1 >> 8 ^ uVar5 >> 0x13 ^ uVar1 ^ uVar5;
  if (iVar8 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar4;
  }
  else {
    if (uVar5 != 0) {
      uVar12 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
      uVar11 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
      uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
      uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
      local_7ec = uVar12;
      uStack_7e8 = uVar11;
      local_7e4 = uVar13;
      uStack_7e0 = uVar14;
    }
    lVar7 = (*(code *)local_7d8[4])(&local_7d8);
    lVar10 = 0;
    uVar9 = 0;
    do {
      puVar6 = (uint *)(lVar7 + lVar10);
      lVar10 = lVar10 + 4;
      uVar1 = *puVar6 - (*puVar6 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar9 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar9;
    } while (lVar10 != 0x754);
    uVar12 = uVar12 ^ uVar12 << 0xb;
    uStack_7e0 = uVar12 >> 8 ^ uVar14 >> 0x13 ^ uVar12 ^ uVar14;
    local_7ec = uVar11;
    uStack_7e8 = uVar13;
    local_7e4 = uVar14;
    FUN_00889f80(param_1,&local_7d8,(int)((ulong)uStack_7e0 * (ulong)uVar9 >> 0x20) + 1);
    FUN_01a4c66c(&local_7ec,param_1);
  }
  if (local_7dc == 1) {
    uVar2 = uVar2 ^ uVar2 * 0x800;
    FUN_01a4d6e0(&local_7ec,param_1,uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar2 ^ uVar5,PTR_FUN_04bb67e0,0);
  }
  return;
}

