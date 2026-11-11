
void FUN_0038bbe4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if ((uVar1 & 1) != 0) {
    FUN_0034f594(param_1 + 0x11,param_2);
    FUN_0034fa68(param_1 + 8,param_2);
    (**(code **)PTR_DAT_04bc9528)
              (param_1[3],param_1[4],param_1[5],param_1[6],*(undefined8 *)PTR_DAT_04bc9530,
               *(undefined4 *)((long)param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

