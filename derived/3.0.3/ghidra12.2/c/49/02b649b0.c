
/* WARNING: Removing unreachable block (ram,0x02b64b98) */
/* WARNING: Removing unreachable block (ram,0x02b64b50) */
/* WARNING: Removing unreachable block (ram,0x02b64b2c) */
/* WARNING: Removing unreachable block (ram,0x02b64b74) */
/* WARNING: Removing unreachable block (ram,0x02b64bbc) */

undefined8 FUN_02b649b0(undefined2 *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  char cVar9;
  uint *puVar10;
  undefined2 uVar11;
  int local_38 [2];
  uint *local_30;
  undefined4 local_24;
  
  if (param_1 == (undefined2 *)0x0) {
    return 0;
  }
  uVar6 = FUN_02a8f648(param_2);
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN_02a8ec10(param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_2 + 0xc);
    if ((((iVar2 == 0x1e) || (local_24 = 0, local_38[0] = iVar2, DAT_05641c34 == iVar2)) ||
        (local_24 = 1, DAT_05641c38 == iVar2)) ||
       (((local_24 = 2, DAT_05641c3c == iVar2 || (local_24 = 3, DAT_05641c40 == iVar2)) ||
        (local_24 = 4, DAT_05641c44 == iVar2)))) {
      FUN_02b72930(local_38);
      puVar4 = PTR_DAT_04bc4658;
      puVar3 = PTR_DAT_04bc4650;
      if ((local_30 != (uint *)0x0) && (uVar5 = *local_30, uVar5 != 0)) {
        cVar9 = *PTR_DAT_04bc4650;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            uVar5 = *local_30;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x24);
            uVar6 = (ulong)uVar1;
            if (-1 < (int)uVar1) goto LAB_02b64e08;
            if (uVar1 != 0xffffffff) goto LAB_02b64e18;
          }
          puVar10 = (uint *)(ulong)uVar5;
          uVar11 = 0;
          if ((puVar10 == (uint *)0x0) || (uVar11 = 0, local_30 == puVar10)) break;
          lVar8 = 0xc;
          if (*(char *)((long)local_30 + (10 - (long)puVar10)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)local_30 + (lVar8 - (long)puVar10);
          uVar11 = 0;
          if (lVar8 == 0) break;
          uVar6 = (ulong)*(ushort *)((long)local_30 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
          if (uVar6 == 0) goto LAB_02b64e18;
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != -0x7c4ab1a7) {
            piVar7 = piVar7 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_02b64e18;
          }
          uVar11 = 0;
          iVar2 = 0;
          if (*piVar7 != -1) {
            iVar2 = *piVar7;
          }
          *(int *)(puVar4 + 0x24) = iVar2;
          uVar5 = *local_30;
        } while (uVar5 != 0);
        goto LAB_02b64e1c;
      }
    }
    else {
      local_38[0] = 0;
      uVar6 = FUN_02b677c0(local_38);
      iVar2 = local_38[0];
      if ((uVar6 & 1) == 0) {
        iVar2 = 0;
      }
      uVar5 = FUN_02b5afe0(iVar2);
      puVar4 = PTR_DAT_04bb5bd0;
      puVar3 = PTR_DAT_04bb5bc8;
      uVar11 = 0;
      lVar8 = *(long *)PTR_DAT_04bb5008;
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x5f0);
      if (*(uint *)(lVar8 + 0x5d0) <= uVar5) goto LAB_02b64e1c;
      local_30 = *(uint **)(*(long *)(lVar8 + 0x5d8) + (long)(int)uVar5 * 8);
      if ((local_30 != (uint *)0x0) && (uVar5 = *local_30, uVar5 != 0)) {
        cVar9 = *PTR_DAT_04bb5bc8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
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
            uVar5 = *local_30;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x1c);
            uVar6 = (ulong)uVar1;
            if (-1 < (int)uVar1) goto LAB_02b64e08;
            if (uVar1 != 0xffffffff) goto LAB_02b64e18;
          }
          puVar10 = (uint *)(ulong)uVar5;
          uVar11 = 0;
          if ((puVar10 == (uint *)0x0) || (local_30 == puVar10)) break;
          lVar8 = 0xc;
          if (*(char *)((long)local_30 + (10 - (long)puVar10)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)local_30 + (lVar8 - (long)puVar10);
          uVar11 = 0;
          if (lVar8 == 0) break;
          uVar6 = (ulong)*(ushort *)((long)local_30 + (8 - (long)puVar10));
          *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
          if (uVar6 == 0) goto LAB_02b64e18;
          piVar7 = (int *)(lVar8 + 4);
          while (piVar7[-1] != -0x7c4ab1a7) {
            piVar7 = piVar7 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_02b64e18;
          }
          uVar11 = 0;
          iVar2 = 0;
          if (*piVar7 != -1) {
            iVar2 = *piVar7;
          }
          *(int *)(puVar4 + 0x1c) = iVar2;
          uVar5 = *local_30;
        } while (uVar5 != 0);
        goto LAB_02b64e1c;
      }
    }
  }
  else {
    uVar5 = FUN_02b59690(*(undefined4 *)(param_2 + 0xc),*(byte *)(param_2 + 8) & 1);
    puVar4 = PTR_DAT_04bc4638;
    puVar3 = PTR_DAT_04bc4630;
    lVar8 = *(long *)PTR_DAT_04bb5008;
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0xbf0);
    if (((uVar5 < *(uint *)(lVar8 + 0xbd0)) &&
        (local_30 = *(uint **)(*(long *)(lVar8 + 0xbd8) + (long)(int)uVar5 * 8),
        local_30 != (uint *)0x0)) && (uVar5 = *local_30, uVar5 != 0)) {
      cVar9 = *PTR_DAT_04bc4630;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          uVar5 = *local_30;
        }
        else {
          uVar1 = *(uint *)(puVar4 + 0xc);
          uVar6 = (ulong)uVar1;
          if (-1 < (int)uVar1) goto LAB_02b64e08;
          if (uVar1 != 0xffffffff) goto LAB_02b64e18;
        }
        puVar10 = (uint *)(ulong)uVar5;
        uVar11 = 0;
        if ((puVar10 == (uint *)0x0) || (uVar11 = 0, local_30 == puVar10)) break;
        lVar8 = 0xc;
        if (*(char *)((long)local_30 + (10 - (long)puVar10)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)local_30 + (lVar8 - (long)puVar10);
        uVar11 = 0;
        if (lVar8 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)local_30 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
        if (uVar6 == 0) goto LAB_02b64e18;
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != 0x39cb9646) {
          piVar7 = piVar7 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_02b64e18;
        }
        uVar11 = 0;
        iVar2 = 0;
        if (*piVar7 != -1) {
          iVar2 = *piVar7;
        }
        *(int *)(puVar4 + 0xc) = iVar2;
        uVar5 = *local_30;
      } while (uVar5 != 0);
      goto LAB_02b64e1c;
    }
  }
LAB_02b64e18:
  uVar11 = 0;
LAB_02b64e1c:
  *param_1 = uVar11;
  return 1;
LAB_02b64e08:
  if ((undefined2 *)(uVar6 + (long)local_30) != (undefined2 *)0x0) {
    uVar11 = *(undefined2 *)(uVar6 + (long)local_30);
    goto LAB_02b64e1c;
  }
  goto LAB_02b64e18;
}

