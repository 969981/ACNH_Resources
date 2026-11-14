
void FUN_01d8086c(long *param_1,uint param_2,int param_3)

{
  if (((param_2 & 1) != 0) && (param_3 == (int)param_1[1])) {
    (**(code **)(*param_1 + 0x80))(param_1);
    *(undefined1 *)((long)param_1 + 0x15) = 1;
  }
  return;
}

