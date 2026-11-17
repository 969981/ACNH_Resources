
bool FUN_02d95180(undefined8 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined *local_7d0;
  undefined1 auStack_7c8 [1876];
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  undefined **local_60;
  undefined8 uStack_58;
  
  iVar3 = FUN_0277d6c4();
  if (iVar3 != 0x373d) {
    local_7d0 = PTR_DAT_04bbfe60 + 0x10;
    memset(auStack_7c8,0,0x754);
    uVar4 = nn::os::GetSystemTick();
    local_74 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
    local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 2;
    local_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 3;
    local_68 = (local_6c ^ local_6c >> 0x1e) * 0x6c078965 + 4;
    pvVar5 = (void *)FUN_01a451fc(&local_7d0);
    memset(pvVar5,0,0x754);
    pvVar5 = (void *)(**(code **)(local_7d0 + 0x18))(&local_7d0);
    memset(pvVar5,0,0x754);
    local_60 = &PTR_LAB_049ff9e8;
    uStack_58 = param_1;
    FUN_008a1ba0(&local_7d0,&local_60);
    lVar6 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
    lVar7 = 0;
    uVar4 = 0;
    do {
      puVar1 = (uint *)(lVar6 + lVar7);
      lVar7 = lVar7 + 4;
      uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
      uVar2 = uVar2 + (uVar2 >> 8);
      uVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar4;
    } while (lVar7 != 0x754);
    if (uVar4 < 2) {
      return false;
    }
  }
  return param_2 == 0xd || (param_2 == 0x78 || param_2 == 0);
}

