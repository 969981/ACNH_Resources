
void FUN_02efd098(int *param_1)

{
  uint *puVar1;
  ulong uVar2;
  long *plVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  byte local_4 [4];
  
  if (DAT_04cd19d8 == 0) {
    return;
  }
  if (*(int *)(DAT_04cd19d8 + 0x15c) == 0) {
    return;
  }
  pbVar4 = PTR_DAT_04bb32e0;
  if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
    pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
  }
  if ((7 < *pbVar4) &&
     (((*(int *)(DAT_04cd19d8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
      (pbVar4 = (byte *)(DAT_054f5738 + 0x11a5), 7 < *pbVar4)))) {
    if (DAT_0537d558 != (long *)0x0) {
      lVar7 = *DAT_0537d558;
      bVar5 = *(byte *)(lVar7 + 0x473);
      pbVar4 = PTR_DAT_04bb5038;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar4 = (byte *)(lVar7 + 0x471);
        }
      }
      local_4[0] = *pbVar4;
      if (local_4[0] < 8) goto LAB_02efd190;
    }
    pbVar4 = &DAT_0548e168;
  }
  local_4[0] = *pbVar4;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_02efd190:
  uVar2 = FUN_00a738a0(local_4,0);
  if ((uVar2 & 1) != 0) {
    bVar5 = *(byte *)(param_1 + 1);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    bVar6 = local_4[0];
    if (7 < local_4[0]) {
      bVar6 = 0xff;
    }
    if ((((bVar5 != bVar6) && ((*param_1 == 0x3b || (*param_1 == 2)))) &&
        (plVar3 = (long *)FUN_0339be20(*(undefined8 *)(DAT_05739190 + 0x10)), plVar3 != (long *)0x0)
        ) && (uVar2 = (**(code **)(*plVar3 + 0xf8))(), (uVar2 & 1) != 0)) {
      (**(code **)(*plVar3 + 0xb0))(plVar3);
    }
  }
  return;
}

