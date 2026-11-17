
void FUN_02f09cd4(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_02f09d40:
    if (7 < *pbVar3) {
LAB_02f09d4c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar4 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar4 + 0x471);
          }
        }
        bVar2 = *pbVar3;
        if (bVar2 < 8) goto LAB_02f09dbc;
      }
      pbVar3 = &DAT_0548e168;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02f09d40;
      }
      goto LAB_02f09d4c;
    }
  }
  bVar2 = *pbVar3;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
LAB_02f09dbc:
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  *(byte *)(*(long *)(param_1 + 0x238) + 0x1f8) = bVar2;
  *(undefined1 *)(*(long *)(param_1 + 0x238) + 0x2750) = 1;
  plVar5 = *(long **)(param_1 + 0x238);
  if (((int)plVar5[0x15] == 5) || ((int)plVar5[0x15] == 2)) {
    FUN_03869260(param_1,plVar5);
    *(undefined1 *)((long)plVar5 + 0x165) = 1;
  }
  else if ((*(uint *)(plVar5 + 0x15) < 7) &&
          ((1 << (ulong)(*(uint *)(plVar5 + 0x15) & 0x1f) & 0x58U) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02f09e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0xa8))(plVar5);
    return;
  }
  return;
}

