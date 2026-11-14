
void FUN_0170c3b0(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  long local_50;
  char local_48;
  char local_47;
  int local_28;
  int iStack_24;
  
  param_2 = *(char *)(param_1 + 0x5f02) == '\0' & param_2;
  *(uint *)(param_1 + 0x11a0) = *(uint *)(param_1 + 0x11a0) & 0xfffffffe | param_2;
  iVar2 = *(int *)(*(long *)(param_1 + 0x48) + 0x230);
  lVar4 = *(long *)(param_1 + 0x1480);
  lVar1 = lVar4 + 0x14 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20;
  bVar3 = (byte)param_2;
  if (((*(char *)(lVar1 + 0x1d) == '\0') || (*(byte *)(lVar1 + 0x1c) != param_2)) &&
     (iStack_24 = *(int *)(lVar1 + 0x14), iStack_24 != 0)) {
    local_28 = *(int *)(lVar4 + 0xc);
    if (iVar2 != 0) {
      local_28 = iVar2;
    }
    FUN_0071c8d0(&local_50,&iStack_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar4 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar1 + 0x1c) = bVar3;
      *(char *)(lVar1 + 0x1d) = '\x01';
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x11a0) = *(uint *)(lVar4 + 0x11a0) & 0xfffffffe | param_2;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x1488);
  lVar1 = lVar4 + 0x14 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar1 + 0x1d) == '\0') || (*(byte *)(lVar1 + 0x1c) != param_2)) &&
     (iStack_24 = *(int *)(lVar1 + 0x14), iStack_24 != 0)) {
    local_28 = *(int *)(lVar4 + 0xc);
    if (iVar2 != 0) {
      local_28 = iVar2;
    }
    FUN_0071c8d0(&local_50,&iStack_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar4 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar1 + 0x1c) = bVar3;
      *(char *)(lVar1 + 0x1d) = '\x01';
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x11a0) = *(uint *)(lVar4 + 0x11a0) & 0xfffffffe | param_2;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x1490);
  lVar1 = lVar4 + 0x14 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20;
  if (((*(char *)(lVar1 + 0x1d) == '\0') || (*(byte *)(lVar1 + 0x1c) != param_2)) &&
     (iStack_24 = *(int *)(lVar1 + 0x14), iStack_24 != 0)) {
    local_28 = *(int *)(lVar4 + 0xc);
    if (iVar2 != 0) {
      local_28 = iVar2;
    }
    FUN_0071c8d0(&local_50,&iStack_24,&local_28,0);
    if (((local_50 != 0) && (local_48 != '\0')) && (local_47 != '\0')) {
      lVar4 = *(long *)(local_50 + 0x60);
      *(byte *)(lVar1 + 0x1c) = bVar3;
      *(char *)(lVar1 + 0x1d) = '\x01';
      if (lVar4 != 0) {
        *(uint *)(lVar4 + 0x11a0) = *(uint *)(lVar4 + 0x11a0) & 0xfffffffe | param_2;
      }
    }
  }
  return;
}

