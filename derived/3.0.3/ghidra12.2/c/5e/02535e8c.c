
uint FUN_02535e8c(byte *param_1,undefined4 param_2,byte param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  byte *pbVar9;
  int local_58 [3];
  undefined2 local_4c;
  byte local_4a;
  int local_49;
  undefined1 local_45;
  byte local_44 [4];
  
  puVar1 = PTR_DAT_04bb39b0;
  lVar5 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x15c) == 0)) {
LAB_02535f14:
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f08d8);
        if (iVar3 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
        puVar8 = &DAT_054f08d0;
      }
      else {
        puVar8 = &DAT_054f08d0;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x200);
    }
    local_58[0] = 7;
    if (((*puVar8 >> 7 & 1) == 0) &&
       (((DAT_054f5738 == 0 || (7 < (ulong)*param_1)) ||
        (*(int *)(DAT_054f5738 + (ulong)*param_1 * 8 + 0xf04) == 0)))) {
      lVar5 = *(long *)puVar1;
      if ((lVar5 != 0) && (*(int *)(lVar5 + 0x15c) != 0)) {
        bVar6 = *param_1;
        pbVar9 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar5 + 0x15c) != 0) {
          pbVar9 = (byte *)(lVar5 + 0x158);
        }
        bVar7 = *pbVar9;
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        if (7 < bVar6) {
          bVar6 = 0xff;
        }
        if (bVar7 != bVar6) {
          pbVar9 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar5 + 0x15c) != 0) {
            pbVar9 = (byte *)(lVar5 + 0x158);
          }
          if ((*pbVar9 < 8) ||
             (((DAT_054f5738 != 0 && (*(int *)(lVar5 + 0x15c) != 0)) &&
              (pbVar9 = (byte *)(DAT_054f5738 + 0x11a5), *pbVar9 < 8)))) {
LAB_02536078:
            local_44[0] = *pbVar9;
            if (7 < local_44[0]) {
              local_44[0] = 0xff;
            }
          }
          else {
            if (DAT_0537d558 == (long *)0x0) {
LAB_02536070:
              pbVar9 = &DAT_0548e168;
              goto LAB_02536078;
            }
            lVar5 = *DAT_0537d558;
            bVar6 = *(byte *)(lVar5 + 0x473);
            pbVar9 = PTR_DAT_04bb5038;
            if ((long)(char)bVar6 != 0xffffffffffffffff) {
              puVar8 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
              if (7 < bVar6) {
                puVar8 = (uint *)(lVar5 + 0x48);
              }
              if ((*puVar8 & 8) != 0) {
                pbVar9 = (byte *)(lVar5 + 0x471);
              }
            }
            local_44[0] = *pbVar9;
            if (7 < local_44[0]) goto LAB_02536070;
          }
          local_58[0] = FUN_00a74b78(local_44);
          if (local_58[0] != 0x13) goto LAB_025360ec;
        }
      }
      bVar6 = *param_1;
      local_4a = param_3 & 1;
      local_58[1] = 0xb;
      local_45 = 0;
      local_4c = 0x100;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      local_49 = (uint)(param_4 & 1) << 8;
      local_58[0] = CONCAT31(local_58[0]._1_3_,bVar6);
      local_58[2] = param_2;
      uVar2 = FUN_02530cec(local_58);
      goto LAB_025360f0;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar5 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar5 + 0x158);
    }
    bVar7 = *param_1;
    bVar6 = *pbVar9;
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if ((bVar6 == bVar7) || (uVar4 = FUN_0252bbf0(param_1), (uVar4 & 1) == 0)) goto LAB_02535f14;
  }
LAB_025360ec:
  uVar2 = 0;
LAB_025360f0:
  return uVar2 & 1;
}

