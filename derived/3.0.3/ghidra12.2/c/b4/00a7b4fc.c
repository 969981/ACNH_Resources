
undefined8 FUN_00a7b4fc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((((((*(byte *)(param_1 + 0x260) < 8 && *(long *)(param_1 + 0x268) != -1) &&
          *(long *)(param_1 + 0x268) == param_2) ||
        (((*(byte *)(param_1 + 0x270) < 8 && (*(long *)(param_1 + 0x278) != -1)) &&
         (*(long *)(param_1 + 0x278) == param_2)))) ||
       (((*(byte *)(param_1 + 0x280) < 8 && (*(long *)(param_1 + 0x288) != -1)) &&
        (*(long *)(param_1 + 0x288) == param_2)))) ||
      ((((*(byte *)(param_1 + 0x290) < 8 && (*(long *)(param_1 + 0x298) != -1)) &&
        (*(long *)(param_1 + 0x298) == param_2)) ||
       (((*(byte *)(param_1 + 0x2a0) < 8 && (*(long *)(param_1 + 0x2a8) != -1)) &&
        (*(long *)(param_1 + 0x2a8) == param_2)))))) ||
     ((((*(byte *)(param_1 + 0x2b0) < 8 && (*(long *)(param_1 + 0x2b8) != -1)) &&
       (*(long *)(param_1 + 0x2b8) == param_2)) ||
      ((((*(byte *)(param_1 + 0x2c0) < 8 && (*(long *)(param_1 + 0x2c8) != -1)) &&
        (*(long *)(param_1 + 0x2c8) == param_2)) ||
       (((*(byte *)(param_1 + 0x2d0) < 8 && (*(long *)(param_1 + 0x2d8) != -1)) &&
        (*(long *)(param_1 + 0x2d8) == param_2)))))))) {
    return 1;
  }
  if ((((((*(short *)(param_1 + 0x2f0) == -1) ||
         ((uVar1 = 1, *(long *)(param_1 + 0x2e0) != param_2 &&
          (*(long *)(param_1 + 0x2e8) != param_2)))) &&
        ((*(short *)(param_1 + 0x308) == -1 ||
         ((uVar1 = 1, *(long *)(param_1 + 0x2f8) != param_2 &&
          (*(long *)(param_1 + 0x300) != param_2)))))) &&
       ((*(short *)(param_1 + 800) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x310) != param_2 &&
         (*(long *)(param_1 + 0x318) != param_2)))))) &&
      (((*(short *)(param_1 + 0x338) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x328) != param_2 &&
         (*(long *)(param_1 + 0x330) != param_2)))) &&
       (((*(short *)(param_1 + 0x350) == -1 ||
         ((uVar1 = 1, *(long *)(param_1 + 0x340) != param_2 &&
          (*(long *)(param_1 + 0x348) != param_2)))) &&
        ((*(short *)(param_1 + 0x368) == -1 ||
         ((uVar1 = 1, *(long *)(param_1 + 0x358) != param_2 &&
          (*(long *)(param_1 + 0x360) != param_2)))))))))) &&
     ((((*(short *)(param_1 + 0x380) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x370) != param_2 &&
         (*(long *)(param_1 + 0x378) != param_2)))) &&
       ((*(short *)(param_1 + 0x398) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x388) != param_2 &&
         (*(long *)(param_1 + 0x390) != param_2)))))) &&
      (((*(short *)(param_1 + 0x3b0) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x3a0) != param_2 &&
         (*(long *)(param_1 + 0x3a8) != param_2)))) &&
       ((*(short *)(param_1 + 0x3c8) == -1 ||
        ((uVar1 = 1, *(long *)(param_1 + 0x3b8) != param_2 &&
         (*(long *)(param_1 + 0x3c0) != param_2)))))))))) {
    uVar1 = 0;
  }
  return uVar1;
}

