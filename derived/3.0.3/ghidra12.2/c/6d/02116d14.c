
void FUN_02116d14(long param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  char *__dest;
  byte local_14 [4];
  
  if ((*(ushort *)(param_1 + 0x1528) >> 1 & 1) != 0) {
    return;
  }
  *(ushort *)(param_1 + 0x1528) = *(ushort *)(param_1 + 0x1528) | 2;
  FUN_021264e4(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar4 = *(undefined4 *)PTR_DAT_04bb3238;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = uVar4;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x138) = 2;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0x1530) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x1538);
    uVar4 = *(undefined4 *)puVar6;
    if (0 < *(int *)(param_1 + 0x1530)) {
      *puVar6 = *(undefined8 *)(param_1 + 0x1540);
      *(undefined8 **)(param_1 + 0x1540) = puVar6;
      uVar3 = *(int *)(param_1 + 0x1530) - 1;
      if (0 < *(int *)(param_1 + 0x1530)) {
        if (uVar3 == 0) {
          iVar5 = 0;
        }
        else {
          memmove(*(void **)(param_1 + 0x1538),(void *)((long)*(void **)(param_1 + 0x1538) + 8),
                  (ulong)uVar3 << 3);
          iVar5 = *(int *)(param_1 + 0x1530) + -1;
        }
        *(int *)(param_1 + 0x1530) = iVar5;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar4;
  __dest = *(char **)(param_1 + 0x108);
  if (__dest != "NpcPlayer") {
    iVar5 = 9;
    if (*(int *)(param_1 + 0x110) < 10) {
      iVar5 = *(int *)(param_1 + 0x110) + -1;
    }
    memcpy(__dest,"NpcPlayer",(long)iVar5);
    __dest[iVar5] = '\0';
  }
  if (DAT_04cd19d8 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_02116ed0:
    if (7 < *pbVar7) {
LAB_02116edc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar8 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar7 = (byte *)(lVar8 + 0x471);
          }
        }
        local_14[0] = *pbVar7;
        if (local_14[0] < 8) goto LAB_02116f5c;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar7 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02116ed0;
      }
      goto LAB_02116edc;
    }
  }
  local_14[0] = *pbVar7;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_02116f5c:
  uVar4 = FUN_02582fe0(local_14);
  *(undefined4 *)(param_1 + 0xf8) = uVar4;
  return;
}

