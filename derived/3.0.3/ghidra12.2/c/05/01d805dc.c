
void FUN_01d805dc(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 local_38;
  ulong local_30;
  uint local_28;
  
  local_28 = 0;
  lVar4 = **(long **)PTR_DAT_04bb27d0;
  cVar1 = *(char *)(lVar4 + 0x473);
  if (cVar1 == '\0') {
    uVar5 = 0;
LAB_01d80644:
    if (((*(uint *)(lVar4 + 200) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 2;
      local_28 = uVar5;
    }
    if (cVar1 != '\x02') goto LAB_01d80660;
LAB_01d80688:
    if (((*(uint *)(lVar4 + 0x1c8) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 8;
      local_28 = uVar5;
    }
    if (cVar1 != '\x04') goto LAB_01d806b0;
LAB_01d806d8:
    if (((*(uint *)(lVar4 + 0x2c8) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 0x20;
      local_28 = uVar5;
    }
    if (cVar1 != '\x06') goto LAB_01d80700;
LAB_01d80728:
    if (((*(uint *)(lVar4 + 0x3c8) ^ 0xffffffff) & 10) == 0) {
      local_28 = uVar5 | 0x80;
      goto LAB_01d80744;
    }
  }
  else {
    bVar2 = ((*(uint *)(lVar4 + 0x48) ^ 0xffffffff) & 10) == 0;
    local_28 = (uint)bVar2;
    uVar5 = (uint)bVar2;
    if (cVar1 != '\x01') goto LAB_01d80644;
LAB_01d80660:
    if (((*(uint *)(lVar4 + 0x148) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 4;
      local_28 = uVar5;
    }
    if (cVar1 != '\x03') goto LAB_01d80688;
LAB_01d806b0:
    if (((*(uint *)(lVar4 + 0x248) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 0x10;
      local_28 = uVar5;
    }
    if (cVar1 != '\x05') goto LAB_01d806d8;
LAB_01d80700:
    if (((*(uint *)(lVar4 + 0x348) ^ 0xffffffff) & 10) == 0) {
      uVar5 = uVar5 | 0x40;
      local_28 = uVar5;
    }
    if (cVar1 != '\a') goto LAB_01d80728;
  }
  if (uVar5 == 0) {
    (**(code **)(*param_1 + 0x78))(param_1);
    *(undefined1 *)((long)param_1 + 0x14) = 1;
    return;
  }
LAB_01d80744:
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    local_38 = (**(code **)(*param_1 + 0x50))(param_1);
    local_30 = (**(code **)(*param_1 + 0x58))(param_1);
    local_30 = local_30 & 0xffffffff;
    uVar3 = FUN_01c84918(*(undefined8 *)PTR_DAT_04bc1060,&local_38,(int)param_1[1]);
    if ((uVar3 & 1) != 0) {
      *(undefined2 *)((long)param_1 + 0x12) = 1;
    }
  }
  return;
}

