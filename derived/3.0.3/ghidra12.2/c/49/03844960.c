
void FUN_03844960(long param_1,long param_2,byte param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined1 *__dest;
  uint uVar10;
  undefined1 *puVar11;
  undefined *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ushort local_34;
  
  nn::os::LockMutex((MutexType *)&DAT_05ae1ae8);
  pbVar9 = &DAT_05ae1b08 + (ulong)*(uint *)(param_1 + 8) * 0x30;
  if (1 < *(uint *)(param_1 + 8)) {
    pbVar9 = &DAT_05ae1b08;
  }
  if (((*pbVar9 & 1) == 0) || (lVar7 = *(long *)(pbVar9 + 8), lVar7 == 0)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(lVar7 + 0x18);
    if ((*(byte *)(lVar7 + 8) & 10) != 2) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bbd3a0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbd3a0);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bbd398);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar6 & 1) != 0) {
      local_50 = *(undefined1 **)(param_2 + 8);
      local_34 = (ushort)(param_3 & 1);
      iVar5 = *(int *)(puVar8 + 0x38);
      local_38 = 0;
      local_58 = PTR_DAT_04bb2020 + 0x10;
      local_48 = 0;
      local_40 = 0;
      iVar3 = *(int *)(puVar8 + 0x37);
      if (iVar5 < iVar3) {
        *(int *)(puVar8 + 0x38) = iVar5 + 1;
        if (puVar8[0x36] != 0) {
          iVar5 = *(int *)((long)puVar8 + 0x1bc) + iVar5;
          iVar2 = 0;
          if (iVar3 <= iVar5) {
            iVar2 = iVar3;
          }
          puVar11 = (undefined1 *)(puVar8[0x36] + (long)(iVar5 - iVar2) * 0xb0);
          *puVar11 = 0;
          puVar11[1] = param_3 & 1;
          *(undefined8 *)(puVar11 + 8) = 0;
          *(undefined4 *)(puVar11 + 0x10) = 0;
          *(undefined4 *)(puVar11 + 0x14) = 0;
          *(undefined4 *)(puVar11 + 0x18) = 0;
          (**(code **)(puVar4 + 0x28))(&local_58);
          __dest = *(undefined1 **)(puVar11 + 0x20);
          if (__dest != local_50) {
            lVar7 = 0;
            do {
              pcVar1 = local_50 + lVar7;
              lVar7 = lVar7 + 1;
            } while (*pcVar1 != '\0');
            uVar10 = (int)lVar7 - 1;
            if (*(int *)(puVar11 + 0x2c) <= (int)uVar10) {
              uVar10 = *(int *)(puVar11 + 0x2c) - 1;
            }
            if ((int)uVar10 < 1) {
              uVar10 = 0;
            }
            else {
              memcpy(__dest,local_50,(ulong)uVar10);
              __dest = __dest + uVar10;
            }
            *__dest = 0;
            *(uint *)(puVar11 + 0x28) = uVar10;
          }
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05ae1ae8);
  return;
}

