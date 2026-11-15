
/* WARNING: Removing unreachable block (ram,0x023037c8) */
/* WARNING: Removing unreachable block (ram,0x023037d0) */

uint FUN_02303770(long param_1,float *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  undefined2 local_98;
  undefined2 local_96;
  undefined2 uStack_94;
  undefined1 local_92;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined1 local_78;
  byte local_77;
  undefined2 local_64;
  undefined2 local_62;
  undefined2 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined1 auStack_48 [40];
  
  if (*(int *)(param_1 + 8) == 0x1a) {
    local_c8 = 0x32;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1c0) + 0x148);
    }
    FUN_02a58ea0(auStack_48,puVar1,param_2);
    local_4e = 0;
    local_4c = 0;
    local_5c = 0xffffffff;
    local_58 = 0xffff;
    lVar8 = *(long *)PTR_DAT_04bb39b0;
    pbVar6 = PTR_DAT_04bb32e0;
    if (lVar8 == 0) {
LAB_02303870:
      if (*pbVar6 < 8) goto LAB_023038dc;
LAB_0230387c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_023038d4:
        pbVar6 = PTR_DAT_04bb5038;
        goto LAB_023038dc;
      }
      lVar8 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar8 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar6 = (byte *)(lVar8 + 0x471);
        }
      }
      local_77 = *pbVar6;
      if (7 < local_77) goto LAB_023038d4;
    }
    else {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar6 = (byte *)(lVar8 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02303870;
        }
        goto LAB_0230387c;
      }
LAB_023038dc:
      local_77 = *pbVar6;
      if (7 < local_77) {
        local_77 = 0xff;
      }
    }
    if (7 < local_77) {
      local_77 = 0xff;
    }
    iVar7 = (int)(*param_2 * 4.0);
    iVar9 = (int)(param_2[2] * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    local_64 = (undefined2)iVar7;
    iVar7 = (int)(param_2[1] * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    if (0x7ffe < iVar9) {
      iVar9 = 0x7fff;
    }
    local_62 = (undefined2)iVar7;
    if (iVar9 < -0x7fff) {
      iVar9 = -0x8000;
    }
    local_60 = (undefined2)iVar9;
    uVar4 = FUN_02a8ed80(auStack_48);
    uVar5 = uVar4;
    if (uVar4 != 4) {
      if (uVar4 != 5) goto LAB_02303acc;
      uVar5 = 6;
    }
    local_78 = (undefined1)uVar5;
    local_90 = 0xffffffffffffffff;
    local_92 = 0;
    local_98 = 0xff00;
    local_f0 = PTR_DAT_04bbc1a0 + 0x10;
    local_88 = 0;
    puStack_e8 = PTR_DAT_04bb2010 + 0x10;
    local_84 = 0x41200000;
    local_7c = 0xff00;
    local_e0 = 0;
    local_d0 = 0;
    _local_96 = CONCAT22((short)(1 << (ulong)(uVar5 & 0x1f)),0x100);
    local_c8 = CONCAT22((short)(uVar4 >> 0x10),*(undefined2 *)PTR_DAT_04bb6298);
    local_d8 = puStack_e8;
    local_c0 = local_f0;
    puStack_b8 = puStack_e8;
    local_a8 = puStack_e8;
    FUN_02a8f7b0(auStack_48,&local_f0);
    local_b0 = (int)local_e0;
    iStack_ac = local_e0._4_4_;
    local_a0 = (int)local_d0;
    iStack_9c = local_d0._4_4_;
    uVar5 = FUN_02302e80(param_1,&local_c8,&local_78);
    if ((uVar5 & 1) != 0) {
      *(float *)(param_1 + 0x14) = ((float)local_b0 * 5.0 + (float)local_a0 * 5.0 + 5.0) * 0.5;
      *(float *)(param_1 + 0x1c) = ((float)iStack_ac * 5.0 + (float)iStack_9c * 5.0 + 5.0) * 0.5;
      *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) =
           *(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x26998) & 0xffcf | 8;
    }
  }
  else {
LAB_02303acc:
    uVar5 = 0;
  }
  return uVar5 & 1;
}

