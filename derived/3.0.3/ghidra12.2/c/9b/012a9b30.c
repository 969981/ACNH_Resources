
undefined8 FUN_012a9b30(long param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 *__dest;
  uint uVar10;
  undefined1 *puVar11;
  undefined *local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(lVar7 + 0x18);
    if ((*(byte *)(lVar7 + 8) & 10) != 2) {
      puVar8 = (undefined8 *)0x0;
    }
  }
  if (((*PTR_DAT_04bbbfe0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbbfe0), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bbbfd8 = PTR_DAT_04bb3ba0 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbbfe0);
  }
  if (puVar8 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bbbfd8);
    puVar4 = PTR_DAT_04bb2020;
    if ((uVar6 & 1) != 0) {
      uVar9 = *param_2;
      local_34 = 0;
      local_58 = PTR_DAT_04bb2020 + 0x10;
      local_48 = 0;
      local_38 = *(undefined4 *)(param_2 + 1);
      local_50 = DAT_0516ca48;
      iVar5 = *(int *)(puVar8 + 0x38);
      iVar3 = *(int *)(puVar8 + 0x37);
      if (iVar3 <= iVar5) {
        return 0;
      }
      *(int *)(puVar8 + 0x38) = iVar5 + 1;
      if (puVar8[0x36] != 0) {
        iVar5 = *(int *)((long)puVar8 + 0x1bc) + iVar5;
        iVar2 = 0;
        if (iVar3 <= iVar5) {
          iVar2 = iVar3;
        }
        puVar11 = (undefined1 *)(puVar8[0x36] + (long)(iVar5 - iVar2) * 0xb0);
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + 8) = 0;
        local_40._0_4_ = (undefined4)uVar9;
        *(undefined4 *)(puVar11 + 0x10) = (undefined4)local_40;
        local_40._4_4_ = (undefined4)((ulong)uVar9 >> 0x20);
        *(undefined4 *)(puVar11 + 0x14) = local_40._4_4_;
        *(undefined4 *)(puVar11 + 0x18) = local_38;
        local_40 = uVar9;
        (**(code **)(puVar4 + 0x28))(&local_58);
        __dest = *(undefined1 **)(puVar11 + 0x20);
        if (__dest == local_50) {
          return 1;
        }
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
        return 1;
      }
    }
  }
  return 0;
}

