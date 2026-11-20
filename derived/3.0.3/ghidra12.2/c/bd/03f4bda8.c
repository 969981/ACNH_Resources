
ulong FUN_03f4bda8(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  long *plVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)(param_1 + (param_2 & 0xff) * 0x80 + (ulong)(param_3 >> 0xc & 0xf) * 8 +
                    0x3761b8);
  if (99 < uVar8) {
    return (ulong)*(byte *)(uVar8 + ((ulong)param_3 & 0xfff));
  }
  if (0xc < uVar8 - 1) goto switchD_03f4be04_caseD_9;
  plVar4 = (long *)(param_1 + 0x36e190);
  switch(uVar8) {
  case 1:
    if (*(char *)(param_1 + 0x34710) != '\0') {
      if ((param_3 & 0xff00) == 0x2300) {
        uVar8 = FUN_03f8a29c(param_1 + 0x20660,param_3);
        return uVar8;
      }
      if ((param_3 & 0xff00) != 0x2100) goto switchD_03f4be04_caseD_9;
    }
    uVar8 = FUN_03fc1114(param_1 + 0x34780,param_3);
    return uVar8;
  case 2:
    uVar8 = FUN_03f4bfbc(param_1,param_3);
    return uVar8;
  case 3:
    lVar7 = *plVar4;
    uVar8 = (ulong)param_3 & 0x7fff | (param_2 & 0xff) << 0xf;
    break;
  case 4:
    lVar7 = *plVar4;
    param_3 = (param_3 & 0x7fff) + ((uint)param_2 & 0xf) * 0x2000;
    goto LAB_03f4bf28;
  case 5:
    uVar8 = FUN_03f57690(param_1 + 0x34d9d0,param_3);
    return uVar8;
  case 6:
    bVar6 = *(byte *)(*(long *)(param_1 + 0x34d908) + ((ulong)param_3 & 0xffff));
    if ((param_3 & 0xffff) != 0x7f5e) {
      return (ulong)bVar6;
    }
    uVar1 = (uint)(*(char *)(param_1 + 0x34d910) != '\0') << 6;
    uVar2 = (uint)(*(char *)(param_1 + 0x34d978) != '\0') << 1;
    uVar5 = bVar6 & 0xbd | uVar1 | uVar2 | 1;
    if (*(int *)(param_1 + 0x34d970) == 0) {
      uVar5 = bVar6 & 0xbc | uVar1 | uVar2;
    }
    return (ulong)uVar5;
  case 7:
    if ((param_3 & 0xf800) == 0x3000) {
      return (ulong)*(byte *)(*(long *)(param_1 + 0x36e1a0) + ((ulong)param_3 & 0x7ff));
    }
  case 9:
switchD_03f4be04_caseD_9:
    return (ulong)*(byte *)(param_1 + 0x34e0b8);
  case 8:
    lVar7 = *plVar4;
    uVar8 = (ulong)param_3 & 0xffff | (param_2 & 3) << 0x10;
    break;
  case 10:
    return (ulong)*(byte *)(*(long *)(param_1 + 0x346b0) + ((ulong)param_3 & 0x1fff));
  case 0xb:
    lVar7 = *plVar4;
    param_3 = param_3 & 0x7fff;
LAB_03f4bf28:
    uVar8 = (ulong)(param_3 - 0x6000);
    break;
  case 0xc:
    lVar7 = *plVar4;
    uVar8 = (ulong)param_3 & 0xffff | (param_2 & 0xf) << 0x10;
    break;
  case 0xd:
    if ((-0x4001 < (short)param_3) && ((param_3 & 0xf000) != 0x6000)) {
      return 0x80;
    }
    if (*(short *)(param_1 + 0x34dc58) == 0) {
      return 0xff;
    }
    sVar3 = *(ushort *)(param_1 + 0x34dc5a) + 1;
    uVar8 = (ulong)*(byte *)(param_1 + (ulong)*(ushort *)(param_1 + 0x34dc5a) + 0x34de78);
    *(short *)(param_1 + 0x34dc5a) = sVar3;
    if (*(short *)(param_1 + 0x34dc58) == sVar3) {
      *(undefined2 *)(param_1 + 0x34dc58) = 0;
      return uVar8;
    }
    return uVar8;
  }
  return (ulong)*(byte *)(lVar7 + (*(uint *)(param_1 + 0x36e198) & uVar8));
}

