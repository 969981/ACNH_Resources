
void FUN_02dfdd68(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  long local_38;
  long *local_30;
  undefined4 local_28;
  
  local_28 = 0;
  bVar2 = *(long *)(param_1 + 0x248) != 0;
  bVar3 = *(long *)(param_1 + 0x250) != 0;
  cVar5 = '\x02';
  if ((bVar2 && bVar3) && *(long *)(param_1 + 600) != 0) {
    cVar5 = '\x03';
  }
  if (!bVar2 || !bVar3) {
    cVar5 = *(long *)(param_1 + 0x240) != 0;
  }
  if (cVar5 == '\x01') {
    local_38 = *(long *)(param_1 + 0x210);
    local_30 = *(long **)(local_38 + (ulong)(*(int *)(param_1 + 0x22c) == 2) * 8 + 0x598);
  }
  else {
    if ((cVar5 != '\x02') && (cVar5 != '\x03')) {
      return;
    }
    local_38 = *(long *)(param_1 + 0x210);
    lVar1 = local_38 + (ulong)(*(int *)(param_1 + 0x22c) == 2) * 8;
    if (*(char *)(param_1 + 0x23ad) == '\0') {
      local_30 = *(long **)(lVar1 + 0x588);
    }
    else {
      local_30 = *(long **)(lVar1 + 0x578);
    }
  }
  if (*(char *)(param_1 + 0x23b1) == '\0') {
    FUN_032017e0(&local_38);
  }
  else {
    uVar4 = (**(code **)(*local_30 + 0xf0))();
    if ((uVar4 & 1) == 0) {
      if (DAT_05739190 != 0) {
        *(byte *)(DAT_05739190 + 0x429) = *(byte *)(DAT_05739190 + 0x429) | 2;
      }
      FUN_032017e0(&local_38);
    }
    *(undefined1 *)(param_1 + 0x23b1) = 0;
  }
  return;
}

