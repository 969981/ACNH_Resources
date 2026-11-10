
undefined8 FUN_002ce35c(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_0022033c();
  if ((lVar1 == 0) || (uVar2 = FUN_00220b18(), (uVar2 & 1) == 0)) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bce9c8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NexNatServerAddressResolveJob::StepComplete";
    return 0;
  }
  return 5;
}

