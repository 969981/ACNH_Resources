
void FUN_001674fc(long param_1,int *param_2)

{
  FUN_00168504(param_1,*param_2 << 8);
  *(char *)(param_1 + 3) = (char)param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)((long)param_2 + 0xd);
  FUN_00168504(param_1 + 5,param_2[2]);
  return;
}

