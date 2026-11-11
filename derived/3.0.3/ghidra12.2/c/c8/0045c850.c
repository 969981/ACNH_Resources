
void FUN_0045c850(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ulong local_c0;
  int local_8c;
  long local_88;
  long local_80;
  ulong local_78;
  long local_70 [2];
  
  puVar3 = PTR_DAT_048607b8;
  if (0 < param_3) {
    lVar14 = 0;
    plVar1 = param_1 + 2;
    puVar13 = (undefined8 *)(param_2 + 0x18);
    do {
      local_8c = 0;
      iVar5 = (**(code **)(*(long *)*param_1 + 0x20))
                        ((long *)*param_1,puVar13 + -3,puVar13,&local_8c);
      if (iVar5 < 0) {
        if (1 < DAT_04c70110) {
          FUN_00444bc0(&local_d0,&DAT_04c700c0,2);
          local_88 = puVar13[-2];
          lVar14 = FUN_004446b0(&local_d0,"Cloner callback failed on {}",&DAT_04862f68,&local_88);
          *(char **)(lVar14 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
          ;
          *(undefined8 *)(lVar14 + 0x30) = 0x221;
          FUN_00444c00(&local_d0);
        }
        *(undefined4 *)(param_1 + 1) = 0x80040200;
        return;
      }
      if (local_8c == 1) {
        FUN_00429460(&local_d0,puVar13[-2]);
        if ((local_d0 < 2) || (uVar6 = FUN_004290b0(&local_d0), (uVar6 >> 6 & 1) == 0)) {
          uVar10 = puVar13[-3];
          lVar9 = puVar13[-2];
          uVar16 = puVar13[-1];
joined_r0x0045c908:
          if ((uVar16 & 1) != 0) {
            FUN_0043dd30(uVar16 & 0xfffffffffffffffe);
          }
        }
        else {
          lVar9 = *(long *)(puVar13[-2] + 8);
          uVar16 = FUN_00428440(lVar9);
          if ((uVar16 & 0x1f) != 6) {
            lVar9 = 0;
          }
          uVar10 = puVar13[-3];
          if (lVar9 != 0) {
            uVar16 = FUN_00428370(lVar9);
            goto joined_r0x0045c908;
          }
          uVar16 = 0;
        }
        local_e0 = 0;
        local_d8 = 0;
        local_e8 = 0;
        iVar5 = (**(code **)(*(long *)(puVar13[2] & 0xfffffffffffffffe) + 0x50))
                          ((long *)(puVar13[2] & 0xfffffffffffffffe),*puVar13,puVar13[1],&local_e8);
        if (iVar5 < 0) {
          if (1 < DAT_04c70110) {
            FUN_00444bc0(&local_d0,&DAT_04c700c0,2);
            local_70[0] = puVar13[1];
            local_78 = 0;
            local_88 = 0;
            local_80 = 0;
            (**(code **)(*(long *)(puVar13[2] & 0xfffffffffffffffe) + 0x50))
                      ((long *)(puVar13[2] & 0xfffffffffffffffe),*puVar13,local_70[0],&local_88);
            lVar9 = local_80;
            if ((local_78 & 1) != 0) {
              FUN_0043dd50(local_78 & 0xfffffffffffffffe);
            }
            local_88 = lVar9;
            lVar9 = FUN_004446b0(&local_d0,"Can\'t get var from {} pointing to {}",&DAT_04862f78,
                                 local_70,&local_88);
            *(char **)(lVar9 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
            ;
            uVar10 = 0x226;
LAB_0045ca90:
            *(undefined8 *)(lVar9 + 0x30) = uVar10;
            FUN_00444c00(&local_d0);
          }
LAB_0045ca9c:
          *(undefined4 *)(param_1 + 1) = 0x80040200;
joined_r0x0045caa8:
          bVar2 = true;
        }
        else {
          if (local_e8 == 0) {
            local_c8 = 0;
            local_c0 = 0;
            local_d0 = 0;
            iVar5 = (**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x48))
                              ((long *)(uVar16 & 0xfffffffffffffffe),uVar10,lVar9,&local_d0);
            if ((local_c0 & 1) != 0) {
              FUN_0043dd50(local_c0 & 0xfffffffffffffffe);
            }
            if (iVar5 < 0) {
              if (1 < DAT_04c70110) {
                FUN_00444bc0(&local_d0,&DAT_04c700c0,2);
                local_70[0] = lVar9;
                FUN_00429460(&local_88,puVar13[-2]);
                lVar9 = FUN_004446b0(&local_d0,"Cannot assign null to pointer of type \'{}\' at {}",
                                     &DAT_04862fb0,local_70,&local_88);
                *(char **)(lVar9 + 0x28) =
                     "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                ;
                uVar10 = 0x25d;
                goto LAB_0045ca90;
              }
              goto LAB_0045ca9c;
            }
          }
          else {
            local_88 = 0;
            local_80 = 0;
            local_78 = 0;
            uVar6 = FUN_0045b290(plVar1,&local_e8);
            if (*(uint *)(param_1 + 3) == uVar6) {
              uVar7 = uVar6;
              if ((*(uint *)((long)param_1 + 0x1c) & 0x3fffffff) == uVar6) {
                FUN_00426990(puVar3,plVar1,0x30);
                uVar7 = *(uint *)(param_1 + 3);
              }
              lVar15 = *plVar1;
              plVar11 = (long *)(lVar15 + (long)(int)uVar7 * 0x30);
              *plVar11 = local_e8;
              plVar11[1] = local_e0;
              plVar11[2] = local_d8;
              if ((local_d8 & 1) != 0) {
                FUN_0043dd30(local_d8 & 0xfffffffffffffffe);
              }
              lVar15 = lVar15 + (long)(int)uVar7 * 0x30;
              *(undefined8 *)(lVar15 + 0x20) = 0;
              *(undefined8 *)(lVar15 + 0x28) = 0;
              *(undefined8 *)(lVar15 + 0x18) = 0;
              *(uint *)(param_1 + 3) = uVar7 + 1;
              lVar15 = param_1[2];
              if (puVar13[-2] != puVar13[1]) {
                bVar2 = true;
                goto LAB_0045cbd0;
              }
              uVar7 = FUN_004274f0();
              if ((uVar7 >> 2 & 1) == 0) {
                bVar2 = true;
                goto LAB_0045cbd0;
              }
              lVar15 = lVar15 + (long)(int)uVar6 * 0x30;
              *(long *)(lVar15 + 0x18) = local_e8;
              *(long *)(lVar15 + 0x20) = local_e0;
              puVar12 = (ulong *)(lVar15 + 0x28);
              if ((local_d8 & 1) != 0) {
                FUN_0043dd30(local_d8 & 0xfffffffffffffffe);
              }
              if ((*puVar12 & 1) != 0) {
                FUN_0043dd50(*puVar12 & 0xfffffffffffffffe);
              }
              *puVar12 = local_d8;
              local_88 = *(long *)(lVar15 + 0x18);
              local_80 = *(long *)(lVar15 + 0x20);
              if ((local_d8 & 1) != 0) {
                FUN_0043dd30(local_d8 & 0xfffffffffffffffe);
              }
              if ((local_78 & 1) != 0) {
                FUN_0043dd50(local_78 & 0xfffffffffffffffe);
              }
              local_78 = *puVar12;
LAB_0045cd4c:
              iVar5 = (**(code **)(*(long *)(uVar16 & 0xfffffffffffffffe) + 0x48))
                                ((long *)(uVar16 & 0xfffffffffffffffe),uVar10,lVar9,&local_88);
              if (iVar5 < 0) {
                if (1 < DAT_04c70110) {
                  FUN_00444bc0(&local_d0,&DAT_04c700c0,2);
                  lStack_f0 = local_80;
                  local_f8 = lVar9;
                  FUN_00429460(local_70,puVar13[-2]);
                  lVar9 = FUN_004446b0(&local_d0,
                                       "Cannot assign instance of type \'{}\' to pointer of type \'{}\' at {}"
                                       ,&DAT_04862f90,&lStack_f0,&local_f8,local_70);
                  *(char **)(lVar9 + 0x28) =
                       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
                  ;
                  *(undefined8 *)(lVar9 + 0x30) = 599;
                  FUN_00444c00(&local_d0);
                }
                bVar2 = true;
                *(undefined4 *)(param_1 + 1) = 0x80040200;
              }
              else {
                bVar2 = false;
              }
            }
            else {
              bVar2 = false;
              lVar15 = *plVar1;
LAB_0045cbd0:
              lVar15 = lVar15 + (long)(int)uVar6 * 0x30;
              local_88 = *(long *)(lVar15 + 0x18);
              local_80 = *(long *)(lVar15 + 0x20);
              puVar12 = (ulong *)(lVar15 + 0x28);
              if ((*puVar12 & 1) == 0) {
                if ((local_78 & 1) == 0) goto LAB_0045cbec;
LAB_0045cc0c:
                FUN_0043dd50(local_78 & 0xfffffffffffffffe);
                local_78 = *puVar12;
              }
              else {
                FUN_0043dd30(*puVar12 & 0xfffffffffffffffe);
                if ((local_78 & 1) != 0) goto LAB_0045cc0c;
LAB_0045cbec:
                local_78 = *puVar12;
              }
              if (!bVar2) goto LAB_0045cd4c;
              bVar2 = true;
              FUN_0045aa20(param_1,&local_88,&local_e8,1);
              lVar4 = local_80;
              lVar15 = local_88;
              if (-1 < *(int *)(param_1 + 1)) {
                if ((((local_80 != 0) &&
                     (uVar8 = FUN_00427110(local_80,PTR_DAT_04bd71b0), (uVar8 & 1) != 0)) &&
                    (uVar6 = FUN_004274f0(lVar4), (uVar6 >> 3 & 1) == 0)) && (lVar15 != 0)) {
                  uVar6 = *(uint *)(param_1 + 10);
                  if (uVar6 == (*(uint *)((long)param_1 + 0x54) & 0x3fffffff)) {
                    FUN_00426990(puVar3,param_1 + 9,8);
                    uVar6 = *(uint *)(param_1 + 10);
                  }
                  *(long *)(param_1[9] + (long)(int)uVar6 * 8) = lVar15;
                  *(uint *)(param_1 + 10) = uVar6 + 1;
                }
                goto LAB_0045cd4c;
              }
            }
            if ((local_78 & 1) != 0) {
              FUN_0043dd50(local_78 & 0xfffffffffffffffe);
            }
            if (bVar2) goto joined_r0x0045caa8;
          }
          bVar2 = false;
        }
        if ((local_d8 & 1) != 0) {
          FUN_0043dd50(local_d8 & 0xfffffffffffffffe);
        }
        if ((uVar16 & 1) != 0) {
          FUN_0043dd50(uVar16 & 0xfffffffffffffffe);
        }
        if (bVar2) {
          return;
        }
      }
      lVar14 = lVar14 + 1;
      puVar13 = puVar13 + 6;
    } while (lVar14 < param_3);
  }
  return;
}

