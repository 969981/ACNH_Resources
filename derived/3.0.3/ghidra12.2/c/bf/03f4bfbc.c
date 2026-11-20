
void FUN_03f4bfbc(long *param_1,uint param_2)

{
  byte *pbVar1;
  ushort uVar2;
  short sVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  pbVar1 = (byte *)(param_1 + 0x69c17);
  if ((param_2 & 0xff80) != 0x4300) {
    param_2 = param_2 & 0xffff;
    if (param_2 >> 9 < 0x21) {
      if (param_2 == 0x4017) {
        bVar5 = *pbVar1;
        bVar4 = FUN_03f83bd8(param_1 + 0x69c20);
        bVar4 = bVar5 & 0xe0 | bVar4;
        goto LAB_03f4c154;
      }
      if (param_2 == 0x4016) {
        bVar5 = *pbVar1;
        bVar4 = FUN_03f836d8(param_1 + 0x69c20);
        bVar4 = bVar5 & 0xfc | bVar4;
        goto LAB_03f4c154;
      }
switchD_03f4c090_caseD_4200:
      bVar4 = *pbVar1;
    }
    else {
      switch(param_2) {
      case 0x4200:
      case 0x4201:
      case 0x4202:
      case 0x4203:
      case 0x4204:
      case 0x4205:
      case 0x4206:
      case 0x4207:
      case 0x4208:
      case 0x4209:
      case 0x420a:
      case 0x420b:
      case 0x420c:
      case 0x420d:
      case 0x420e:
      case 0x420f:
        goto switchD_03f4c090_caseD_4200;
      case 0x4210:
        if ((char)param_1[0x69c29] == '\0') {
          bVar4 = *(byte *)((long)param_1 + 0x34e126) | *pbVar1 & 0x70;
        }
        else {
          *(undefined1 *)(param_1 + 0x69c29) = 0;
          bVar4 = *(byte *)((long)param_1 + 0x34e126) | 0x80 | *pbVar1 & 0x70;
        }
        break;
      case 0x4211:
        bVar4 = *(byte *)((long)param_1 + 0x38a44c);
        *(byte *)((long)param_1 + 0x38a44c) = bVar4 & 0x9f;
        *(byte *)(param_1 + 0x71489) = *(byte *)(param_1 + 0x71489) & 0xbf;
        bVar4 = *pbVar1 & 0x7f | ((bVar4 & 0x60) != 0) << 7;
        break;
      case 0x4212:
        sVar3 = *(short *)((long)param_1 + 0x34e122);
        uVar2 = *(ushort *)((long)param_1 + 0x7a0cc);
        if ((int)(uint)uVar2 < (int)sVar3) {
          bVar5 = (int)sVar3 < (int)((uint)uVar2 + *(int *)(*param_1 + 0x2c) + 1);
        }
        else {
          bVar5 = false;
        }
        if (*(int *)(*param_1 + 0x20) <= *(int *)((long)param_1 + 0x34e0bc)) {
          bVar5 = bVar5 | 0x40;
        }
        bVar4 = bVar5 | 0x80;
        if ((int)sVar3 <= (int)(uint)uVar2) {
          bVar4 = bVar5;
        }
        bVar5 = *pbVar1 & 0x3e;
        goto LAB_03f4c184;
      case 0x4213:
        bVar4 = *(byte *)((long)param_1 + 0x34e12a);
        break;
      case 0x4214:
        bVar4 = *(byte *)((long)param_1 + 0x34e134);
        break;
      case 0x4215:
        bVar4 = *(byte *)((long)param_1 + 0x34e135);
        break;
      case 0x4216:
        bVar4 = *(byte *)(param_1 + 0x69c27);
        break;
      case 0x4217:
        bVar4 = *(byte *)((long)param_1 + 0x34e139);
        break;
      case 0x4218:
        bVar4 = FUN_03fe99d4();
        break;
      case 0x4219:
        bVar4 = FUN_03fe9a44();
        break;
      case 0x421a:
        bVar4 = FUN_03fe9ab0();
        break;
      case 0x421b:
        bVar4 = FUN_03fe9b6c();
        break;
      case 0x421c:
        bVar4 = FUN_03fe9c08();
        break;
      case 0x421d:
        bVar4 = FUN_03fe9c94();
        break;
      case 0x421e:
        bVar4 = FUN_03fe9d18();
        break;
      case 0x421f:
        bVar4 = FUN_03fe9dd4();
        break;
      default:
        switch(param_2) {
        case 0x4800:
          bVar4 = *(byte *)(param_1 + 0x69c2b);
          break;
        case 0x4801:
          bVar4 = *(byte *)((long)param_1 + 0x34e159);
          break;
        default:
          goto switchD_03f4c090_caseD_4200;
        case 0x4804:
          bVar4 = *(byte *)((long)param_1 + 0x34e15a);
          break;
        case 0x4805:
          bVar4 = *(byte *)((long)param_1 + 0x34e15b);
          break;
        case 0x4806:
          bVar4 = *(byte *)((long)param_1 + 0x34e15c);
          break;
        case 0x4807:
          bVar4 = *(byte *)((long)param_1 + 0x34e15d);
        }
      }
    }
    goto LAB_03f4c154;
  }
  if (10 < (param_2 & 0xf)) {
    bVar4 = 0;
    goto LAB_03f4c154;
  }
  uVar6 = param_2 >> 4 & 0xf;
  switch(param_2 & 0xf) {
  case 0:
    param_1 = param_1 + (ulong)uVar6 * 10;
    uVar6 = 0xa1f0;
    goto LAB_03f4c14c;
  case 1:
    param_1 = param_1 + (ulong)uVar6 * 10;
    uVar6 = 0xa1e0;
    goto LAB_03f4c14c;
  case 2:
    param_1 = param_1 + (ulong)uVar6 * 10;
    uVar6 = 0xa1d0;
    goto LAB_03f4c14c;
  case 3:
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a1d1);
    break;
  case 4:
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a1d2);
    break;
  case 5:
    param_1 = param_1 + (ulong)uVar6 * 10;
    uVar6 = 0xa1ec;
    goto LAB_03f4c14c;
  case 6:
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a1ed);
    break;
  case 7:
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a1d6);
    break;
  case 8:
    param_1 = param_1 + (ulong)uVar6 * 10;
    uVar6 = 0xa1d8;
LAB_03f4c14c:
    bVar4 = *(byte *)((long)param_1 + (ulong)(uVar6 | 0x380000));
    break;
  case 9:
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a1d9);
    break;
  case 10:
    bVar5 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a20a);
    bVar4 = *(byte *)((long)param_1 + (ulong)uVar6 * 0x50 + 0x38a209);
LAB_03f4c184:
    bVar4 = bVar4 | bVar5;
  }
LAB_03f4c154:
  *pbVar1 = bVar4;
  return;
}

