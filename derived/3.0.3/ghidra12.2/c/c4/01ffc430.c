
void FUN_01ffc430(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = param_1 + 2;
  param_1[3] = param_1 + 2;
  lVar4 = 0x7e;
  param_1[1] = param_2;
  param_1[5] = param_1 + 8;
  param_1[8] = param_1 + 0x15;
  plVar3 = param_1 + 0x15;
  do {
    lVar4 = lVar4 + -2;
    *plVar3 = (long)(plVar3 + 0xd);
    plVar3[0xd] = (long)(plVar3 + 0x1a);
    plVar3 = plVar3 + 0x1a;
  } while (lVar4 != 0);
  param_1[6] = param_1 + 8;
  param_1[0x67b] = 0;
  *(undefined4 *)(param_1 + 7) = 0x80;
  puVar1 = PTR_DAT_04bb3968;
  *param_1 = &PTR_LAB_04a6d9d8;
  lVar4 = *(long *)puVar1;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x1d88) + 0xf0))(lVar4 + 0x1d88);
  *(int *)(param_1 + 0x688) = (int)(long)(*pfVar2 * 11930465.0);
  lVar4 = *(long *)puVar1;
  pfVar2 = (float *)(**(code **)(*(long *)(lVar4 + 0x1db8) + 0xf0))(lVar4 + 0x1db8);
  fVar5 = *pfVar2;
  *(undefined4 *)((long)param_1 + 0x344c) = 0;
  param_1[0x68c] = param_1 + 0x68b;
  param_1[0x68b] = param_1 + 0x68b;
  *(undefined4 *)(param_1 + 0x68d) = 0;
  param_1[0x70d] = 0;
  param_1[0x691] = param_1 + 0x695;
  *(float *)((long)param_1 + 0x3444) = fVar5;
  param_1[0x711] = 0;
  param_1[0x695] = param_1 + 0x699;
  param_1[0x712] = 0;
  param_1[0x713] = 0;
  param_1[0x699] = param_1 + 0x69d;
  param_1[0x69d] = param_1 + 0x6a1;
  *(float *)(param_1 + 0x689) = fVar5 * fVar5;
  *(float *)(param_1 + 0x68a) = fVar5 * fVar5;
  param_1[0x6a1] = param_1 + 0x6a5;
  param_1[0x68e] = param_1 + 0x691;
  param_1[0x68f] = param_1 + 0x691;
  *(undefined4 *)(param_1 + 0x690) = 0x20;
  param_1[0x6a5] = param_1 + 0x6a9;
  param_1[0x6a9] = param_1 + 0x6ad;
  param_1[0x6ad] = param_1 + 0x6b1;
  param_1[0x6b1] = param_1 + 0x6b5;
  param_1[0x6b5] = param_1 + 0x6b9;
  param_1[0x6b9] = param_1 + 0x6bd;
  param_1[0x6bd] = param_1 + 0x6c1;
  param_1[0x6c1] = param_1 + 0x6c5;
  param_1[0x6c5] = param_1 + 0x6c9;
  param_1[0x6c9] = param_1 + 0x6cd;
  param_1[0x6cd] = param_1 + 0x6d1;
  param_1[0x6d1] = param_1 + 0x6d5;
  param_1[0x6d5] = param_1 + 0x6d9;
  param_1[0x6d9] = param_1 + 0x6dd;
  param_1[0x6dd] = param_1 + 0x6e1;
  param_1[0x6e1] = param_1 + 0x6e5;
  param_1[0x6e5] = param_1 + 0x6e9;
  param_1[0x6e9] = param_1 + 0x6ed;
  param_1[0x6ed] = param_1 + 0x6f1;
  param_1[0x6f1] = param_1 + 0x6f5;
  param_1[0x6f5] = param_1 + 0x6f9;
  param_1[0x6f9] = param_1 + 0x6fd;
  param_1[0x6fd] = param_1 + 0x701;
  param_1[0x701] = param_1 + 0x705;
  param_1[0x705] = param_1 + 0x709;
  param_1[0x709] = param_1 + 0x70d;
  *(undefined2 *)((long)param_1 + 0x3454) = 0xff7f;
  return;
}

