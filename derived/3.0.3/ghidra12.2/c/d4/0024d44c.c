
void FUN_0024d44c(long param_1,long *param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  FUN_0025f900();
  lVar1 = (**(code **)(*param_2 + 0x90))(param_2);
  memcpy((void *)(param_1 + 0x18),(void *)(lVar1 + 8),0x480);
  *(int *)(param_1 + 0x4a0) = (int)param_2[0x94];
  FUN_00227af0(auStack_30,param_1 + 0x4a8,param_2 + 0x95);
  *(long *)(param_1 + 0x548) = param_2[0xa9];
  *(int *)(param_1 + 0x558) = (int)param_2[0xab];
  FUN_00227af0(auStack_30,param_1 + 0x560,param_2 + 0xac);
  *(long *)(param_1 + 0x600) = param_2[0xc0];
  *(int *)(param_1 + 0x610) = (int)param_2[0xc2];
  FUN_00227af0(auStack_30,param_1 + 0x618,param_2 + 0xc3);
  *(long *)(param_1 + 0x6b8) = param_2[0xd7];
  *(int *)(param_1 + 0x6c8) = (int)param_2[0xd9];
  FUN_00227af0(auStack_30,param_1 + 0x6d0,param_2 + 0xda);
  *(long *)(param_1 + 0x770) = param_2[0xee];
  *(int *)(param_1 + 0x780) = (int)param_2[0xf0];
  FUN_00227af0(auStack_30,param_1 + 0x788,param_2 + 0xf1);
  *(long *)(param_1 + 0x828) = param_2[0x105];
  *(int *)(param_1 + 0x838) = (int)param_2[0x107];
  FUN_00227af0(auStack_30,param_1 + 0x840,param_2 + 0x108);
  *(long *)(param_1 + 0x8e0) = param_2[0x11c];
  *(int *)(param_1 + 0x8f0) = (int)param_2[0x11e];
  FUN_00227af0(auStack_30,param_1 + 0x8f8,param_2 + 0x11f);
  *(long *)(param_1 + 0x998) = param_2[0x133];
  *(int *)(param_1 + 0x9a8) = (int)param_2[0x135];
  FUN_00227af0(auStack_30,param_1 + 0x9b0,param_2 + 0x136);
  *(long *)(param_1 + 0xa50) = param_2[0x14a];
  memcpy((void *)(param_1 + 0xa58),param_2 + 0x14b,6);
  *(long *)(param_1 + 0xa60) = param_2[0x14c];
  *(int *)(param_1 + 0xa68) = (int)param_2[0x14d];
  memcpy((void *)(param_1 + 0xa6c),(void *)((long)param_2 + 0xa6c),0x170);
  *(undefined4 *)(param_1 + 0xbdc) = *(undefined4 *)((long)param_2 + 0xbdc);
  *(short *)(param_1 + 0xbe0) = (short)param_2[0x17c];
  *(undefined1 *)(param_1 + 0xbe2) = *(undefined1 *)((long)param_2 + 0xbe2);
  return;
}

