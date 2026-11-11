
void FUN_00552cf0(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  
  if (0 < (int)param_1[1]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00516520(param_2,param_3,*(undefined2 *)(*param_1 + lVar1),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(*param_1 + lVar1 + 2),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(*param_1 + lVar1 + 4),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(*param_1 + lVar1 + 6),param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < (int)param_1[1]);
  }
  if (0 < (int)param_1[3]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[2] + lVar1),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[2] + lVar1 + 2),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[2] + lVar1 + 4),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[2] + lVar1 + 6),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[2] + lVar1 + 8),param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < (int)param_1[3]);
  }
  if (0 < (int)param_1[5]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 2),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 4),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 6),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 8),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 10),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 0xc),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[4] + lVar1 + 0xe),param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x30;
    } while (lVar2 < (int)param_1[5]);
  }
  if (0 < (int)param_1[7]) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 2),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 4),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 6),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 8),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 10),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0xc),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0xe),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x10),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x12),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x14),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x16),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x18),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x1a),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x1c),param_4);
      FUN_00516520(param_2,param_3,*(undefined2 *)(param_1[6] + lVar1 + 0x1e),param_4);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x40;
    } while (lVar2 < (int)param_1[7]);
  }
  return;
}

