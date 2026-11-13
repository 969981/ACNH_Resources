
undefined8 FUN_0123b020(undefined8 param_1,short *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  char cVar9;
  byte bVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  undefined8 local_28;
  
  lVar14 = DAT_05150358;
  uVar5 = FUN_0277d6c4();
  puVar3 = PTR_DAT_04bbbc78;
  puVar2 = PTR_DAT_04bbbc70;
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
  if (*(uint *)(lVar14 + 0x1d8) <= uVar5) {
    return 0;
  }
  puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  if (*puVar8 != 0) {
    cVar9 = *PTR_DAT_04bbbc70;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar3 = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        *puVar2 = 1;
        *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
        uVar5 = *puVar8;
      }
      else {
        uVar5 = *(uint *)(puVar3 + 0x58);
        uVar11 = (ulong)uVar5;
        if (-1 < (int)uVar5) {
          if (((byte *)(uVar11 + (long)puVar8) != (byte *)0x0) &&
             ((*(byte *)(uVar11 + (long)puVar8) >> 4 & 1) != 0)) {
            local_58 = (undefined *)CONCAT44(local_58._4_4_,2);
            if (*puVar8 == 0) goto LAB_0123b580;
            goto LAB_0123b1b4;
          }
          break;
        }
        if (uVar5 != 0xffffffff) break;
        uVar5 = *puVar8;
      }
      if ((uVar5 == 0) || (puVar12 = (uint *)(ulong)uVar5, puVar8 == puVar12)) break;
      lVar14 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar8 + (lVar14 - (long)puVar12);
      if (lVar14 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 0x58) = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar13 = (int *)(lVar14 + 4);
      while (piVar13[-1] != 0x623dc307) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto joined_r0x0123b588;
      }
      iVar6 = 0;
      if (*piVar13 != -1) {
        iVar6 = *piVar13;
      }
      *(int *)(puVar3 + 0x58) = iVar6;
      if (*puVar8 == 0) break;
    } while( true );
  }
  goto joined_r0x0123b588;
  while( true ) {
    if ((int)uVar11 != -1) goto LAB_0123b580;
    puVar12 = (uint *)(ulong)*puVar8;
    bVar10 = 0;
    if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_0123b584;
    lVar14 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar8 + (lVar14 - (long)puVar12);
    if (lVar14 == 0) goto LAB_0123b580;
    uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x58) = 0xfffffffe;
    bVar10 = 0;
    if (uVar11 == 0) goto LAB_0123b584;
    puVar12 = (uint *)(lVar14 + 4);
    while (puVar12[-1] != 0x623dc307) {
      puVar12 = puVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        bVar10 = 0;
        goto LAB_0123b584;
      }
    }
    uVar5 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar5 = *puVar12;
    }
    uVar11 = (ulong)uVar5;
    *(uint *)(puVar3 + 0x58) = uVar5;
    if (*puVar8 == 0) break;
LAB_0123b1b4:
    if (-1 < (int)uVar11) {
      if ((byte *)((long)puVar8 + uVar11) == (byte *)0x0) {
LAB_0123b580:
        bVar10 = 0;
      }
      else {
        bVar10 = *(byte *)((long)puVar8 + uVar11) >> 2 & 1;
      }
      goto LAB_0123b584;
    }
  }
  bVar10 = 0;
LAB_0123b584:
  if (bVar10 != 0) goto LAB_0123b238;
joined_r0x0123b588:
  if ((param_4 & 1) == 0) {
    return 0;
  }
LAB_0123b238:
  puVar3 = PTR_DAT_04bbbc78;
  puVar2 = PTR_DAT_04bbbc70;
  if (param_2 == (short *)0x0) {
    return 1;
  }
  uVar5 = *puVar8;
  if ((uVar5 == 0) || (puVar8 == (uint *)(ulong)uVar5)) {
    if (uVar5 == 0) {
LAB_0123b43c:
      uVar4 = 0xfffe;
LAB_0123b440:
      local_58 = (undefined *)(ulong)uVar4;
      FUN_0277d4ac(&local_58);
      *(undefined4 *)param_2 = (undefined4)local_58;
      *(undefined4 *)(param_2 + 2) = local_58._4_4_;
      if (param_3 != (undefined4 *)0x0) {
        iVar6 = FUN_0277d6c4(param_2);
        uVar7 = 2;
        if (iVar6 != 0x8f0) {
          uVar7 = 3;
        }
        *param_3 = uVar7;
      }
      iVar6 = FUN_0277d6c4(param_2);
      puVar2 = PTR_DAT_04bb43c0;
      if (iVar6 != 0x30df) {
        return 1;
      }
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *(undefined4 *)param_2;
      uStack_4c = *(undefined4 *)(param_2 + 2);
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(param_2);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
             (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8), lVar14 != 0)) {
            local_48 = lVar14;
          }
        }
      }
      FUN_01b152b8(&local_58);
      *(undefined4 *)param_2 = local_50;
      *(undefined4 *)(param_2 + 2) = uStack_4c;
      return 1;
    }
  }
  else {
    puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
    if (((*puVar12 != 0) && (uVar5 = puVar12[1], uVar5 != 0)) && ((ulong)(ushort)puVar12[2] != 0)) {
      lVar14 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar14 != 0) {
        uVar1 = 0;
        if ((ulong)uVar5 != 0) {
          uVar1 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
        }
        if (*puVar12 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < DAT_051503b8) && (*(short *)(DAT_051503c0 + (long)(int)uVar1 * 2) == 0x20)) {
          FUN_0124c030(&local_58,param_1);
          uVar4 = FUN_01250420(&local_58);
          local_28 = (ulong)uVar4;
          FUN_0277d4ac(&local_28);
          param_2[1] = local_28._2_2_;
          *param_2 = (short)local_28;
          *(undefined4 *)(param_2 + 2) = local_28._4_4_;
          if ((short)local_28 == -2) {
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x17df00c3) {
              return 0;
            }
            local_28 = 0x842;
            FUN_0277d4ac(&local_28);
            *(undefined4 *)param_2 = (undefined4)local_28;
            *(undefined4 *)(param_2 + 2) = local_28._4_4_;
          }
          if (param_3 == (undefined4 *)0x0) {
            return 1;
          }
          *param_3 = 3;
          return 1;
        }
      }
    }
  }
  cVar9 = *PTR_DAT_04bbbc70;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
      *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
    }
    else {
      uVar5 = *(uint *)(puVar3 + 0x30);
      if (-1 < (int)uVar5) {
        if ((ushort *)((ulong)uVar5 + (long)puVar8) != (ushort *)0x0) {
          uVar4 = *(ushort *)((ulong)uVar5 + (long)puVar8);
          goto LAB_0123b440;
        }
        goto LAB_0123b43c;
      }
      if (uVar5 != 0xffffffff) goto LAB_0123b43c;
    }
    puVar12 = (uint *)(ulong)*puVar8;
    uVar4 = 0xfffe;
    if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_0123b440;
    lVar14 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
      lVar14 = 0x1c;
    }
    lVar14 = (long)puVar8 + (lVar14 - (long)puVar12);
    if (lVar14 == 0) goto LAB_0123b43c;
    uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
    *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_0123b43c;
    piVar13 = (int *)(lVar14 + 4);
    while (piVar13[-1] != -0x41e837bb) {
      piVar13 = piVar13 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_0123b43c;
    }
    iVar6 = 0;
    if (*piVar13 != -1) {
      iVar6 = *piVar13;
    }
    *(int *)(puVar3 + 0x30) = iVar6;
    if (*puVar8 == 0) goto LAB_0123b43c;
  } while( true );
}

