
void FUN_00439bc0(undefined8 *param_1,long *param_2)

{
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [64];
  
  if (param_2 == (long *)0x0) {
    param_2 = (long *)FUN_0043c5f0();
  }
  FUN_0047f5b0(auStack_60,param_1 + 0xc,*param_1,1,0);
  FUN_0043ac00(auStack_70,auStack_60);
  (**(code **)(*param_2 + 0x50))(param_2,auStack_70);
  FUN_0043ac30(auStack_70);
  FUN_0047f660(auStack_60);
  return;
}

