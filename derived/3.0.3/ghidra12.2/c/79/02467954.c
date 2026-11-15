
/* WARNING: Removing unreachable block (ram,0x02467a70) */

void FUN_02467954(long param_1,float *param_2)

{
  undefined2 uVar1;
  float *pfVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_054f0960);
      puVar4 = (uint *)&DAT_054f0958;
      if (iVar3 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar4 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar4 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  if ((*puVar4 >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    fVar7 = *param_2;
    fVar6 = param_2[2];
    if (((*(long *)PTR_DAT_04bb2200 == 0) ||
        (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x118), lVar5 == 0)) {
      iVar3 = -0x50;
    }
    else {
      lVar5 = *(long *)(lVar5 + 0x280);
      fVar8 = 0.0;
      if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 8), lVar5 != 0)) {
        pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x488) + 0xf0))(lVar5 + 0x488);
        fVar8 = *pfVar2;
      }
      lVar5 = FUN_0251e98c(1);
      pfVar2 = (float *)(**(code **)(*(long *)(lVar5 + 0x1560) + 0xf0))(lVar5 + 0x1560);
      iVar3 = (int)((fVar8 + *pfVar2) * 4.0);
    }
    *(int *)(param_1 + 0x1980) = (int)(fVar7 * 999.99994);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar3;
    *(int *)(param_1 + 0x1986) = (int)(fVar6 * 999.99994);
    uVar1 = *(undefined2 *)((long)param_2 + 0xe);
    *(undefined1 *)(param_1 + 0x198c) = 0;
    *(undefined2 *)(param_1 + 0x198a) = uVar1;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar5 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar5,0xf5);
  }
  return;
}

