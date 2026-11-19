
void FUN_03929ec0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  short sVar6;
  uint uVar7;
  long *plVar8;
  long *__ptr;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = param_1[0x465];
  *param_1 = (long)&PTR_FUN_04b67418;
  puVar1 = PTR_DAT_04bc1010;
  if (lVar9 != 0) {
    __ptr = (long *)(lVar9 + -8);
    if (*__ptr != 0) {
      lVar10 = *__ptr * 0xe0;
      do {
        lVar3 = lVar9 + lVar10;
        if (*(short *)(lVar3 + -6) != -1) {
          lVar11 = *(long *)puVar1;
          nn::os::LockMutex((MutexType *)(lVar11 + 0x580));
          uVar7 = (int)*(short *)(lVar3 + -6) - (uint)*(ushort *)(lVar11 + 0x5c0);
          if (*(uint *)(lVar11 + 0x5a0) <= uVar7) {
            uVar7 = 0;
          }
          lVar4 = *(long *)(lVar11 + 0x5a8) + (long)(int)uVar7 * 0x80;
          sVar6 = *(short *)(lVar4 + 0x76) + -1;
          *(short *)(lVar4 + 0x76) = sVar6;
          if (sVar6 == 0) {
            *(short *)(lVar11 + 0x5c4) = *(short *)(lVar11 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar11 + 0x580));
          *(undefined2 *)(lVar3 + -6) = 0xffff;
        }
        FUN_038fd0e0(lVar3 + -0x90);
        lVar10 = lVar10 + -0xe0;
      } while (lVar10 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
      }
    }
    param_1[0x465] = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  if ((long *)param_1[0x463] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x463] + 8))();
  }
  *(undefined4 *)(param_1 + 0x461) = 0;
  param_1[0x462] = 0;
  param_1[0x463] = 0;
  if ((long *)param_1[0x466] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x466] + 8))();
    param_1[0x466] = 0;
  }
  psVar5 = (short *)((long)param_1 + 0x2302);
  if (*psVar5 != -1) {
    lVar9 = *(long *)puVar1;
    nn::os::LockMutex((MutexType *)(lVar9 + 0x580));
    uVar7 = (int)*psVar5 - (uint)*(ushort *)(lVar9 + 0x5c0);
    if (*(uint *)(lVar9 + 0x5a0) <= uVar7) {
      uVar7 = 0;
    }
    lVar10 = *(long *)(lVar9 + 0x5a8) + (long)(int)uVar7 * 0x80;
    sVar6 = *(short *)(lVar10 + 0x76) + -1;
    *(short *)(lVar10 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar9 + 0x5c4) = *(short *)(lVar9 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar9 + 0x580));
    *psVar5 = -1;
  }
  FUN_038fd0e0(param_1 + 0x44f);
  FUN_038fd0e0(param_1 + 0x43b);
  puVar1 = PTR_DAT_04bbd508 + 0x10;
  param_1[0x415] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x420);
  param_1[0x3f9] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x404);
  param_1[0x3dd] = (long)puVar1;
  FUN_038fd0e0(param_1 + 1000);
  param_1[0x3c1] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x3cc);
  param_1[0x3a5] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x3b0);
  param_1[0x389] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x394);
  param_1[0x36d] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x378);
  param_1[0x351] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0x35c);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x2e4] = (long)puVar1;
  param_1[0x294] = (long)puVar1;
  param_1[0x244] = (long)puVar1;
  param_1[500] = (long)puVar1;
  param_1[0x1ef] = (long)puVar1;
  param_1[0x1ea] = (long)puVar1;
  param_1[0x1e5] = (long)puVar1;
  param_1[0x1e0] = (long)puVar1;
  param_1[0x1db] = (long)puVar1;
  param_1[0x1d6] = (long)puVar1;
  param_1[0x1d1] = (long)puVar1;
  param_1[0x1cc] = (long)puVar1;
  param_1[0x1c7] = (long)puVar1;
  param_1[0x1c2] = (long)puVar1;
  param_1[0x1bd] = (long)puVar1;
  param_1[0x1b8] = (long)puVar1;
  param_1[0x1b3] = (long)puVar1;
  param_1[0x1ae] = (long)puVar1;
  param_1[0x1a9] = (long)puVar1;
  param_1[0x1a4] = (long)puVar1;
  param_1[0x19f] = (long)puVar1;
  param_1[0x19a] = (long)puVar1;
  param_1[0x195] = (long)puVar1;
  param_1[400] = (long)puVar1;
  param_1[0x18b] = (long)puVar1;
  param_1[0x186] = (long)puVar1;
  param_1[0x181] = (long)puVar1;
  param_1[0x17c] = (long)puVar1;
  param_1[0x177] = (long)puVar1;
  param_1[0x172] = (long)puVar1;
  param_1[0x16d] = (long)puVar1;
  param_1[0x168] = (long)puVar1;
  param_1[0x163] = (long)puVar1;
  param_1[0x15e] = (long)puVar1;
  param_1[0x159] = (long)puVar1;
  param_1[0x154] = (long)puVar1;
  param_1[0x14f] = (long)puVar1;
  param_1[0x14a] = (long)puVar1;
  param_1[0x145] = (long)puVar1;
  param_1[0x140] = (long)puVar1;
  param_1[0x13b] = (long)puVar1;
  param_1[0x136] = (long)puVar1;
  param_1[0x131] = (long)puVar1;
  param_1[300] = (long)puVar1;
  param_1[0x127] = (long)puVar1;
  param_1[0x123] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068 + 0x10;
  param_1[0x11d] = (long)puVar2;
  param_1[0x118] = (long)puVar1;
  param_1[0x114] = (long)puVar1;
  param_1[0x10e] = (long)puVar2;
  param_1[0x109] = (long)puVar1;
  param_1[0x105] = (long)puVar1;
  param_1[0xff] = (long)puVar2;
  param_1[0xfa] = (long)puVar1;
  param_1[0xf6] = (long)puVar1;
  param_1[0xf0] = (long)puVar2;
  param_1[0xeb] = (long)puVar1;
  param_1[0xe7] = (long)puVar1;
  param_1[0xe1] = (long)puVar2;
  param_1[0xdc] = (long)puVar1;
  param_1[0xd8] = (long)puVar1;
  param_1[0xd2] = (long)puVar2;
  param_1[0xcd] = (long)puVar1;
  param_1[0xc9] = (long)puVar1;
  param_1[0xc3] = (long)puVar2;
  param_1[0xbe] = (long)puVar1;
  param_1[0xba] = (long)puVar1;
  param_1[0xb4] = (long)puVar2;
  param_1[0xaf] = (long)puVar1;
  param_1[0xab] = (long)puVar1;
  param_1[0xa5] = (long)puVar2;
  param_1[0xa0] = (long)puVar1;
  param_1[0x9c] = (long)puVar1;
  param_1[0x96] = (long)puVar2;
  param_1[0x91] = (long)puVar1;
  param_1[0x8d] = (long)puVar1;
  param_1[0x87] = (long)puVar2;
  param_1[0x82] = (long)puVar1;
  param_1[0x7e] = (long)puVar1;
  param_1[0x78] = (long)puVar2;
  param_1[0x74] = (long)puVar1;
  param_1[0x70] = (long)puVar1;
  param_1[0x6c] = (long)puVar1;
  param_1[0x68] = (long)puVar1;
  param_1[100] = (long)puVar1;
  param_1[0x60] = (long)puVar1;
  param_1[0x5c] = (long)puVar1;
  param_1[0x58] = (long)puVar1;
  param_1[0x54] = (long)puVar1;
  param_1[0x50] = (long)puVar1;
  param_1[0x4c] = (long)puVar1;
  param_1[0x48] = (long)puVar1;
  param_1[0x44] = (long)puVar1;
  param_1[0x40] = (long)puVar1;
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x3a] = (long)puVar2;
  *param_1 = (long)puVar1;
  return;
}

