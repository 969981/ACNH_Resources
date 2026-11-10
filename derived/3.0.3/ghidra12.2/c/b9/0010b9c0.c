
/* WARNING: Type propagation algorithm not settling */

uint FUN_0010b9c0(undefined8 param_1,void *param_2,uint param_3,long param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 auStack_160 [136];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  int local_98;
  undefined4 uStack_94;
  ushort local_90;
  undefined4 local_48 [2];
  
  pcVar7 = *(code **)((long)param_2 + 0x10);
  if (pcVar7 == (code *)0x0) {
    return 0xffff9b95;
  }
  local_48[0] = 0;
  uVar6 = 0;
  if (((param_3 ^ 0xffffffff) & 0xff) != 0) {
    uVar6 = param_3;
  }
  if (*(byte *)((long)param_2 + 0x68) - 1 < 2) {
LAB_0010ba14:
    local_90 = (ushort)uVar6 & 0xff;
    local_a8 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_94 = 0;
    local_c8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    pvStack_c0 = param_2;
    lStack_a0 = param_4;
    local_98 = param_5;
    sVar2 = (*pcVar7)(param_1,10,&local_d8);
    uVar6 = (uint)sVar2;
    if ((int)uVar6 < 0) {
      return uVar6 << 8 | 0xffff8090;
    }
    return uVar6;
  }
  if (*(byte *)((long)param_2 + 0x68) == 3) {
    uVar3 = *(uint *)(pcVar7 + 0x70);
  }
  else {
    uVar3 = (*(uint *)(pcVar7 + 8) & 0xff00ff00) >> 8 | (*(uint *)(pcVar7 + 8) & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  }
  if ((int)uVar3 < 0xe0000) {
    if ((int)uVar3 < 0x40000) {
      if ((uVar3 == 0x80020000) || (uVar3 == 0x80030000)) {
        if ((uVar6 & 0xff) != 0) {
          return 0;
        }
        uVar6 = FUN_0011db10(param_1,param_2,0,param_4,param_5);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        uVar3 = FUN_001003e0(param_4);
        if ((~param_3 & 0xff) == 0) {
          return uVar6;
        }
        if (*(char *)((long)param_2 + 0x74) != '\0') {
          return uVar6;
        }
        if (0xf < *(byte *)((long)param_2 + 0x67)) {
          return uVar6;
        }
        bVar1 = *(byte *)((long)param_2 + 0x66);
        uVar3 = uVar3 & 0xffff;
        if (bVar1 < 0x20) {
          return uVar3;
        }
        memcpy(&local_d8,param_2,0x88);
        uVar6 = (bVar1 >> 4) - 1;
        uVar4 = uVar6;
        while( true ) {
          if (uVar4 == 0) {
            return uVar3;
          }
          sVar2 = FUN_0010be60(param_1,&local_d8,auStack_160,local_48);
          if (sVar2 < 0) break;
          uVar4 = FUN_0011db10(param_1,auStack_160,0,param_4 + (ulong)uVar3 * 2,
                               param_5 + uVar3 * -2 & 0xffff);
          if ((int)uVar4 < 0) {
            return uVar4;
          }
          uVar3 = uVar4 + uVar3;
          memcpy(&local_d8,auStack_160,0x88);
          uVar6 = uVar6 - 1;
          uVar4 = uVar6 & 0xff;
        }
        return (int)sVar2;
      }
      if (uVar3 != 6) {
        return 0xffff8e95;
      }
    }
    else if (1 < uVar3 - 0x50000) {
      if (uVar3 != 0x40000) {
        return 0xffff8e95;
      }
      if (((~param_3 & 0xff) == 0) && (-1 < *(char *)(*(long *)((long)param_2 + 0x30) + 0x27))) {
        return 0;
      }
      uVar6 = FUN_0013e670(param_1,param_2,uVar6,param_4,param_5);
      return uVar6;
    }
    if (((~param_3 & 0xff) == 0) && (-1 < *(char *)(*(long *)((long)param_2 + 0x30) + 0x27))) {
      return 0;
    }
    uVar3 = FUN_0013ba60(param_1,param_2,uVar6,param_4,param_5);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = FUN_001003e0(param_4);
    if ((~param_3 & 0xff) == 0) {
      return uVar3;
    }
    if (*(char *)((long)param_2 + 0x74) != '\0') {
      return uVar3;
    }
    bVar1 = *(byte *)((long)param_2 + 0x67) >> 4;
    if (6 < bVar1) {
      return uVar3;
    }
    if ((1 << (ulong)bVar1 & 99U) == 0) {
      return uVar3;
    }
    bVar1 = *(byte *)((long)param_2 + 0x66);
    uVar4 = uVar4 & 0xffff;
    if (bVar1 < 0x20) {
      return uVar4;
    }
    memcpy(&local_d8,param_2,0x88);
    uVar3 = (bVar1 >> 4) - 1;
    uVar5 = uVar3;
    while( true ) {
      if (uVar5 == 0) {
        return uVar4;
      }
      sVar2 = FUN_0010be60(param_1,&local_d8,auStack_160,local_48);
      uVar5 = (uint)sVar2;
      if ((int)uVar5 < 0) break;
      uVar5 = FUN_0013ba60(param_1,auStack_160,uVar6,param_4 + (ulong)uVar4 * 2,
                           param_5 + uVar4 * -2 & 0xffff);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar4 = uVar5 + uVar4;
      memcpy(&local_d8,auStack_160,0x88);
      uVar3 = uVar3 - 1;
      uVar5 = uVar3 & 0xff;
    }
  }
  else {
    if (uVar3 - 0xe0000 < 2) goto LAB_0010ba14;
    if ((1 < uVar3 + 0xbffb0000) && (uVar3 != 0x40000006)) {
      return 0xffff8e95;
    }
    if (((~param_3 & 0xff) == 0) && (-1 < *(char *)(*(long *)((long)param_2 + 0x30) + 0x27))) {
      return 0;
    }
    uVar3 = FUN_00129d70(param_1,param_2,uVar6,param_4,param_5);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    uVar4 = FUN_001003e0(param_4);
    if ((~param_3 & 0xff) == 0) {
      return uVar3;
    }
    if (*(char *)((long)param_2 + 0x74) != '\0') {
      return uVar3;
    }
    bVar1 = *(byte *)((long)param_2 + 0x67) >> 4;
    if (6 < bVar1) {
      return uVar3;
    }
    if ((1 << (ulong)bVar1 & 99U) == 0) {
      return uVar3;
    }
    bVar1 = *(byte *)((long)param_2 + 0x66);
    uVar4 = uVar4 & 0xffff;
    if (bVar1 < 0x20) {
      return uVar4;
    }
    memcpy(&local_d8,param_2,0x88);
    uVar3 = (bVar1 >> 4) - 1;
    uVar5 = uVar3;
    while( true ) {
      if (uVar5 == 0) {
        return uVar4;
      }
      sVar2 = FUN_0010be60(param_1,&local_d8,auStack_160,local_48);
      uVar5 = (uint)sVar2;
      if ((int)uVar5 < 0) break;
      uVar5 = FUN_00129d70(param_1,auStack_160,uVar6,param_4 + (ulong)uVar4 * 2,
                           param_5 + uVar4 * -2 & 0xffff);
      if ((int)uVar5 < 0) {
        return uVar5;
      }
      uVar4 = uVar5 + uVar4;
      memcpy(&local_d8,auStack_160,0x88);
      uVar3 = uVar3 - 1;
      uVar5 = uVar3 & 0xff;
    }
  }
  return uVar5;
}

