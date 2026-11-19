
void FUN_03c3a530(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  puVar2 = (undefined8 *)(param_1 + 0x1b0);
  do {
    if ((VibrationModulation *)puVar2[-1] != (VibrationModulation *)0x0) {
      nn::hid::VibrationNodeConnection::SetModulation((VibrationModulation *)puVar2[-1]);
    }
    if ((VibrationModulation *)*puVar2 != (VibrationModulation *)0x0) {
      nn::hid::VibrationNodeConnection::SetModulation((VibrationModulation *)*puVar2);
    }
    lVar1 = lVar1 + 4;
    puVar2 = puVar2 + 2;
  } while (lVar1 != 0x24);
  return;
}

