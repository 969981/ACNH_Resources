
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0251d1e0(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  short *psVar8;
  ulong uVar9;
  int *piVar10;
  uint *puVar11;
  uint *puVar12;
  char cVar13;
  undefined8 *puVar14;
  
  if ((DAT_054f5738 == 0) || (uVar9 = (ulong)*param_1, 7 < uVar9)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar5 = __cxa_guard_acquire(&DAT_054f0c70);
      if (iVar5 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      psVar8 = &DAT_054f0c08;
      cVar13 = DAT_054f0c6c;
      goto joined_r0x0251d814;
    }
    psVar8 = &DAT_054f0c08;
    if (DAT_054f0c6c != '\0') goto LAB_0251d254;
LAB_0251d278:
    uVar6 = 0;
  }
  else {
    lVar7 = DAT_054f5738 + uVar9 * 0xd0 +
            (ulong)(*(uint *)(DAT_054f5738 + uVar9 * 4 + 0xd68) & 1) * 0x68;
    psVar8 = (short *)(lVar7 + 0x6e8);
    cVar13 = *(char *)(lVar7 + 0x74c);
joined_r0x0251d814:
    if (cVar13 == '\0') goto LAB_0251d278;
LAB_0251d254:
    if ((*psVar8 != *(short *)PTR_DAT_04bb6298) || (uVar6 = *(uint *)(psVar8 + 2), 0x148 < uVar6))
    goto LAB_0251d278;
  }
  if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68), iVar5 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  puVar4 = PTR_DAT_04bc2fe8;
  puVar3 = PTR_DAT_04bc2fe0;
  if (DAT_054f5738 == 0) {
    puVar11 = &DAT_054f0b60;
  }
  else {
    if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
      lVar7 = *(long *)(DAT_054f5738 + 0xd0);
      if (lVar7 == 0) {
LAB_0251d3ac:
        puVar12 = (uint *)0x0;
      }
      else {
        puVar11 = *(uint **)(lVar7 + 8);
        if ((puVar11 != (uint *)0x0) &&
           ((((*(uint *)(DAT_054f5738 + 0xe8) <= uVar6 ||
              (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (long)(int)uVar6) != '\0')) &&
             (uVar6 < *puVar11)) && ((puVar11[1] != 0 && ((ushort)puVar11[2] != 0)))))) {
          iVar5 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar5 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar6 + (uint)(ushort)puVar11[2] * 8 + iVar5) +
                            (long)puVar11);
          if (puVar11 != (uint *)0x0) goto LAB_0251d3b8;
        }
        piVar10 = *(int **)(lVar7 + 8);
        puVar12 = (uint *)0x0;
        if (piVar10 != (int *)0x0) {
          if (((*(int *)(DAT_054f5738 + 0xe8) != 0) && (**(char **)(DAT_054f5738 + 0xf0) == '\0'))
             || ((*piVar10 == 0 || ((piVar10[1] == 0 || ((ulong)*(ushort *)(piVar10 + 2) == 0))))))
          goto LAB_0251d3ac;
          lVar7 = 0xc;
          if (*(char *)((long)piVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          puVar12 = (uint *)((long)piVar10 + lVar7 + (ulong)*(ushort *)(piVar10 + 2) * 8);
        }
      }
    }
    else if (uVar6 < *(uint *)(DAT_054f5738 + 0x1e0)) {
      uVar1 = uVar6;
      if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar6) {
        uVar1 = 0;
      }
      puVar11 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar1];
      if (puVar11 != (uint *)0x0) goto LAB_0251d3b8;
      puVar12 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
    }
    else {
      puVar12 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
    }
    puVar11 = &DAT_054f0b60;
    if (puVar12 != (uint *)0x0) {
      puVar11 = puVar12;
    }
  }
