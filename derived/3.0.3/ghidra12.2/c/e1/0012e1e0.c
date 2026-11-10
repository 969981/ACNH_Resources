
ulong FUN_0012e1e0(long param_1,long param_2,undefined1 *param_3,undefined1 *param_4)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_b0 [112];
  
  if (param_1 == 0) {
    return 0xae74;
  }
  if (param_2 == 0) {
    return 0x8574;
  }
  uVar1 = *(ushort *)(param_2 + 0x80);
  if ((((uVar1 & 0xf0) == 0x30) || ((uVar1 & 0xf0) == 0x60)) && ((uVar1 & 0xf) == 3)) {
    uVar5 = 0x66;
switchD_0012e26c_caseD_3:
    uVar4 = FUN_00105af0(param_1,param_2,auStack_b0,uVar5);
    sVar2 = (short)uVar4;
  }
  else {
    uVar5 = 0x70;
    switch(uVar1 & 0xf) {
    case 0:
      uVar4 = FUN_0010b7a0(param_1,param_2,auStack_b0,0x70);
      sVar2 = (short)uVar4;
      break;
    case 1:
    case 4:
      uVar4 = FUN_00105e20(param_1,param_2,auStack_b0,0x70);
      sVar2 = (short)uVar4;
      break;
    case 2:
      uVar4 = FUN_001310d0(param_1,param_2,auStack_b0,0x70);
      sVar2 = (short)uVar4;
      break;
    case 3:
      goto switchD_0012e26c_caseD_3;
    default:
      return 0x9b42;
    }
  }
  uVar6 = (ulong)uVar4;
  if (-1 < sVar2) {
    uVar1 = *(ushort *)(param_2 + 0x80);
    if ((uVar1 & 0xf) != 2) {
      if ((((uVar1 & 0xf0) == 0x50) || ((uVar1 & 0xf0) == 0x60)) || ((uVar1 & 0xff) == 0x33)) {
        uVar1 = *(ushort *)(param_2 + 0x70);
      }
      else {
        uVar1 = *(ushort *)(param_2 + 0x72);
      }
      uVar6 = (ulong)(uVar1 & 0x7f);
    }
    if (param_3 != (undefined1 *)0x0) {
      if ((uVar6 & 0xffff) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = FUN_00113d80(auStack_b0,uVar6);
      }
      *param_3 = uVar3;
    }
    if (param_4 == (undefined1 *)0x0) {
      uVar6 = 0;
    }
    else if ((uVar4 & 0xffff) == ((uint)uVar6 & 0xffff)) {
      uVar6 = 0;
      *param_4 = 1;
    }
    else {
      uVar3 = FUN_00113d80(auStack_b0 + (uVar6 & 0xffff) * 2,uVar4 - (uint)uVar6);
      uVar6 = 0;
      *param_4 = uVar3;
    }
  }
  return uVar6;
}

