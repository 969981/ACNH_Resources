
void FUN_0025a938(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [20];
  short local_3c;
  short local_3a;
  
  FUN_0025f0e8(auStack_50,*param_2,*(undefined2 *)((long)param_2 + 0xc));
  uVar1 = FUN_0025f158(auStack_50);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0021fea0(param_1 + 0x2c8);
    if ((uVar1 & 1) != 0) {
      uVar1 = FUN_0021fea0(param_1 + 0x2a8);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = FUN_002200e4(param_1 + 0x2a8,param_1 + 0x2c8), (uVar1 & 1) != 0)) {
        return;
      }
    }
    if ((*(short *)((long)param_2 + 0xc) == (short)(local_3a + local_3c)) &&
       (*(int *)(param_1 + 0x4f0) != 1)) {
      *(undefined1 *)(param_1 + 0x470) = 0;
      FUN_00258ed0(auStack_60,param_1);
    }
  }
  return;
}

