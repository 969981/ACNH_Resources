
/* WARNING: Removing unreachable block (ram,0x0130b0d4) */
/* WARNING: Removing unreachable block (ram,0x0130af70) */
/* WARNING: Removing unreachable block (ram,0x0130b0c0) */
/* WARNING: Removing unreachable block (ram,0x0130b134) */

void FUN_0130af1c(long param_1,ushort *param_2,long param_3,uint param_4,uint param_5)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  ushort uVar16;
  uint *puVar17;
  uint *puVar18;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  undefined *local_a0;
  uint *local_98;
  uint local_90;
  ushort local_86;
  ushort local_84;
  byte local_82;
  byte local_7a;
  undefined *local_78;
  uint *local_70;
  uint local_68;
  
  puVar5 = PTR_DAT_04bbc330;
  if ((param_4 & 1) == 0) goto LAB_0130b5bc;
  puVar18 = (uint *)0x0;
  local_68 = (uint)(byte)param_2[2];
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  uVar3 = (uint)*param_2 - (uint)*(ushort *)(lVar14 + 0x408);
  local_78 = PTR_DAT_04bbc330 + 0x10;
  local_70 = (uint *)0x0;
  if (uVar3 < *(uint *)(lVar14 + 1000)) {
    puVar18 = *(uint **)(*(long *)(lVar14 + 0x3f0) + (long)(int)uVar3 * 8);
    if (puVar18 != (uint *)0x0) {
      local_70 = puVar18;
    }
  }
  uVar3 = *(int *)(param_3 + 8) - *(int *)(param_1 + 0x18);
  uVar4 = *(int *)(param_3 + 0xc) - *(int *)(param_1 + 0x1c);
  plVar10 = (long *)(*(code *)**(undefined8 **)(param_1 + 0x38))();
  uVar6 = (**(code **)(*plVar10 + 0x18))();
  uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10);
  if (uVar6 <= uVar3) {
    uVar3 = 0;
  }
  if (uVar7 <= uVar4) {
    uVar4 = 0;
  }
  if (((long *)plVar10[5] == (long *)0x0) ||
     (puVar11 = *(undefined8 **)plVar10[5], puVar11 == (undefined8 *)0x0)) {
    lVar14 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar3,uVar4);
    FUN_0130d468(&local_86,lVar14 + plVar10[1]);
  }
  else {
    uVar12 = (**(code **)*puVar11)();
    lVar14 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar3,uVar4);
    FUN_0130d468(&local_86,lVar14 + plVar10[1]);
    if ((((uVar12 & 1) != 0) && (plVar10[5] != 0)) &&
       (puVar11 = *(undefined8 **)(plVar10[5] + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  puVar15 = (uint *)0x0;
  lVar14 = *(long *)PTR_DAT_04bb27a8;
  local_90 = (uint)local_82;
  uVar3 = (uint)local_86 - (uint)*(ushort *)(lVar14 + 0x408);
  local_a0 = puVar5 + 0x10;
  local_98 = (uint *)0x0;
  if (uVar3 < *(uint *)(lVar14 + 1000)) {
    puVar15 = *(uint **)(*(long *)(lVar14 + 0x3f0) + (long)(int)uVar3 * 8);
    if (puVar15 != (uint *)0x0) {
      local_98 = puVar15;
    }
  }
  if ((((uint)*param_2 == (uint)local_86) && (param_2[1] == local_84)) &&
     ((byte)param_2[2] == local_90)) goto LAB_0130b5bc;
  if (puVar15 != (uint *)0x0) {
    puVar17 = (uint *)((long)puVar15 - (ulong)*puVar15);
    if (((*puVar15 != 0) && (puVar17 != (uint *)0x0)) &&
       ((*puVar17 != 0 && ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0))))))
    {
      lVar1 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar17 + lVar1 + (ulong)(ushort)puVar17[2] * 8;
      if (lVar1 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar3);
        }
        if (*puVar17 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < *(uint *)PTR_DAT_04bbbe48) &&
           (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar4 * 2) == 3)) {
          uVar16 = 0;
          if ((puVar18 != (uint *)0x0) &&
             ((uVar3 = *puVar18, uVar3 != 0 && (puVar18 != (uint *)(ulong)uVar3)))) {
            puVar17 = (uint *)((long)puVar18 - (long)(ulong)uVar3);
            uVar16 = 0;
            if (*puVar17 != 0) {
              uVar3 = puVar17[1];
              if ((uVar3 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar1 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar17 + lVar1 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar1 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar3 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar3);
                  }
                  if (*puVar17 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bbbe48) &&
                     (uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar4 * 2),
                     uVar16 < 5)) goto LAB_0130b250;
                }
              }
              uVar16 = 0;
            }
          }
