
void FUN_0025a48c(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_50 [20];
  short local_3c;
  short local_3a;
  undefined4 local_34;
  
  uVar2 = FUN_0021fea0(param_1 + 0x2c8);
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN_0021fea0(param_1 + 0x2a8);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = FUN_002200e4(param_1 + 0x2a8,param_1 + 0x2c8), (uVar2 & 1) != 0)) {
      FUN_0025f174(auStack_50,*param_2,*(undefined2 *)((long)param_2 + 0xc),0x21,0);
      uVar2 = FUN_0025f1e8(auStack_50);
      if (((uVar2 & 1) != 0) &&
         ((*(short *)((long)param_2 + 0xc) == (short)(local_3a + local_3c) &&
          (uVar1 = FUN_0025975c(param_1,param_3 + 8), (uVar1 >> 0xf & 1) == 0)))) {
        FUN_0025f51c(*(undefined8 *)(param_1 + 0x410),(int)(short)uVar1,local_34);
      }
    }
  }
  return;
}

