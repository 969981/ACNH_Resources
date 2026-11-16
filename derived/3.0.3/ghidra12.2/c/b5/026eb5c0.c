
int FUN_026eb5c0(void *param_1,undefined6 *param_2,uint param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  undefined6 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined6 uStack_380;
  undefined2 local_37a;
  undefined6 uStack_378;
  undefined2 local_372;
  undefined6 local_340;
  undefined2 uStack_33a;
  undefined6 uStack_338;
  undefined2 local_332;
  undefined4 local_280 [128];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  lVar6 = DAT_0556ca20;
  if (param_1 == (void *)0x0) {
    return 7;
  }
  if (DAT_0556ca20 == 0) {
    iVar7 = 7;
  }
  else {
    uStack_378 = 0;
    uStack_380 = 0;
    local_37a = 0;
    local_372 = 0xffff;
    local_340 = 0;
    uStack_33a = 0;
    uStack_338 = 0;
    local_332 = 0xffff;
    memset(local_280,0,0x200);
    uVar9 = 0;
    do {
      uVar4 = uVar9 << 2;
      uVar5 = uVar9 >> 0x1f;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar8;
      *(undefined4 *)((long)local_280 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = 0;
    } while (uVar8 != 0x80);
    if (param_2 == (undefined6 *)0x0) {
      param_2 = &uStack_380;
      iVar7 = FUN_026cf750(lVar6,&uStack_380,0x300,param_4,0);
      if (iVar7 != 1) {
        return iVar7;
      }
    }
    uVar8 = nn::os::GetSystemTick();
    if (DAT_04ca9180 == 0) {
      lVar11 = 0;
      lVar13 = 0;
    }
    else {
      lVar11 = *(long *)(DAT_04ca9180 + 0x140);
      lVar13 = *(long *)(DAT_04ca9180 + 0x148);
    }
    if (lVar11 != 0 || lVar13 != 0) {
      uVar8 = (int)lVar11 + (int)lVar13 + uVar8 +
              (int)((ulong)lVar11 >> 0x20) + (int)((ulong)lVar13 >> 0x20);
    }
    uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar9 = 0;
    puVar2 = param_2 + 0x20;
    uVar10 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar12 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 3;
    uVar14 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar8 = uVar8 ^ uVar8 << 0xb;
      uVar4 = uVar9 << 2;
      uVar5 = uVar9 >> 0x1f;
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
      uVar3 = uVar14 >> 0x13 ^ uVar8 >> 8 ^ uVar14 ^ uVar8;
      *(uint *)((long)puVar2 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = uVar3;
      uVar8 = uVar10;
      uVar10 = uVar12;
      uVar12 = uVar14;
      uVar14 = uVar3;
    } while (uVar1 != 0x80);
    if (DAT_0556ca20 == 0) {
      iVar7 = 7;
    }
    else {
      iVar7 = FUN_026ce9d0(DAT_0556ca20,param_2,0x300,param_5,0);
    }
    if (iVar7 == 1) {
      FUN_028b7d30(auStack_70,2,puVar2);
      FUN_028b7f90(auStack_80,2,puVar2);
      uVar9 = (ulong)param_3;
      nn::crypto::EncryptAes128CtrPartial
                (param_1,uVar9,auStack_70,0x10,auStack_80,0x10,0,param_1,uVar9);
      iVar7 = FUN_026ce9d0(lVar6,param_1,param_3,param_4,0);
      FUN_028b7d30(auStack_70,2,puVar2);
      FUN_028b7f90(auStack_80,2,puVar2);
      nn::crypto::DecryptAes128CtrPartial
                (param_1,uVar9,auStack_70,0x10,auStack_80,0x10,0,param_1,uVar9);
    }
  }
  return iVar7;
}

