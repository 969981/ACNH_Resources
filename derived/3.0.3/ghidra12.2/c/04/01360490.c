
void FUN_01360490(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  undefined8 *puVar18;
  
  if (param_3 != 0xffffffff) {
    puVar18 = (undefined8 *)(param_2 + 0x10);
    plVar11 = (long *)(**(code **)*puVar18)(puVar18);
    uVar10 = (**(code **)(*plVar11 + 0x18))();
    if (param_3 < uVar10) {
      plVar11 = (long *)(**(code **)*puVar18)(puVar18);
      uVar10 = (**(code **)(*plVar11 + 0x18))();
      if (uVar10 <= param_3) {
        param_3 = 0;
      }
      if (((long *)plVar11[5] == (long *)0x0) ||
         (puVar18 = *(undefined8 **)plVar11[5], puVar18 == (undefined8 *)0x0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar18)();
        uVar10 = uVar10 ^ 1;
      }
      lVar12 = (**(code **)(*plVar11 + 0x20))(plVar11,param_3);
      puVar2 = (ushort *)(lVar12 + plVar11[1]);
      *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
      uVar6 = *puVar2;
      param_1[2] = (long)(PTR_DAT_04bb2010 + 0x10);
      puVar8 = PTR_DAT_04bb5008;
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)((long)puVar2 + 7);
      uVar3 = *(uint *)(*(long *)puVar8 + 0x1df8);
      uVar13 = 0;
      if (uVar3 != 0) {
        lVar12 = *(long *)(*(long *)puVar8 + 0x1e00);
        if ((int)uVar3 < 2) {
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          iVar17 = uVar3 - 1;
          do {
            uVar14 = (uint)uVar16;
            iVar1 = iVar17 + uVar14;
            if (iVar1 < 0 != SCARRY4(iVar17,uVar14)) {
              iVar1 = iVar1 + 1;
            }
            uVar15 = iVar1 >> 1;
            uVar16 = (ulong)uVar15;
            uVar7 = *(ushort *)
                     (lVar12 + (-(ulong)(uVar15 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3));
            if (uVar7 == uVar6) goto joined_r0x0136065c;
            if (uVar7 < uVar6) {
              uVar14 = uVar15 + 1;
            }
            else {
              iVar17 = uVar15 - 1;
            }
            uVar16 = (ulong)uVar14;
          } while ((int)uVar14 < iVar17);
        }
        if (*(ushort *)(lVar12 + (-(uVar16 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)) == uVar6) {
          uVar15 = (uint)uVar16;
joined_r0x0136065c:
          if (-1 < (int)uVar15) {
            uVar14 = (uint)uVar16;
            if (uVar3 <= uVar14) {
              uVar14 = 0;
            }
            uVar13 = *(undefined4 *)(lVar12 + (ulong)uVar14 * 8 + 4);
            goto LAB_01360664;
          }
        }
        uVar13 = 0;
      }
LAB_01360664:
      *(undefined4 *)((long)param_1 + 0xc) = uVar13;
      uVar6 = puVar2[2];
      *(int *)(param_1 + 3) = (int)(short)puVar2[1];
      *(int *)((long)param_1 + 0x1c) = (int)(short)uVar6;
      uVar6 = puVar2[4];
      *(int *)(param_1 + 4) = (int)(char)puVar2[3];
      *(ushort *)((long)param_1 + 0x24) = uVar6;
      if ((uVar10 & 1) != 0) {
        return;
      }
      if (plVar11[5] == 0) {
        return;
      }
      puVar18 = *(undefined8 **)(plVar11[5] + 8);
      if (puVar18 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x013606ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar18)();
      return;
    }
  }
  puVar9 = PTR_DAT_04bbc570;
  uVar4 = PTR_DAT_04bbc570[8];
  *param_1 = (long)(PTR_DAT_04bc4608 + 0x10);
  *(undefined1 *)(param_1 + 1) = uVar4;
  puVar8 = PTR_DAT_04bb2010;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(puVar9 + 0xc);
  lVar12 = *(long *)(puVar9 + 0x18);
  param_1[2] = (long)(puVar8 + 0x10);
  param_1[3] = lVar12;
  uVar5 = *(undefined2 *)(puVar9 + 0x24);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar9 + 0x20);
  *(undefined2 *)((long)param_1 + 0x24) = uVar5;
  return;
}

