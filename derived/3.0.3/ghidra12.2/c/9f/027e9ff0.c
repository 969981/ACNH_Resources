
/* WARNING: Removing unreachable block (ram,0x027ea2fc) */

undefined8 FUN_027e9ff0(long param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  undefined **local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  iVar5 = FUN_027e81c0(param_1,0);
  if (-1 < iVar5) {
    iVar12 = 0;
    iVar13 = 0;
    do {
      pbVar11 = (byte *)(param_1 + (long)iVar13 * 0x13230);
      uVar9 = (ulong)*pbVar11;
      if (((0x22 < uVar9) || ((byte)PTR_DAT_04bc27f0[uVar9] < pbVar11[1])) ||
         (((uint)(&DAT_053e6eb8)[uVar9] >> (ulong)(pbVar11[1] & 0x1f) & 1) == 0)) {
        FUN_026b1890(pbVar11,param_2);
        uVar4 = *(ushort *)(DAT_04da6480 + 0x4060);
        bVar2 = *(byte *)(DAT_04da6480 + 0x4062);
        bVar3 = *(byte *)(DAT_04da6480 + 0x4063);
        uVar9 = nn::time::IsValidDate((uint)uVar4,(uint)bVar2,(uint)bVar3);
        if ((uVar9 & 1) != 0) {
          *(ushort *)(pbVar11 + 0x12674) = uVar4;
          pbVar11[0x12676] = bVar2;
          pbVar11[0x12677] = bVar3;
        }
        pbVar11[0x12678] = 2;
        pbVar11[0x12679] = 1;
        uVar6 = FUN_021d7d60(pbVar11);
        local_78 = &PTR_LAB_048f9770;
        pcStack_70 = "MoveInCompletion";
        FUN_02749650(pbVar11 + 0x1267c,uVar6,&local_78,0,0);
        FUN_026b1100(pbVar11);
        FUN_02690d60(pbVar11);
        FUN_026b0ab8(pbVar11);
        local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
        *(undefined1 *)(param_1 + (long)iVar13 * 0x13230 + 0x1267a) = 0;
        FUN_027dc460(param_1,pbVar11);
        uVar9 = (ulong)*pbVar11;
        local_78 = (undefined **)CONCAT44(local_78._4_4_,iVar5);
        if (0x22 < *pbVar11) {
          uVar9 = 0;
        }
        *(uint *)(param_1 + 0xbf5e0 + uVar9 * 4) =
             *(uint *)(param_1 + 0xbf5e0 + uVar9 * 4) | 1 << (ulong)(pbVar11[1] & 0x1f);
        if (DAT_05574040 != 0) {
          puVar10 = *(undefined8 **)(DAT_05574040 + 0x10);
          if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
            lVar7 = (**(code **)(*(long *)*puVar10 + 0x38))();
            if (lVar7 != 0) {
              lVar7 = lVar7 + 0x70;
LAB_027ea24c:
              if ((uint)local_78 < 10) {
                lVar1 = lVar7 + 0x1962d8 + ((ulong)local_78 & 0xffffffff) * 0x10d8;
                if (9 < (uint)local_78) {
                  lVar1 = lVar7 + 0x1962d8;
                }
                lVar7 = *(long *)(lVar1 + 0x28);
                if (lVar7 == 0) {
                  uVar9 = 0;
                }
                else {
                  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
                    uVar9 = 0;
                    plVar8 = *(long **)(lVar7 + 0x20);
                  }
                  else {
                    uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
                    uVar9 = uVar9 & 0xffffffff;
                    if (*(long *)(lVar1 + 0x28) == 0) goto LAB_027ea2e0;
                    plVar8 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
                  }
                  if (plVar8 != (long *)0x0) {
                    local_78 = *(undefined ***)(lVar1 + 8);
                    pcStack_70 = *(char **)(lVar1 + 0x10);
                    local_68 = 0x12e8;
                    (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
                  }
                }
LAB_027ea2e0:
                local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
                *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c4) = (char)iVar12;
                lVar7 = *(long *)(lVar1 + 0x28);
                if ((uVar9 & 1) == 0) {
LAB_027ea328:
                  if (lVar7 == 0) {
LAB_027ea060:
                    FUN_027cdc30(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
                    goto LAB_027ea070;
                  }
                }
                else {
                  if (lVar7 == 0) goto LAB_027ea060;
                  if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
                    (**(code **)**(undefined8 **)(lVar7 + 0x18))();
                    lVar7 = *(long *)(lVar1 + 0x28);
                    goto LAB_027ea328;
                  }
                }
                if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
                  uVar9 = 0;
                  plVar8 = *(long **)(lVar7 + 0x20);
joined_r0x027ea3ac:
                  if (plVar8 != (long *)0x0) {
                    local_78 = *(undefined ***)(lVar1 + 8);
                    pcStack_70 = *(char **)(lVar1 + 0x10);
                    local_68 = 0x12e8;
                    (**(code **)(*plVar8 + 0x20))(plVar8,&local_78);
                  }
                }
                else {
                  uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
                  uVar9 = uVar9 & 0xffffffff;
                  if (*(long *)(lVar1 + 0x28) != 0) {
                    plVar8 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
                    goto joined_r0x027ea3ac;
                  }
                }
                FUN_027cdc30(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
                if ((((uVar9 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
                   (puVar10 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18),
                   puVar10 != (undefined8 *)0x0)) {
                  (**(code **)*puVar10)();
                }
              }
            }
          }
          else if (((puVar10 != (undefined8 *)0x0) && ((long *)puVar10[0x26] != (long *)0x0)) &&
                  (lVar7 = (**(code **)(*(long *)puVar10[0x26] + 0x38))(), lVar7 != 0))
          goto LAB_027ea24c;
        }
LAB_027ea070:
        uVar9 = FUN_02b61a20(iVar5);
        if ((uVar9 & 1) != 0) {
          return 1;
        }
      }
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar12 != 10);
  }
  return 0;
}

