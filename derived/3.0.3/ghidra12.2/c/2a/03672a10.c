
void FUN_03672a10(long param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 uVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  
  iVar12 = *(int *)(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0xcc) = 0;
  if ((iVar12 == 0) && (*(char *)(param_1 + 0xca) != '\0')) {
    cVar2 = *(char *)(param_1 + 0xcb);
    *(undefined8 *)(param_1 + 0xa4) = 3;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 3;
    FUN_036726e0(param_1,*(uint *)(param_1 + 0xb8) * 3 + (*(uint *)(param_1 + 0xb8) >> 1));
    bVar3 = *(byte *)(param_1 + 0xd3);
    cVar4 = *(char *)(param_1 + 200);
    *(char *)(param_1 + 0xca) = cVar4;
    uVar13 = *(uint *)(param_1 + 0xec);
    uVar11 = ((bVar3 >> 2 & 1) - 1 | 3) & uVar13;
    *(bool *)(param_1 + 200) = uVar11 != 0;
    *(undefined1 *)(param_1 + 0xcb) = *(undefined1 *)(param_1 + 0xc9);
    uVar19 = (uVar13 & 0xaaaaaaaa) >> 1 | (uVar13 & 0x55555555) << 1;
    uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
    lVar17 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
    *(char *)(param_1 + 0xc9) = (char)lVar17;
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) | (cVar4 != '\0' || uVar11 != 0);
    if ((uVar11 == 0) || ((int)lVar17 != 0)) {
      if (cVar2 != '\x01') {
        if (cVar2 == '\0') goto LAB_03672afc;
        uVar6 = *(undefined2 *)(param_1 + 0xd6);
        bVar5 = *(byte *)(param_1 + 0xd4);
        *(char *)(*(long *)(param_1 + 0xf8) + (ulong)bVar5 + 0x100) = (char)((ushort)uVar6 >> 8);
        *(char *)(*(long *)(param_1 + 0xf8) + ((ulong)bVar5 + 0xff | 0x100)) = (char)uVar6;
        bVar5 = *(char *)(param_1 + 0xd4) - 2;
        *(byte *)(param_1 + 0xd4) = bVar5;
        *(byte *)(*(long *)(param_1 + 0xf8) + (ulong)bVar5 + 0x100) = bVar3 | 0x20;
        uVar11 = *(uint *)(param_1 + 0x200);
        *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + -1;
        uVar13 = 0xfffe - *(int *)(param_1 + 0x204);
        uVar19 = 0;
        if (uVar11 != 0) {
          uVar19 = uVar13 / uVar11;
        }
        uVar9 = (**(code **)(param_1 + 0x220))
                          (param_1 + 0xf0,(uVar13 - uVar19 * uVar11) + *(int *)(param_1 + 0x204));
        iVar12 = *(int *)(param_1 + 0x204);
        iVar14 = 0xffff;
        goto LAB_03672ce8;
      }
      uVar11 = *(uint *)(param_1 + 0x200);
      *(uint *)(param_1 + 0xec) = uVar13 & 0xfffffffd;
      *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + -3;
      uVar13 = 0xfffc - *(int *)(param_1 + 0x204);
      uVar19 = 0;
      if (uVar11 != 0) {
        uVar19 = uVar13 / uVar11;
      }
      uVar9 = (**(code **)(param_1 + 0x220))
                        (param_1 + 0xf0,(uVar13 - uVar19 * uVar11) + *(int *)(param_1 + 0x204));
      uVar11 = *(uint *)(param_1 + 0x200);
      uVar13 = 0xfffd - *(int *)(param_1 + 0x204);
      uVar19 = 0;
      if (uVar11 != 0) {
        uVar19 = uVar13 / uVar11;
      }
      sVar10 = (**(code **)(param_1 + 0x220))
                         (param_1 + 0xf0,(uVar13 - uVar19 * uVar11) + *(int *)(param_1 + 0x204));
      *(ushort *)(param_1 + 0xd6) = uVar9 | sVar10 << 8;
      *(byte *)(param_1 + 0xd3) = *(byte *)(param_1 + 0xd3) | 4;
      (**(code **)(param_1 + 0x18670))(1,*(undefined8 *)(param_1 + 0x18640));
      if (*(char *)(param_1 + 0x13e48) != '\0') {
        *(undefined1 *)(param_1 + 0x18610) = 0;
        *(undefined1 *)(param_1 + 0x13e4b) = 0;
        *(undefined1 *)(param_1 + 0x13e52) = 0;
        *(undefined4 *)(param_1 + 0x13ecc) = 0;
        *(undefined4 *)(param_1 + 0x13e80) = 0;
        *(undefined2 *)(param_1 + 0x18628) = 0;
        *(undefined8 *)(param_1 + 0x13e88) = *(undefined8 *)(param_1 + 0x13e98);
      }
      FUN_0365c644(param_1 + 0x11420);
      *(undefined1 *)(param_1 + 0x205a) = 0;
      *(undefined1 *)(param_1 + 0x18695) = 0;
    }
    else {
LAB_03672afc:
      bVar5 = *(byte *)(param_1 + 0xd4);
      *(uint *)(param_1 + 0xec) = uVar13 & 0xfffffffe;
      uVar6 = *(undefined2 *)(param_1 + 0xd6);
      *(char *)(*(long *)(param_1 + 0xf8) + (ulong)bVar5 + 0x100) = (char)((ushort)uVar6 >> 8);
      *(char *)(*(long *)(param_1 + 0xf8) + ((ulong)bVar5 + 0xff | 0x100)) = (char)uVar6;
      bVar5 = *(char *)(param_1 + 0xd4) - 2;
      *(byte *)(param_1 + 0xd4) = bVar5;
      *(byte *)(*(long *)(param_1 + 0xf8) + (ulong)bVar5 + 0x100) = bVar3 | 0x20;
      uVar11 = *(uint *)(param_1 + 0x200);
      *(char *)(param_1 + 0xd4) = *(char *)(param_1 + 0xd4) + -1;
      uVar13 = 0xfffa - *(int *)(param_1 + 0x204);
      uVar19 = 0;
      if (uVar11 != 0) {
        uVar19 = uVar13 / uVar11;
      }
      uVar9 = (**(code **)(param_1 + 0x220))
                        (param_1 + 0xf0,(uVar13 - uVar19 * uVar11) + *(int *)(param_1 + 0x204));
      iVar12 = *(int *)(param_1 + 0x204);
      iVar14 = 0xfffb;
LAB_03672ce8:
      uVar11 = *(uint *)(param_1 + 0x200);
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = (uint)(iVar14 - iVar12) / uVar11;
      }
      sVar10 = (**(code **)(param_1 + 0x220))
                         (param_1 + 0xf0,((iVar14 - iVar12) - uVar13 * uVar11) + iVar12);
      *(ushort *)(param_1 + 0xd6) = uVar9 | sVar10 << 8;
      *(byte *)(param_1 + 0xd3) = *(byte *)(param_1 + 0xd3) | 4;
    }
    *(undefined8 *)(param_1 + 0xa4) = 7;
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 4;
    FUN_036726e0(param_1,*(uint *)(param_1 + 0xb8) * 3 + (*(uint *)(param_1 + 0xb8) >> 1));
    uVar11 = *(uint *)(param_1 + 0x98);
    if (uVar11 != 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) * uVar11);
      *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + (ulong)uVar11;
    }
    iVar12 = *(int *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 200) = 0x20002000;
  }
  uVar9 = *(ushort *)(param_1 + 0xd6);
  uVar11 = (uint)uVar9;
  if ((uVar9 & 0xe000) == 0) {
    uVar11 = uVar11 & 0x7ff;
    plVar16 = (long *)(param_1 + 0xf8);
  }
  else {
    if ((uVar9 >> 0xd | 0xfffffff8) < 0xfffffffb) {
      (**(code **)(param_1 + 0x1d00))(*(undefined8 *)(param_1 + 0x1d08),uVar11,0,1);
    }
    uVar11 = uVar11 & 0xff;
    plVar16 = (long *)(param_1 + ((ulong)(uVar9 >> 4) & 0xff0) + 0xcf0);
  }
  pbVar1 = (byte *)(*plVar16 + (ulong)uVar11);
  uVar11 = (*(code *)(&PTR_LAB_04b421d8)[*pbVar1])(param_1,pbVar1);
  uVar18 = (ulong)uVar11;
  if (*(char *)(param_1 + 0x18631) != '\0') {
    *(ushort *)(param_1 + 0xd6) = uVar9;
    (**(code **)(param_1 + 0x18650))
              (*(undefined4 *)(param_1 + 0x18634),*(undefined8 *)(param_1 + 0x18640));
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 4;
    if (*(code **)(param_1 + 0x18680) != (code *)0x0) {
      (**(code **)(param_1 + 0x18680))(4);
    }
  }
  if (*(char *)(param_1 + 0x20b8) != '\0') {
    *(undefined1 *)(param_1 + 0x20b8) = 0;
    *(ulong *)(param_1 + 0x20b0) =
         (*(long *)(param_1 + 0x70) + uVar18 + *(long *)(param_1 + 0x78) + *(long *)(param_1 + 0x80)
         ) * 3 - *(long *)(param_1 + 0x20d0);
  }
  *(uint *)(param_1 + 0xa4) = uVar11 + iVar12;
  *(uint *)(param_1 + 0xa8) = (uint)*pbVar1;
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar11 = uVar11 - *(int *)(param_1 + 0x9c);
    uVar18 = (ulong)uVar11;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  *(ulong *)(param_1 + 0x70) = uVar18 + *(long *)(param_1 + 0x70);
  if (uVar11 == 0) {
    *(byte *)(param_1 + 0xcc) =
         *(byte *)(param_1 + 0xcc) |
         (*(char *)(param_1 + 200) != '\0' || *(char *)(param_1 + 0xca) != '\0');
  }
  else {
    FUN_03673358(param_1,uVar11);
    if (*(char *)(param_1 + 0x20e0) != '\0') {
      uVar13 = *(uint *)(param_1 + 0x20bc);
      iVar12 = 0x100;
      lVar17 = *(long *)(*(long *)(param_1 + 0x20f0) + 0x28);
      uVar11 = *(uint *)(param_1 + 0x20dc);
      do {
        if (uVar11 >> 0xd == 2) {
          uVar19 = 2;
          if (0x802 < uVar11 >> 3) {
            uVar19 = 3;
          }
        }
        else {
          uVar19 = *(uint *)(&DAT_04057d60 + (ulong)(uVar11 >> 0xd) * 4);
        }
        lVar15 = *(long *)(param_1 + 0x20f0) + (ulong)uVar19 * 0x28;
        uVar19 = *(uint *)(lVar15 + 0x48);
        uVar11 = uVar11 - *(int *)(lVar15 + 0x4c);
        uVar7 = 0;
        if (uVar19 != 0) {
          uVar7 = uVar11 / uVar19;
        }
        uVar8 = (**(code **)(lVar15 + 0x68))
                          (*(long *)(param_1 + 0x20f0),
                           (uVar11 - uVar7 * uVar19) + *(int *)(lVar15 + 0x4c));
        *(undefined1 *)(lVar17 + (ulong)uVar13) = uVar8;
        uVar13 = uVar13 + 1 & 0xff;
        iVar12 = iVar12 + -1;
        uVar11 = *(int *)(param_1 + 0x20dc) + 1;
        *(uint *)(param_1 + 0x20dc) = uVar11;
      } while (iVar12 != 0);
      *(undefined1 *)(param_1 + 0x20e0) = 0;
      *(undefined4 *)(param_1 + 0x20dc) = 0;
      FUN_03673470(param_1);
    }
    while( true ) {
      uVar11 = *(uint *)(param_1 + 0x98);
      if (uVar11 == 0) break;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + (ulong)uVar11;
      FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) * uVar11);
    }
  }
  if (*(char *)(param_1 + 0x18630) != '\0' || *(char *)(param_1 + 0x18631) != '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(char *)(param_1 + 0xcc) != '\0') {
    return;
  }
  if ((((*(byte *)(param_1 + 0xd3) >> 2 & 1) - 1 | 3) & *(uint *)(param_1 + 0xec)) != 0) {
    return;
  }
  iVar12 = FUN_0364bbd8(param_1 + 0x2060);
  if (*(int *)(param_1 + 0x13464) == 0) {
    uVar11 = 0x1000;
    if ((*(char *)(param_1 + 0x13468) == '\0') &&
       (uVar11 = *(uint *)(param_1 + 0x135b8) >> 10, 0xfff < uVar11)) {
      uVar11 = 0x1000;
    }
  }
  else {
    uVar11 = 0x1000;
  }
  uVar19 = ((*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0xc0) * iVar12) - 1U & 0xffff) *
           *(int *)(param_1 + 0xbc) >> 0x13;
  uVar13 = uVar11;
  if (((*(int *)(param_1 + 0x1357c) != 0) && (*(int *)(param_1 + 0x13590) != 0)) &&
     (uVar13 = (*(int *)(param_1 + 0x13598) + -1) * *(int *)(param_1 + 0x13590) +
               (*(uint *)(param_1 + 0x135b4) >> 10), uVar11 <= uVar13)) {
    uVar13 = uVar11;
  }
  if (uVar13 <= uVar19) {
    uVar19 = uVar13;
  }
  iVar12 = *(int *)(param_1 + 0x388);
  if ((((iVar12 == 0x10) || (iVar12 == 0x9f)) || (iVar12 == 0x99)) &&
     (*(char *)(param_1 + 0x1eec) != '\0')) {
    if (*(ushort *)(param_1 + 0x1eea) <= uVar19) {
      uVar19 = (uint)*(ushort *)(param_1 + 0x1eea);
    }
  }
  uVar11 = uVar19;
  if (*(char *)(param_1 + 0x13e48) != '\0') {
    uVar13 = *(uint *)(param_1 + 0x13ee0);
    if (0xfff < uVar13) {
      uVar13 = 0x1000;
    }
    uVar11 = 0x1000;
    if (*(char *)(param_1 + 0x13ed9) != '\0') {
      uVar11 = uVar13;
    }
    if ((*(char *)(param_1 + 0x13e4b) != '\0') && (*(char *)(param_1 + 0x13e51) != '\0')) {
      iVar14 = *(int *)(param_1 + 0x13e70) * 0x94 + -0x94;
      if (*(int *)(param_1 + 0x13e4c) != 1 || *(int *)(param_1 + 0x13e60) != 1) {
        iVar14 = 0;
      }
      uVar13 = iVar14 + *(int *)(param_1 + 0x13e7c);
      if (uVar13 <= uVar11) {
        uVar11 = uVar13;
      }
    }
    if (uVar19 <= uVar11) {
      uVar11 = uVar19;
    }
  }
  if (iVar12 == 0x12) {
    uVar13 = (uint)(*(ushort *)(param_1 + 0x2044) & *(ushort *)(param_1 + 0x2042));
    cVar2 = *(char *)(param_1 + 0x2046);
  }
  else {
    uVar19 = uVar11;
    if (iVar12 != 0x13) goto LAB_0367315c;
    uVar13 = 0x7fff - *(ushort *)(param_1 + 0x1eb2);
    cVar2 = *(char *)(param_1 + 0x1eb0);
  }
  uVar19 = 0xffff;
  if (cVar2 != '\0') {
    uVar19 = uVar13;
  }
  if (uVar11 <= uVar19) {
    uVar19 = uVar11;
  }
