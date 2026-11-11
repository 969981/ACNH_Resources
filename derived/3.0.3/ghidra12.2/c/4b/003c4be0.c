
void FUN_003c4be0(long *param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char local_46 [6];
  
  lVar4 = FUN_03b38a74();
  iVar2 = *(int *)(lVar4 + 0x8c0);
  if (iVar2 == 32000) {
    iVar2 = FUN_003c5320(param_2);
    if (iVar2 == 0) goto LAB_003c4c50;
    iVar2 = *(int *)(lVar4 + 0x8c0);
  }
  if (iVar2 != 48000) {
    return;
  }
  iVar2 = FUN_003c5320(param_2);
  if (iVar2 != 1) {
    return;
  }
LAB_003c4c50:
  (**(code **)(*param_2 + 0x58))(param_2,param_4,param_5);
  lVar4 = FUN_03b38a74();
  uVar5 = (**(code **)(*param_2 + 0x18))(param_2,lVar4 + 0x18,param_1);
  if ((uVar5 & 1) != 0) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1);
    uVar3 = (uint)uVar5;
    if (0 < (int)uVar3) {
      uVar6 = uVar5 & 3;
      if (uVar3 < 4) {
        uVar7 = 0;
      }
      else {
        uVar8 = 0;
        do {
          cVar1 = (char)(uVar3 * param_3) + (char)uVar8;
          local_46[uVar8] = cVar1;
          local_46[uVar8 + 1] = cVar1 + '\x01';
          uVar7 = uVar8 + 4;
          local_46[uVar8 + 2] = cVar1 + '\x02';
          local_46[uVar8 + 3] = cVar1 + '\x03';
          uVar8 = uVar7;
        } while ((uVar5 & 0xfffffffc) != uVar7);
      }
      if (uVar6 != 0) {
        iVar2 = uVar3 * param_3 + (int)uVar7;
        pcVar10 = local_46 + uVar7;
        do {
          *pcVar10 = (char)iVar2;
          iVar2 = iVar2 + 1;
          uVar6 = uVar6 - 1;
          pcVar10 = pcVar10 + 1;
        } while (uVar6 != 0);
      }
    }
    (**(code **)(*param_2 + 0x20))(param_2,local_46,local_46,uVar5 & 0xffffffff,uVar5 & 0xffffffff);
    nn::os::LockMutex((MutexType *)(param_1 + 1));
    lVar4 = param_1[5];
    uVar5 = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
    param_2 = param_2 + 1;
    lVar9 = *param_2;
    *param_2 = *(long *)(lVar4 + uVar5);
    *(long **)(lVar9 + 8) = (long *)(lVar4 + uVar5);
    *(long **)(*(long *)(lVar4 + uVar5) + 8) = param_2;
    *(long *)(lVar4 + uVar5) = lVar9;
    nn::os::UnlockMutex((MutexType *)(param_1 + 1));
  }
  return;
}

