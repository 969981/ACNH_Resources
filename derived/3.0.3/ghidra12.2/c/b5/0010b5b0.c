
ulong FUN_0010b5b0(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

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
  long local_48;
  undefined8 uStack_40;
  undefined2 local_2c;
  undefined4 local_2a;
  
  pcVar4 = (code *)param_2[2];
  if (pcVar4 == (code *)0x0) {
    return 0x9b2a;
  }
  if (*(byte *)(param_2 + 0xd) - 1 < 2) {
LAB_0010b5d8:
    uStack_50 = 0;
    local_2a = 0;
    local_70 = 0;
    local_2c = (undefined2)param_4;
    local_68 = 0;
    uStack_60 = 0;
    uStack_40 = 0;
    local_58 = param_2;
    local_48 = param_3;
    sVar2 = (*pcVar4)(param_1,4,&local_70);
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
          return 0x8e2a;
        }
LAB_0010b720:
        uVar3 = FUN_0011cbd0(param_1,param_2,param_3);
        goto LAB_0010b75c;
      }
      if (uVar3 < 6) {
        if (*(byte *)((long)param_2 + 0x67) < 0x10) {
          uVar5 = (ulong)*(ushort *)(param_2 + 0xe) & 0x7f;
          if ((param_4 & 0xffff) < (int)uVar5 * 2 + 2U) {
            return 0x942a;
          }
          if ((int)uVar5 == 0) {
            return 0x9b2a;
          }
          FUN_00100380(param_3,*param_2,uVar5);
          *(undefined2 *)(param_3 + uVar5 * 2) = 0;
          return uVar5;
        }
        uVar3 = FUN_00112950(param_2,param_3,param_4);
        goto LAB_0010b75c;
      }
      if (uVar3 != 6) {
        if (uVar3 != 0x10000) {
          return 0x8e2a;
        }
        uVar3 = FUN_00114b00(param_2,param_3,param_4);
        goto LAB_0010b75c;
      }
    }
    else {
      if (0xdffff < (int)uVar3) {
        if (1 < uVar3 - 0xe0000) {
          if ((1 < uVar3 + 0xbffb0000) && (uVar3 != 0x40000006)) {
            return 0x8e2a;
          }
          uVar3 = FUN_00127f00(param_2,param_3,param_4);
          goto LAB_0010b75c;
        }
        goto LAB_0010b5d8;
      }
      if (uVar3 - 0x20002 < 2) goto LAB_0010b720;
      if (1 < uVar3 - 0x50000) {
        if (uVar3 != 0x40000) {
          return 0x8e2a;
        }
        uVar3 = FUN_0013e220(param_2,param_3,param_4);
        goto LAB_0010b75c;
      }
    }
    uVar3 = FUN_00139d70(param_2,param_3,param_4);
  }
LAB_0010b75c:
  uVar1 = 0xffff9b2a;
  if ((uVar3 & 0xffff) != 0) {
    uVar1 = uVar3;
  }
  return (ulong)uVar1;
}

