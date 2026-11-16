
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short * FUN_0252d9bc(uint param_1)

{
  uint *puVar1;
  short *psVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  short *psVar10;
  ulong uVar11;
  
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (lVar7 == 0) {
    uVar11 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0252da3c;
LAB_0252daa8:
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar10 = &DAT_054f0c08;
        cVar4 = DAT_054f0c6c;
        if (iVar5 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
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
          cVar4 = DAT_054f0c6c;
        }
      }
      else {
        psVar10 = &DAT_054f0c08;
        cVar4 = DAT_054f0c6c;
      }
    }
    else {
      lVar7 = DAT_054f5738 + uVar11 * 0xd0 +
              (ulong)(*(uint *)(DAT_054f5738 + uVar11 * 4 + 0xd68) & 1) * 0x68;
      psVar10 = (short *)(lVar7 + 0x6e8);
      cVar4 = *(char *)(lVar7 + 0x74c);
    }
    if ((cVar4 != '\0') && (*psVar10 == *(short *)PTR_DAT_04bb6298)) {
      uVar6 = FUN_0231f070(*(undefined4 *)(psVar10 + 2),param_1 & 1);
      if ((uVar6 & 1) != 0) goto LAB_0252db80;
      if (DAT_054f5738 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(&DAT_054f0960);
          puVar9 = &DAT_054f0958;
          if (iVar5 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar9 = &DAT_054f0958;
        }
      }
      else {
        puVar9 = (undefined8 *)(DAT_054f5738 + uVar11 * 8 + 0x204);
      }
      if ((*(uint *)((long)puVar9 + 4) >> 0xf & 1) != 0) goto LAB_0252db80;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar7 + 0x158);
    }
    uVar11 = (ulong)*pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar7 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (uVar11 = (ulong)*(byte *)(DAT_054f5738 + 0x11a5), *(byte *)(DAT_054f5738 + 0x11a5) < 8))))
    goto LAB_0252daa8;
LAB_0252da3c:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar7 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar7 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar7 + 0x471);
        }
      }
      uVar11 = (ulong)*pbVar8;
      if (*pbVar8 < 8) goto LAB_0252daa8;
    }
    uVar11 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_0252daa8;
  }
  psVar10 = (short *)0x0;
LAB_0252db80:
  psVar2 = (short *)0x0;
  if (psVar10 != (short *)0x0) {
    psVar2 = psVar10 + 6;
  }
  return psVar2;
}

