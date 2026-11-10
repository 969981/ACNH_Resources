
void FUN_00146c4c(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    *(undefined8 *)(param_1 + 4000) = 0;
    uVar1 = *(uint *)(param_1 + 0xfcc) & 0xffffffbf;
  }
  else {
    *(long *)(param_1 + 4000) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfcc) | 0x40;
  }
  *(uint *)(param_1 + 0xfcc) = uVar1;
  return;
}

