
void FUN_0201366c(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long local_50;
  char local_48;
  char local_47;
  int local_28;
  int local_24;
  
  lVar6 = *(long *)(param_1 + 0x6098);
  puVar1 = (uint *)(param_1 + 0x60c0);
  uVar5 = *puVar1;
  *(uint *)(param_1 + 0x11a0) = *(uint *)(param_1 + 0x11a0) & 0xfffffffe | uVar5 & 1;
  iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  uVar3 = uVar5 >> 3 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x60a0);
  uVar3 = uVar5 >> 4 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x60a8);
  uVar3 = uVar5 >> 1 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x60b0);
  uVar3 = uVar5 >> 2 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x1480);
  uVar3 = uVar5 >> 6 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x1488);
  uVar3 = uVar5 >> 6 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x1490);
  uVar3 = uVar5 >> 6 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
    uVar5 = *puVar1;
    iVar4 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  }
  lVar6 = *(long *)(param_1 + 0x60b8);
  uVar3 = uVar5 >> 5 & 1;
  lVar2 = lVar6 + 0x14 + ((ulong)*(uint *)(lVar6 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar2 + 0x1d) == '\0') || (*(byte *)(lVar2 + 0x1c) != uVar3)) &&
     (local_24 = *(int *)(lVar2 + 0x14), local_24 != 0)) {
    local_28 = *(int *)(lVar6 + 0xc);
    if (iVar4 != 0) {
      local_28 = iVar4;
    }
    FUN_0071c8d0(&local_50,&local_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar6 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar2 + 0x1c) = (byte)uVar3;
      *(char *)(lVar2 + 0x1d) = '\x01';
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x11a0) = *(uint *)(lVar6 + 0x11a0) & 0xfffffffe | uVar3;
      }
    }
  }
  return;
}

