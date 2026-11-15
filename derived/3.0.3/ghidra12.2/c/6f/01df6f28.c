
undefined8 FUN_01df6f28(long param_1,byte *param_2,undefined8 *param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long *plVar4;
  long lVar5;
  byte bVar6;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_01df6f9c:
    if (7 < *pbVar3) {
LAB_01df6fa8:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar5 + 0x471);
          }
        }
        bVar2 = *pbVar3;
        if (bVar2 < 8) goto LAB_01df7018;
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
        goto LAB_01df6f9c;
      }
      goto LAB_01df6fa8;
    }
  }
  bVar2 = *pbVar3;
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
LAB_01df7018:
  bVar6 = *param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  if (7 < bVar2) {
    bVar2 = 0xff;
  }
  if (bVar6 != bVar2) {
    return 0;
  }
  *(byte *)(param_1 + 0x78) = bVar6;
  if (param_3 != (undefined8 *)0x0) {
    plVar4 = (long *)(param_1 + 0x70);
    *plVar4 = (long)param_3;
    *param_3 = plVar4;
    lVar5 = *plVar4;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((param_4 & 1) == 0) {
    FUN_03ebb160(param_1,2);
    return 1;
  }
  FUN_03ebb160(param_1,1);
  return 1;
}

