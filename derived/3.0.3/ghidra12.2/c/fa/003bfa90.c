
void FUN_003bfa90(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x180) != (code *)0x0) {
    (**(code **)(param_1 + 0x180))(param_1,param_2,*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}

