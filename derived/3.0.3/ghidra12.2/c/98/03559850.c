
void FUN_03559850(long param_1)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  int *piVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  undefined2 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  float fVar19;
  undefined2 local_98;
  undefined1 local_96;
  char local_95;
  int local_94;
  undefined *local_90;
  int local_88;
  undefined8 local_84;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_76;
  undefined4 local_70;
  undefined8 local_6c;
  byte local_64;
  
  lVar16 = *(long *)(*(long *)(param_1 + 0x228) + 0x570);
  if (lVar16 == 0) {
    return;
  }
  plVar1 = (long *)(param_1 + 0x1c1c8);
  piVar10 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
  local_78 = 0;
  local_7a = 1;
  iVar3 = *piVar10;
  local_70 = 0;
  local_76 = 0;
  local_6c = 0x60000000c;
  local_90 = PTR_DAT_04bc9c78 + 0x10;
  local_84 = 0;
  local_88 = iVar3;
  lVar11 = FUN_033d0598(PTR_DAT_04bb32e0);
  puVar8 = PTR_DAT_04bb43c0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(lVar11 + 0x814);
  if (*(long *)puVar8 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      puVar12 = (uint *)(**(code **)(*plVar1 + 0x18))(plVar1);
      puVar8 = PTR_DAT_04bb37e0;
      uVar9 = *puVar12;
      if (0 < (int)uVar9) {
        uVar18 = 0;
        do {
          piVar10 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1);
          puVar14 = (undefined2 *)puVar8;
          if ((*piVar10 != 0) &&
             (piVar10 = (int *)(**(code **)(*plVar1 + 0x18))(plVar1), uVar18 <= *piVar10 - 1)) {
            lVar17 = (**(code **)(*plVar1 + 0x18))(plVar1);
            puVar14 = *(undefined2 **)(*(long *)(lVar17 + 8) + uVar18 * 8);
          }
          local_98 = *puVar14;
          local_96 = *(undefined1 *)(puVar14 + 1);
          local_95 = *(char *)((long)puVar14 + 3);
          local_94 = *(int *)(puVar14 + 2);
          uVar13 = FUN_0277d7b4(&local_98,lVar11 + 0x814);
          if ((((uVar13 & 1) != 0) && (local_95 == *(char *)(lVar11 + 0x817))) &&
             (local_94 == *(int *)(lVar11 + 0x818))) {
            uVar9 = (uint)uVar18;
            goto LAB_03559a24;
          }
          uVar18 = uVar18 + 1;
        } while (uVar9 != uVar18);
      }
      uVar9 = 0xffffffff;
LAB_03559a24:
      local_84._4_4_ = uVar9;
      if (*(int *)(param_1 + 0x1b0) == 7) {
        if (iVar3 < 1) goto LAB_03559ae4;
        iVar4 = *(int *)(lVar16 + 0x2e8);
        uVar5 = 0;
        if (iVar4 != 0) {
          uVar5 = *(int *)(lVar16 + 0x2f4) / iVar4;
        }
        if (uVar5 != 1) {
          fVar19 = (float)(int)uVar5 * 0.5;
          uVar15 = 0;
          if (fVar19 != (float)(int)fVar19) {
            uVar15 = (uint)(0.0 <= fVar19);
          }
          iVar7 = uVar15 + (int)fVar19;
          if ((uVar5 & 1) != 0) {
            iVar7 = uVar5 - (uVar15 + (int)fVar19);
          }
          iVar6 = 0;
          if (iVar4 != 0) {
            iVar6 = (int)uVar9 / iVar4;
          }
          iVar7 = iVar6 - iVar7;
          iVar2 = iVar7;
          if (iVar3 <= iVar7 * iVar4) {
            iVar2 = iVar6;
          }
          iVar3 = 0;
          if (-1 < iVar7) {
            iVar3 = iVar2;
          }
          uVar9 = iVar3 * iVar4;
        }
      }
      else if ((int)uVar9 < 0) {
        uVar9 = 0;
        local_84._4_4_ = 0;
      }
      else if (-1 < *(int *)(lVar11 + 0x810)) {
        iVar3 = *(int *)(lVar16 + 0x2e8);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (int)uVar9 / iVar3;
        }
        uVar9 = iVar4 * iVar3 - iVar3 * *(int *)(lVar11 + 0x810);
        uVar9 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
      }
      local_84 = CONCAT44(local_84._4_4_,uVar9);
    }
  }
LAB_03559ae4:
  local_64 = *(byte *)(param_1 + 0x1f8);
  local_77 = 1;
  if (7 < local_64) {
    local_64 = 0xff;
  }
  local_7c = 0x101;
  FUN_03864290(lVar16,&local_90);
  return;
}

