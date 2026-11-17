
void FUN_02b89f7c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 200) + 0xf0))((long *)(param_1 + 200));
  (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x138) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x138) + 8) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x138) + 0x10) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x138) + 0x18) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x138) + 0x20) + 0xf0))();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x138) + 0x28) + 0xf0))();
                    /* WARNING: Could not recover jumptable at 0x02b8a06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x2d0) + 0xf0))(param_1 + 0x2d0);
  return;
}

