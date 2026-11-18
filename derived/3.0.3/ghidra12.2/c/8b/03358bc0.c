
void FUN_03358bc0(long param_1,int *param_2)

{
  int local_28;
  int local_24;
  
  *(undefined8 *)(param_1 + 0x17a4) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x1378) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1790) = 0;
  *(undefined1 *)(DAT_05355a60 + 0x484) = 1;
  if (*param_2 != -1) {
    FUN_033618d0(param_1 + 0xb08);
  }
  FUN_03361cd0(param_1 + 0xb08,&local_24,&local_28,param_2[1]);
  if (*(int *)(param_1 + 0x1370) != local_24) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  if (*(int *)(param_1 + 0x1374) != local_28) {
    *(undefined1 *)(param_1 + 0xb00) = 1;
  }
  *(int *)(param_1 + 0x1370) = local_24;
  *(int *)(param_1 + 0x1374) = local_28;
  FUN_03358314(param_1,0);
  *(undefined1 *)(param_1 + 0xb00) = 1;
  return;
}