LAB_0251d3b8:
  if (*puVar11 != 0) {
    cVar13 = *PTR_DAT_04bc2fe0;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar4 + 0x88);
        if (-1 < (int)uVar1) {
          if (((char *)((ulong)uVar1 + (long)puVar11) != (char *)0x0) &&
             (*(char *)((ulong)uVar1 + (long)puVar11) != '\0')) {
            return 0;
          }
          break;
        }
        if (uVar1 != 0xffffffff) break;
      }
      lVar7 = (long)puVar11 - (ulong)*puVar11;
      if ((*puVar11 == 0) || (lVar7 == 0)) break;
      lVar2 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar7 == 0) break;
      uVar9 = (ulong)*(ushort *)(lVar7 + 8);
      *(undefined4 *)(puVar4 + 0x88) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar10 = (int *)(lVar2 + lVar7 + 4);
      while (piVar10[-1] != 0x2b6186a0) {
        piVar10 = piVar10 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_0251d4bc;
      }
      iVar5 = 0;
      if (*piVar10 != -1) {
        iVar5 = *piVar10;
      }
      *(int *)(puVar4 + 0x88) = iVar5;
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_0251d4bc:
  if (((DAT_054f0b68 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_054f0b68), iVar5 != 0)) {
    DAT_054f0b60 = 0;
    __cxa_guard_release(&DAT_054f0b68);
  }
  if (DAT_054f5738 == 0) {
    puVar11 = &DAT_054f0b60;
    goto LAB_0251d5ec;
  }
  if ((int)*(uint *)(DAT_054f5738 + 0x1e0) < 1) {
    lVar7 = *(long *)(DAT_054f5738 + 0xd0);
    if (lVar7 != 0) {
      puVar11 = *(uint **)(lVar7 + 8);
      if (((puVar11 != (uint *)0x0) &&
          (((*(uint *)(DAT_054f5738 + 0xe8) <= uVar6 ||
            (*(char *)(*(long *)(DAT_054f5738 + 0xf0) + (long)(int)uVar6) != '\0')) &&
           (uVar6 < *puVar11)))) && ((puVar11[1] != 0 && ((ushort)puVar11[2] != 0)))) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * uVar6 + (uint)(ushort)puVar11[2] * 8 + iVar5) +
                          (long)puVar11);
        if (puVar11 != (uint *)0x0) goto LAB_0251d5ec;
      }
      piVar10 = *(int **)(lVar7 + 8);
      if ((((piVar10 != (int *)0x0) &&
           ((*(int *)(DAT_054f5738 + 0xe8) == 0 || (**(char **)(DAT_054f5738 + 0xf0) != '\0')))) &&
          (*piVar10 != 0)) && (piVar10[1] != 0)) {
        puVar12 = (uint *)0x0;
        if ((ulong)*(ushort *)(piVar10 + 2) != 0) {
          lVar7 = 0xc;
          if (*(char *)((long)piVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          puVar12 = (uint *)((long)piVar10 + lVar7 + (ulong)*(ushort *)(piVar10 + 2) * 8);
        }
        goto LAB_0251d5e4;
      }
    }
    puVar12 = (uint *)0x0;
  }
  else if (uVar6 < *(uint *)(DAT_054f5738 + 0x1e0)) {
    if (*(uint *)(DAT_054f5738 + 0x1d0) <= uVar6) {
      uVar6 = 0;
    }
    puVar11 = (uint *)(*(undefined8 **)(DAT_054f5738 + 0x1d8))[uVar6];
    if (puVar11 != (uint *)0x0) goto LAB_0251d5ec;
    puVar12 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
  else {
    puVar12 = (uint *)**(undefined8 **)(DAT_054f5738 + 0x1d8);
  }
LAB_0251d5e4:
  puVar11 = &DAT_054f0b60;
  if (puVar12 != (uint *)0x0) {
    puVar11 = puVar12;
  }
LAB_0251d5ec:
  puVar12 = (uint *)((long)puVar11 - (ulong)*puVar11);
  if ((((*puVar11 != 0) && (puVar12 != (uint *)0x0)) && (*puVar12 != 0)) &&
     ((uVar6 = puVar12[1], uVar6 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
    lVar7 = 0xc;
    if (*(char *)((long)puVar12 + 10) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar12 + lVar7 + (ulong)(ushort)puVar12[2] * 8;
    if (lVar7 != 0) {
      uVar1 = 0;
      if ((ulong)uVar6 != 0) {
        uVar1 = (uint)((ulong)((long)puVar11 - lVar7) / (ulong)uVar6);
      }
      if (*puVar12 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((uVar1 < *(uint *)PTR_DAT_04bc2ff0) &&
         ((ushort)(*(short *)(*(long *)(PTR_DAT_04bc2ff0 + 8) + (long)(int)uVar1 * 2) - 1U) < 7)) {
        return 0;
      }
    }
  }
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar5 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar14 + 7) == -0x17df00c3) && (uVar9 = FUN_033f99e0(), (uVar9 & 1) != 0)) {
    return 0;
  }
  return 1;
}

