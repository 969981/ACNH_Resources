
void FUN_003c4d90(long *param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char local_26 [6];
  
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if ((uVar3 & 1) != 0) {
    FUN_003ddf88(param_2,param_4,param_5);
    lVar4 = FUN_03b38a74();
    lVar5 = FUN_03b38a74();
    uVar3 = FUN_003ddba8(param_2,lVar4 + 0x18,lVar5 + 0x8c0,param_1);
    if ((uVar3 & 1) != 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      uVar2 = (uint)uVar3;
      if (0 < (int)uVar2) {
        uVar6 = uVar3 & 3;
        if (uVar2 < 4) {
          uVar8 = 0;
        }
        else {
          uVar9 = 0;
          do {
            cVar1 = (char)(uVar2 * param_3) + (char)uVar9;
            local_26[uVar9] = cVar1;
            local_26[uVar9 + 1] = cVar1 + '\x01';
            uVar8 = uVar9 + 4;
            local_26[uVar9 + 2] = cVar1 + '\x02';
            local_26[uVar9 + 3] = cVar1 + '\x03';
            uVar9 = uVar8;
          } while ((uVar3 & 0xfffffffc) != uVar8);
        }
        if (uVar6 != 0) {
          iVar7 = uVar2 * param_3 + (int)uVar8;
          pcVar10 = local_26 + uVar8;
          do {
            *pcVar10 = (char)iVar7;
            iVar7 = iVar7 + 1;
            uVar6 = uVar6 - 1;
            pcVar10 = pcVar10 + 1;
          } while (uVar6 != 0);
        }
      }
      FUN_003ddce0(param_2,local_26,local_26,uVar3 & 0xffffffff,uVar3 & 0xffffffff);
      nn::os::LockMutex((MutexType *)(param_1 + 1));
      lVar4 = param_1[6];
      uVar3 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
      param_2 = param_2 + 1;
      lVar5 = *param_2;
      *param_2 = *(long *)(lVar4 + uVar3);
      *(long **)(lVar5 + 8) = (long *)(lVar4 + uVar3);
      *(long **)(*(long *)(lVar4 + uVar3) + 8) = param_2;
      *(long *)(lVar4 + uVar3) = lVar5;
      nn::os::UnlockMutex((MutexType *)(param_1 + 1));
    }
  }
  return;
}

