
void FUN_03876be0(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *__dest;
  undefined *local_168;
  undefined1 *local_160;
  undefined4 local_158;
  undefined1 local_154 [256];
  undefined1 local_54;
  
  FUN_0018b798(param_2 + 0x30);
  nn::os::LockMutex((MutexType *)(param_1 + 0x48));
  uVar4 = *(uint *)(param_2 + 0x18);
  local_158 = 0x101;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  local_54 = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  puVar6 = *(undefined1 **)(param_2 + 0x48);
  uVar12 = *(undefined8 *)(param_2 + 0x58);
  local_154[0] = 0;
  local_168 = PTR_DAT_04bc1120 + 0x10;
  local_160 = local_154;
  if (local_154 != puVar6) {
    lVar8 = 0;
    do {
      if (puVar6[lVar8] == '\0') goto LAB_03876ccc;
      if (puVar6[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_03876ccc;
      }
      if (puVar6[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_03876ccc;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_03876ccc:
    iVar7 = (int)lVar8;
    if (0xff < iVar7) {
      iVar7 = 0x100;
    }
    memcpy(local_154,puVar6,(long)iVar7);
    local_154[iVar7] = 0;
  }
  iVar7 = *(int *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x18);
  if (iVar7 < iVar5) {
    lVar8 = *(long *)(param_1 + 0x10);
    *(int *)(param_1 + 0x20) = iVar7 + 1;
    iVar7 = *(int *)(param_1 + 0x1c) + iVar7;
    iVar1 = 0;
    if (iVar5 <= iVar7) {
      iVar1 = iVar5;
    }
    iVar7 = iVar7 - iVar1;
    puVar9 = (undefined8 *)(lVar8 + (long)iVar7 * 0x140);
    puVar9[3] = uVar3;
    puVar9[4] = uVar12;
    puVar9[1] = CONCAT44(uVar4 % 1000,uVar4 / 1000);
    puVar9[2] = uVar2;
    __dest = (undefined1 *)puVar9[6];
    *puVar9 = uVar11;
    (**(code **)(local_168 + 0x18))(&local_168);
    puVar6 = local_160;
    if (__dest != local_160) {
      (**(code **)(local_168 + 0x18))(&local_168);
      lVar10 = 0;
      do {
        if (local_160[lVar10] == '\0') goto LAB_03876dc0;
        if (local_160[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_03876dc0;
        }
        if (local_160[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_03876dc0;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_03876dc0:
      iVar5 = *(int *)(lVar8 + (long)iVar7 * 0x140 + 0x38);
      iVar7 = (int)lVar10;
      if (iVar5 <= (int)lVar10) {
        iVar7 = iVar5 + -1;
      }
      memcpy(__dest,puVar6,(long)iVar7);
      __dest[iVar7] = 0;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x48));
  return;
}

