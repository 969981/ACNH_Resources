
undefined4 FUN_016eff20(float *param_1)

{
  undefined *puVar1;
  undefined *__s;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  uint *puVar12;
  char cVar13;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  ulong local_78;
  
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  local_80 = 0;
  local_a0 = 0;
  local_90 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_8c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar8 = *(long *)PTR_DAT_04bb2720;
  local_98 = local_a8;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar11 + 7);
  uVar2 = FUN_017baf44();
  local_78 = CONCAT71(local_78._1_7_,uVar2) & 0xffffffffffffff01;
  puVar5 = (undefined4 *)FUN_01a5190c(&local_88,0,&local_98,&local_a8);
  uVar6 = FUN_0277e294();
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  local_78 = 0;
  local_88 = PTR_DAT_04bc0510 + 0x10;
  local_80 = *puVar5;
  local_7c = puVar5[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar1 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(puVar5);
  __s = PTR_DAT_04bbfe90;
  puVar1 = PTR_DAT_04bbfe88;
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar4) {
    return 0;
  }
  puVar12 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
  if (puVar12 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *puVar12;
  uVar7 = 0;
  if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
    puVar9 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
    uVar7 = 0;
    if (*puVar9 != 0) {
      uVar4 = puVar9[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar8 != 0) {
          uVar7 = 0;
          if ((ulong)uVar4 != 0) {
            uVar7 = (uint)((ulong)((long)puVar12 - lVar8) / (ulong)uVar4);
          }
          if (*puVar9 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar7 * 2),
             uVar7 < 0x52)) goto LAB_016f0188;
        }
      }
      uVar7 = 0;
    }
  }
LAB_016f0188:
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar7);
  if ((8 < uVar7 - 1) || (uVar4 = *puVar12, uVar4 == 0)) {
    return 0;
  }
  cVar13 = *PTR_DAT_04bbfe88;
  while( true ) {
    if (cVar13 == '\0') {
      cVar13 = '\x01';
      *puVar1 = 1;
      memset(__s,0xff,0x1ac);
      uVar4 = *puVar12;
    }
    else {
      uVar7 = *(uint *)(__s + 0xf0);
      if (-1 < (int)uVar7) {
        if ((undefined4 *)((ulong)uVar7 + (long)puVar12) == (undefined4 *)0x0) {
          return 0;
        }
        return *(undefined4 *)((ulong)uVar7 + (long)puVar12);
      }
      if (uVar7 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)uVar4;
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    if (puVar12 == puVar9) break;
    lVar8 = 0xc;
    if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar12 + (lVar8 - (long)puVar9);
    if (lVar8 == 0) {
      return 0;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
    *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
    if (uVar6 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar8 + 4);
    while (piVar10[-1] != -0x499d99d4) {
      piVar10 = piVar10 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
    }
    iVar3 = 0;
    if (*piVar10 != -1) {
      iVar3 = *piVar10;
    }
    *(int *)(__s + 0xf0) = iVar3;
    uVar4 = *puVar12;
    if (uVar4 == 0) {
      return 0;
    }
  }
  return 0;
}

