
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_0252dec4(void)

{
  uint *puVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  short *psVar9;
  ulong uVar10;
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    uVar10 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0252df44;
LAB_0252dfb0:
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar9 = &DAT_054f0c08;
        if (iVar4 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = 0;
          DAT_054f0c24._0_4_ = 0;
          DAT_054f0c24._4_4_ = 0;
          DAT_054f0c2c._0_4_ = 0;
          DAT_054f0c2c._4_4_ = 0;
          _DAT_054f0c44 = 0;
          DAT_054f0c34._0_4_ = 0;
          DAT_054f0c34._4_4_ = 0;
          DAT_054f0c3c._0_4_ = 0;
          DAT_054f0c3c._4_4_ = 0;
          _DAT_054f0c08 = 0;
          _DAT_054f0c10 = 1;
          DAT_054f0c14._0_4_ = 0;
          DAT_054f0c14._4_4_ = 0;
          DAT_054f0c48 = 0;
          DAT_054f0c50 = 0;
          DAT_054f0c58 = 0;
          DAT_054f0c60 = 0;
          __cxa_guard_release(&DAT_054f0c70);
        }
      }
      else {
        psVar9 = &DAT_054f0c08;
      }
    }
    else {
      psVar9 = (short *)(DAT_054f5738 + uVar10 * 0xd0 +
                         (ulong)(*(uint *)(DAT_054f5738 + uVar10 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar9[0x32] != '\0') && (*psVar9 == *(short *)PTR_DAT_04bb6298)) {
      uVar5 = FUN_0231f070(*(undefined4 *)(psVar9 + 2),0);
      if ((uVar5 & 1) != 0) goto LAB_0252e07c;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar8 = &DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar8 = &DAT_054f0958;
        }
      }
      else {
        puVar8 = (undefined8 *)(DAT_054f5738 + uVar10 * 8 + 0x204);
      }
      if ((*(uint *)((long)puVar8 + 4) >> 0xf & 1) != 0) goto LAB_0252e07c;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar6 + 0x158);
    }
    uVar10 = (ulong)*pbVar7;
    if ((*pbVar7 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar10 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_0252dfb0;
LAB_0252df44:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar6 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar6 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar6 + 0x471);
        }
      }
      uVar10 = (ulong)*pbVar7;
      if (*pbVar7 < 8) goto LAB_0252dfb0;
    }
    uVar10 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0252dfb0;
  }
  psVar9 = (short *)0x0;
LAB_0252e07c:
  psVar2 = (short *)0x0;
  if (psVar9 != (short *)0x0) {
    psVar2 = psVar9 + 0x20;
  }
  return psVar2;
}

