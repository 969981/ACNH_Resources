
void FUN_018ddabc(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  undefined2 local_4;
  
  lVar5 = *(long *)PTR_DAT_04bb47e0;
  *(undefined1 *)(lVar5 + 0x604) = 1;
  *(undefined4 *)(lVar5 + 0x610) = *(undefined4 *)(lVar5 + 0x614);
  lVar6 = DAT_052c21a0;
  if ((*(char *)(lVar5 + 0x628) != '\0') &&
     (local_4 = CONCAT11((char)*(undefined4 *)(lVar5 + 0x62c),*(undefined1 *)(lVar5 + 0x629)),
     *(short *)(DAT_052c21a0 + 0x78) != local_4)) {
    *(short *)(DAT_052c21a0 + 0x78) = local_4;
    *(undefined1 *)(lVar6 + 0x7a) = 1;
  }
  if (*(char *)(param_1 + 9) == '\x02') {
    return;
  }
  uVar2 = *param_2;
  *(undefined1 *)(param_1 + 9) = 1;
  *(char *)(param_1 + 8) = (char)uVar2;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 1);
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_018ddba4:
    if (7 < *pbVar4) {
LAB_018ddbb0:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        bVar3 = *pbVar4;
        if (bVar3 < 8) goto LAB_018ddc20;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018ddba4;
      }
      goto LAB_018ddbb0;
    }
  }
  bVar3 = *pbVar4;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
LAB_018ddc20:
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 10) = bVar3;
  return;
}

