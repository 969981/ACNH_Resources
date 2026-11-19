
void FUN_039a7060(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar2;
      *plVar2 = lVar4;
      plVar2[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar2;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)&PTR_FUN_04b6a3a0;
  param_1[6] = 0;
  param_1[7] = (long)&DAT_3f8000003f800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  param_1[4] = (long)&PTR_FUN_04b65d70;
  param_1[5] = (long)&DAT_3f8000003f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar1 = PTR_DAT_04bd1198 + 0x10;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x11] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0x10000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = (long)"agl::TextureData";
  *(undefined4 *)(param_1 + 0x28) = 0xff;
  *(undefined4 *)((long)param_1 + 0x144) = 0;
  param_1[0x29] = 0x80000000000;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = (long)&PTR_FUN_04b68580;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  FUN_0034f694(param_1 + 100);
  FUN_0034f814(param_1 + 0x7f);
  *(undefined2 *)(param_1 + 0x43) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x87] = (long)(param_1 + 0x2f);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = (long)"agl::TextureData";
  *(undefined4 *)(param_1 + 0x9b) = 0x10000;
  param_1[8] = (long)(param_1 + 0x11);
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = (long)(param_1 + 0x43);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x3f] = (long)(param_1 + 100);
  param_1[0x40] = (long)(param_1 + 0x7f);
  return;
}

