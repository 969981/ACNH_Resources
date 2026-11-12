
void FUN_00af63a8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = (long)(PTR_DAT_04bbb810 + 0x10);
  param_1[1] = *param_2;
  lVar6 = param_2[1];
  param_1[5] = (long)(param_1 + 6);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x10;
  *(int *)(param_1 + 2) = (int)lVar6;
  *param_1 = (long)&PTR_LAB_04934988;
  memset((void *)((long)param_1 + 0xb4),0,0x608);
  param_1[0xd8] = (long)param_1;
  puVar5 = PTR_DAT_04bb6570;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  puVar3 = PTR_DAT_04bb2020;
  param_1[0xdb] = (long)"RailID";
  param_1[0xdd] = (long)param_1;
  param_1[0xe0] = (long)"IsWarp";
  puVar4 = PTR_DAT_04bb6568;
  puVar1 = puVar5 + 0x10;
  param_1[6] = (long)(param_1 + 0xd9);
  param_1[7] = (long)(param_1 + 0xde);
  *(undefined4 *)(param_1 + 4) = 2;
  puVar2 = puVar3 + 0x10;
  param_1[8] = (long)(param_1 + 0xe3);
  param_1[0xde] = (long)(puVar4 + 0x10);
  param_1[0xe3] = (long)(puVar4 + 0x10);
  param_1[0xe5] = (long)"IsReverse";
  *(undefined4 *)(param_1 + 4) = 3;
  lVar6 = param_1[0xd8];
  param_1[0xd9] = (long)puVar1;
  param_1[0xda] = (long)puVar2;
  param_1[0xdf] = (long)puVar2;
  *(undefined1 *)(param_1 + 0xe1) = 0;
  param_1[0xe2] = (long)param_1;
  param_1[0xe4] = (long)puVar2;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  param_1[0xe7] = (long)param_1;
  param_1[0xe8] = (long)puVar1;
  param_1[0xe9] = (long)puVar2;
  param_1[0xea] = (long)"PointA";
  *(undefined4 *)(param_1 + 0xeb) = 0;
  param_1[0xec] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0xe8;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0xd8];
  }
  param_1[0xed] = (long)puVar1;
  param_1[0xee] = (long)puVar2;
  param_1[0xef] = (long)"PointB";
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xf1] = lVar6;
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0xed;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
    lVar6 = param_1[0xd8];
  }
  *(undefined4 *)(param_1 + 0xf5) = 0;
  param_1[0xf6] = lVar6;
  param_1[0xf2] = (long)(puVar5 + 0x10);
  param_1[0xf3] = (long)(puVar3 + 0x10);
  param_1[0xf4] = (long)"MoveType";
  if (*(int *)(lVar6 + 0x20) < *(int *)(lVar6 + 0x24)) {
    *(long **)(*(long *)(lVar6 + 0x28) + (long)*(int *)(lVar6 + 0x20) * 8) = param_1 + 0xf2;
    *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
  }
  return;
}

