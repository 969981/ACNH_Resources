
uint FUN_03f5914c(long param_1,ulong param_2)

{
  short sVar1;
  short *psVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar10 = (uint)param_2;
  uVar6 = (uint)(short)param_2;
  uVar9 = (ulong)uVar6;
  if ((param_2 & 0xfff) == 0xfff) {
    uVar5 = FUN_03f4bda8(param_1,param_2 >> 0x10,uVar9);
    uVar6 = FUN_03f4bda8(param_1,param_2 + 1 >> 0x10);
    goto LAB_03f59254;
  }
  uVar8 = *(ulong *)(param_1 + (param_2 >> 0x10 & 0xff) * 0x80 + (param_2 >> 0xc & 0xf) * 8 +
                    0x3761b8);
  if (99 < uVar8) {
    pbVar4 = (byte *)(uVar8 + (param_2 & 0xfff));
    uVar5 = (uint)*pbVar4;
    uVar6 = (uint)pbVar4[1];
    goto LAB_03f59254;
  }
  psVar2 = (short *)(param_1 + 0x34dc58);
  if (0xc < uVar8 - 1) goto switchD_03f591f8_caseD_9;
  plVar3 = (long *)(param_1 + 0x36e190);
  switch(uVar8) {
  case 1:
    if (*(char *)(param_1 + 0x34710) != '\0') {
      if (uVar6 >> 8 == 0x23) {
        uVar5 = FUN_03f8a29c(param_1 + 0x20660,uVar9);
        uVar6 = FUN_03f8a29c(param_1 + 0x20660,uVar6 + 1);
        break;
      }
      if ((uVar6 & 0xff00) != 0x2100) goto switchD_03f591f8_caseD_9;
    }
    uVar5 = FUN_03fc1114(param_1 + 0x34780,uVar9);
    uVar6 = FUN_03fc1114(param_1 + 0x34780,uVar6 + 1);
    break;
  case 2:
    uVar5 = FUN_03f4bfbc(param_1,uVar9);
    uVar6 = FUN_03f4bfbc(param_1,uVar6 + 1);
    break;
  case 3:
    uVar9 = uVar9 & 0x7fff | (param_2 >> 0x10 & 0xff) << 0xf;
    uVar5 = (uint)*(byte *)(*plVar3 + (*(uint *)(param_1 + 0x36e198) & uVar9));
    uVar6 = (uint)*(byte *)(*plVar3 + ((ulong)*(uint *)(param_1 + 0x36e198) & uVar9 + 1));
    break;
  case 4:
    lVar7 = *plVar3;
    uVar6 = (uVar6 & 0x7fff) + (uVar10 >> 0x10 & 0xf) * 0x2000;
    goto LAB_03f59380;
  case 5:
    uVar5 = FUN_03f57690(param_1 + 0x34d9d0,uVar9);
    uVar6 = FUN_03f57690(param_1 + 0x34d9d0,uVar6 + 1);
    break;
  case 6:
    uVar5 = FUN_03f5968c(param_1 + 0x34b900,uVar9);
    uVar6 = FUN_03f5968c(param_1 + 0x34b900,uVar6 + 1);
    break;
  case 7:
    if ((uVar6 & 0xfffff800) == 0x3000) {
      uVar5 = (uint)*(byte *)(*(long *)(param_1 + 0x36e1a0) + (param_2 & 0x7ff));
      uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x36e1a0) + ((ulong)(uVar10 + 1) & 0x7ff));
      break;
    }
  case 9:
switchD_03f591f8_caseD_9:
    uVar6 = (uint)*(byte *)(param_1 + 0x34e0b8);
    uVar5 = uVar6;
    break;
  case 8:
    lVar7 = *plVar3;
    param_2 = param_2 & 0x3ffff;
    goto LAB_03f593ac;
  case 10:
    uVar5 = (uint)*(byte *)(*(long *)(param_1 + 0x346b0) + (param_2 & 0x1fff));
    uVar6 = (uint)*(byte *)(*(long *)(param_1 + 0x346b0) + ((ulong)(uVar10 + 1) & 0x1fff));
    break;
  case 0xb:
    lVar7 = *plVar3;
    uVar6 = uVar6 & 0x7fff;
LAB_03f59380:
    uVar5 = (uint)*(byte *)(lVar7 + (ulong)(*(uint *)(param_1 + 0x36e198) & uVar6 - 0x6000));
    uVar6 = (uint)*(byte *)(lVar7 + (ulong)(*(uint *)(param_1 + 0x36e198) & uVar6 - 0x5fff));
    break;
  case 0xc:
    lVar7 = *plVar3;
    param_2 = param_2 & 0xfffff;
LAB_03f593ac:
    uVar5 = (uint)*(byte *)(lVar7 + (*(uint *)(param_1 + 0x36e198) & param_2));
    uVar6 = (uint)*(byte *)(lVar7 + ((ulong)*(uint *)(param_1 + 0x36e198) & param_2 + 1));
    break;
  case 0xd:
    if (((int)uVar6 < -0x4000) || ((uVar6 & 0xfffff000) == 0x6000)) {
      if (*psVar2 == 0) {
        uVar5 = 0xff;
      }
      else {
        sVar1 = *(ushort *)(param_1 + 0x34dc5a) + 1;
        uVar5 = (uint)*(byte *)(param_1 + (ulong)*(ushort *)(param_1 + 0x34dc5a) + 0x34de78);
        *(short *)(param_1 + 0x34dc5a) = sVar1;
        if (*psVar2 == sVar1) {
          *psVar2 = 0;
        }
      }
    }
    else {
      uVar5 = 0x80;
    }
    if (((short)(uVar6 + 1) < -0x4000) || ((uVar6 + 1 & 0xf000) == 0x6000)) {
      if (*psVar2 == 0) {
        uVar6 = 0xff;
      }
      else {
        sVar1 = *(ushort *)(param_1 + 0x34dc5a) + 1;
        uVar6 = (uint)*(byte *)(param_1 + (ulong)*(ushort *)(param_1 + 0x34dc5a) + 0x34de78);
        *(short *)(param_1 + 0x34dc5a) = sVar1;
        if (*psVar2 == sVar1) {
          *psVar2 = 0;
        }
      }
    }
    else {
      uVar6 = 0x80;
    }
  }
LAB_03f59254:
  return uVar5 & 0xff | uVar6 << 8;
}

