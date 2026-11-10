
void FUN_00146c74(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 0xfa8) = 0;
    uVar1 = *(uint *)(param_1 + 0xfcc) & 0xffffffdf;
  }
  else {
    *(long *)(param_1 + 0xfa8) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfcc) | 0x20;
  }
  *(uint *)(param_1 + 0xfcc) = uVar1;
  return;
}

