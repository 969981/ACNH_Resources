
/* WARNING: Removing unreachable block (ram,0x016f2ed4) */

float FUN_016f2e94(void)

{
  float *pfVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = -20.0;
  if (((*(long *)PTR_DAT_04bb2200 != 0) &&
      (lVar2 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x118), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x280);
    fVar3 = 0.0;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 8), lVar2 != 0)) {
      pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x488) + 0xf0))(0xc1a00000,lVar2 + 0x488);
      fVar3 = *pfVar1;
    }
    lVar2 = FUN_0251e98c(1);
    pfVar1 = (float *)(**(code **)(*(long *)(lVar2 + 0x1590) + 0xf0))(lVar2 + 0x1590);
    fVar3 = fVar3 + *pfVar1;
  }
  return fVar3;
}

