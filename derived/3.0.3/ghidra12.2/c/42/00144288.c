
void FUN_00144288(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1178);
  if ((lVar1 != 0) &&
     ((*(byte **)(param_1 + 0xe8) == (byte *)0x0 || ((**(byte **)(param_1 + 0xe8) >> 4 & 1) == 0))))
  {
    if (*(long *)(param_1 + 0xc18) != 0) {
      lVar1 = 0;
      uVar2 = 0;
      do {
        FUN_00144228(*(long *)(param_1 + 0x1178) + lVar1);
        uVar2 = uVar2 + 1;
        lVar1 = lVar1 + 200;
      } while (uVar2 < *(ulong *)(param_1 + 0xc18));
      lVar1 = *(long *)(param_1 + 0x1178);
    }
    FUN_00143300(lVar1);
    *(undefined8 *)(param_1 + 0x1178) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00144310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)PTR_PTR_04bcb710 + 0x80))(param_1);
  return;
}

