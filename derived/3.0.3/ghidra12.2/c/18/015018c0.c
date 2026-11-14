
void FUN_015018c0(undefined8 param_1,float *param_2,long param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  uint *puVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  undefined *local_98;
  float local_90;
  undefined4 uStack_8c;
  uint *local_88;
  float local_7c;
  undefined4 uStack_78;
  uint local_74;
  
  if (param_2 == (float *)0x0) {
    return;
  }
  fVar13 = 0.0;
  if ((param_4 & 1) != 0) {
    local_90 = (float)*(int *)(param_3 + 0xc) * 5.0 + 2.5;
    local_98 = (undefined *)CONCAT44(local_98._4_4_,(float)*(int *)(param_3 + 8) * 5.0 + 2.5);
    lVar5 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) || (*(char *)(lVar5 + 0x11c8) != '\0')) {
      fVar13 = -500.0;
    }
    else {
      fVar13 = (float)FUN_0093a950(lVar5 + 0x28,&local_98,0);
    }
  }
  FUN_01a5033c(&local_7c,param_1,0,param_3,0);
  puVar3 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_7c);
  lVar5 = *(long *)puVar3;
  if (lVar5 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_88 = (uint *)0x0;
  local_98 = PTR_DAT_04bc0510 + 0x10;
  local_90 = local_7c;
  uStack_8c = uStack_78;
  uVar4 = FUN_0277d6c4(&local_90);
  if (*(long *)puVar3 == 0) {
LAB_01501b80:
    puVar11 = (uint *)0x0;
    local_74 = 0;
    bVar7 = true;
LAB_01501ba4:
    if ((local_74 & 0xfffffffe) != 10) {
      return;
    }
    fVar14 = 0.0;
    if (bVar7) goto LAB_01501cc8;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01501b80;
    lVar5 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_7c);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
       (puVar11 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar11 == (uint *)0x0)) goto LAB_01501b80;
    local_74 = 0;
    uVar4 = *puVar11;
    if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
      local_74 = 0;
      if (*puVar8 != 0) {
        uVar4 = puVar8[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar5 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar5 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar5) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
               (local_74 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2)
               , local_74 < 0x52)) goto LAB_01501ad8;
          }
        }
        local_74 = 0;
      }
    }
LAB_01501ad8:
    local_88 = puVar11;
    if (8 < local_74 - 1) {
      uVar4 = *puVar11;
      local_74 = 0;
      if ((uVar4 == 0) || (puVar11 == (uint *)(ulong)uVar4)) {
LAB_01501cb4:
        bVar7 = false;
      }
      else {
        puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        local_74 = 0;
        if (*puVar8 == 0) goto LAB_01501cb4;
        uVar4 = puVar8[1];
        if ((uVar4 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_01501cb0:
          local_74 = 0;
          goto LAB_01501cb4;
        }
        lVar5 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar5 == 0) goto LAB_01501cb0;
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar11 - lVar5) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if (*(uint *)PTR_DAT_04bc0048 <= uVar2) goto LAB_01501cb0;
        local_74 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2);
        if (local_74 < 0x52) goto LAB_01501cb4;
        bVar7 = false;
        local_74 = 0;
      }
      goto LAB_01501ba4;
    }
  }
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  uVar4 = *puVar11;
  fVar14 = 0.0;
  if (uVar4 != 0) {
    cVar12 = *PTR_DAT_04bbfe88;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *puVar3 = 1;
        memset(__s,0xff,0x1ac);
        uVar4 = *puVar11;
      }
      else {
        uVar2 = *(uint *)(__s + 0xf0);
        if (-1 < (int)uVar2) {
          if ((float *)((ulong)uVar2 + (long)puVar11) != (float *)0x0) {
            fVar14 = *(float *)((ulong)uVar2 + (long)puVar11);
          }
          break;
        }
        if (uVar2 != 0xffffffff) break;
      }
      lVar5 = (long)puVar11 - (ulong)uVar4;
      if (((ulong)uVar4 == 0) || (lVar5 == 0)) break;
      lVar10 = 0xc;
      if (*(char *)(lVar5 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      if (lVar10 + lVar5 == 0) break;
      uVar6 = (ulong)*(ushort *)(lVar5 + 8);
      *(undefined4 *)(__s + 0xf0) = 0xfffffffe;
      if (uVar6 == 0) break;
      piVar9 = (int *)(lVar10 + lVar5 + 4);
      while (piVar9[-1] != -0x499d99d4) {
        piVar9 = piVar9 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_01501cc8;
      }
      iVar1 = 0;
      if (*piVar9 != -1) {
        iVar1 = *piVar9;
      }
      *(int *)(__s + 0xf0) = iVar1;
      uVar4 = *puVar11;
      if (uVar4 == 0) break;
    } while( true );
  }
LAB_01501cc8:
  *param_2 = fVar13 + fVar14;
  return;
}

