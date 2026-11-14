
void FUN_018234c0(long param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [8];
  byte local_2c [4];
  byte local_28 [4];
  undefined4 local_24;
  
  if (*(long *)PTR_DAT_04bb7ff8 != 0) {
    local_24 = 0;
                    /* WARNING: Could not recover jumptable at 0x0182350c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_01823510 + (ulong)DAT_0417729e * 4))();
    return;
  }
  if (((DAT_05694df8 != 0) && (*(long *)(DAT_05694df8 + 8) != 0)) &&
     (*(int *)(*(long *)(DAT_05694df8 + 8) + 0x1b0) == 3)) {
    if (DAT_04cd19d8 == 0) {
      pbVar8 = &DAT_0548e140;
LAB_01823674:
      if (*pbVar8 < 8) goto LAB_018236ec;
LAB_01823680:
      if (DAT_0537d558 == (long *)0x0) {
LAB_018236e4:
        pbVar8 = &DAT_0548e168;
        goto LAB_018236ec;
      }
      lVar9 = *DAT_0537d558;
      bVar4 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      local_34[0] = *pbVar8;
      if (7 < local_34[0]) goto LAB_018236e4;
    }
    else {
      pbVar8 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_01823674;
        }
        goto LAB_01823680;
      }
LAB_018236ec:
      local_34[0] = *pbVar8;
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
    }
    uVar6 = FUN_02532ab8(local_34);
    if ((uVar6 & 1) != 0) {
      if (DAT_04cd19d8 == 0) {
        pbVar8 = &DAT_0548e140;
LAB_01823aa8:
        if (*pbVar8 < 8) goto LAB_01823b20;
LAB_01823ab4:
        if (DAT_0537d558 == (long *)0x0) {
LAB_01823b18:
          pbVar8 = &DAT_0548e168;
          goto LAB_01823b20;
        }
        lVar9 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_38[0] = *pbVar8;
        if (7 < local_38[0]) goto LAB_01823b18;
      }
      else {
        pbVar8 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        if (7 < *pbVar8) {
          if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_01823aa8;
          }
          goto LAB_01823ab4;
        }
LAB_01823b20:
        local_38[0] = *pbVar8;
        if (7 < local_38[0]) {
          local_38[0] = 0xff;
        }
      }
      FUN_0254f47c(local_38);
      iVar7 = 9;
      *(undefined4 *)(param_1 + 0x5e0) = 6;
      goto LAB_01823bf0;
    }
  }
  FUN_018251bc(param_1);
  iVar5 = (**(code **)(*(long *)(param_1 + 0x4d0) + (ulong)*(byte *)(param_1 + 0x4e4) * 8))
                    (param_1 + 0x4d0);
  iVar2 = *(int *)(param_1 + 0x4e0);
  *(int *)(param_1 + 0x4d8) = iVar5;
  iVar3 = *(int *)(param_1 + 0x4dc);
  iVar7 = iVar3;
  if (iVar3 <= iVar2) {
    iVar7 = iVar2;
    iVar2 = iVar3;
  }
  if ((iVar2 < iVar5) && (iVar5 < iVar7)) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x3d8) + 0x2ec) == 0) {
    if (DAT_04cd19d8 == 0) {
      pbVar8 = &DAT_0548e140;
LAB_018238b4:
      if (*pbVar8 < 8) goto LAB_0182392c;
LAB_018238c0:
      if (DAT_0537d558 == (long *)0x0) {
LAB_01823924:
        pbVar8 = &DAT_0548e168;
        goto LAB_0182392c;
      }
      lVar9 = *DAT_0537d558;
      bVar4 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      local_28[0] = *pbVar8;
      if (7 < local_28[0]) goto LAB_01823924;
    }
    else {
      pbVar8 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_018238b4;
        }
        goto LAB_018238c0;
      }
LAB_0182392c:
      local_28[0] = *pbVar8;
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
    }
    uVar6 = FUN_0254eb50(local_28);
    if ((uVar6 & 1) == 0) {
      if (DAT_04cd19d8 == 0) {
        pbVar8 = &DAT_0548e140;
LAB_01823b54:
        if (*pbVar8 < 8) goto LAB_01823bcc;
LAB_01823b60:
        if (DAT_0537d558 == (long *)0x0) {
LAB_01823bc4:
          pbVar8 = &DAT_0548e168;
          goto LAB_01823bcc;
        }
        lVar9 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_3c[0] = *pbVar8;
        if (7 < local_3c[0]) goto LAB_01823bc4;
      }
      else {
        pbVar8 = PTR_DAT_04bb32e0;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        if (7 < *pbVar8) {
          if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_01823b54;
          }
          goto LAB_01823b60;
        }
LAB_01823bcc:
        local_3c[0] = *pbVar8;
        if (7 < local_3c[0]) {
          local_3c[0] = 0xff;
        }
      }
      uVar6 = FUN_0254e720(local_3c);
      if ((uVar6 & 1) == 0) {
        return;
      }
      iVar7 = 6;
      goto LAB_01823bf0;
    }
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_018239ac:
    if (*pbVar8 < 8) goto LAB_01823a24;
LAB_018239b8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01823a1c:
      pbVar8 = &DAT_0548e168;
      goto LAB_01823a24;
    }
    lVar9 = *DAT_0537d558;
    bVar4 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_2c[0] = *pbVar8;
    if (7 < local_2c[0]) goto LAB_01823a1c;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018239ac;
      }
      goto LAB_018239b8;
    }
LAB_01823a24:
    local_2c[0] = *pbVar8;
    if (7 < local_2c[0]) {
      local_2c[0] = 0xff;
    }
  }
  FUN_0254f47c(local_2c);
  iVar7 = 7;
  *(undefined4 *)(param_1 + 0x5e0) = 6;
LAB_01823bf0:
  if (*(int *)(param_1 + 0x280) != iVar7) {
    FUN_03ebb160(param_1 + 0x278);
  }
  return;
}

