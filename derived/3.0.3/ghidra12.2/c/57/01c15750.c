
undefined8 FUN_01c15750(undefined8 param_1,void *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  short *psVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  short *psVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined *local_c8;
  void *local_c0;
  undefined *local_b8;
  short *local_b0;
  int local_a8;
  short local_a4 [31];
  undefined2 local_66;
  
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar14 = 0;
    cVar4 = cRam0000000000000938;
  }
  else {
    lVar14 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    cVar4 = *(char *)(lVar14 + 0x938);
  }
  if (cVar4 == '\0') {
    bVar6 = 1;
  }
  else {
    bVar6 = (**(code **)(*(long *)(lVar14 + 0x930) + 0x18))(lVar14 + 0x930);
    *(undefined1 *)(lVar14 + 0x938) = 0;
  }
  local_b8 = PTR_DAT_04bc0840;
  local_a4[0] = 0;
  *(byte *)(lVar14 + 0x939) = bVar6 & 1;
  local_a8 = 0x20;
  lVar10 = 0;
  lVar8 = lVar14 + 0x940;
  psVar11 = local_a4 + 2;
  local_66 = 0;
  local_b8 = local_b8 + 0x10;
  do {
    if (psVar11[-2] == 0) goto LAB_01c1583c;
    if (psVar11[-1] == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c1583c;
    }
    if (*psVar11 == 0) {
      lVar10 = lVar10 + 2;
      goto LAB_01c1583c;
    }
    lVar10 = lVar10 + 3;
    psVar11 = psVar11 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01c1583c:
  uVar2 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  lVar10 = 0;
  psVar11 = (short *)((long)param_2 + 2);
  do {
    if (psVar11[-1] == 0) goto LAB_01c1588c;
    if (*psVar11 == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c1588c;
    }
    if (psVar11[1] == 0) {
      lVar10 = lVar10 + 2;
      goto LAB_01c1588c;
    }
    lVar10 = lVar10 + 3;
    psVar11 = psVar11 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01c1588c:
  uVar3 = (uint)lVar10;
  if ((int)(0x20 - uVar2) <= (int)(uint)lVar10) {
    uVar3 = 0x1f - uVar2;
  }
  local_b0 = local_a4;
  if (0 < (int)uVar3) {
    memcpy(local_a4 + uVar2,param_2,(ulong)uVar3 << 1);
    local_a4[(int)(uVar3 + uVar2)] = 0;
  }
  (**(code **)(local_b8 + 0x18))(&local_b8);
  uVar12 = 0;
  do {
    if (local_b0[uVar12] == 0) goto LAB_01c15920;
    if (local_b0[uVar12 + 1] == 0) {
      uVar12 = uVar12 + 1;
      goto LAB_01c15920;
    }
    if (local_b0[uVar12 + 2] == 0) {
      uVar12 = uVar12 + 2;
      goto LAB_01c15920;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  uVar12 = 0;
LAB_01c15920:
  if ((int)uVar12 < local_a8 + -1) {
    *(undefined4 *)
     ((long)local_b0 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(*(long *)(lVar14 + 0x940) + 0x18))(lVar8);
  psVar5 = local_b0;
  local_c0 = *(void **)(lVar14 + 0x948);
  lVar10 = 0;
  psVar11 = (short *)((long)local_c0 + 2);
  do {
    if (psVar11[-1] == 0) {
LAB_01c15998:
      if ((int)lVar10 < 0) {
        local_c0 = *(void **)(PTR_PTR_04bb8620 + 8);
      }
      break;
    }
    if (*psVar11 == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c15998;
    }
    if (psVar11[1] == 0) {
      lVar10 = lVar10 + 2;
      goto LAB_01c15998;
    }
    lVar10 = lVar10 + 3;
    psVar11 = psVar11 + 3;
  } while (lVar10 != 0x80001);
  local_c8 = PTR_DAT_04bb8610 + 0x10;
  (**(code **)(local_b8 + 0x18))(&local_b8);
  lVar10 = 0;
  do {
    if (local_b0[lVar10] == 0) goto LAB_01c15a10;
    if (local_b0[lVar10 + 1] == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c15a10;
    }
    if (local_b0[lVar10 + 2] == 0) {
      lVar10 = lVar10 + 2;
      goto LAB_01c15a10;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01c15a10:
  uVar2 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_a8 - uVar2) < 5) {
    uVar3 = local_a8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    (**(code **)(local_c8 + 0x18))(&local_c8);
    memcpy(psVar5 + uVar2,local_c0,(ulong)uVar3 << 1);
    psVar5[uVar3 + uVar2] = 0;
  }
  (**(code **)(local_b8 + 0x18))(&local_b8);
  uVar12 = 0;
  do {
    if (local_b0[uVar12] == 0) goto LAB_01c15abc;
    if (local_b0[uVar12 + 1] == 0) {
      uVar12 = uVar12 + 1;
      goto LAB_01c15abc;
    }
    if (local_b0[uVar12 + 2] == 0) {
      uVar12 = uVar12 + 2;
      goto LAB_01c15abc;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  uVar12 = 0;
LAB_01c15abc:
  if ((int)uVar12 < local_a8 + -1) {
    *(undefined4 *)
     ((long)local_b0 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(*(long *)(lVar14 + 0x940) + 0x18))(lVar8);
  psVar11 = local_b0;
  lVar7 = *(long *)(lVar14 + 0x948);
  lVar10 = 0;
  do {
    if (*(short *)(lVar7 + lVar10 * 2) == 0) {
LAB_01c15b20:
      iVar9 = (int)lVar10;
joined_r0x01c15b24:
      if (3 < iVar9) {
        puVar13 = (undefined *)(lVar7 + 8);
        goto LAB_01c15b48;
      }
      break;
    }
    lVar1 = lVar7 + lVar10 * 2;
    if (*(short *)(lVar1 + 2) == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c15b20;
    }
    if (*(short *)(lVar1 + 4) == 0) {
      iVar9 = (int)lVar10 + 2;
      goto joined_r0x01c15b24;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  puVar13 = PTR_DAT_04c4b998;
LAB_01c15b48:
  (**(code **)(local_b8 + 0x18))(&local_b8);
  lVar10 = 0;
  do {
    if (local_b0[lVar10] == 0) goto LAB_01c15b9c;
    if (local_b0[lVar10 + 1] == 0) {
      lVar10 = lVar10 + 1;
      goto LAB_01c15b9c;
    }
    if (local_b0[lVar10 + 2] == 0) {
      lVar10 = lVar10 + 2;
      goto LAB_01c15b9c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01c15b9c:
  uVar2 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_a8 - uVar2) < 5) {
    uVar3 = local_a8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(psVar11 + uVar2,puVar13,(ulong)uVar3 << 1);
    psVar11[uVar3 + uVar2] = 0;
  }
  (**(code **)(local_b8 + 0x18))(&local_b8);
  uVar12 = 0;
  do {
    if (local_b0[uVar12] == 0) goto LAB_01c15c30;
    if (local_b0[uVar12 + 1] == 0) {
      uVar12 = uVar12 + 1;
      goto LAB_01c15c30;
    }
    if (local_b0[uVar12 + 2] == 0) {
      uVar12 = uVar12 + 2;
      goto LAB_01c15c30;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  uVar12 = 0;
LAB_01c15c30:
  if ((int)uVar12 < local_a8 + -1) {
    *(undefined4 *)
     ((long)local_b0 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) =
         0x2011;
  }
  (**(code **)(*(long *)(lVar14 + 0x940) + 0x18))(lVar8);
  psVar11 = local_b0;
  lVar8 = *(long *)(lVar14 + 0x948);
  lVar14 = 0;
  do {
    if (*(short *)(lVar8 + lVar14 * 2) == 0) {
LAB_01c15c90:
      iVar9 = (int)lVar14;
joined_r0x01c15c94:
      if (7 < iVar9) {
        puVar13 = (undefined *)(lVar8 + 0x10);
        goto LAB_01c15cb8;
      }
      break;
    }
    lVar10 = lVar8 + lVar14 * 2;
    if (*(short *)(lVar10 + 2) == 0) {
      lVar14 = lVar14 + 1;
      goto LAB_01c15c90;
    }
    if (*(short *)(lVar10 + 4) == 0) {
      iVar9 = (int)lVar14 + 2;
      goto joined_r0x01c15c94;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  puVar13 = PTR_DAT_04c4b998;
LAB_01c15cb8:
  (**(code **)(local_b8 + 0x18))(&local_b8);
  lVar14 = 0;
  do {
    if (local_b0[lVar14] == 0) goto LAB_01c15d0c;
    if (local_b0[lVar14 + 1] == 0) {
      lVar14 = lVar14 + 1;
      goto LAB_01c15d0c;
    }
    if (local_b0[lVar14 + 2] == 0) {
      lVar14 = lVar14 + 2;
      goto LAB_01c15d0c;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  lVar14 = 0;
LAB_01c15d0c:
  uVar2 = (uint)lVar14 & ((int)(uint)lVar14 >> 0x1f ^ 0xffffffffU);
  uVar3 = 4;
  if ((int)(local_a8 - uVar2) < 5) {
    uVar3 = local_a8 + ~uVar2;
  }
  if (0 < (int)uVar3) {
    memcpy(psVar11 + uVar2,puVar13,(ulong)uVar3 << 1);
    psVar11[uVar3 + uVar2] = 0;
  }
  FUN_006f5580(param_1,&local_b8);
  return 1;
}

