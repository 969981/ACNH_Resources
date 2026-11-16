
void FUN_025515ec(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  uint *puVar9;
  byte bVar10;
  long lVar11;
  undefined4 *puVar12;
  byte *pbVar13;
  
  puVar3 = PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (lVar11 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02551678;
LAB_025516d8:
    bVar6 = *pbVar7;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar11 + 0x158);
    }
    if ((*pbVar7 < 8) ||
       (((*(int *)(lVar11 + 0x15c) != 0 && (DAT_054f5738 != 0)) &&
        (pbVar7 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar7 < 8)))) goto LAB_025516d8;
LAB_02551678:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_025516d0:
      pbVar7 = PTR_DAT_04bb5038;
      goto LAB_025516d8;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar6 = *(byte *)(lVar11 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar9 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar9 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar9 & 8) != 0) {
        pbVar7 = (byte *)(lVar11 + 0x471);
      }
    }
    bVar6 = *pbVar7;
    if (7 < bVar6) goto LAB_025516d0;
  }
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  bVar1 = *param_1;
  bVar10 = bVar1;
  if (7 < bVar1) {
    bVar10 = 0xff;
  }
  if (bVar6 == bVar10) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar9 = &DAT_054f08d0;
        if (iVar5 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar9 = &DAT_054f08d0;
      }
    }
    else {
      puVar9 = (uint *)(DAT_054f5738 + 0x200);
    }
    *puVar9 = *puVar9 & 0xffffffbf;
    bVar1 = *param_1;
  }
  if (bVar1 < 8) {
    uVar4 = FUN_02582d8c(param_1,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if (((uVar4 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
         (*(char *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))))) {
      *(undefined4 *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x4f0) = 5;
    }
  }
  FUN_0267c640(param_1);
  if (DAT_054f5738 == 0) {
LAB_0255185c:
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    if ((ulong)*param_1 < 8) {
      *(undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xe60) = 6;
      if (DAT_054f5738 == 0) goto LAB_0255185c;
      bVar10 = *param_1;
      bVar6 = *pbVar13;
      if ((((7 < bVar10) || (bVar10 == *(byte *)(DAT_054f5738 + 0x11a4))) ||
          (7 < *(byte *)(DAT_054f5738 + 0x11a4))) || (lVar11 = DAT_054f5738, bVar6 < 8))
      goto LAB_0255187c;
LAB_0255189c:
      lVar11 = lVar11 + (ulong)bVar10 * 8;
    }
    else {
      bVar6 = *pbVar13;
LAB_0255187c:
      lVar11 = DAT_054f5738;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      *(byte *)(DAT_054f5738 + 0x11a4) = bVar6;
      bVar10 = *param_1;
      if (bVar10 < 8) goto LAB_0255189c;
    }
    puVar9 = (uint *)(lVar11 + 0x204);
  }
  *puVar9 = *puVar9 & 0xffffffdf;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffffffbf;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffffefff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffffff7f;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xfffffeff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xfdffffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffbfffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 | 1;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar8 = &DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar8 = &DAT_054f0958;
      }
    }
    else {
      puVar8 = &DAT_054f0958;
    }
  }
  else {
    puVar8 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar8 = puVar8 + *param_1;
    }
  }
  *(uint *)((long)puVar8 + 4) = *(uint *)((long)puVar8 + 4) & 0xfeffffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffffffef;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0960);
      puVar9 = (uint *)&DAT_054f0958;
      if (iVar5 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar9 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar9 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar9 = puVar9 + (ulong)*param_1 * 2;
    }
  }
  *puVar9 = *puVar9 & 0xffffdfff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar9 = &DAT_054f08d0;
      if (iVar5 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
        puVar9 = &DAT_054f08d0;
      }
    }
    else {
      puVar9 = &DAT_054f08d0;
    }
  }
  else {
    puVar9 = (uint *)(DAT_054f5738 + 0x200);
  }
  *puVar9 = *puVar9 & 0xffffffdf;
  puVar2 = PTR_DAT_04bb37e0;
  if (DAT_054f5738 == 0) {
LAB_02551ee4:
    if ((DAT_054f0950 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0950);
      puVar12 = &DAT_054f0948;
      if (iVar5 != 0) {
        DAT_054f0948 = *(undefined4 *)puVar2;
        DAT_054f094c = *(undefined4 *)(puVar2 + 4);
        __cxa_guard_release(&DAT_054f0950);
      }
    }
    else {
      puVar12 = &DAT_054f0948;
    }
  }
  else {
    lVar11 = *(long *)puVar3;
    if (lVar11 == 0) {
LAB_02551dfc:
      if (*pbVar13 < 8) goto LAB_02551e68;
LAB_02551e08:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02551e60:
        pbVar13 = PTR_DAT_04bb5038;
        goto LAB_02551e68;
      }
      lVar11 = **(long **)PTR_DAT_04bb27d0;
      bVar6 = *(byte *)(lVar11 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        puVar9 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
        if (7 < bVar6) {
          puVar9 = (uint *)(lVar11 + 0x48);
        }
        if ((*puVar9 & 8) != 0) {
          pbVar7 = (byte *)(lVar11 + 0x471);
        }
      }
      bVar6 = *pbVar7;
      if (7 < bVar6) goto LAB_02551e60;
    }
    else {
      if (*(int *)(lVar11 + 0x15c) != 0) {
        pbVar13 = (byte *)(lVar11 + 0x158);
      }
      if (7 < *pbVar13) {
        if (*(int *)(lVar11 + 0x15c) != 0) {
          pbVar13 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_02551dfc;
        }
        goto LAB_02551e08;
      }
LAB_02551e68:
      bVar6 = *pbVar13;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
    }
    bVar10 = *param_1;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    lVar11 = DAT_054f5738;
    if (bVar10 == bVar6) {
      iVar5 = FUN_00a74b78(param_1);
      if ((iVar5 == 0) || (iVar5 = FUN_00a74b78(param_1), iVar5 == 2)) {
        lVar11 = DAT_054f5738;
        *(undefined4 *)(DAT_054f5738 + 0x11c4) = 0x14;
      }
      else {
        lVar11 = DAT_054f5738;
        if (DAT_054f5738 == 0) goto LAB_02551ee4;
      }
    }
    puVar12 = (undefined4 *)(lVar11 + 0x244);
    if ((ulong)*param_1 < 8) {
      puVar12 = puVar12 + (ulong)*param_1 * 2;
    }
  }
  *(undefined2 *)puVar12 = *(undefined2 *)puVar2;
  *(undefined *)((long)puVar12 + 2) = puVar2[2];
  *(undefined *)((long)puVar12 + 3) = puVar2[3];
  puVar12[1] = *(undefined4 *)(puVar2 + 4);
  return;
}

