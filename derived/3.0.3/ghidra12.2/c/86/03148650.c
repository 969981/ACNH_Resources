
void FUN_03148650(long param_1,ulong param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  char *__dest;
  uint uVar8;
  undefined1 *puVar9;
  undefined *local_58;
  char *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined1 uStack_33;
  
  puVar7 = (undefined8 *)0x0;
  if ((param_2 & 1) == 0) {
    uStack_38 = 0;
    uStack_33 = 0;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    uStack_3a = 0;
    local_50 = "ZoomOut";
    uStack_34 = 1;
    if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x298);
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = *(undefined8 **)(lVar6 + 0x18);
        if ((*(byte *)(lVar6 + 8) & 10) != 2) {
          puVar7 = (undefined8 *)0x0;
        }
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bbd398);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    iVar4 = *(int *)(puVar7 + 0x38);
    iVar3 = *(int *)(puVar7 + 0x37);
    if (iVar3 <= iVar4) {
      return;
    }
    *(int *)(puVar7 + 0x38) = iVar4 + 1;
    if (puVar7[0x36] == 0) {
      return;
    }
    iVar4 = *(int *)((long)puVar7 + 0x1bc) + iVar4;
    iVar2 = 0;
    if (iVar3 <= iVar4) {
      iVar2 = iVar3;
    }
    puVar9 = (undefined1 *)(puVar7[0x36] + (long)(iVar4 - iVar2) * 0xb0);
    *puVar9 = uStack_33;
    puVar9[1] = uStack_34;
    *(undefined8 *)(puVar9 + 8) = local_48;
    *(undefined4 *)(puVar9 + 0x10) = local_40;
    *(uint *)(puVar9 + 0x14) = CONCAT22(uStack_3a,local_3c);
    *(undefined4 *)(puVar9 + 0x18) = uStack_38;
    (**(code **)(local_58 + 0x18))(&local_58);
    puVar7 = (undefined8 *)(puVar9 + 0x20);
    __dest = (char *)*puVar7;
    if (__dest == local_50) {
      return;
    }
    iVar4 = *(int *)(puVar9 + 0x2c);
    lVar6 = 0;
    do {
      pcVar1 = local_50 + lVar6;
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  else {
    uStack_38 = 0;
    uStack_33 = 0;
    local_58 = PTR_DAT_04bb2020 + 0x10;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0;
    uStack_3a = 0;
    local_50 = "ZoomIn";
    uStack_34 = 1;
    if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x298);
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        puVar7 = *(undefined8 **)(lVar6 + 0x18);
        if ((*(byte *)(lVar6 + 8) & 10) != 2) {
          puVar7 = (undefined8 *)0x0;
        }
      }
    }
    if (((*PTR_DAT_04bbd3a0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbd3a0), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbd398 = PTR_DAT_04bb3ba0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd3a0);
    }
    uVar5 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bbd398);
    if ((uVar5 & 1) == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    iVar4 = *(int *)(puVar7 + 0x38);
    iVar3 = *(int *)(puVar7 + 0x37);
    if (iVar3 <= iVar4) {
      return;
    }
    *(int *)(puVar7 + 0x38) = iVar4 + 1;
    if (puVar7[0x36] == 0) {
      return;
    }
    iVar4 = *(int *)((long)puVar7 + 0x1bc) + iVar4;
    iVar2 = 0;
    if (iVar3 <= iVar4) {
      iVar2 = iVar3;
    }
    puVar9 = (undefined1 *)(puVar7[0x36] + (long)(iVar4 - iVar2) * 0xb0);
    *puVar9 = uStack_33;
    puVar9[1] = uStack_34;
    *(undefined8 *)(puVar9 + 8) = local_48;
    *(undefined4 *)(puVar9 + 0x10) = local_40;
    *(uint *)(puVar9 + 0x14) = CONCAT22(uStack_3a,local_3c);
    *(undefined4 *)(puVar9 + 0x18) = uStack_38;
    (**(code **)(local_58 + 0x18))(&local_58);
    puVar7 = (undefined8 *)(puVar9 + 0x20);
    __dest = (char *)*puVar7;
    if (__dest == local_50) {
      return;
    }
    iVar4 = *(int *)(puVar9 + 0x2c);
    lVar6 = 0;
    do {
      pcVar1 = local_50 + lVar6;
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
  }
  uVar8 = (int)lVar6 - 1;
  if (iVar4 <= (int)uVar8) {
    uVar8 = iVar4 - 1;
  }
  if ((int)uVar8 < 1) {
    uVar8 = 0;
  }
  else {
    memcpy(__dest,local_50,(ulong)uVar8);
    __dest = __dest + uVar8;
  }
  *__dest = '\0';
  *(uint *)(puVar7 + 1) = uVar8;
  return;
}

