
/* WARNING: Removing unreachable block (ram,0x036ff6cc) */
/* WARNING: Removing unreachable block (ram,0x036ff61c) */
/* WARNING: Removing unreachable block (ram,0x036ff56c) */
/* WARNING: Removing unreachable block (ram,0x036ff4b4) */
/* WARNING: Removing unreachable block (ram,0x036ff510) */
/* WARNING: Removing unreachable block (ram,0x036ff5c4) */
/* WARNING: Removing unreachable block (ram,0x036ff674) */
/* WARNING: Removing unreachable block (ram,0x036ff724) */
/* WARNING: Removing unreachable block (ram,0x036ff77c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff94 : 0x036ff49c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_036ff290(long param_1,uint *param_2,undefined4 *param_3,float *param_4,float *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  byte local_6c;
  
  puVar2 = PTR_DAT_04bc2340;
  puVar1 = PTR_DAT_04bc2338;
  uVar10 = *param_2;
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      return;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return;
    }
    if ((uVar10 < *(uint *)(param_1 + 200)) &&
       (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar10) == '\0')) {
      return;
    }
    if (*puVar6 <= uVar10) {
      return;
    }
    if (puVar6[1] == 0) {
      return;
    }
    if ((ushort)puVar6[2] == 0) {
      return;
    }
    iVar4 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar4 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar10 + (uint)(ushort)puVar6[2] * 8 + iVar4) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(param_1 + 0x1c0) <= uVar10) {
      return;
    }
    if (*(uint *)(param_1 + 0x1b0) <= uVar10) {
      uVar10 = 0;
    }
    puVar6 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)uVar10 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return;
  }
  if (*puVar6 == 0) {
LAB_036ff448:
    uVar10 = 0;
  }
  else {
    cVar9 = *PTR_DAT_04bc2338;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined4 *)(puVar2 + 0x38) = 0xffffffff;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar10 = *(uint *)(puVar2 + 0x1c);
        if (-1 < (int)uVar10) {
          if ((ushort *)((ulong)uVar10 + (long)puVar6) == (ushort *)0x0) goto LAB_036ff448;
          uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar6);
          goto LAB_036ff44c;
        }
        if (uVar10 != 0xffffffff) goto LAB_036ff448;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      uVar10 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_036ff44c;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + (lVar7 - (long)puVar12);
      if (lVar7 == 0) goto LAB_036ff448;
      uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar2 + 0x1c) = 0xfffffffe;
      uVar10 = 0;
      if (uVar11 == 0) goto LAB_036ff44c;
      piVar13 = (int *)(lVar7 + 4);
      while (piVar13[-1] != 0x3fdeeab4) {
        piVar13 = piVar13 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          uVar10 = 0;
          goto LAB_036ff44c;
        }
      }
      iVar4 = 0;
      if (*piVar13 != -1) {
        iVar4 = *piVar13;
      }
      *(int *)(puVar2 + 0x1c) = iVar4;
    } while (*puVar6 != 0);
    uVar10 = 0;
  }
LAB_036ff44c:
  if ((0xff < uVar10) || ((uVar10 & 0xff) != 0)) {
    local_6c = (byte)uVar10;
    puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar8 = puVar6[3];
    uVar5 = *puVar6 ^ *puVar6 << 0xb;
    *puVar6 = puVar6[1];
    puVar6[1] = puVar6[2];
    uVar5 = uVar5 >> 8 ^ uVar8 >> 0x13 ^ uVar5 ^ uVar8;
    puVar6[2] = uVar8;
    puVar6[3] = uVar5;
    if (((DAT_05ab9848 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ab9848), iVar4 != 0)) {
      DAT_05ab9840 = 0;
      DAT_05ab9820 = 0x4000000080000000;
      DAT_05ab9828 = 0xc000000000000000;
      DAT_05ab9830 = 0x2000000060000000;
      DAT_05ab9838 = 0xa0000000e0000000;
      __cxa_guard_release(&DAT_05ab9848);
    }
    uVar5 = (uint)((ulong)uVar5 *
                   (ulong)(((uVar10 & 1) + (local_6c >> 1 & 1) +
                            (local_6c >> 2 & 1) + (local_6c >> 3 & 1) +
                            (local_6c >> 4 & 1) + (local_6c >> 5 & 1) + (local_6c >> 6 & 1) +
                           (uint)(local_6c >> 7) + (uVar10 >> 8 & 1)) - 1) >> 0x20);
    if (uVar5 < 0x7fffffff) {
      if ((uVar10 & 1) != 0) {
        if (uVar5 != 0) {
          uVar8 = 1;
          goto LAB_036ff85c;
        }
        lVar7 = 0;
LAB_036ffb18:
        uVar3 = *(undefined4 *)((long)&DAT_05ab9820 + lVar7 * 4);
        goto LAB_036ffbd4;
      }
      uVar8 = 0;
LAB_036ff85c:
      if ((local_6c >> 1 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 1;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((local_6c >> 2 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 2;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((local_6c >> 3 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 3;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((local_6c >> 4 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 4;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((local_6c >> 5 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 5;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((local_6c >> 6 & 1) != 0) {
        if (uVar8 == uVar5) {
          lVar7 = 6;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      if ((char)local_6c < '\0') {
        if (uVar8 == uVar5) {
          lVar7 = 7;
          goto LAB_036ffb18;
        }
        uVar8 = uVar8 + 1;
      }
      uVar3 = 0;
      if (((uVar10 & 0x100) == 0) || (uVar8 != uVar5)) goto LAB_036ffbd4;
      if ((*param_4 != 0.0) || ((param_4[1] != 0.0 || (param_4[2] != 0.0)))) {
        if ((*param_5 != 0.0) || ((param_5[1] != 0.0 || (param_5[2] != 0.0)))) {
          uVar3 = FUN_006f0400(*param_5 - *param_4,param_5[2] - param_4[2]);
          goto LAB_036ffbd4;
        }
      }
    }
  }
  uVar3 = 0;
LAB_036ffbd4:
  *param_3 = uVar3;
  return;
}

