
undefined2 FUN_013f5330(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 uVar5;
  uint uVar6;
  ushort uVar7;
  uint *puVar8;
  uint *puVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  uint local_58;
  undefined4 local_54;
  undefined *local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  
  if (param_2 == 0xfffe) {
    return 0xfffe;
  }
  local_58 = param_2 & 0xffff;
  local_54 = 0;
  FUN_0277d4ac(&local_58);
  puVar3 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = local_58;
  uStack_44 = local_54;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar3 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(&local_58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8),
         puVar8 != (uint *)0x0)) {
        uVar6 = *puVar8;
        if (uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
          if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar9 + lVar13 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar13 != 0) {
              uVar2 = 0;
              if ((ulong)uVar6 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                 uVar7 < 0xbd)) goto LAB_013f54b0;
            }
          }
        }
        uVar7 = 0;
        goto LAB_013f54b0;
      }
    }
  }
  uVar7 = 0xbc;
LAB_013f54b0:
  puVar4 = PTR_DAT_04bbcae8;
  puVar3 = PTR_DAT_04bbcae0;
  if (((uVar7 == 0x6a) &&
      (uVar6 = (param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348),
      uVar6 < *(uint *)(param_1 + 0x328))) &&
     (puVar8 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar6 * 8), puVar8 != (uint *)0x0)
     ) {
    if (*puVar8 != 0) {
      cVar10 = *PTR_DAT_04bbcae0;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar4 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x28);
          if (-1 < (int)uVar6) {
            if ((undefined2 *)((ulong)uVar6 + (long)puVar8) != (undefined2 *)0x0) {
              return *(undefined2 *)((ulong)uVar6 + (long)puVar8);
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar8;
        if (*puVar8 == 0) {
          return 0;
        }
        if (puVar8 == puVar9) {
          return 0;
        }
        lVar13 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar9)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar8 + (lVar13 - (long)puVar9);
        if (lVar13 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar13 + 4);
        while (piVar12[-1] != -0x25507460) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_013f55f4;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar4 + 0x28) = iVar1;
        if (*puVar8 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_013f55f4:
    uVar5 = 0;
  }
  else {
    uVar5 = 0xfffe;
  }
  return uVar5;
}

