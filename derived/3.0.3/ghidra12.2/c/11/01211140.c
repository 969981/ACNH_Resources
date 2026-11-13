
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01211140(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
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
  local_60 = &PTR_FUN_049ff448;
  uStack_58 = param_2;
  FUN_008a1ba0(&local_7d0,&local_60);
  lVar6 = (**(code **)(local_7d0 + 0x18))(&local_7d0);
  uVar4 = FUN_0277d6c4(param_3);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar7 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar6 + lVar7) = *(uint *)(lVar6 + lVar7) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar6 = (**(code **)(local_7d0 + 0x18))(&local_7d0);
  uVar4 = FUN_0277d6c4(param_4);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar7 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar6 + lVar7) = *(uint *)(lVar6 + lVar7) & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar7 = (**(code **)(local_7d0 + 0x20))(&local_7d0);
  uVar3 = DAT_0558600c;
  lVar6 = 0;
  uVar4 = 0;
  do {
    puVar1 = (uint *)(lVar7 + lVar6);
    lVar6 = lVar6 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar4 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar4;
  } while (lVar6 != 0x754);
  if (uVar4 == 0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar3;
  }
  else {
    uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar2;
    FUN_00889f80(param_1,&local_7d0,(int)((ulong)uVar2 * (ulong)uVar4 >> 0x20) + 1);
  }
  return;
}

