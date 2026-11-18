
/* WARNING: Removing unreachable block (ram,0x03776d2c) */
/* WARNING: Removing unreachable block (ram,0x03776e60) */

long FUN_03776ca0(uint param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = DAT_05ab7608;
  puVar1 = PTR_DAT_04bc3a48;
  if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) && (DAT_05ab7608 != 0)) &&
     (uVar2 = FUN_036ee480(DAT_05ab7608,param_1,param_2), uVar2 < 10)) {
    lVar10 = lVar10 + (ulong)uVar2 * 8;
    goto LAB_03776edc;
  }
  if (DAT_05574040 == 0) {
    lVar10 = 0;
    plVar5 = plRam0000000000000450;
    if (plRam0000000000000450 != (long *)0x0) goto LAB_03776d7c;
LAB_03776d98:
    uVar2 = 1;
  }
  else {
    if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar3 = 0;
    }
    lVar10 = 0;
    if (lVar3 != 0) {
      lVar10 = lVar3 + 0xa8;
    }
    plVar5 = *(long **)(lVar10 + 0x450);
    if (*(long **)(lVar10 + 0x450) == (long *)0x0) goto LAB_03776d98;
LAB_03776d7c:
    if ((undefined8 *)*plVar5 == (undefined8 *)0x0) goto LAB_03776d98;
    uVar2 = (*(code *)**(undefined8 **)*plVar5)();
    uVar2 = uVar2 ^ 1;
  }
  uVar9 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    uVar8 = (uint)*(ushort *)
                   (*(long *)(lVar10 + 0x438) + *(long *)(lVar10 + 0x430) + (long)iVar7 * 0x1178 + 6
                   );
    if (0x14 < uVar8) {
      uVar8 = 0;
    }
    if (param_1 == uVar8) {
      if (iVar6 == param_2) goto LAB_03776e0c;
      iVar6 = iVar6 + 1;
    }
    uVar9 = uVar9 + 1;
    iVar7 = iVar7 + 1;
  } while (uVar9 != 0x26);
  uVar9 = 0xffffffff;
LAB_03776e0c:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar10 + 0x450) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar10 + 0x450) + 8), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  if (((*(ushort **)puVar1 == (ushort *)0x0) || ((**(ushort **)puVar1 & 1) == 0)) ||
     ((9 < uVar9 || (DAT_05ab7608 == 0)))) {
    lVar10 = 0;
    if (DAT_05574040 != 0) {
      if (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar3 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))();
      }
      else {
        lVar3 = 0;
      }
      lVar10 = 0;
      if (lVar3 != 0) {
        lVar10 = lVar3 + 0xa8;
      }
    }
    if (uVar9 < 0x26) {
      return lVar10 + (ulong)uVar9 * 0x16c0 + 0x4d0;
    }
    return 0;
  }
  lVar10 = DAT_05ab7608 + (ulong)uVar9 * 8;
LAB_03776edc:
  return *(long *)(lVar10 + 0x38) + 0x11b0;
}

