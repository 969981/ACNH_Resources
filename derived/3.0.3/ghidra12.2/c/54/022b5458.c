
undefined8 FUN_022b5458(undefined8 param_1,long param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  short *psVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  short local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined1 auStack_58 [8];
  
  lVar7 = DAT_05150358;
  if (((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x488) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)))) ||
     ((*(long *)(DAT_05150358 + 0x2b0) == 0 || (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)
      ))) {
    return 0;
  }
  uVar4 = FUN_0277d6c4();
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  FUN_022aecd8(auStack_58,param_1);
  FUN_022b4af4(&local_60,auStack_58,param_2);
  local_70 = 0;
  if (DAT_05aed670 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar9 + 7);
  local_68 = FUN_017baf44();
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  FUN_011f3880(&local_78,0,&local_60,param_2);
  uVar2 = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  if (lVar7 == 0) {
    pbVar6 = &DAT_0548e140;
LAB_022b563c:
    if (7 < *pbVar6) {
LAB_022b5648:
      if (DAT_0537d558 != (long *)0x0) {
        lVar7 = *DAT_0537d558;
        bVar10 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
          if (7 < bVar10) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        bVar10 = *pbVar6;
        if (bVar10 < 8) goto LAB_022b56b8;
      }
      pbVar6 = &DAT_0548e168;
    }
  }
  else {
    pbVar6 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar6 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_022b563c;
      }
      goto LAB_022b5648;
    }
  }
  bVar10 = *pbVar6;
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
LAB_022b56b8:
  uVar4 = 0;
  iVar5 = 0;
  psVar8 = (short *)PTR_DAT_04bbbcc8;
  do {
    if (0x23 < *(int *)(PTR_DAT_04bbbcc8 + (long)iVar5 * 0x48 + 0x3c)) {
      if (local_60 == -2) {
        return 1;
      }
      if (0x27 < uVar4) {
        psVar8 = (short *)PTR_DAT_04bbbcc8;
      }
      *(undefined2 *)((long)psVar8 + 0x45) = 0xff00;
      psVar8[0] = -2;
      psVar8[1] = 0;
      psVar8[2] = 0;
      psVar8[3] = 0;
      FUN_0277d4ac(psVar8);
      psVar8[4] = 0;
      psVar8[5] = 0;
      psVar8[6] = 0;
      psVar8[7] = 0;
      psVar8[0x1c] = 0;
      psVar8[0x1d] = 0;
      psVar8[0x1e] = 4;
      psVar8[0x1f] = 0;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      psVar8[8] = 0;
      psVar8[9] = 0;
      psVar8[0x10] = 0;
      psVar8[0x11] = 0;
      psVar8[0x12] = 0;
      psVar8[0x13] = 0;
      *psVar8 = local_60;
      *(undefined1 *)(psVar8 + 1) = local_5e;
      *(undefined1 *)((long)psVar8 + 3) = local_5d;
      *(undefined4 *)(psVar8 + 2) = local_5c;
      *(undefined4 *)(psVar8 + 0x18) = uVar2;
      *(undefined4 *)(psVar8 + 0x1a) = uVar3;
      *(byte *)(psVar8 + 0x23) = bVar10;
      psVar8[0x20] = 0;
      psVar8[0x21] = 0;
      *(undefined1 *)(psVar8 + 0x22) = 0xff;
      *(undefined1 *)((long)psVar8 + 0x47) = 0;
      return 1;
    }
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 1;
    psVar8 = psVar8 + 0x24;
  } while (uVar4 != 0x28);
  return 1;
}

