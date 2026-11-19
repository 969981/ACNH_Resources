
undefined8 FUN_038e2940(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = nn::os::GetCurrentFiber();
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}

