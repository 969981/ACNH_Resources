
/* WARNING: Removing unreachable block (ram,0x01e28d94) */

void FUN_01e28bb0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint *puVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  undefined *puVar20;
  int local_44;
  
  puVar11 = PTR_DAT_04bb6298;
  if (((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
      (uVar14 = FUN_01e28188(), (uVar14 & 1) != 0)) &&
     (uVar14 = FUN_0290d828(), puVar13 = PTR_DAT_04bc3a80, puVar12 = PTR_DAT_04bc15a0,
     (uVar14 & 1) == 0)) {
    sVar9 = *(short *)puVar11;
    if (sVar9 == -1) {
LAB_01e28d5c:
      puVar16 = &LAB_01010000;
    }
    else {
      local_44 = 0;
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
      if (0xff < (uint)(int)sVar9) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 & 1) == 0) goto LAB_01e28d5c;
      puVar16 = *(undefined1 **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
    lVar19 = 10;
    *(undefined1 **)(param_1 + 0x568) = puVar16;
    puVar20 = &DAT_053fe348;
    do {
      if (((puVar20[0xaf9] != '\0') && (*(long *)(puVar20 + 0xaa0) != 0)) &&
         ((*(uint *)(*(long *)(puVar20 + 0xaa0) + 4) & 0xfffffffe) == 2)) {
        iVar15 = *(int *)(puVar20 + 0x550);
        if (iVar15 < 1) {
          piVar18 = (int *)puVar12;
        }
        else {
          iVar10 = iVar15 + *(int *)(puVar20 + 0x54c) + -1;
          iVar7 = 0;
          if (*(int *)(puVar20 + 0x548) <= iVar10) {
            iVar7 = *(int *)(puVar20 + 0x548);
          }
          piVar18 = (int *)(*(long *)(puVar20 + 0x540) + (long)(iVar10 - iVar7) * 0x14 + 8);
        }
        local_44 = *piVar18;
        if ((local_44 != 0) && (*(int *)(puVar13 + 0x38) == 0x6622bd46)) {
          iVar7 = *(int *)(puVar20 + 0x548);
          if (iVar15 < iVar7) {
LAB_01e28e74:
            *(int *)(puVar20 + 0x550) = iVar15 + 1;
            iVar10 = 0;
            if (iVar7 <= *(int *)(puVar20 + 0x54c) + iVar15) {
              iVar10 = iVar7;
            }
            puVar17 = (undefined8 *)
                      (*(long *)(puVar20 + 0x540) +
                      (long)((*(int *)(puVar20 + 0x54c) + iVar15) - iVar10) * 0x14);
            *(undefined2 *)(puVar17 + 2) = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
          }
          else {
            if (0 < iVar15) {
              *(int *)(puVar20 + 0x550) = iVar15 + -1;
              iVar10 = 0;
              if (*(int *)(puVar20 + 0x54c) + 1 < iVar7) {
                iVar10 = *(int *)(puVar20 + 0x54c) + 1;
              }
              *(int *)(puVar20 + 0x54c) = iVar10;
              iVar15 = iVar15 + -1;
            }
            if (iVar15 < iVar7) goto LAB_01e28e74;
          }
          local_44 = 0;
          FUN_021dafb0(puVar20 + 0x514,&local_44,0,0,0,1);
        }
      }
      puVar20 = puVar20 + 0xba0;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  sVar9 = *(short *)puVar11;
  if (sVar9 != -1) {
    local_44 = 0x1d;
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
    if (0xff < (uint)(int)sVar9) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x1d & 1) != 0) goto LAB_01e28ce0;
  }
  uVar8 = *(ushort *)(param_1 + 0x590);
  uVar1 = (uVar8 & 2 ^ 0xfffe) & uVar8;
  if ((uVar8 & 4) != 0) {
    uVar1 = uVar1 & 0xfffb;
  }
  uVar3 = uVar1;
  if ((uVar1 & 8) != 0) {
    uVar3 = uVar1 & 0xfff7;
  }
  uVar4 = uVar3;
  if ((uVar3 & 0x10) != 0) {
    uVar4 = uVar3 & 0xffef;
  }
  uVar2 = (uVar4 & 0x40 ^ 0xffdf) & uVar4;
  if ((uVar4 & 0x80) != 0) {
    uVar2 = uVar2 & 0xff7f;
  }
  uVar5 = uVar2;
  if ((uVar2 & 0x100) != 0) {
    uVar5 = uVar2 & 0xfeff;
  }
  if (((((uVar4 & 0x20) != 0 || (uVar8 & 7) != 0) ||
       ((((uVar1 & 8) != 0 || (uVar3 & 0x10) != 0) || (uVar4 & 0x40) != 0) || (uVar4 & 0x80) != 0))
      || (uVar2 & 0x100) != 0) || (uVar5 & 0x200) != 0) {
    if ((uVar5 & 0x200) != 0) {
      uVar5 = uVar5 & 0xfddf;
    }
    *(ushort *)(param_1 + 0x590) = uVar5;
  }
LAB_01e28ce0:
  FUN_02090264(param_1 + 0x580);
  return;
}

