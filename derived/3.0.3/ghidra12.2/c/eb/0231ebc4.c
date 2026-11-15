
/* WARNING: Removing unreachable block (ram,0x0231ec48) */

float FUN_0231ebc4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      puVar5 = &DAT_054f0958;
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar5 = &DAT_054f0958;
      }
    }
    else {
      puVar5 = &DAT_054f0958;
    }
  }
  else {
    puVar5 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar5 = (undefined8 *)(DAT_054f5738 + 0x204) + *(byte *)(param_1 + 0x1ee8);
    }
  }
  uVar1 = *(uint *)((long)puVar5 + 4);
  lVar3 = FUN_0251e98c(1);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x780) + 0xf0))(lVar3 + 0x780);
  fVar6 = *pfVar4;
  if ((uVar1 >> 0xf & 1) != 0) {
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x28c0) + 0xf0))(lVar3 + 0x28c0);
    fVar6 = fVar6 * *pfVar4;
  }
  return fVar6;
}

