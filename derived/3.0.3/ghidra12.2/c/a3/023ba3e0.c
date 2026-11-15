
/* WARNING: Removing unreachable block (ram,0x023ba43c) */

void FUN_023ba3e0(long param_1)

{
  float *pfVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  FUN_0231b3c0(param_1,6,0);
  fVar4 = -20.0;
  plVar3 = *(long **)(param_1 + 0x68);
  if (((*(long *)PTR_DAT_04bb2200 != 0) &&
      (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x118), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x280);
    fVar4 = 0.0;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
      pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x488) + 0xf0))(0xc1a00000,lVar2 + 0x488);
      fVar4 = *pfVar1;
    }
    lVar2 = FUN_0251e98c(1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x1560) + 0xf0))(lVar2 + 0x1560);
    fVar4 = fVar4 + *pfVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x023ba4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x110))(fVar4,plVar3);
  return;
}

