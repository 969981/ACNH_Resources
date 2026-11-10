
void FUN_00142ec4(long param_1)

{
  FUN_0014f3f0();
  FUN_0014f1dc(param_1);
  memset((void *)(param_1 + 0x668),0,0x900);
  FUN_0014f4b8(param_1);
  memset((void *)(param_1 + 0xf98),0,0x188);
  FUN_001642e0(param_1);
  *(undefined8 *)(param_1 + 0x1268) = 0;
  *(undefined8 *)(param_1 + 0x1270) = 0;
  *(undefined8 *)(param_1 + 0x1278) = 0;
  *(undefined8 *)(param_1 + 0x1280) = 0;
  *(undefined8 *)(param_1 + 0x1160) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x1288) = 0;
  *(undefined8 *)(param_1 + 0x1290) = 0;
  *(undefined8 *)(param_1 + 0x1298) = 0;
  *(undefined8 *)(param_1 + 0x12a0) = 0;
  *(uint *)(param_1 + 0xfcc) = *(uint *)(param_1 + 0xfcc) | 0x10;
  FUN_001551a0(param_1);
  return;
}

