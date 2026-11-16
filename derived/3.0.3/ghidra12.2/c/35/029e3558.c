
void FUN_029e3558(short *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  undefined1 *puVar10;
  short local_7f8 [2];
  undefined4 uStack_7f4;
  undefined **local_7f0;
  undefined1 auStack_7e8 [1876];
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_48;
  undefined4 local_44;
  
  local_7f0 = &PTR_LAB_049ff3a8;
  memset(auStack_7e8,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_94 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_90 = (local_94 ^ local_94 >> 0x1e) * 0x6c078965 + 2;
  local_8c = (local_90 ^ local_90 >> 0x1e) * 0x6c078965 + 3;
  local_88 = (local_8c ^ local_8c >> 0x1e) * 0x6c078965 + 4;
  pvVar8 = (void *)FUN_01a451fc(&local_7f0);
  pvVar8 = memset(pvVar8,0,0x754);
  local_44 = FUN_029e3790(pvVar8,param_2 + 8);
  switch(local_44) {
  case 0x72:
    local_48 = 0x7b;
    break;
  case 0x73:
    local_48 = 0x7c;
    break;
  case 0x74:
    local_48 = 0x7d;
    break;
  case 0x75:
    local_48 = 0x7e;
    break;
  case 0x76:
    local_48 = 0x7f;
    break;
  default:
    local_48 = 0;
  }
  local_78 = &local_48;
  local_80 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7f0,&local_80);
  local_78 = &local_44;
  local_80 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7f0,&local_80);
  puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar5 = puVar9[3];
  uVar7 = *puVar9 ^ *puVar9 << 0xb;
  *puVar9 = puVar9[1];
  puVar9[1] = puVar9[2];
  uVar4 = uVar7 ^ uVar5;
  uVar7 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar4;
  puVar9[2] = uVar5;
  puVar9[3] = uVar7;
  uVar7 = (uVar7 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar4 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  local_80 = (undefined **)CONCAT44(uVar4,uVar7);
  uVar7 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (undefined4 *)CONCAT44((uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4,uVar7);
  FUN_01a4ca70(local_7f8,&local_80,&local_7f0,0,0,0);
  bVar6 = local_7f8[0] != -2;
  puVar1 = PTR_DAT_04bb37e0 + 3;
  puVar2 = (undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar10 = PTR_DAT_04bb37e0 + 2;
  sVar3 = *(short *)PTR_DAT_04bb37e0;
  if (bVar6) {
    sVar3 = local_7f8[0];
  }
  *param_1 = sVar3;
  if (bVar6) {
    puVar10 = (undefined1 *)((ulong)local_7f8 | 2);
  }
  *(undefined1 *)(param_1 + 1) = *puVar10;
  if (bVar6) {
    puVar1 = (undefined1 *)((ulong)local_7f8 | 3);
  }
  *(undefined1 *)((long)param_1 + 3) = *puVar1;
  if (bVar6) {
    puVar2 = &uStack_7f4;
  }
  *(undefined4 *)(param_1 + 2) = *puVar2;
  return;
}

