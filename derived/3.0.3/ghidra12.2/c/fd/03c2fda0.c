
ulong FUN_03c2fda0(undefined8 *param_1,long *param_2,undefined4 param_3,uint param_4,uint param_5,
                  byte *param_6,long param_7,long param_8,long param_9,long param_10,int param_11,
                  int param_12,int param_13)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_b2 [106];
  uint local_48;
  uint local_44;
  
  switch(param_3) {
  case 0:
    *param_2 = param_10;
    return 0;
  case 1:
    if (param_7 == 0) {
      return 0xffffffffffffffb8;
    }
    if (*param_6 <= param_4) {
      lVar6 = (ulong)*param_6 * 4;
      uVar3 = *(undefined4 *)(param_8 + lVar6);
      uVar4 = *(undefined4 *)(param_9 + lVar6);
      *param_1 = 0;
      *(undefined1 *)((long)param_1 + 0xb) = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(char *)((long)param_1 + 10) = (char)uVar4;
      *(undefined4 *)((long)param_1 + 0xc) = uVar3;
      *param_2 = (long)param_1;
      return 1;
    }
    break;
  case 2:
    local_44 = param_4;
    uVar5 = FUN_03c35b90(auStack_b2,&local_44,&local_48,param_6,param_7);
    if ((uVar5 < 0xffffffffffffff89) && (local_48 <= param_5)) {
      FUN_03c32910(param_1,auStack_b2,local_44,param_8,param_9);
      *param_2 = (long)param_1;
      return uVar5;
    }
    break;
  case 3:
    if (param_11 != 0) {
      if (param_12 == 0) {
        return 0;
      }
      if (param_13 < 0x19) {
        return 0;
      }
      uVar1 = ((uint)(1 << (ulong)(param_5 & 0x1f)) >> 3) + 1;
      uVar5 = (ulong)uVar1 & 3;
      if (param_5 < 5) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        do {
          lVar2 = *param_2 + lVar6;
          lVar6 = lVar6 + 0x100;
          Hint_Prefetch(lVar2,0,1,0);
          Hint_Prefetch(lVar2 + 0x40,0,1,0);
          Hint_Prefetch(lVar2 + 0x80,0,1,0);
          Hint_Prefetch(lVar2 + 0xc0,0,1,0);
        } while (((ulong)uVar1 & 0x3ffffffc) * 0x40 != lVar6);
      }
      if ((uVar1 & 3) != 0) {
        lVar6 = *param_2 + lVar6;
        do {
          Hint_Prefetch(lVar6,0,1,0);
          lVar6 = lVar6 + 0x40;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return 0;
    }
    break;
  default:
    return 0xffffffffffffffff;
  }
  return 0xffffffffffffffec;
}

