
ulong FUN_0010b7a0(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lStack_40;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  
  pcVar4 = (code *)param_2[2];
  if (pcVar4 == (code *)0x0) {
    return 0x9b2b;
  }
  if (*(byte *)(param_2 + 0xd) - 1 < 2) {
LAB_0010b7c8:
    uStack_50 = 0;
    local_2c = 0;
    local_28 = 0;
    local_70 = 0;
    local_2a = (undefined2)param_4;
    local_48 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = param_2;
    lStack_40 = param_3;
    sVar2 = (*pcVar4)(param_1,5,&local_70);
    uVar3 = (uint)sVar2;
    if ((int)uVar3 < 0) {
      return (ulong)(uVar3 << 8 | 0xffff8090);
    }
  }
  else {
    if (*(byte *)(param_2 + 0xd) == 3) {
      uVar3 = *(uint *)(pcVar4 + 0x70);
    }
    else {
      uVar3 = (*(uint *)(pcVar4 + 8) & 0xff00ff00) >> 8 | (*(uint *)(pcVar4 + 8) & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    }
    if ((int)uVar3 < 0x20002) {
      if ((int)uVar3 < 0) {
        if ((uVar3 != 0x80020000) && (uVar3 != 0x80030000)) {
          return 0x8e2b;
        }
LAB_0010b910:
        uVar3 = FUN_0011ccf0(param_1,param_2,param_3);
        goto LAB_0010b994;
      }
      if (uVar3 < 6) {
        if ((*(byte *)((long)param_2 + 0x67) & 0xf0) == 0x30) goto LAB_0010b94c;
        uVar3 = FUN_00112480(param_2,param_3,param_4);
        goto LAB_0010b994;
      }
      if (uVar3 != 6) {
        if (uVar3 != 0x10000) {
          return 0x8e2b;
        }
        uVar3 = FUN_00114ce0(param_2,param_3,param_4);
        goto LAB_0010b994;
      }
    }
    else {
      if (0xdffff < (int)uVar3) {
        if (1 < uVar3 - 0xe0000) {
          if ((1 < uVar3 + 0xbffb0000) && (uVar3 != 0x40000006)) {
            return 0x8e2b;
          }
          if ((*(byte *)((long)param_2 + 0x67) & 0xf0) == 0x30) goto LAB_0010b94c;
          uVar3 = FUN_00127850(param_2,param_3,param_4);
          goto LAB_0010b994;
        }
        goto LAB_0010b7c8;
      }
      if (uVar3 - 0x20002 < 2) goto LAB_0010b910;
      if (1 < uVar3 - 0x50000) {
        if (uVar3 != 0x40000) {
          return 0x8e2b;
        }
        uVar3 = FUN_0013e390(param_2,param_3,param_4);
        goto LAB_0010b994;
      }
    }
    if ((*(byte *)((long)param_2 + 0x67) & 0xf0) == 0x30) {
LAB_0010b94c:
      uVar5 = (ulong)*(ushort *)(param_2 + 0xe) & 0x7f;
      if ((param_4 & 0xffff) < (int)uVar5 * 2 + 2U) {
        return 0x942b;
      }
      FUN_00100380(param_3,*param_2,uVar5);
      *(undefined2 *)(param_3 + uVar5 * 2) = 0;
      return uVar5;
    }
    uVar3 = FUN_001392e0(param_2,param_3,param_4);
  }
LAB_0010b994:
  uVar1 = 0xffff9b2b;
  if ((uVar3 & 0xffff) != 0) {
    uVar1 = uVar3;
  }
  return (ulong)uVar1;
}

