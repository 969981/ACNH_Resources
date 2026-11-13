
/* WARNING: Removing unreachable block (ram,0x01318030) */
/* WARNING: Removing unreachable block (ram,0x01318020) */
/* WARNING: Removing unreachable block (ram,0x0131803c) */
/* WARNING: Removing unreachable block (ram,0x01318148) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01317ff0(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  uint local_38 [4];
  uint local_28;
  undefined4 local_24;
  
  puVar4 = PTR_DAT_04bb27a8;
  local_38[0] = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar7 == 0) {
    return false;
  }
  lVar5 = *(long *)(lVar7 + 0xa8);
  if (lVar5 == 0) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < *(int *)(lVar5 + 0x18) || *(int *)(lVar5 + 0x28) < iVar1) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 < *(int *)(lVar5 + 0x1c)) {
    return false;
  }
  if (*(int *)(lVar5 + 0x2c) < iVar2) {
    return false;
  }
  lVar7 = *(long *)(lVar7 + 0xb0);
  if (lVar7 != 0) {
    uVar10 = iVar1 - *(int *)(lVar7 + 0x28);
    uVar6 = *(uint *)(lVar7 + 0x18);
    uVar3 = iVar2 - *(int *)(lVar7 + 0x2c);
    if ((uVar10 < uVar6 && uVar3 <= *(uint *)(lVar7 + 0x1c)) &&
        (uVar6 <= uVar10 || *(uint *)(lVar7 + 0x1c) != uVar3)) {
      uVar10 = uVar10 + uVar6 * uVar3;
LAB_013180f0:
      if (*(uint *)(lVar7 + 0x30) <= uVar10) {
        uVar10 = 0;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar10 * 0x68);
    }
    else {
      if (*(char *)(lVar7 + 0x88) != '\0') {
        uVar6 = iVar1 - *(int *)(lVar7 + 0x98);
        uVar3 = iVar2 - *(int *)(lVar7 + 0x9c);
        uVar10 = *(uint *)(lVar7 + 0xa0);
        if ((uVar6 < uVar10 && uVar3 <= *(uint *)(lVar7 + 0xa4)) &&
            (uVar10 <= uVar6 || *(uint *)(lVar7 + 0xa4) != uVar3)) {
          uVar10 = uVar6 + uVar10 * uVar3 + *(int *)(lVar7 + 0x8c);
          goto LAB_013180f0;
        }
      }
      puVar8 = &DAT_051a50f0;
    }
    if ((*(byte *)((long)puVar8 + 0xd) & 1) == 0) {
      return false;
    }
  }
  local_28 = param_2;
  FUN_01309ec4(local_38,lVar5,param_1);
  local_24 = 0;
  lVar7 = *(long *)puVar4;
  uVar10 = (local_38[0] & 0xffff) - (uint)*(ushort *)(lVar7 + 0x408);
  if ((uVar10 < *(uint *)(lVar7 + 1000)) &&
     (puVar9 = *(uint **)(*(long *)(lVar7 + 0x3f0) + (long)(int)uVar10 * 8), puVar9 != (uint *)0x0))
  {
    uVar10 = *puVar9;
    uVar6 = 0;
    if ((uVar10 == 0) || (puVar9 == (uint *)(ulong)uVar10)) goto LAB_01318200;
    puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar10);
    uVar6 = 0;
    if (*puVar11 == 0) goto LAB_01318200;
    uVar10 = puVar11[1];
    if ((uVar10 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
      lVar7 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar11 + lVar7 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar7 != 0) {
        uVar6 = 0;
        if ((ulong)uVar10 != 0) {
          uVar6 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar10);
        }
        if (*puVar11 <= uVar6) {
          uVar6 = 0xffffffff;
        }
        if ((uVar6 < DAT_05160328) &&
           (uVar6 = (uint)*(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2), uVar6 < 5))
        goto LAB_01318200;
      }
    }
  }
  uVar6 = 0;
LAB_01318200:
  return uVar6 == local_28;
}

