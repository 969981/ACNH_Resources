
void FUN_0033ae04(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  param_1[4] = 0;
  param_1[5] = 0x2000000040;
  puVar1 = PTR_DAT_04bcefc0;
  param_1[6] = 0x2000000020;
  puVar2 = PTR_DAT_04bcefc8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[8] = 0x10000;
  *(undefined4 *)(param_1 + 9) = 0x400;
  param_1[10] = 0x100000001;
  param_1[0xc] = 0x100000;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined1 *)((long)param_1 + 0x72) = 1;
  puVar1 = PTR_DAT_04bcee30 + 0x10;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3d] = (long)puVar1;
  param_1[0x41] = (long)puVar1;
  FUN_00343b3c(param_1 + 0x47);
  FUN_00343d2c(param_1 + 0x4a);
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  param_1[0x187] = 0;
  memset(param_1 + 0x18b,0,0x960);
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2cc] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d5] = 0;
  puVar1 = PTR_DAT_04bcee98 + 0x10;
  param_1[0x2d6] = 0;
  param_1[0x2d7] = 0;
  param_1[0x2da] = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2db),false,0);
  param_1[0x2e0] = 0;
  param_1[0x2df] = 0;
  param_1[0x2e2] = (long)(PTR_DAT_04bcedb8 + 0x10);
  FUN_00347b80(param_1 + 0x2e3);
  FUN_003490b4(param_1 + 0x2ec);
  param_1[0x317] = 0;
  param_1[0x310] = 0;
  param_1[0x312] = (long)(param_1 + 0x312);
  param_1[0x313] = (long)(param_1 + 0x312);
  *(undefined4 *)(param_1 + 0x318) = 0;
  param_1[0x31c] = 0;
  param_1[0x314] = (long)(param_1 + 0x314);
  param_1[0x315] = (long)(param_1 + 0x314);
  param_1[0x31d] = 0;
  param_1[0x31e] = 0;
  param_1[0x322] = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x323),false,0);
  param_1[0x327] = (long)puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x328),false,0);
  puVar1 = PTR_DAT_04bcefd0;
  param_1[0x33a] = 0;
  puVar2 = PTR_DAT_04bcefd8;
  param_1[0x33b] = 0;
  param_1[0x342] = 0;
  param_1[0x343] = 0;
  param_1[0x338] = (long)(puVar1 + 0x10);
  param_1[0x339] = (long)(puVar2 + 0x10);
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Vfx2-20_5_4-Release");
  param_1[0x33] = 0;
                    /* WARNING: Could not recover jumptable at 0x0033b06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_2);
  return;
}

