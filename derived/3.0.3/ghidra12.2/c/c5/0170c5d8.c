
void FUN_0170c5d8(long *param_1,byte param_2,undefined4 param_3)

{
  uint *puVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  
  lVar2 = FUN_017067d4(param_1,param_3,0);
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x1288), lVar2 == 0)) goto LAB_0170c71c;
  *(byte *)(lVar2 + 0x19) = param_2 & 1;
  pbVar3 = (byte *)(**(code **)(*param_1 + 0x210))(param_1);
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_0170c67c:
    if (*pbVar5 < 8) goto LAB_0170c6e8;
LAB_0170c688:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0170c6e0:
      pbVar5 = &DAT_0548e168;
      goto LAB_0170c6e8;
    }
    lVar6 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    bVar4 = *pbVar5;
    if (7 < bVar4) goto LAB_0170c6e0;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0170c67c;
      }
      goto LAB_0170c688;
    }
LAB_0170c6e8:
    bVar4 = *pbVar5;
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
  }
  bVar7 = *pbVar3;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(bool *)(lVar2 + 0x1a) = bVar7 == bVar4;
LAB_0170c71c:
  *(byte *)((long)param_1 + 0x5f01) = param_2 & 1;
  return;
}

