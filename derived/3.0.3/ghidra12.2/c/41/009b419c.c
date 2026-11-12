
void FUN_009b419c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xf5b20);
  if (((((lVar2 != 0) && (*(long **)(lVar2 + 0xc20) != (long *)0x0)) &&
       (uVar1 = (**(code **)(**(long **)(lVar2 + 0xc20) + 0x30))(), (uVar1 & 1) != 0)) &&
      (((0.1 < SQRT(*(float *)(lVar2 + 0x9c) * *(float *)(lVar2 + 0x9c) +
                    *(float *)(lVar2 + 0x98) * *(float *)(lVar2 + 0x98)) ||
        (*(int *)(lVar2 + 8) != 0)) ||
       (0.1 < SQRT(*(float *)(lVar2 + 0xa4) * *(float *)(lVar2 + 0xa4) +
                   *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0)))))) ||
     (((((lVar2 = *(long *)(param_1 + 0xf5b28), lVar2 != 0 &&
         (*(long **)(lVar2 + 0xc20) != (long *)0x0)) &&
        ((uVar1 = (**(code **)(**(long **)(lVar2 + 0xc20) + 0x30))(), (uVar1 & 1) != 0 &&
         (((0.1 < SQRT(*(float *)(lVar2 + 0x9c) * *(float *)(lVar2 + 0x9c) +
                       *(float *)(lVar2 + 0x98) * *(float *)(lVar2 + 0x98)) ||
           (*(int *)(lVar2 + 8) != 0)) ||
          (0.1 < SQRT(*(float *)(lVar2 + 0xa4) * *(float *)(lVar2 + 0xa4) +
                      *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0)))))))) ||
       (((lVar2 = *(long *)(param_1 + 0xf5b30), lVar2 != 0 &&
         (*(long **)(lVar2 + 0xc20) != (long *)0x0)) &&
        ((uVar1 = (**(code **)(**(long **)(lVar2 + 0xc20) + 0x30))(), (uVar1 & 1) != 0 &&
         (((0.1 < SQRT(*(float *)(lVar2 + 0x9c) * *(float *)(lVar2 + 0x9c) +
                       *(float *)(lVar2 + 0x98) * *(float *)(lVar2 + 0x98)) ||
           (*(int *)(lVar2 + 8) != 0)) ||
          (0.1 < SQRT(*(float *)(lVar2 + 0xa4) * *(float *)(lVar2 + 0xa4) +
                      *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0)))))))))) ||
      ((((lVar2 = *(long *)(param_1 + 0xf5b38), lVar2 != 0 &&
         (*(long **)(lVar2 + 0xc20) != (long *)0x0)) &&
        (uVar1 = (**(code **)(**(long **)(lVar2 + 0xc20) + 0x30))(), (uVar1 & 1) != 0)) &&
       (((0.1 < SQRT(*(float *)(lVar2 + 0x9c) * *(float *)(lVar2 + 0x9c) +
                     *(float *)(lVar2 + 0x98) * *(float *)(lVar2 + 0x98)) ||
         (*(int *)(lVar2 + 8) != 0)) ||
        (0.1 < SQRT(*(float *)(lVar2 + 0xa4) * *(float *)(lVar2 + 0xa4) +
                    *(float *)(lVar2 + 0xa0) * *(float *)(lVar2 + 0xa0)))))))))) {
    *(undefined4 *)(param_1 + 0xf5b54) = 0;
  }
  else {
    *(int *)(param_1 + 0xf5b54) = *(int *)(param_1 + 0xf5b54) + 1;
  }
  return;
}

