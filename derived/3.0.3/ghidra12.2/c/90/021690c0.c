
void FUN_021690c0(long param_1)

{
  uint *puVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined4 local_68;
  undefined1 local_64 [31];
  undefined1 local_45;
  byte local_24 [4];
  
  if ((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0)) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 3) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_02169164:
    if (7 < *pbVar8) {
LAB_02169170:
      if (DAT_0537d558 != (long *)0x0) {
        lVar10 = *DAT_0537d558;
        bVar3 = *(byte *)(lVar10 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar10 + 0x471);
          }
        }
        local_24[0] = *pbVar8;
        if (local_24[0] < 8) goto LAB_021691f0;
      }
      pbVar8 = &DAT_0548e168;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_02169164;
      }
      goto LAB_02169170;
    }
  }
  local_24[0] = *pbVar8;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_021691f0:
  lVar10 = FUN_0251b3b0(local_24,0);
  if (((lVar10 != 0) && (DAT_05aed670 != 0)) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar4 = FUN_006bd550(*puVar5,0);
    if (((iVar4 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((lVar9 = *(long *)(DAT_05aed670 + 0x330), lVar9 != 0 &&
        (lVar11 = *(long *)(lVar9 + 600), lVar11 != lVar9 + 0x250)))) {
      iVar4 = 0;
      lVar6 = lVar11 + -0x40;
      do {
        uVar7 = FUN_02932e20(lVar6,lVar10);
        if ((uVar7 & 1) != 0) {
          local_68 = 0x20;
          local_45 = 0;
          local_64[0] = 0;
          puStack_70 = local_64;
          pcVar2 = "Leave";
          if (iVar4 != 0) {
            pcVar2 = "Leave_NotEntrance";
          }
          local_78 = PTR_DAT_04bb2028 + 0x10;
          FUN_038d1270(&local_78,pcVar2);
          FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_78,0,1,local_24);
          return;
        }
        lVar11 = *(long *)(lVar11 + 8);
        iVar4 = iVar4 + -1;
        lVar6 = lVar11 + -0x40;
      } while (lVar6 != lVar9 + 0x210);
    }
  }
  return;
}

