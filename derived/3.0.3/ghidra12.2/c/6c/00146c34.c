
void FUN_00146c34(long param_1)

{
  *(undefined8 *)(param_1 + 4000) = 0;
  *(undefined8 *)(param_1 + 0xfa8) = 0;
  *(uint *)(param_1 + 0xfcc) = *(uint *)(param_1 + 0xfcc) & 0xffffff9f;
  return;
}

