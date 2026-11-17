
void FUN_030b12f0(long param_1,long param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined7 uStack_2d8;
  undefined1 local_2d1;
  undefined7 uStack_2d0;
  undefined1 auStack_2c8 [64];
  undefined8 local_288;
  undefined4 local_280;
  uint local_244;
  short local_23e;
  undefined *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined *local_210;
  undefined1 *puStack_208;
  undefined8 local_200;
  undefined1 *puStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c4 [2];
  uint local_c0;
  undefined1 local_9c;
  undefined1 local_9a;
  
  if ((((param_2 != 0) && (param_3 != (undefined8 *)0x0)) && (*(long *)(param_1 + 0x158) != 0)) &&
     (((*(long *)(param_1 + 0x168) != 0 && (*(long *)(param_1 + 0x160) != 0)) &&
      (*(long *)(param_1 + 0x170) != 0)))) {
    FUN_038e4cec(local_c4);
    local_c4[0] = 0;
    local_9c = 5;
    local_c0 = local_c0 | 1;
    local_9a = 6;
    FUN_038e4d90(local_c4,param_2);
    (**(code **)(*(long *)*param_3 + 0x58))((long *)*param_3,param_1);
    local_160 = 0;
    uStack_158 = 0;
    local_150[0] = 0xffffffff;
    local_110 = "agl::TextureData";
    local_108 = 0x10000;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_118 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_f0 = 0xff;
    local_ec = 0;
    local_1a8 = PTR_DAT_04bd1198 + 0x10;
    local_e8 = 0x80000000000;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_200 = 0;
    puStack_1f8 = &DAT_3f8000003f800000;
    local_210 = PTR_DAT_04bd1178 + 0x10;
    local_1f0 = 0;
    uStack_1e8 = 0;
    puStack_208 = &DAT_3f8000003f800000;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_238 = PTR_DAT_04bd0f08 + 0x10;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_220 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_1b0 = 0;
    local_21c = 0x3f80000000000000;
    uStack_230 = 0x7f7fffff7f7fffff;
    local_228 = 0xff7fffffff7fffff;
    FUN_030b25f0(param_2,param_1 + 0xa0,&local_1a8,&local_210,&local_238,0);
    FUN_0390d120(&local_318,param_1);
    puVar6 = PTR_DAT_04bbdd18;
    uVar8 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar8,param_2);
    FUN_03949e90(param_2,uVar8,&local_318,&local_238,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    local_318 = *param_4;
    uStack_314 = param_4[1];
    local_310 = *(undefined8 *)(param_4 + 2);
    uStack_308 = *(undefined8 *)(param_4 + 4);
    local_300 = param_4[6];
    uStack_2fc = param_4[7];
    local_2f8 = *(undefined8 *)(param_4 + 8);
    uStack_2f0 = *(undefined8 *)(param_4 + 10);
    uStack_2d0 = (undefined7)((ulong)*(undefined8 *)((long)param_4 + 0x47) >> 8);
    local_2e0 = *(undefined8 *)(param_4 + 0xe);
    uStack_2d8 = (undefined7)*(undefined8 *)(param_4 + 0x10);
    local_2d1 = (undefined1)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x38);
    local_2e8 = *(undefined8 *)(param_4 + 0xc);
    FUN_038fd1e0(auStack_2c8);
    FUN_038fd2f0(auStack_2c8,param_4 + 0x14);
    local_288 = *(undefined8 *)(param_4 + 0x24);
    local_280 = param_4[0x26];
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_244,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        local_244 = local_244 | 1;
      }
    } while (cVar2 != '\0');
    uVar8 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)puVar6 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar8,param_2);
    FUN_03949e90(param_2,uVar8,&local_318,&local_238,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    if (local_23e != -1) {
      lVar7 = *(long *)PTR_DAT_04bc1010;
      nn::os::LockMutex((MutexType *)(lVar7 + 0x580));
      uVar5 = (int)local_23e - (uint)*(ushort *)(lVar7 + 0x5c0);
      if (*(uint *)(lVar7 + 0x5a0) <= uVar5) {
        uVar5 = 0;
      }
      lVar1 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar5 * 0x80;
      sVar4 = *(short *)(lVar1 + 0x76) + -1;
      *(short *)(lVar1 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x580));
      local_23e = -1;
    }
    FUN_038fd0e0(auStack_2c8);
    local_1a8 = PTR_DAT_04bbd508 + 0x10;
    FUN_038fd0e0(local_150);
  }
  return;
}

