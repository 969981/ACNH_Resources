
uint * FUN_0087bcb0(long param_1,ulong *param_2,int param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *__s;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  uint *puVar12;
  ulong uVar13;
  char cVar14;
  int local_8c;
  undefined *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_78 = *param_2;
  if ((param_4 & 1) != 0) {
    if ((char)(local_78 >> 0x20) < '\x05') {
      lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
      local_88 = (undefined *)(lVar5 + -0x15180);
      local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
    }
    uVar13 = local_78 >> 0x30;
    local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
    local_78 = CONCAT26((short)uVar13,(undefined6)local_78) & 0xff00ffffffffffff;
  }
  __s = PTR_DAT_04bb3250;
  uVar6 = *(uint *)(param_1 + 1000);
  if ((0 < (int)uVar6) ||
     (((*(long *)(param_1 + 0x2d8) != 0 &&
       (puVar12 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar12 != (uint *)0x0)) &&
      (uVar6 = *puVar12, 0 < (int)uVar6)))) {
    local_8c = 0;
    uVar13 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(param_1 + 1000) < 1) {
        if (((((*(long *)(param_1 + 0x2d8) == 0) ||
              (puVar12 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar12 == (uint *)0x0)) ||
             ((uVar13 < *(uint *)(param_1 + 0x2f0) &&
              (*(char *)(*(long *)(param_1 + 0x2f8) + uVar13) == '\0')))) ||
            ((*puVar12 <= uVar13 || (puVar12[1] == 0)))) || ((ushort)puVar12[2] == 0))
        goto LAB_0087be04;
        iVar11 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * (int)uVar13 + (uint)(ushort)puVar12[2] * 8 + iVar11)
                          + (long)puVar12);
      }
      else if (uVar13 < *(uint *)(param_1 + 1000)) {
        uVar10 = uVar13 & 0xffffffff;
        if (*(uint *)(param_1 + 0x3d8) <= uVar13) {
          uVar10 = 0;
        }
        puVar12 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar10 * 8);
      }
      else {
LAB_0087be04:
        puVar12 = (uint *)0x0;
      }
      uVar3 = *puVar12;
      uVar7 = 0;
      if ((uVar3 != 0) && (puVar12 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar3);
        uVar7 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar8 + lVar5 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar5 != 0) {
              uVar7 = 0;
              if ((ulong)uVar3 != 0) {
                uVar7 = (uint)((ulong)((long)puVar12 - lVar5) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar7) {
                uVar7 = 0xffffffff;
              }
              if ((uVar7 < DAT_04ce9768) &&
                 (uVar7 = (uint)*(ushort *)(DAT_04ce9770 + (long)(int)uVar7 * 2), uVar7 < 6))
              goto LAB_0087be94;
            }
          }
          uVar7 = 0;
        }
      }
LAB_0087be94:
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
      if (uVar7 == 0) {
        if (*puVar12 != 0) {
          cVar14 = *PTR_DAT_04bb3248;
          do {
            if (cVar14 == '\0') {
              cVar14 = '\x01';
              *PTR_DAT_04bb3248 = 1;
              memset(__s,0xff,0x288);
            }
            else {
              uVar3 = *(uint *)(__s + 0x148);
              if (-1 < (int)uVar3) {
                lVar5 = (ulong)uVar3 + (long)puVar12;
                goto LAB_0087bf6c;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar8 = (uint *)(ulong)*puVar12;
            lVar5 = 0;
            if ((*puVar12 == 0) || (puVar12 == puVar8)) goto LAB_0087bf6c;
            lVar5 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar2 = (long)puVar12 + (lVar5 - (long)puVar8);
            if (lVar2 == 0) break;
            uVar10 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
            *(undefined4 *)(__s + 0x148) = 0xfffffffe;
            lVar5 = 0;
            if (uVar10 == 0) goto LAB_0087bf6c;
            piVar9 = (int *)(lVar2 + 4);
            while (piVar9[-1] != 0x443c0fb7) {
              piVar9 = piVar9 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                lVar5 = 0;
                goto LAB_0087bf6c;
              }
            }
            iVar11 = 0;
            if (*piVar9 != -1) {
              iVar11 = *piVar9;
            }
            *(int *)(__s + 0x148) = iVar11;
          } while (*puVar12 != 0);
        }
        lVar5 = 0;
LAB_0087bf6c:
        lStack_80 = *(long *)PTR_PTR_04bb3260;
        if (lVar5 != 0) {
          lStack_80 = lVar5;
        }
        local_88 = puVar1;
        uVar10 = FUN_00879630(param_1,&local_88,0);
        if ((uVar10 & 1) != 0) {
          if (*puVar12 != 0) {
            cVar14 = *PTR_DAT_04bb3248;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(__s,0xff,0x288);
              }
              else {
                uVar3 = *(uint *)(__s + 0x148);
                if (-1 < (int)uVar3) {
                  lVar5 = (ulong)uVar3 + (long)puVar12;
                  goto LAB_0087c05c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)*puVar12;
              lVar5 = 0;
              if ((*puVar12 == 0) || (puVar12 == puVar8)) goto LAB_0087c05c;
              lVar5 = 0xc;
              if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar2 = (long)puVar12 + (lVar5 - (long)puVar8);
              if (lVar2 == 0) break;
              uVar10 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
              *(undefined4 *)(__s + 0x148) = 0xfffffffe;
              lVar5 = 0;
              if (uVar10 == 0) goto LAB_0087c05c;
              piVar9 = (int *)(lVar2 + 4);
              while (piVar9[-1] != 0x443c0fb7) {
                piVar9 = piVar9 + 2;
                uVar10 = uVar10 - 1;
                if (uVar10 == 0) {
                  lVar5 = 0;
                  goto LAB_0087c05c;
                }
              }
              iVar11 = 0;
              if (*piVar9 != -1) {
                iVar11 = *piVar9;
              }
              *(int *)(__s + 0x148) = iVar11;
            } while (*puVar12 != 0);
          }
          lVar5 = 0;
LAB_0087c05c:
          lStack_80 = *(long *)PTR_PTR_04bb3260;
          if (lVar5 != 0) {
            lStack_80 = lVar5;
          }
          local_88 = PTR_DAT_04bb2020 + 0x10;
          local_70 = local_78;
          if ((char)(local_78 >> 0x20) < '\x05') {
            local_68 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
            local_68 = local_68 + -0x15180;
            local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
          }
          uVar4 = local_70;
          uVar10 = local_70 >> 0x30;
          local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
          local_70 = CONCAT26((short)uVar10,(undefined6)local_70) & 0xff00ffffffffffff;
          uVar10 = FUN_00879dd0(param_1,&local_88,uVar4,uVar4 >> 0x10,uVar4 >> 0x18,0);
          if ((uVar10 & 1) != 0) {
            if (local_8c == param_3) {
              return puVar12;
            }
            local_8c = local_8c + 1;
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar6);
  }
  return (uint *)0x0;
}

