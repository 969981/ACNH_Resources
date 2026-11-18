
undefined8 FUN_03628aac(long param_1,ulong param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;
  
  uVar7 = param_2 & 7;
  uVar5 = (uint)param_2 & 0xf8;
  if ((int)uVar7 == 6) {
    uVar2 = FUN_035f9094(param_1 + 0xec0,*(undefined2 *)(param_1 + 0x10c6));
    FUN_03638610(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + (ulong)(byte)(&DAT_04101658)[uVar7] + 0x10c0);
  }
  bVar4 = (byte)uVar2;
  *(byte *)(param_1 + 0x1a1) = bVar4;
  switch(uVar5 >> 3) {
  case 0:
    uVar5 = uVar2 & 0xff;
    bVar4 = (byte)(uVar2 << 1) | (byte)(uVar5 >> 7);
    goto switchD_035e8de8_caseD_7f;
  case 1:
    bVar1 = (uVar2 & 0xff) == 0;
    bVar4 = (byte)(uVar2 << 7) | (byte)((uVar2 & 0xff) >> 1);
    goto LAB_03628c40;
  case 2:
    uVar5 = uVar2 << 1 | *(byte *)(param_1 + 0x10c0) >> 4 & 1;
    bVar6 = (byte)(uVar2 >> 3) & 0x10;
    goto LAB_03628be0;
  case 3:
    bVar6 = (byte)((uVar2 & 1) << 4);
    uVar5 = (*(byte *)(param_1 + 0x10c0) & 0x1ffffff0) << 3 | uVar2 >> 1 & 0x7f;
LAB_03628be0:
    bVar4 = (byte)uVar5;
    *(byte *)(param_1 + 0x10c0) = bVar6 | ((uVar5 & 0xff) == 0) << 7;
    break;
  case 4:
    bVar4 = (byte)(uVar2 << 1);
    uVar5 = uVar2 << 1 & 0xfe;
switchD_035e8de8_caseD_7f:
    bVar1 = uVar5 == 0;
    bVar6 = (byte)(uVar2 >> 3) & 0x10;
LAB_03628c44:
    bVar6 = bVar6 | bVar1 << 7;
LAB_03628c48:
    *(byte *)(param_1 + 0x10c0) = bVar6;
    break;
  case 5:
    uVar5 = uVar2 >> 1 & 0x7f;
    bVar4 = bVar4 & 0x80 | (byte)uVar5;
    *(byte *)(param_1 + 0x10c0) =
         (byte)((uVar2 & 1) << 4) | ((uVar2 & 0x80) == 0 && uVar5 == 0) << 7;
    break;
  case 6:
    bVar4 = (byte)(uVar2 << 4) | (byte)((uVar2 & 0xff) >> 4);
    bVar6 = ((uVar2 & 0xff) == 0) << 7;
    goto LAB_03628c48;
  case 7:
    bVar4 = (byte)(uVar2 >> 1) & 0x7f;
    bVar1 = (uVar2 & 0xff) < 2;
LAB_03628c40:
    bVar6 = (byte)((uVar2 & 1) << 4);
    goto LAB_03628c44;
  default:
    bVar4 = 0xa0;
    if (((uVar2 & 0xff) >> (ulong)(uVar5 + 0x7c0 >> 3 & 0x1f) & 1) != 0) {
      bVar4 = 0x20;
    }
    *(byte *)(param_1 + 0x10c0) = *(byte *)(param_1 + 0x10c0) & 0x10 | bVar4;
    goto LAB_03628c7c;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
    bVar4 = bVar4 & ((byte)(1 << (ulong)(uVar5 + 0x780 >> 3 & 0x1f)) ^ 0xff);
    break;
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    bVar4 = bVar4 | (byte)(1 << (ulong)(uVar5 + 0x740 >> 3 & 0x1f));
  }
  *(byte *)(param_1 + 0x1a1) = bVar4;
  if ((int)uVar7 == 6) {
    uVar3 = 0;
  }
  else {
    *(byte *)(param_1 + (ulong)(byte)(&DAT_04101658)[uVar7] + 0x10c0) = bVar4;
LAB_03628c7c:
    uVar3 = 1;
  }
  return uVar3;
}

