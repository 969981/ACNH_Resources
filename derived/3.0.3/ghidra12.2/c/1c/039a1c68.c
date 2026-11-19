
void FUN_039a1c68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_198 [80];
  undefined1 auStack_148 [138];
  short local_be;
  undefined1 local_b4 [4];
  uint local_b0;
  float local_28;
  float fStack_24;
  
  if (((*(char *)(param_1 + 0x7f8) != '\0') &&
      ((*(long *)(param_1 + 0x1d8) != 0 && 0 < *(int *)(param_1 + 0x1e0) ||
       *(char *)(param_1 + 0x920) != '\0') && *(char *)(param_1 + 0x7f9) != '\0')) &&
     (*(long *)(param_1 + 0x570) != 0)) {
    FUN_038e4cec(local_b4);
    local_b4[0] = 0;
    local_b0 = local_b0 & 0xfffffffe;
    FUN_038e4d90(local_b4,param_2);
    FUN_038e77e4(param_4,param_2,param_3);
    FUN_0390d120(auStack_198,*(undefined8 *)(param_1 + 0x570));
    fStack_24 = *(float *)(param_3 + 0xc) /
                (*(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14));
    local_28 = *(float *)(param_3 + 8) / (*(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10));
    uVar6 = *(undefined8 *)
             (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar6,param_2);
    FUN_03949e90(param_2,uVar6,auStack_198,param_4,&local_28,PTR_DAT_04bb2f48);
    lVar5 = DAT_05ae78f0;
    if (local_be != -1) {
      pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
      nn::os::LockMutex(pMVar1);
      uVar4 = (int)local_be - (uint)*(ushort *)(lVar5 + 0x5c0);
      if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
        uVar4 = 0;
      }
      lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
      sVar3 = *(short *)(lVar2 + 0x76) + -1;
      *(short *)(lVar2 + 0x76) = sVar3;
      if (sVar3 == 0) {
        *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex(pMVar1);
      local_be = -1;
    }
    FUN_038fd0e0(auStack_148);
  }
  return;
}

