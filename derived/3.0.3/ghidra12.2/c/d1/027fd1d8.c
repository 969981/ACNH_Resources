
undefined8 FUN_027fd1d8(long param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  short *psVar6;
  ulong uVar7;
  short *psVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined1 uVar12;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  uVar5 = *(uint *)(param_1 + 0x158);
  uVar7 = (ulong)param_2;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  uVar3 = param_2 - uVar5;
  if (param_2 < uVar5) {
    psVar8 = (short *)(param_1 + 0xb8 + uVar7 * 8);
LAB_027fd248:
    psVar6 = psVar8;
    if (*psVar8 != -2) {
      lVar11 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(psVar8);
      if (*(long *)puVar4 == 0) goto LAB_027fd2b4;
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      psVar6 = &DAT_05586008;
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (psVar6 = &DAT_05586008, *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0))
      {
        psVar6 = psVar8;
      }
    }
  }
  else {
    if (-1 < (int)uVar3) {
      uVar5 = *(uint *)(param_1 + 0xa0);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (uVar3 < uVar5) {
        psVar8 = (short *)(param_1 + (ulong)uVar3 * 8);
        goto LAB_027fd248;
      }
    }
LAB_027fd2b4:
    psVar6 = &DAT_05586008;
  }
  puVar4 = PTR_DAT_04bb43c0;
  local_68 = *(undefined4 *)psVar6;
  uStack_64 = *(undefined4 *)(psVar6 + 2);
  uVar9 = (ulong)param_3;
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  uVar3 = param_3 - uVar5;
  if (param_3 < uVar5) {
    psVar8 = (short *)(param_1 + 0xb8 + uVar9 * 8);
LAB_027fd300:
    psVar6 = psVar8;
    if (*psVar8 == -2) goto LAB_027fd374;
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(psVar8);
    if (*(long *)puVar4 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      psVar6 = &DAT_05586008;
      if ((uVar5 < *(uint *)(lVar11 + 0x1d8)) &&
         (psVar6 = &DAT_05586008, *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) != 0))
      {
        psVar6 = psVar8;
      }
      goto LAB_027fd374;
    }
  }
  else if (-1 < (int)uVar3) {
    uVar5 = *(uint *)(param_1 + 0xa0);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    if (uVar3 < uVar5) {
      psVar8 = (short *)(param_1 + (ulong)uVar3 * 8);
      goto LAB_027fd300;
    }
  }
  psVar6 = &DAT_05586008;
LAB_027fd374:
  local_70 = *(undefined4 *)psVar6;
  uStack_6c = *(undefined4 *)(psVar6 + 2);
  if (param_2 < 0x28) {
    uVar5 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    puVar1 = (undefined1 *)(param_1 + 0xa4) + (param_2 - uVar5);
    if (0x13 < param_2 - uVar5) {
      puVar1 = (undefined1 *)(param_1 + 0xa4);
    }
    puVar2 = (undefined1 *)(param_1 + uVar7 + 0x15c);
    if (uVar5 <= param_2) {
      puVar2 = puVar1;
    }
    uVar10 = *puVar2;
  }
  else {
    uVar10 = 0xff;
  }
  if (param_3 < 0x28) {
    uVar5 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    puVar1 = (undefined1 *)(param_1 + 0xa4) + (param_3 - uVar5);
    if (0x13 < param_3 - uVar5) {
      puVar1 = (undefined1 *)(param_1 + 0xa4);
    }
    puVar2 = (undefined1 *)(param_1 + uVar9 + 0x15c);
    if (uVar5 <= param_3) {
      puVar2 = puVar1;
    }
    uVar12 = *puVar2;
  }
  else {
    uVar12 = 0xff;
  }
  FUN_027fa2dc(param_1,uVar7,&local_70,0);
  if (param_2 < 0x28) {
    uVar5 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    puVar1 = (undefined1 *)(param_1 + 0xa4) + (param_2 - uVar5);
    if (0x13 < param_2 - uVar5) {
      puVar1 = (undefined1 *)(param_1 + 0xa4);
    }
    puVar2 = (undefined1 *)(param_1 + uVar7 + 0x15c);
    if (uVar5 <= param_2) {
      puVar2 = puVar1;
    }
    *puVar2 = uVar12;
  }
  FUN_027fa2dc(param_1,uVar9,&local_68,0);
  if (param_3 < 0x28) {
    uVar5 = *(uint *)(param_1 + 0x158);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    puVar1 = (undefined1 *)(param_1 + 0xa4) + (param_3 - uVar5);
    if (0x13 < param_3 - uVar5) {
      puVar1 = (undefined1 *)(param_1 + 0xa4);
    }
    puVar2 = (undefined1 *)(param_1 + uVar9 + 0x15c);
    if (uVar5 <= param_3) {
      puVar2 = puVar1;
    }
    *puVar2 = uVar10;
  }
  return 1;
}

