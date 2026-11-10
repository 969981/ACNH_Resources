
undefined1  [16] FUN_001df87c(long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 local_28;
  
  puVar1 = (ulong *)FUN_001df940(param_1,&local_28,param_2);
  if (*puVar1 != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *puVar1;
    return auVar3;
  }
  auVar4._0_8_ = (undefined8 *)FUN_00187df4(0x148);
  FUN_001e1564(auVar4._0_8_ + 4,param_3);
  FUN_001e1564(auVar4._0_8_ + 0x16,param_3 + 0x90);
  *(undefined4 *)(auVar4._0_8_ + 0x28) = *(undefined4 *)(param_3 + 0x120);
  *auVar4._0_8_ = 0;
  auVar4._0_8_[1] = 0;
  auVar4._0_8_[2] = local_28;
  *puVar1 = (ulong)auVar4._0_8_;
  puVar2 = auVar4._0_8_;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    puVar2 = (undefined8 *)*puVar1;
  }
  FUN_03876250(param_1[1],puVar2);
  param_1[2] = param_1[2] + 1;
  auVar4._8_8_ = 1;
  return auVar4;
}

