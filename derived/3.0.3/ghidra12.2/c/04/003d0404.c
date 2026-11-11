
void FUN_003d0404(long param_1)

{
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined2 *)(param_1 + 0x2c0) = 1;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x250) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x260) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x290) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x2b0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    FUN_003d0c14(param_1 + 0x18);
    return;
  }
  return;
}

