
void FUN_01596980(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  if ((*(ushort *)(param_1 + 0x10) >> 3 & 1) != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    if ((*(int *)(lVar5 + 0x4054) == 5) || (*(int *)(lVar5 + 0x4054) == 6)) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar5 + 0x4048);
      *(ushort *)(param_1 + 0x10) =
           *(ushort *)(param_1 + 0x10) & 0xffbf | (ushort)(*(int *)(lVar5 + 0x4054) == 6) << 6;
      lVar6 = *(long *)(DAT_05231900 + 0x100);
      plVar1 = (long *)(lVar6 + 0xd3e50);
      memset((void *)(lVar5 + 0x10),0,0x4008);
      *(undefined8 **)(lVar5 + 0x4030) = &DAT_0407ebb1;
      puVar4 = PTR_DAT_04bb3170;
      *(undefined8 *)(lVar5 + 0x4020) = 0;
      *(undefined8 *)(lVar5 + 0x4048) = 0;
      uVar3 = *(undefined2 *)puVar4;
      *(undefined8 *)(lVar5 + 0x4038) = 0;
      *(undefined8 *)(lVar5 + 0x4040) = 0x100000000;
      *(undefined2 *)(lVar5 + 0x4050) = 0;
      *(undefined2 *)(lVar5 + 0x4018) = uVar3;
      *(undefined4 *)(lVar5 + 0x4054) = 0;
      *(undefined8 *)(lVar5 + 0x4058) = 0;
      *(undefined8 *)(lVar5 + 0x4060) = 0;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xd3e88));
      plVar2 = (long *)(*(int *)(lVar6 + 0xd3e64) + lVar5);
      lVar5 = *plVar1;
      *plVar1 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar1;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(lVar6 + 0xd3e60) = *(int *)(lVar6 + 0xd3e60) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0xd3e88));
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfff7;
    }
  }
  return;
}

