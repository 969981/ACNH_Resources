
undefined8 FUN_01cf5e90(undefined8 *param_1,char *param_2)

{
  void *__dest;
  byte bVar1;
  void *__dest_00;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  if ((*param_2 == '\x02') && (uVar3 = FUN_01cfed80(param_1 + 1), (uVar3 & 1) != 0)) {
    bVar1 = 4;
    if (param_2[0x67] != 99) {
      bVar1 = param_2[0x67];
    }
    if ((bVar1 == 0) || (bVar1 < 100)) {
      cVar5 = (char)DAT_0534cef8;
    }
    else {
      cVar5 = bVar1 + 0x9f;
    }
    *(char *)((long)param_1 + 0x8a5) = cVar5;
    uVar2 = *(undefined4 *)(param_2 + 0x490);
    *(char *)(param_1 + 0xf) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x79) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x7a) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x494);
    *(char *)((long)param_1 + 0x7b) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x7c) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x7d) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x498);
    *(char *)((long)param_1 + 0x7e) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x7f) = (char)((uint)uVar2 >> 0x10);
    *(char *)(param_1 + 0x10) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x49c);
    *(char *)((long)param_1 + 0x81) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x82) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x83) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4a0);
    *(char *)((long)param_1 + 0x84) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x85) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x86) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4a4);
    *(char *)((long)param_1 + 0x87) = (char)((uint)uVar2 >> 0x18);
    *(char *)(param_1 + 0x11) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x89) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4a8);
    *(char *)((long)param_1 + 0x8a) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x8b) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x8c) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4ac);
    *(char *)((long)param_1 + 0x8d) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x8e) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x8f) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4b0);
    *(char *)(param_1 + 0x12) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x91) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x92) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4b4);
    *(char *)((long)param_1 + 0x93) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x94) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x95) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4b8);
    *(char *)((long)param_1 + 0x96) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x97) = (char)((uint)uVar2 >> 0x10);
    *(char *)(param_1 + 0x13) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4bc);
    *(char *)((long)param_1 + 0x99) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x9a) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x9b) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4c0);
    *(char *)((long)param_1 + 0x9c) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0x9d) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0x9e) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4c4);
    *(char *)((long)param_1 + 0x9f) = (char)((uint)uVar2 >> 0x18);
    *(char *)(param_1 + 0x14) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0xa1) = (char)((uint)uVar2 >> 8);
    uVar2 = *(undefined4 *)(param_2 + 0x4c8);
    *(char *)((long)param_1 + 0xa2) = (char)((uint)uVar2 >> 0x18);
    *(char *)((long)param_1 + 0xa3) = (char)((uint)uVar2 >> 0x10);
    *(char *)((long)param_1 + 0xa4) = (char)((uint)uVar2 >> 8);
    if (0 < *(int *)(param_2 + 0xcf0)) {
      uVar6 = *(uint *)(param_2 + 0x4d0);
      __dest = (void *)((long)param_1 + 0xa5);
      if (0x1ff < uVar6) {
        uVar6 = 0x200;
      }
      memcpy(__dest,param_2 + 0x4d8,(ulong)uVar6);
      if (1 < *(int *)(param_2 + 0xcf0)) {
        uVar6 = *(uint *)(param_2 + 0x6d8);
        if (0x1ff < uVar6) {
          uVar6 = 0x200;
        }
        memcpy((void *)((long)param_1 + 0x2a5),param_2 + 0x6e0,(ulong)uVar6);
        if (2 < *(int *)(param_2 + 0xcf0)) {
          uVar6 = *(uint *)(param_2 + 0x8e0);
          if (0x1ff < uVar6) {
            uVar6 = 0x200;
          }
          memcpy((void *)((long)param_1 + 0x4a5),param_2 + 0x8e8,(ulong)uVar6);
          if (3 < *(int *)(param_2 + 0xcf0)) {
            uVar6 = *(uint *)(param_2 + 0xae8);
            if (0x1ff < uVar6) {
              uVar6 = 0x200;
            }
            memcpy((void *)((long)param_1 + 0x6a5),param_2 + 0xaf0,(ulong)uVar6);
            if (4 < *(int *)(param_2 + 0xcf0)) {
              lVar7 = 4;
              do {
                uVar8 = -(uint)lVar7;
                uVar6 = (uint)lVar7 & 3;
                if (-1 < (int)uVar8) {
                  uVar6 = -(uVar8 & 3);
                }
                uVar8 = *(uint *)(param_2 + 0x4d0);
                __dest_00 = (void *)((long)__dest + (ulong)uVar6 * 0x200);
                if (3 < uVar6) {
                  __dest_00 = __dest;
                }
                if (0x1ff < uVar8) {
                  uVar8 = 0x200;
                }
                memcpy(__dest_00,param_2 + 0x4d8,(ulong)uVar8);
                lVar7 = lVar7 + 1;
              } while (lVar7 < *(int *)(param_2 + 0xcf0));
            }
          }
        }
      }
    }
    FUN_027c1b80(param_1);
    uVar4 = 1;
  }
  else {
    param_1[10] = 0;
    *(undefined1 *)(param_1 + 10) = 2;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined8 *)((long)param_1 + 0x44) = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
    *(undefined1 *)((long)param_1 + 0x71) = 0xee;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
    *(undefined8 *)((long)param_1 + 0x54) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined8 *)((long)param_1 + 0x3c) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    memset(param_1 + 0xf,0,0x830);
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return uVar4;
}