LAB_0130b250:
          if (uVar16 == 3) {
            puVar17 = (uint *)((long)puVar15 - (ulong)*puVar15);
            local_b0 = 4.2039e-45;
            if ((((*puVar15 == 0) || (puVar17 == (uint *)0x0)) || (*puVar17 == 0)) ||
               ((uVar3 = puVar17[1], uVar3 == 0 || ((ulong)(ushort)puVar17[2] == 0)))) {
LAB_0130b4b0:
              if (puVar18 == (uint *)0x0) goto LAB_0130b5bc;
            }
            else {
              lVar1 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar17 + lVar1 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar1 == 0) goto LAB_0130b4b0;
              uVar4 = 0;
              if ((ulong)uVar3 != 0) {
                uVar4 = (uint)((ulong)((long)puVar15 - lVar1) / (ulong)uVar3);
              }
              if (*puVar17 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if (*(uint *)PTR_DAT_04bbbe30 <= uVar4) goto LAB_0130b4b0;
              if ((puVar18 == (uint *)0x0) ||
                 (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar4 * 2) == 2))
              goto LAB_0130b5bc;
            }
            puVar15 = (uint *)((long)puVar18 - (ulong)*puVar18);
            if (((*puVar18 == 0) ||
                (((puVar15 == (uint *)0x0 || (*puVar15 == 0)) || (uVar3 = puVar15[1], uVar3 == 0))))
               || ((ulong)(ushort)puVar15[2] == 0)) goto LAB_0130b5bc;
            lVar1 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar15 + lVar1 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar1 == 0) goto LAB_0130b5bc;
            uVar4 = 0;
            if ((ulong)uVar3 != 0) {
              uVar4 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar3);
            }
            if (*puVar15 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bbbe30 <= uVar4) ||
               (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar4 * 2) != 2))
            goto LAB_0130b5bc;
          }
          else {
            local_b0 = (float)(uint)local_7a;
            local_a4 = (float)(uint)(byte)param_2[6];
            if ((uint)local_b0 <= (uint)local_a4) goto LAB_0130b5bc;
          }
          fStack_a8 = (float)*(int *)(param_3 + 0xc) * 10.0 + 5.0;
          local_b0 = (float)*(int *)(param_3 + 8) * 10.0 + 5.0;
          local_ac = 0.0;
          if (local_7a != 4) {
            local_ac = (float)local_7a * 15.0;
          }
          FUN_012a9940(lVar14 + 0x4798,&local_b0);
          goto LAB_0130b5bc;
        }
      }
    }
  }
  if (puVar18 != (uint *)0x0) {
    puVar17 = (uint *)((long)puVar18 - (ulong)*puVar18);
    if (((*puVar18 != 0) && (puVar17 != (uint *)0x0)) &&
       ((*puVar17 != 0 && ((uVar3 = puVar17[1], uVar3 != 0 && ((ulong)(ushort)puVar17[2] != 0))))))
    {
      lVar14 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar17 + lVar14 + (ulong)(ushort)puVar17[2] * 8;
      if (lVar14 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar18 - lVar14) / (ulong)uVar3);
        }
        if (*puVar17 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if (((uVar4 < *(uint *)PTR_DAT_04bbbe48) &&
            (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar4 * 2) == 1)) &&
           ((param_5 & 1) == 0)) {
          if (puVar15 != (uint *)0x0) {
            puVar18 = (uint *)((long)puVar15 - (ulong)*puVar15);
            if (((*puVar15 != 0) && (puVar18 != (uint *)0x0)) &&
               ((*puVar18 != 0 &&
                ((uVar3 = puVar18[1], uVar3 != 0 && ((ulong)(ushort)puVar18[2] != 0)))))) {
              lVar14 = 0xc;
              if (*(char *)((long)puVar18 + 10) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar18 + lVar14 + (ulong)(ushort)puVar18[2] * 8;
              if (lVar14 != 0) {
                uVar4 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar3);
                }
                if (*puVar18 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bbbe48) &&
                   (sVar2 = *(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar4 * 2),
                   0xfffb < (ushort)(sVar2 - 5U))) {
                  if ((sVar2 != 1) || (iVar8 = FUN_01313218(&local_a0), iVar8 != 2))
                  goto LAB_0130b5bc;
                  uVar13 = FUN_01313060(&local_78);
                  iVar8 = FUN_006bd550(uVar13,0);
                  uVar13 = FUN_01313060(&local_a0);
                  iVar9 = FUN_006bd550(uVar13,0);
                  if (iVar9 == 0x41dd4793) {
                    if (iVar8 == -0x10d07036) goto LAB_0130b5bc;
                  }
                  else if ((iVar9 == -0x10d07036) && (iVar8 == 0x41dd4793)) goto LAB_0130b5bc;
                }
              }
            }
          }
          fStack_a8 = (float)*(int *)(param_3 + 0xc) * 10.0 + 5.0;
          local_b0 = (float)*(int *)(param_3 + 8) * 10.0 + 5.0;
          local_ac = 0.0;
          if (local_7a != 4) {
            local_ac = (float)local_7a * 15.0;
          }
          FUN_012a9b30(*(long *)PTR_DAT_04bb27a8 + 0x4798,&local_b0);
        }
      }
    }
  }
LAB_0130b5bc:
  FUN_01309ff0(param_1,param_2,param_3);
  return;
}

