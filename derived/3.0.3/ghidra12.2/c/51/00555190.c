
void FUN_00555190(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    lVar2 = 0x20;
    do {
      lVar3 = 0;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(*param_1 + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x100);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x220;
    } while (lVar1 < (int)param_1[1]);
  }
  if (0 < (int)param_1[3]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      lVar3 = 0x20;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[2] + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x100);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x1e0;
    } while (lVar1 < (int)param_1[3]);
  }
  if (0 < (int)param_1[5]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      lVar3 = 0x20;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[4] + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0xe0);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x1a0;
    } while (lVar1 < (int)param_1[5]);
  }
  if (0 < (int)param_1[7]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      lVar3 = 0x20;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[6] + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0xc0);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x160;
    } while (lVar1 < (int)param_1[7]);
  }
  if (0 < (int)param_1[9]) {
    lVar1 = 0;
    lVar2 = 0x20;
    do {
      lVar3 = 0;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[8] + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x80);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0xe0;
    } while (lVar1 < (int)param_1[9]);
  }
  if (0 < (int)param_1[0xb]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      lVar3 = 0x20;
      do {
        FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[10] + lVar2 + lVar3),0);
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x80);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0xb0;
    } while (lVar1 < (int)param_1[0xb]);
  }
  if (0 < (int)param_1[0xd]) {
    lVar1 = 0;
    lVar2 = 0x30;
    do {
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -0x10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -0xe),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -0xc),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -8),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -6),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -4),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + -2),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 2),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 4),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 6),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 8),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0xc),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0xe),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x12),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x14),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x16),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x18),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x1a),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x1c),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x1e),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x20),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x22),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x24),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x26),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x28),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x2a),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x2c),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xc] + lVar2 + 0x2e),0);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x80;
    } while (lVar1 < (int)param_1[0xd]);
  }
  if (0 < (int)param_1[0xf]) {
    lVar1 = 0;
    lVar2 = 0x20;
    do {
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 2),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 4),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 6),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 8),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0xc),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0xe),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x10),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x12),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x14),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x16),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x18),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x1a),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x1c),0);
      FUN_0054a6a0(param_2,param_3,*(undefined2 *)(param_1[0xe] + lVar2 + 0x1e),0);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x40;
    } while (lVar1 < (int)param_1[0xf]);
  }
  return;
}

