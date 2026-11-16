
/* WARNING: Removing unreachable block (ram,0x025587b8) */

void FUN_025585cc(undefined1 *param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  puVar6 = PTR_DAT_04bb27d0;
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if (lVar11 == 0) {
    bVar5 = *PTR_DAT_04bb32e0;
joined_r0x02558640:
    uVar9 = (ulong)bVar5;
    if (7 < bVar5) {
LAB_02558644:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar11 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        uVar9 = (ulong)*pbVar10;
        if (*pbVar10 < 8) goto LAB_025586a8;
      }
      uVar9 = (ulong)(byte)*PTR_DAT_04bb5038;
      if (7 < (byte)*PTR_DAT_04bb5038) {
        uVar8 = 0xff;
        lVar11 = DAT_054f5738;
        goto LAB_0255873c;
      }
    }
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar11 + 0x158);
    }
    uVar9 = (ulong)*pbVar10;
    if (7 < *pbVar10) {
      if ((*(int *)(lVar11 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        bVar5 = *(byte *)(DAT_054f5738 + 0x11a5);
        goto joined_r0x02558640;
      }
      goto LAB_02558644;
    }
  }
LAB_025586a8:
  uVar8 = (undefined1)uVar9;
  lVar11 = DAT_054f5738 + uVar9 * 0x80;
  uVar4 = *(undefined4 *)(PTR_DAT_04bc31b0 + uVar9 * 0x30 + 0x1f);
  uVar2 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar9 * 0x30 + 8);
  uVar3 = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar9 * 0x30 + 0x10);
  *(undefined8 *)(lVar11 + 0x2f8) = *(undefined8 *)(PTR_DAT_04bc31b0 + uVar9 * 0x30 + 0x18);
  *(undefined8 *)(lVar11 + 0x2f0) = uVar3;
  *(undefined8 *)(lVar11 + 0x2e8) = uVar2;
  *(undefined4 *)(lVar11 + 0x2ff) = uVar4;
  puVar7 = PTR_DAT_04bc31b8;
  uVar2 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar9 * 0x70 + 0x30);
  uVar3 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar9 * 0x70 + 0x38);
  uVar12 = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar9 * 0x70 + 0x28);
  *(undefined8 *)(lVar11 + 800) = *(undefined8 *)(PTR_DAT_04bc31b8 + uVar9 * 0x70 + 0x20);
  *(undefined8 *)(lVar11 + 0x338) = uVar3;
  *(undefined8 *)(lVar11 + 0x330) = uVar2;
  *(undefined8 *)(lVar11 + 0x328) = uVar12;
  uVar2 = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x48);
  uVar3 = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x50);
  uVar12 = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x56);
  *(undefined8 *)(lVar11 + 0x340) = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x40);
  *(undefined8 *)(lVar11 + 0x356) = uVar12;
  *(undefined8 *)(lVar11 + 0x350) = uVar3;
  *(undefined8 *)(lVar11 + 0x348) = uVar2;
  uVar2 = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 8);
  uVar3 = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x10);
  *(undefined8 *)(lVar11 + 0x318) = *(undefined8 *)(puVar7 + uVar9 * 0x70 + 0x18);
  *(undefined8 *)(lVar11 + 0x310) = uVar3;
  *(undefined8 *)(lVar11 + 0x308) = uVar2;
LAB_0255873c:
  uStack_90 = *(undefined8 *)(lVar11 + 0x2f0);
  local_88 = *(undefined8 *)(lVar11 + 0x2f8);
  uStack_80 = *(undefined8 *)(lVar11 + 0x300);
  local_78 = *(undefined8 *)(lVar11 + 0x308);
  uStack_70 = *(undefined8 *)(lVar11 + 0x310);
  local_68 = *(undefined8 *)(lVar11 + 0x318);
  uStack_60 = *(undefined8 *)(lVar11 + 800);
  local_58 = *(undefined8 *)(lVar11 + 0x328);
  uStack_50 = *(undefined8 *)(lVar11 + 0x330);
  local_48 = *(undefined8 *)(lVar11 + 0x338);
  uStack_40 = *(undefined8 *)(lVar11 + 0x340);
  local_38 = *(undefined8 *)(lVar11 + 0x348);
  uStack_30 = *(undefined8 *)(lVar11 + 0x350);
  local_28 = *(undefined8 *)(lVar11 + 0x358);
  uStack_20 = *(undefined8 *)(lVar11 + 0x360);
  _local_98 = CONCAT71((int7)((ulong)*(undefined8 *)(lVar11 + 0x2e8) >> 8),uVar8);
  local_13 = *param_1;
  local_18 = 0;
  local_12 = 0;
  local_14 = 4;
  if (-1 < *(int *)(PTR_DAT_04bc31c8 + 0xe8)) {
    FUN_01db1df0(**(long **)puVar6 + 0x480,*(int *)(PTR_DAT_04bc31c8 + 0xe8),&local_18,&local_98,
                 0x80,0);
  }
  return;
}

