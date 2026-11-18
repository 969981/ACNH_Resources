
void FUN_033526a0(long param_1,int *param_2)

{
  undefined4 uVar1;
  int local_28;
  int local_24;
  
  *(undefined8 *)(param_1 + 0x136c) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x1308) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1358) = 0;
  *(undefined1 *)(DAT_05355a60 + 0x484) = 1;
  if (*param_2 != -1) {
    FUN_033618d0(param_1 + 0xa98);
  }
  FUN_03361cd0(param_1 + 0xa98,&local_24,&local_28,param_2[1]);
  if (*(int *)(param_1 + 0x1300) != local_24) {
    *(undefined1 *)(param_1 + 0xa90) = 1;
  }
  if (*(int *)(param_1 + 0x1304) != local_28) {
    *(undefined1 *)(param_1 + 0xa90) = 1;
  }
  *(int *)(param_1 + 0x1300) = local_24;
  *(int *)(param_1 + 0x1304) = local_28;
  if (0 < *(int *)(param_1 + 0x1360)) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x430) + 0xc);
    FUN_03351c40(param_1);
    *(undefined4 *)(param_1 + 0x1364) = uVar1;
  }
  *(undefined1 *)(param_1 + 0xa90) = 1;
  return;
}

