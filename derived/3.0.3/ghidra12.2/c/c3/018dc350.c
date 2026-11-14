
void FUN_018dc350(long param_1,long param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  byte *pbVar7;
  byte bVar8;
  ulong uVar9;
  long lVar10;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  puVar3 = PTR_DAT_04bb27d0;
  if (param_2 == 0) {
    return;
  }
  plVar5 = *(long **)PTR_DAT_04bb27d0;
  bVar8 = *(byte *)(*plVar5 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    pbVar7 = (byte *)(*plVar5 + 0x48);
    uVar9 = (long)(char)bVar8 & 0xffffffff;
    pbVar1 = pbVar7 + uVar9 * 0x80;
    if (7 < bVar8) {
      pbVar1 = pbVar7;
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      lVar10 = plVar5[2] + 0x108 + uVar9 * 0xc;
      if (0xb < bVar8) {
        lVar10 = plVar5[2] + 0x108;
      }
      if (*(char *)(lVar10 + 10) == '\0') {
        local_18 = 0;
        local_12 = 0;
        local_14 = 0xff02;
        if (*(int *)(param_1 + 0x38) < 0) {
          return;
        }
        FUN_01db1df0(*plVar5 + 0x480,*(int *)(param_1 + 0x38),&local_18,param_2,0x10,0);
        return;
      }
    }
  }
  iVar4 = FUN_018db4f8(*(undefined1 *)(param_2 + 8),*(undefined1 *)(param_2 + 0xb));
  if (iVar4 != 0) {
    FUN_018db840(param_1,iVar4,param_2);
    return;
  }
  *(undefined1 *)(param_2 + 9) = 3;
  bVar8 = *(byte *)(param_2 + 10);
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    pbVar7 = &DAT_0548e140;
LAB_018dc45c:
    if (7 < *pbVar7) {
LAB_018dc468:
      if (*(long **)puVar3 != (long *)0x0) {
        lVar10 = **(long **)puVar3;
        bVar6 = *(byte *)(lVar10 + 0x473);
        pbVar7 = PTR_DAT_04bb5038;
        if ((long)(char)bVar6 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
          if (7 < bVar6) {
            puVar2 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar7 = (byte *)(lVar10 + 0x471);
          }
        }
        bVar6 = *pbVar7;
        if (bVar6 < 8) goto LAB_018dc4d0;
      }
      pbVar7 = &DAT_0548e168;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar7 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_018dc45c;
      }
      goto LAB_018dc468;
    }
  }
  bVar6 = *pbVar7;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
LAB_018dc4d0:
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  if (bVar8 == bVar6) {
    *(undefined1 *)(param_1 + 0x69) = 3;
  }
  return;
}

