
/* WARNING: Removing unreachable block (ram,0x012f8c74) */

undefined4 FUN_012f88f0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [2];
  byte local_de;
  undefined8 local_d8;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  
  local_b8 = 0;
  local_c0 = PTR_DAT_04bbfe68 + 0x10;
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar13 + 7);
  local_b0 = FUN_017baf44();
  puVar3 = PTR_DAT_04bbbc68;
  local_b0 = local_b0 & 1;
  iVar14 = *(int *)(param_1 + 0x84);
  iVar6 = *(int *)(param_1 + 0x94) + 1;
  if (iVar6 != iVar14) {
    iVar2 = *(int *)(param_1 + 0x80);
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar15 = iVar2;
    do {
      if (iVar15 != *(int *)(param_1 + 0x68) && iVar14 != *(int *)(param_1 + 0x6c))
      goto switchD_012f8d58_caseD_1;
      fVar16 = (float)iVar15 * 10.0 + 2.5;
      fVar17 = (float)iVar14 * 10.0 + 2.5;
      local_c8 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iStack_c4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
      local_d0 = puVar1;
      uVar10 = FUN_01a5190c(&local_c0,0,&local_d0,0);
      lVar12 = *(long *)puVar3;
      if ((((((lVar12 == 0) || (*(long *)(lVar12 + 0xb0) == 0)) ||
            (*(long *)(*(long *)(lVar12 + 0xb0) + 8) == 0)) ||
           ((*(long *)(lVar12 + 0x488) == 0 || (*(long *)(*(long *)(lVar12 + 0x488) + 8) == 0)))) ||
          (*(long *)(lVar12 + 0x2b0) == 0)) || (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) == 0))
      goto switchD_012f8d58_caseD_1;
      uVar7 = FUN_0277d6c4();
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
      goto switchD_012f8d58_caseD_1;
      FUN_0124c030(auStack_e8,uVar10);
      lVar12 = *(long *)puVar3;
      if (lVar12 == 0) {
        bVar4 = false;
        bVar5 = false;
LAB_012f8c80:
        if (!bVar5) goto switchD_012f8d58_caseD_1;
      }
      else {
        if ((((*(long *)(lVar12 + 0xb0) == 0) || (*(long *)(*(long *)(lVar12 + 0xb0) + 8) == 0)) ||
            (*(long *)(lVar12 + 0x488) == 0)) ||
           (((*(long *)(*(long *)(lVar12 + 0x488) + 8) == 0 || (*(long *)(lVar12 + 0x2b0) == 0)) ||
            (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) == 0)))) {
LAB_012f8bd8:
          bVar4 = false;
        }
        else {
          uVar7 = FUN_0277d6c4(uVar10);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_012f8bd8;
          FUN_0124c030(auStack_a8,uVar10);
          iVar8 = FUN_0123db50(auStack_a0,local_98);
          bVar4 = iVar8 == 0x21;
        }
        lVar12 = *(long *)puVar3;
        if (((((lVar12 == 0) || (*(long *)(lVar12 + 0xb0) == 0)) ||
             (*(long *)(*(long *)(lVar12 + 0xb0) + 8) == 0)) ||
            ((*(long *)(lVar12 + 0x488) == 0 || (*(long *)(*(long *)(lVar12 + 0x488) + 8) == 0))))
           || ((*(long *)(lVar12 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) == 0))))
        {
          bVar5 = false;
        }
        else {
          uVar7 = FUN_0277d6c4(uVar10);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (uVar7 < *(uint *)(lVar12 + 0x1d8)) {
            bVar5 = false;
            if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0) {
              FUN_0124c030(auStack_a8,uVar10);
              iVar8 = FUN_0123db50(auStack_a0,local_98);
              bVar5 = iVar8 == 0x22;
            }
          }
          else {
            bVar5 = false;
          }
        }
        if (!bVar4) goto LAB_012f8c80;
      }
      iVar8 = FUN_006f0400((float)iVar15 - (float)*(int *)(param_1 + 0x68),
                           (float)iVar14 - (float)*(int *)(param_1 + 0x6c));
      iVar9 = FUN_0123db50(auStack_e0,local_d8);
      if (((iVar9 == 0x21) || (iVar9 = FUN_0123db50(auStack_e0,local_d8), iVar9 == 0x22)) &&
         ((iVar9 = FUN_0123db50(auStack_e0,local_d8), iVar9 == 0x21 ||
          (iVar9 = FUN_0123db50(auStack_e0,local_d8), iVar9 == 0x22)))) {
        iVar9 = (int)(long)((float)(local_de >> 2 & 7) * 45.0 * 11930465.0);
      }
      else {
        iVar9 = 0;
      }
      switch(iVar8 + 0x10000000U >> 0x1d) {
      case 0:
        if (iVar9 == 0) goto LAB_012f8d84;
      default:
        goto switchD_012f8d58_caseD_1;
      case 2:
        iVar8 = 0x40000000;
        break;
      case 4:
        iVar8 = -0x80000000;
        break;
      case 6:
        iVar8 = -0x40000000;
      }
      if (iVar9 == iVar8) {
LAB_012f8d84:
        uVar11 = 1;
        if (bVar5) {
          uVar11 = 2;
        }
        if (bVar4) {
          uVar11 = 1;
        }
        return uVar11;
      }
switchD_012f8d58_caseD_1:
      if (iVar15 < *(int *)(param_1 + 0x90)) {
        iVar15 = iVar15 + 1;
      }
      else {
        iVar14 = iVar14 + 1;
        iVar15 = *(int *)(param_1 + 0x80);
      }
    } while (iVar2 != iVar15 || iVar6 != iVar14);
  }
  return 0;
}

