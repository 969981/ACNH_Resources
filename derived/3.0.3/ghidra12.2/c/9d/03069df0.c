
void FUN_03069df0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined *local_80;
  undefined4 local_78;
  
  puVar10 = PTR_DAT_04bc4d98;
  puVar9 = PTR_DAT_04bc4d90;
  lVar17 = *(long *)(*(long *)(param_1 + 0x210) + 0x580);
  if ((lVar17 != 0) && (uVar5 = *(uint *)(lVar17 + 0x2f8), uVar5 != 0)) {
    uVar18 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    do {
      if ((-1 < (int)uVar18) && ((int)uVar18 < *(int *)(lVar17 + 0x208))) {
        puVar16 = *(undefined8 **)(*(long *)(lVar17 + 0x210) + uVar18 * 8);
        if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
          *(undefined **)puVar9 = puVar1;
          __cxa_guard_release(puVar10);
        }
        if ((((puVar16 != (undefined8 *)0x0) &&
             (uVar12 = (**(code **)*puVar16)(puVar16,puVar9), (uVar12 & 1) != 0)) &&
            (plVar15 = *(long **)(puVar16[0x5e] + (ulong)(1 < *(uint *)(puVar16 + 0x5d)) * 8),
            plVar15 != (long *)0x0)) && (plVar15[1] != 0)) {
          if (*(int *)(lVar17 + 0x208) != 0) {
            iVar11 = 0;
            do {
              if (*(undefined8 **)(*(long *)(lVar17 + 0x210) + (long)iVar11 * 8) == puVar16) {
                if (-1 < iVar11) {
                  iVar6 = *(int *)(lVar17 + 0x2e8);
                  iVar14 = *(int *)(lVar17 + 0x430) - *(int *)(lVar17 + 0x438);
                  iVar8 = 0;
                  if (iVar6 != 0) {
                    iVar8 = iVar11 / iVar6;
                  }
                  if ((*(byte *)(lVar17 + 1000) >> 1 & 1) == 0) {
                    iVar14 = iVar14 + iVar8;
                  }
                  else {
                    uVar7 = *(uint *)(lVar17 + 0x434);
                    uVar13 = 0;
                    if ((int)uVar7 < iVar14) {
                      uVar13 = ~uVar7;
                    }
                    if (iVar14 < 0) {
                      uVar13 = uVar7 + 1;
                    }
                    iVar3 = iVar14 + iVar8 + uVar13;
                    iVar14 = *(int *)(lVar17 + 0x3d0);
                    iVar4 = 0;
                    if (iVar14 <= iVar3) {
                      iVar4 = iVar14;
                    }
                    if (-1 < iVar3) {
                      iVar14 = -iVar4;
                    }
                    iVar14 = iVar14 + iVar3;
                  }
                  uVar13 = (iVar14 * iVar6 - iVar8 * iVar6) + iVar11;
                  if (*(int *)(lVar17 + 0x3cc) <= (int)uVar13 || 0x7fffffff < uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  goto LAB_03069f68;
                }
                break;
              }
              iVar11 = iVar11 + 1;
            } while (*(int *)(lVar17 + 0x208) != iVar11);
          }
          uVar13 = 0xffffffff;
LAB_03069f68:
          if (uVar13 == *(uint *)(param_1 + 0x1c334)) {
            local_78 = 0x14;
            local_80 = puVar2;
            (**(code **)(*plVar15 + 0x18))(plVar15,&local_80);
            uVar19 = 0;
          }
          else {
            if (uVar13 != *(uint *)(param_1 + 0x1c338)) goto LAB_03069ea0;
            local_80 = PTR_DAT_04bc4f00 + 0x10;
            local_78 = 0x14;
            (**(code **)(*plVar15 + 0x18))(plVar15,&local_80);
            uVar19 = 0x3f800000;
          }
          (**(code **)(plVar15[3] + 0x158))(uVar19,plVar15[1]);
        }
      }
LAB_03069ea0:
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar5);
  }
  return;
}

