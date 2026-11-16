
int FUN_026eb980(void *param_1,long param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                int param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
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
  
  lVar4 = DAT_0556ca20;
  if ((param_1 == (void *)0x0) || (DAT_0556ca20 == 0)) {
    iVar5 = 7;
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
    uVar6 = 0;
    do {
      uVar2 = uVar6 << 2;
      uVar3 = uVar6 >> 0x1f;
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      *(undefined4 *)((long)local_280 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = 0;
    } while (uVar1 != 0x80);
    iVar5 = FUN_026cf750(lVar4,&uStack_380,0x300,param_5,0);
    if (iVar5 == 1) {
      param_2 = param_2 + 0x100;
      FUN_028b7d30(auStack_70,2,param_2);
      FUN_028b7f90(auStack_80,2,param_2);
      uVar6 = (ulong)param_3;
      nn::crypto::EncryptAes128CtrPartial
                (param_1,uVar6,auStack_70,0x10,auStack_80,0x10,(long)param_6,param_1,uVar6);
      iVar5 = FUN_026ce9d0(lVar4,param_1,param_3,param_4,param_6);
      FUN_028b7d30(auStack_70,2,param_2);
      FUN_028b7f90(auStack_80,2,param_2);
      nn::crypto::DecryptAes128CtrPartial
                (param_1,uVar6,auStack_70,0x10,auStack_80,0x10,(long)param_6,param_1,uVar6);
    }
  }
  return iVar5;
}

