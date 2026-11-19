
void FUN_03a16090(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = (long)&PTR_FUN_04b6ca28;
  param_1[6] = (long)&PTR_LAB_04b6cb38;
  if (*(short *)((long)param_1 + 0x6e2) != -1) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar4 = (int)*(short *)((long)param_1 + 0x6e2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x6e2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xcb);
  FUN_038fd0e0(param_1 + 0xb7);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0xa6] = (long)puVar1;
  param_1[0xa2] = (long)puVar1;
  param_1[0x9e] = (long)puVar1;
  param_1[0x9a] = (long)puVar1;
  param_1[0x96] = (long)puVar1;
  param_1[0x91] = (long)puVar1;
  param_1[0x8c] = (long)puVar1;
  param_1[0x88] = (long)puVar1;
  param_1[0x84] = (long)puVar1;
  param_1[0x80] = (long)puVar1;
  param_1[0x7c] = (long)puVar1;
  param_1[0x78] = (long)puVar1;
  param_1[0x74] = (long)puVar1;
  param_1[0x70] = (long)puVar1;
  param_1[0x6c] = (long)puVar1;
  param_1[0x68] = (long)puVar1;
  param_1[99] = (long)puVar1;
  param_1[0x5e] = (long)puVar1;
  param_1[0x59] = (long)puVar1;
  param_1[0x54] = (long)puVar1;
  param_1[0x50] = (long)puVar1;
  param_1[0x4c] = (long)puVar1;
  param_1[0x48] = (long)puVar1;
  param_1[0x44] = (long)puVar1;
  param_1[0x3f] = (long)puVar1;
  param_1[0x3a] = (long)puVar1;
  param_1[0x36] = (long)puVar1;
  param_1[0x31] = (long)puVar1;
  param_1[0x2d] = (long)puVar1;
  param_1[0x29] = (long)puVar1;
  param_1[0x25] = (long)puVar1;
  param_1[6] = (long)(PTR_DAT_04bd11e8 + 0xd8);
  param_1[0x17] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  puVar5 = PTR_DAT_04bd1068;
  param_1[8] = (long)puVar1;
  *param_1 = (long)(puVar5 + 0x10);
  return;
}

