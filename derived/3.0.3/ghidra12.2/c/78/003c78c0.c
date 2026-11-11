
void FUN_003c78c0(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((char)param_1[7] != '\0') {
    if ((((((param_1[0x28] != 0) &&
           (uVar1 = *(ulong *)(param_1[0x28] + 0x68), param_2 <= uVar1 && uVar1 <= param_3)) ||
          ((param_1[0x29] != 0 &&
           ((uVar1 = *(ulong *)(param_1[0x29] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))))
         || ((param_1[0x2a] != 0 &&
             ((uVar1 = *(ulong *)(param_1[0x2a] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))))
        || (((param_1[0x2b] != 0 &&
             ((uVar1 = *(ulong *)(param_1[0x2b] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))
            || ((param_1[0x2c] != 0 &&
                ((uVar1 = *(ulong *)(param_1[0x2c] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3)))
                ))))) ||
       ((((((param_1[0x2d] != 0 &&
            ((uVar1 = *(ulong *)(param_1[0x2d] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3)))) ||
           ((param_1[0x2e] != 0 &&
            ((uVar1 = *(ulong *)(param_1[0x2e] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))))
          || ((param_1[0x2f] != 0 &&
              ((uVar1 = *(ulong *)(param_1[0x2f] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3)))))
          ) || ((param_1[0x30] != 0 &&
                ((uVar1 = *(ulong *)(param_1[0x30] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3)))
                ))) ||
        (((((((param_1[0x31] != 0 &&
              ((uVar1 = *(ulong *)(param_1[0x31] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))
             || ((param_1[0x32] != 0 &&
                 ((uVar1 = *(ulong *)(param_1[0x32] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))
                 )))) ||
            ((param_1[0x33] != 0 &&
             ((uVar1 = *(ulong *)(param_1[0x33] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))))
           || ((param_1[0x34] != 0 &&
               ((uVar1 = *(ulong *)(param_1[0x34] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3))))
              )) || (((param_1[0x35] != 0 &&
                      ((uVar1 = *(ulong *)(param_1[0x35] + 0x68), param_2 <= uVar1 &&
                       (uVar1 <= param_3)))) ||
                     ((param_1[0x36] != 0 &&
                      ((uVar1 = *(ulong *)(param_1[0x36] + 0x68), param_2 <= uVar1 &&
                       (uVar1 <= param_3)))))))) ||
         ((param_1[0x37] != 0 &&
          ((uVar1 = *(ulong *)(param_1[0x37] + 0x68), param_2 <= uVar1 && (uVar1 <= param_3)))))))))
       ) {
      (**(code **)(*param_1 + 0x18))(param_1);
    }
    if ((param_2 <= (ulong)param_1[0x4d]) && ((ulong)param_1[0x4d] <= param_3)) {
      FUN_003c92bc(param_1 + 0x4d);
    }
    if ((param_2 <= (ulong)param_1[0x50]) && ((ulong)param_1[0x50] <= param_3)) {
      FUN_003c92bc(param_1 + 0x50);
    }
    if ((param_2 <= (ulong)param_1[0x53]) && ((ulong)param_1[0x53] <= param_3)) {
      FUN_003c92bc(param_1 + 0x53);
    }
    if ((param_2 <= (ulong)param_1[0x56]) && ((ulong)param_1[0x56] <= param_3)) {
      FUN_003c92bc(param_1 + 0x56);
      return;
    }
  }
  return;
}