LAB_0367315c:
  uVar11 = 0;
  if (uVar19 < 2) {
    uVar19 = 1;
  }
  do {
    uVar9 = *(ushort *)(param_1 + 0xd6);
    uVar13 = (uint)uVar9;
    if ((uVar9 & 0xe000) == 0) {
      uVar13 = uVar13 & 0x7ff;
      plVar16 = (long *)(param_1 + 0xf8);
    }
    else {
      if ((uVar9 >> 0xd | 0xfffffff8) < 0xfffffffb) {
        (**(code **)(param_1 + 0x1d00))(*(undefined8 *)(param_1 + 0x1d08),uVar13,0,1);
      }
      uVar13 = uVar13 & 0xff;
      plVar16 = (long *)(param_1 + ((ulong)(uVar9 >> 4) & 0xff0) + 0xcf0);
    }
    pbVar1 = (byte *)(*plVar16 + (ulong)uVar13);
    iVar12 = *(int *)(param_1 + 0xd8);
    uVar13 = (**(code **)(PTR_PTR_04bcaa78 + (ulong)*pbVar1 * 8))(param_1,pbVar1);
    if (*(char *)(param_1 + 0x18631) != '\0') {
      *(ushort *)(param_1 + 0xd6) = uVar9;
      (**(code **)(param_1 + 0x18650))
                (*(undefined4 *)(param_1 + 0x18634),*(undefined8 *)(param_1 + 0x18640));
      *(undefined1 *)(param_1 + 0x60) = 1;
      *(byte *)(param_1 + 0x61) = *(byte *)(param_1 + 0x61) | 4;
      if (*(code **)(param_1 + 0x18680) != (code *)0x0) {
        (**(code **)(param_1 + 0x18680))(4);
      }
    }
    uVar11 = uVar13 + uVar11;
    *(uint *)(param_1 + 0xa4) = uVar13 + iVar12;
    *(uint *)(param_1 + 0xa8) = (uint)*pbVar1;
    *(uint *)(param_1 + 0xac) = uVar11;
    if (*(int *)(param_1 + 0x9c) != 0) {
      uVar13 = uVar13 - *(int *)(param_1 + 0x9c);
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
    cVar2 = *(char *)(param_1 + 0x2059);
    *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (ulong)uVar13;
    if (*(char *)(param_1 + 0xcc) != '\0' || cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0x2059) = 0;
    }
  } while (((uVar11 < uVar19 && (*(char *)(param_1 + 0xcc) == '\0' && cVar2 == '\0')) &&
           *(char *)(param_1 + 0x18630) == '\0') && *(char *)(param_1 + 0x18631) == '\0');
  if (*(int *)(param_1 + 0xa0) != 0) {
    uVar11 = uVar11 - *(int *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (uVar11 != 0) {
    FUN_03673358(param_1,uVar11);
    if (*(char *)(param_1 + 0x20e0) != '\0') {
      FUN_03648820(param_1 + 0x2060);
      FUN_03673470(param_1);
    }
    while( true ) {
      uVar11 = *(uint *)(param_1 + 0x98);
      if (uVar11 == 0) break;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + (ulong)uVar11;
      FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) * uVar11);
    }
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  return;
}

