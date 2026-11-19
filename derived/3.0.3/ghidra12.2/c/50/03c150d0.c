
bool FUN_03c150d0(long param_1,uint param_2,int param_3)

{
  if (((((((param_2 == 0) || (((param_2 & 1) != 0 && (*(int *)(param_1 + 0xc) < param_3)))) ||
         (((param_2 >> 1 & 1) != 0 && (*(int *)(param_1 + 0x10) < param_3)))) ||
        (((((param_2 >> 2 & 1) != 0 && (*(int *)(param_1 + 0x14) < param_3)) ||
          (((param_2 >> 3 & 1) != 0 && (*(int *)(param_1 + 0x18) < param_3)))) ||
         (((param_2 >> 4 & 1) != 0 && (*(int *)(param_1 + 0x1c) < param_3)))))) ||
       (((param_2 >> 5 & 1) != 0 && (*(int *)(param_1 + 0x20) < param_3)))) ||
      ((((((param_2 >> 6 & 1) != 0 && (*(int *)(param_1 + 0x24) < param_3)) ||
         (((param_2 >> 7 & 1) != 0 && (*(int *)(param_1 + 0x28) < param_3)))) ||
        (((((param_2 >> 8 & 1) != 0 && (*(int *)(param_1 + 0x2c) < param_3)) ||
          (((param_2 >> 9 & 1) != 0 && (*(int *)(param_1 + 0x30) < param_3)))) ||
         (((((param_2 >> 10 & 1) != 0 && (*(int *)(param_1 + 0x34) < param_3)) ||
           (((param_2 >> 0xb & 1) != 0 && (*(int *)(param_1 + 0x38) < param_3)))) ||
          (((param_2 >> 0xc & 1) != 0 && (*(int *)(param_1 + 0x3c) < param_3)))))))) ||
       (((param_2 >> 0xd & 1) != 0 && (*(int *)(param_1 + 0x40) < param_3)))))) ||
     (((((((((((param_2 >> 0xe & 1) != 0 && (*(int *)(param_1 + 0x44) < param_3)) ||
             (((param_2 >> 0xf & 1) != 0 && (*(int *)(param_1 + 0x48) < param_3)))) ||
            (((param_2 >> 0x10 & 1) != 0 && (*(int *)(param_1 + 0x4c) < param_3)))) ||
           (((param_2 >> 0x11 & 1) != 0 && (*(int *)(param_1 + 0x50) < param_3)))) ||
          ((((param_2 >> 0x12 & 1) != 0 && (*(int *)(param_1 + 0x54) < param_3)) ||
           (((param_2 >> 0x13 & 1) != 0 && (*(int *)(param_1 + 0x58) < param_3)))))) ||
         (((((param_2 >> 0x14 & 1) != 0 && (*(int *)(param_1 + 0x5c) < param_3)) ||
           (((param_2 >> 0x15 & 1) != 0 && (*(int *)(param_1 + 0x60) < param_3)))) ||
          (((((param_2 >> 0x16 & 1) != 0 && (*(int *)(param_1 + 100) < param_3)) ||
            (((param_2 >> 0x17 & 1) != 0 && (*(int *)(param_1 + 0x68) < param_3)))) ||
           ((((param_2 >> 0x18 & 1) != 0 && (*(int *)(param_1 + 0x6c) < param_3)) ||
            (((param_2 >> 0x19 & 1) != 0 && (*(int *)(param_1 + 0x70) < param_3)))))))))) ||
        (((((param_2 >> 0x1a & 1) != 0 && (*(int *)(param_1 + 0x74) < param_3)) ||
          (((param_2 >> 0x1b & 1) != 0 && (*(int *)(param_1 + 0x78) < param_3)))) ||
         (((param_2 >> 0x1c & 1) != 0 && (*(int *)(param_1 + 0x7c) < param_3)))))) ||
       (((param_2 >> 0x1d & 1) != 0 && (*(int *)(param_1 + 0x80) < param_3)))) ||
      (((param_2 >> 0x1e & 1) != 0 && (*(int *)(param_1 + 0x84) < param_3)))))) {
    return false;
  }
  return -1 < (int)param_2 || param_3 <= *(int *)(param_1 + 0x88);
}

