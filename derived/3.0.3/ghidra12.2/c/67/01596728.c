
bool FUN_01596728(short *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined *puVar4;
  short sVar5;
  ushort uVar6;
  MutexType *pMVar7;
  long lVar8;
  long lVar9;
  
  sVar5 = DAT_04cb6038;
  uVar6 = param_1[8];
  if ((uVar6 >> 2 & 1) == 0) {
    if (*param_1 == DAT_04cb6038) {
      return false;
    }
    if ((uVar6 >> 3 & 1) == 0) goto LAB_01596950;
    lVar8 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar8 + 0x4054) != 5) && (*(int *)(lVar8 + 0x4054) != 6)) goto LAB_01596950;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar8 + 0x4048);
    param_1[8] = uVar6 & 0xffbf | (ushort)(*(int *)(lVar8 + 0x4054) == 6) << 6;
    lVar9 = *(long *)(DAT_05231900 + 0x100);
    plVar1 = (long *)(lVar9 + 0xd3e50);
    memset((void *)(lVar8 + 0x10),0,0x4008);
    *(short *)(lVar8 + 0x4018) = sVar5;
    *(undefined8 **)(lVar8 + 0x4030) = &DAT_0407ebb1;
    *(undefined8 *)(lVar8 + 0x4020) = 0;
    *(undefined8 *)(lVar8 + 0x4048) = 0;
    *(undefined2 *)(lVar8 + 0x4050) = 0;
    *(undefined8 *)(lVar8 + 0x4038) = 0;
    *(undefined8 *)(lVar8 + 0x4040) = 0x100000000;
    *(undefined4 *)(lVar8 + 0x4054) = 0;
    pMVar7 = (MutexType *)(lVar9 + 0xd3e88);
    *(undefined8 *)(lVar8 + 0x4058) = 0;
    *(undefined8 *)(lVar8 + 0x4060) = 0;
    nn::os::LockMutex(pMVar7);
    plVar2 = (long *)(*(int *)(lVar9 + 0xd3e64) + lVar8);
    lVar8 = *plVar1;
    *plVar1 = (long)plVar2;
    *plVar2 = lVar8;
    plVar2[1] = (long)plVar1;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar2;
    }
    *(int *)(lVar9 + 0xd3e60) = *(int *)(lVar9 + 0xd3e60) + 1;
  }
  else {
    if (*(long *)(param_1 + 4) == 0) {
      return false;
    }
    if ((uVar6 >> 3 & 1) == 0) goto LAB_01596950;
    lVar8 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar8 + 0x4054) != 5) && (*(int *)(lVar8 + 0x4054) != 6)) goto LAB_01596950;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar8 + 0x4048);
    param_1[8] = uVar6 & 0xffbf | (ushort)(*(int *)(lVar8 + 0x4054) == 6) << 6;
    lVar9 = *(long *)(DAT_05231900 + 0x100);
    plVar1 = (long *)(lVar9 + 0xd3e50);
    memset((void *)(lVar8 + 0x10),0,0x4008);
    *(undefined8 **)(lVar8 + 0x4030) = &DAT_0407ebb1;
    puVar4 = PTR_DAT_04bb3170;
    *(undefined8 *)(lVar8 + 0x4020) = 0;
    *(undefined8 *)(lVar8 + 0x4048) = 0;
    uVar3 = *(undefined2 *)puVar4;
    *(undefined8 *)(lVar8 + 0x4038) = 0;
    *(undefined8 *)(lVar8 + 0x4040) = 0x100000000;
    *(undefined2 *)(lVar8 + 0x4050) = 0;
    *(undefined2 *)(lVar8 + 0x4018) = uVar3;
    *(undefined4 *)(lVar8 + 0x4054) = 0;
    *(undefined8 *)(lVar8 + 0x4058) = 0;
    *(undefined8 *)(lVar8 + 0x4060) = 0;
    pMVar7 = (MutexType *)(lVar9 + 0xd3e88);
    nn::os::LockMutex(pMVar7);
    plVar2 = (long *)(*(int *)(lVar9 + 0xd3e64) + lVar8);
    lVar8 = *plVar1;
    *plVar1 = (long)plVar2;
    *plVar2 = lVar8;
    plVar2[1] = (long)plVar1;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 8) = plVar2;
    }
    *(int *)(lVar9 + 0xd3e60) = *(int *)(lVar9 + 0xd3e60) + 1;
  }
  nn::os::UnlockMutex(pMVar7);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  uVar6 = param_1[8] & 0xfff7;
  param_1[8] = uVar6;
LAB_01596950:
  return *(long *)(param_1 + 0xc) != 0 && (uVar6 & 0x40) == 0;
}

