
uint FUN_016e7450(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  byte local_28 [4];
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb2640;
  if (DAT_04cd19d8 == 0) {
    local_28[0] = *param_1;
    if (7 < local_28[0]) {
      pbVar8 = &DAT_0548e140;
LAB_016e7494:
      if (7 < *pbVar8) {
LAB_016e74a0:
        if (DAT_0537d558 != (long *)0x0) {
          lVar9 = *DAT_0537d558;
          bVar2 = *(byte *)(lVar9 + 0x473);
          pbVar8 = PTR_DAT_04bb5038;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar1 = (uint *)(lVar9 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar8 = (byte *)(lVar9 + 0x471);
            }
          }
          local_28[0] = *pbVar8;
          if (local_28[0] < 8) goto LAB_016e7554;
        }
        pbVar8 = &DAT_0548e168;
      }
LAB_016e7540:
      local_28[0] = *pbVar8;
      if (7 < local_28[0]) {
        local_28[0] = 0xff;
      }
    }
  }
  else {
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      uVar5 = 0;
      goto LAB_016e7618;
    }
    local_28[0] = *param_1;
    if (7 < local_28[0]) {
      pbVar8 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if (7 < *pbVar8) {
        if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_016e7494;
        }
        goto LAB_016e74a0;
      }
      goto LAB_016e7540;
    }
  }
LAB_016e7554:
  if (DAT_05aed670 == 0) {
LAB_016e75e8:
    puVar6 = &DAT_055c04a0;
  }
  else {
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
      FUN_006bd550(*puVar6,0);
      if (DAT_05aed670 == 0) goto LAB_016e75e8;
    }
    puVar6 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar6 = (undefined8 *)
               (**(code **)(**(long **)puVar3 + 0x18))
                         (*(long **)puVar3,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar4 = FUN_006bd550(*puVar6,0);
      puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar6 = &DAT_055c04a0;
      }
    }
  }
  local_24 = 0;
  uVar7 = FUN_02b5f400(&local_24,*(undefined4 *)(puVar6 + 7));
  uVar5 = 0;
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_02b5f7a0(local_24,local_28);
  }
LAB_016e7618:
  return uVar5 & 1;
}

