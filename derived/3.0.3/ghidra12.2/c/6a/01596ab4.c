
undefined8 FUN_01596ab4(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((*(ushort *)(param_1 + 0x10) >> 3 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if ((*(int *)(lVar6 + 0x4054) == 5) || (*(int *)(lVar6 + 0x4054) == 6)) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x4048);
    *(ushort *)(param_1 + 0x10) =
         *(ushort *)(param_1 + 0x10) & 0xffbf | (ushort)(*(int *)(lVar6 + 0x4054) == 6) << 6;
    lVar7 = *(long *)(DAT_05231900 + 0x100);
    plVar1 = (long *)(lVar7 + 0xd3e50);
    memset((void *)(lVar6 + 0x10),0,0x4008);
    *(undefined8 **)(lVar6 + 0x4030) = &DAT_0407ebb1;
    puVar4 = PTR_DAT_04bb3170;
    *(undefined8 *)(lVar6 + 0x4020) = 0;
    *(undefined8 *)(lVar6 + 0x4048) = 0;
    uVar3 = *(undefined2 *)puVar4;
    *(undefined8 *)(lVar6 + 0x4038) = 0;
    *(undefined8 *)(lVar6 + 0x4040) = 0x100000000;
    *(undefined2 *)(lVar6 + 0x4050) = 0;
    *(undefined2 *)(lVar6 + 0x4018) = uVar3;
    *(undefined4 *)(lVar6 + 0x4054) = 0;
    *(undefined8 *)(lVar6 + 0x4058) = 0;
    *(undefined8 *)(lVar6 + 0x4060) = 0;
    nn::os::LockMutex((MutexType *)(lVar7 + 0xd3e88));
    plVar2 = (long *)(*(int *)(lVar7 + 0xd3e64) + lVar6);
    lVar6 = *plVar1;
    *plVar1 = (long)plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)plVar1;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    *(int *)(lVar7 + 0xd3e60) = *(int *)(lVar7 + 0xd3e60) + 1;
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0xd3e88));
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfff7;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

