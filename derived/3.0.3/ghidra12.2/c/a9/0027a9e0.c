
void FUN_0027a9e0(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  FUN_00227770();
  *param_1 = (long)(PTR_DAT_04bcdb98 + 0x10);
  param_1[0xb] = 0;
  param_1[0xc] = 10000;
  FUN_00227258(param_1 + 0x12);
  *(undefined2 *)(param_1 + 0x17) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xba) = 0x300fd;
  uVar6 = *(ushort *)(DAT_04c603c8 + 0x98) + 0xf >> 4 & 0xff;
  if (uVar6 == 0) {
    param_1[0xf] = 0;
  }
  else {
    uVar3 = FUN_0021f454();
    lVar4 = FUN_00285d60(0x5a0,uVar3,8);
    if (lVar4 != 0) {
      lVar5 = 5;
      do {
        lVar1 = lVar4 + lVar5;
        lVar5 = lVar5 + 6;
        *(undefined4 *)(lVar1 + -5) = 0;
        *(undefined2 *)(lVar1 + -1) = 0;
      } while (lVar5 != 0x5a5);
    }
    param_1[0xf] = lVar4;
    if (1 < uVar6) {
      uVar3 = FUN_0021f454();
      lVar4 = FUN_00285d60(0x5a0,uVar3,8);
      if (lVar4 != 0) {
        lVar5 = 5;
        do {
          lVar1 = lVar4 + lVar5;
          lVar5 = lVar5 + 6;
          *(undefined4 *)(lVar1 + -5) = 0;
          *(undefined2 *)(lVar1 + -1) = 0;
        } while (lVar5 != 0x5a5);
      }
      param_1[0x10] = lVar4;
      if (uVar6 < 3) {
        param_1[0x11] = 0;
        param_1[0xd] = 0;
        *(undefined4 *)(param_1 + 0xe) = 0;
        return;
      }
      uVar3 = FUN_0021f454();
      lVar4 = FUN_00285d60(0x5a0,uVar3,8);
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          puVar2 = (undefined4 *)(lVar4 + lVar5);
          lVar5 = lVar5 + 6;
          *puVar2 = 0;
          *(undefined2 *)(puVar2 + 1) = 0;
        } while (lVar5 != 0x5a0);
      }
      param_1[0x11] = lVar4;
      param_1[0xd] = 0;
      *(undefined4 *)(param_1 + 0xe) = 0;
      return;
    }
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}

