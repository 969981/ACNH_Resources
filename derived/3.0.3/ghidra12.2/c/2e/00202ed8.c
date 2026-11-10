
undefined1  [16] FUN_00202ed8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auStack_38 [8];
  undefined8 local_28;
  
  puVar1 = (ulong *)FUN_00202fd0(param_1,param_2,&local_28,auStack_38,param_3);
  if (*puVar1 != 0) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *puVar1;
    return auVar3;
  }
  auVar4._0_8_ = (undefined8 *)FUN_00187df4(0x58);
  auVar4._0_8_[4] = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(auVar4._0_8_ + 5) = 0;
  auVar4._0_8_[7] = auVar4._0_8_ + 5;
  auVar4._0_8_[8] = 0x10;
  FUN_0018b070(auVar4._0_8_ + 4,*(undefined8 *)(param_4 + 0x18),0xffffffffffffffff);
  FUN_0018d618(auVar4._0_8_ + 9,param_4 + 0x28);
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

