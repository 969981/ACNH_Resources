
void FUN_002cbae4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_048489c0;
  FUN_002bd460(param_1 + 1);
  FUN_0030a3f0(param_1 + 0xc9);
  FUN_0030a3f0(param_1 + 0x270);
  *(undefined4 *)(param_1 + 0x417) = 0;
  *(undefined2 *)((long)param_1 + 0x20bc) = 0x101;
  *(undefined1 *)((long)param_1 + 0x20be) = 0;
  FUN_002bd9a0(param_1 + 1);
  (**(code **)(param_1[0xc9] + 0x18))(param_1 + 0xc9);
                    /* WARNING: Could not recover jumptable at 0x002cbb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x270] + 0x18))(param_1 + 0x270);
  return;
}

