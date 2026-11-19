
void FUN_03bb9f34(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined *local_40;
  char *pcStack_38;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "unit_distance_curve_reader";
  plVar1 = (long *)FUN_038c6d48(0x100000,&local_40,
                                *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x108),8,0xffffffff,0);
  uVar2 = FUN_03bbb220(plVar1,param_1 + 8,param_2);
  if ((uVar2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f000000;
    if (*(int *)(param_1 + 0x60) == 1) {
      fVar3 = 1.999939;
    }
    else {
      fVar3 = 0.0;
      if (*(int *)(param_1 + 0x60) == 0) {
        fVar3 = (float)FUN_038cd848(0x3800000038000000);
        fVar4 = (float)FUN_038cd848(0x3f000000);
        fVar3 = fVar3 / fVar4 + 0.0;
      }
    }
    *(float *)(param_1 + 0x7c) = fVar3;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

