
void FUN_0394220c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_e4 [48];
  undefined1 auStack_b4 [116];
  
  FUN_038e4cec(auStack_b4);
  FUN_038e4d90(auStack_b4,param_1);
  FUN_007535b4(auStack_e4,param_2);
  if ((char)param_3[1] == '\0') {
    if (*(char *)((long)param_3 + 9) == '\0') goto LAB_039422ac;
  }
  else {
    (**(code **)(*param_3 + 0x58))(param_3,(long)param_3 + 0xc);
    *(undefined2 *)(param_3 + 1) = 0x100;
  }
  (**(code **)(*param_3 + 0x60))
            (param_3,(long)param_3 + 0x4c,(long)param_3 + 0xc,*(undefined4 *)((long)param_3 + 0x8c))
  ;
  *(undefined1 *)((long)param_3 + 9) = 0;
LAB_039422ac:
  FUN_03941e10(param_1,auStack_e4,(long)param_3 + 0xc,param_4,param_5,0,param_7);
  return;
}

