
undefined8 FUN_01add954(long param_1,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  
  puVar3 = PTR_DAT_04bc39f8;
  if (*param_2 != '\0') {
    puVar8 = *(uint **)(param_1 + 0x10);
    if (puVar8 == (uint *)0x0) {
      uVar7 = 0x21;
    }
    else {
      uVar7 = *puVar8;
      if (uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if (((*puVar9 != 0) && (uVar7 = puVar9[1], uVar7 != 0)) && ((ulong)(ushort)puVar9[2] != 0))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326af0) &&
               (uVar2 = *(ushort *)(DAT_05326af8 + (long)(int)uVar1 * 2), uVar7 = (uint)uVar2,
               uVar2 < 0xa2)) goto LAB_01adda10;
          }
        }
      }
      uVar7 = 0;
    }
LAB_01adda10:
    if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
      if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
           (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
          ((*(uint *)(DAT_0532a7a0 + 200) <= uVar7 ||
           (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * uVar7 + (uint)(ushort)puVar8[2] * 8 + iVar4) +
                         (long)puVar8);
        goto joined_r0x01addb4c;
      }
    }
    else if (uVar7 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
      if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= uVar7) {
        uVar7 = 0;
      }
      puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar7 * 8);
joined_r0x01addb4c:
      if ((puVar8 != (uint *)0x0) && (uVar7 = *puVar8, uVar7 != 0 && puVar8 != (uint *)(ulong)uVar7)
         ) {
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
        if ((*puVar9 != 0) && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
        {
          lVar10 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326b00) && (*(short *)(DAT_05326b08 + (long)(int)uVar1 * 2) == 0x43))
            {
              if ((*(long *)(param_2 + 8) == 0) || (uVar5 = FUN_016f2b38(), (uVar5 & 1) == 0)) {
                return 1;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  if (DAT_04c487d4 == 0xffff) {
    return 0;
  }
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 5 & 1) != 0) {
LAB_01addc1c:
    uVar6 = FUN_01adc980(param_1,param_2);
    return uVar6;
  }
  uVar7 = (uint)(short)DAT_04c487d4;
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar7 * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 6 & 1) != 0) goto LAB_01addc1c;
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar7 * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 7 & 1) != 0) goto LAB_01addc1c;
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar7 * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 & 1) != 0) {
    uVar6 = FUN_01adce10(param_1,param_2);
    return uVar6;
  }
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar7 * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 1 & 1) == 0) {
    return 0;
  }
  if (((*puVar8 >> 0x19 & 1) != 0) && (param_2[2] != '\0')) {
    uVar5 = FUN_01adc230(param_1);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if (DAT_04c487d4 == 0xffff) goto LAB_01addd58;
  }
  puVar8 = (uint *)(puVar3 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
  if (0xff < DAT_04c487d4) {
    puVar8 = (uint *)puVar3;
  }
  if (((*puVar8 >> 0x17 & 1) != 0) && (uVar5 = FUN_01adc580(param_1), (uVar5 & 1) == 0)) {
    return 0;
  }
LAB_01addd58:
  if ((((param_2[1] == '\0') || (iVar4 = FUN_01ad78cc(param_1), iVar4 - 10U < 0xfffffffe)) &&
      ((*param_2 != '\0' ||
       ((lVar10 = FUN_01ad81b0(param_1), lVar10 == 0 || (uVar5 = FUN_01ad8950(), (uVar5 & 1) != 0)))
       ))) && ((lVar10 = *(long *)(param_2 + 8), lVar10 == 0 ||
               ((iVar4 = FUN_01ad78cc(param_1), iVar4 == 0x11 ||
                (uVar5 = FUN_016f2b38(lVar10), (uVar5 & 1) == 0)))))) {
    uVar6 = FUN_01adba10(param_1,1);
    return uVar6;
  }
  return 0;
}

