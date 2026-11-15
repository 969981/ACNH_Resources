
uint FUN_01df8b30(byte *param_1)

{
  byte *pbVar1;
  long *plVar2;
  MutexType *pMVar3;
  byte *pbVar4;
  ushort uVar5;
  byte bVar6;
  char cVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long local_40;
  ulong uStack_38;
  
  bVar6 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar6 == 0xffffffffffffffff) {
    return 0xffffffff;
  }
  pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
  pbVar4 = pbVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
  if (7 < bVar6) {
    pbVar4 = pbVar1;
  }
  if ((*pbVar4 >> 3 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(long *)(DAT_05358908 + 0xf88) == 0) {
    return 0xffffffff;
  }
  plVar2 = (long *)(*(long *)(DAT_05358908 + 0xf88) + (ulong)*param_1 * 0x20 + 0x18);
  if (7 < *param_1) {
    plVar2 = &DAT_053565d0;
  }
  if (*plVar2 == 0) {
    return 0xffffffff;
  }
  pMVar3 = (MutexType *)(*(long *)(DAT_05ae6a60 + 0x68) + 0x68);
  nn::os::LockMutex(pMVar3);
  plVar8 = *(long **)(DAT_05ae6a60 + 0x68);
  if (plVar8 != (long *)0x0) {
    local_40 = *plVar2;
    uStack_38 = (ulong)*(byte *)(plVar2 + 1);
    uVar9 = (**(code **)(*plVar8 + 0x100))(plVar8,&local_40);
    if ((uVar9 & 1) != 0) {
      uStack_38 = (ulong)*(byte *)(plVar2 + 1);
      local_40 = *plVar2;
      cVar7 = (**(code **)(**(long **)(DAT_05ae6a60 + 0x68) + 0x108))
                        (*(long **)(DAT_05ae6a60 + 0x68),&local_40);
      if (cVar7 != -1) {
        uVar5 = *(ushort *)
                 (*(long *)(*(long *)(*(long *)(DAT_05ae6a60 + 0x58) + 0x10) +
                           (long)*(int *)(*(long *)(DAT_05ae6a60 + 0x58) + 0x28) * 8) +
                  (long)cVar7 * 2 + 0x228);
        uVar10 = (uint)(uVar5 >> 1);
        if (uVar5 == 0) {
          uVar10 = 0xffffffff;
        }
        goto LAB_01df8c78;
      }
    }
  }
  uVar10 = 0xffffffff;
LAB_01df8c78:
  nn::os::UnlockMutex(pMVar3);
  return uVar10;
}

