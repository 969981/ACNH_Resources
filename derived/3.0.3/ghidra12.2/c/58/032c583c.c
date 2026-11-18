
void FUN_032c583c(undefined8 param_1,char (*param_2) [8])

{
  char acVar1 [8];
  undefined4 uVar2;
  undefined1 auStack_4 [4];
  
  uVar2 = FUN_032c5718(auStack_4);
  acVar1 = s_zh_Hant_0418476d;
  switch(uVar2) {
  case 0:
    *(char *)((long)(param_2 + 8) + 0) = '\x01';
    *(char *)((long)(param_2 + 8) + 1) = '\0';
    *(char *)((long)(param_2 + 8) + 2) = '\0';
    *(char *)((long)(param_2 + 8) + 3) = '\0';
    *param_2 = (char  [8])0x616a;
    return;
  default:
    param_2[2] = (char  [8])0x3931342d7365;
    *param_2 = (char  [8])0x53552d6e65;
    param_2[1] = (char  [8])0x41432d7266;
    break;
  case 2:
  case 3:
    param_2[6] = (char  [8])0x7470;
    param_2[7] = (char  [8])0x7572;
    param_2[4] = (char  [8])0x7469;
    param_2[5] = (char  [8])0x6c6e;
    param_2[2] = (char  [8])0x6564;
    param_2[3] = (char  [8])0x7365;
    *param_2 = (char  [8])0x42472d6e65;
    param_2[1] = (char  [8])0x7266;
    uVar2 = 8;
    goto LAB_032c5924;
  case 4:
    param_2[2] = (char  [8])0x42472d6e65;
    *param_2 = acVar1;
    param_2[1] = (char  [8])0x6f6b;
  }
  uVar2 = 3;
LAB_032c5924:
  *(undefined4 *)param_2[8] = uVar2;
  return;
}

