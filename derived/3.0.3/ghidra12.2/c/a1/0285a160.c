
void FUN_0285a160(undefined2 *param_1,undefined1 *param_2,undefined2 *param_3,undefined2 *param_4,
                 undefined2 *param_5,byte *param_6,undefined1 *param_7,undefined2 *param_8,
                 undefined2 *param_9,undefined2 *param_10,uint *param_11)

{
  *param_2 = *(undefined1 *)(param_1 + 0xf);
  *param_3 = *param_1;
  *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)param_1 + 3);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 2);
  *param_4 = param_1[4];
  *(undefined1 *)(param_4 + 1) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((long)param_4 + 3) = *(undefined1 *)((long)param_1 + 0xb);
  *(undefined4 *)(param_4 + 2) = *(undefined4 *)(param_1 + 6);
  *param_5 = param_1[8];
  *(undefined1 *)(param_5 + 1) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((long)param_5 + 3) = *(undefined1 *)((long)param_1 + 0x13);
  *(undefined4 *)(param_5 + 2) = *(undefined4 *)(param_1 + 10);
  *param_6 = *(byte *)(param_1 + 0x10) & 1;
  *param_7 = *(undefined1 *)((long)param_1 + 0x1f);
  *param_8 = param_1[0xd];
  *param_9 = param_1[0xc];
  *param_10 = param_1[0xe];
  *param_11 = *(byte *)(param_1 + 0x10) >> 1 & 7;
  return;
}

