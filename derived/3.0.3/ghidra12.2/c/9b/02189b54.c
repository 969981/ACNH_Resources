
void FUN_02189b54(short *param_1,int param_2)

{
  undefined4 local_24;
  undefined4 local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (*param_1 == -2) {
    if (param_2 == -1) {
      return;
    }
    local_24 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_20 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    iStack_1c = param_2;
  }
  else {
    local_20 = *(undefined4 *)(param_1 + 2);
    iStack_1c = -1;
    local_24 = CONCAT22(param_1[1],*param_1);
  }
  if (-1 < DAT_053fbd80) {
    local_12 = 0;
    local_14 = 0xff00;
    local_18 = 0;
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbd80,&local_18,&local_24,0xc,0);
  }
  return;
}

