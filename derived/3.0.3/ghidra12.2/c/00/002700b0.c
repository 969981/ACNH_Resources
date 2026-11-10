
void FUN_002700b0(long param_1,ulong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined1 *puVar20;
  byte bVar21;
  byte bVar22;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e4;
  undefined1 auStack_e0 [128];
  
  puVar8 = PTR_DAT_04bcd350;
  uVar10 = FUN_0026b3b4(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_002b3fa8(auStack_e0);
  lVar11 = FUN_002ba790(DAT_04c61168);
  if (*(long *)(lVar11 + 0x98) != 0) {
    bVar9 = FUN_0026be6c(*(undefined8 *)puVar8);
    if ((param_2 & 1) == 0) {
      if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_002705d4;
      cVar4 = *(char *)(param_1 + 200);
    }
    else {
      *(int *)(*(long *)puVar8 + 0xbc) = *(int *)(*(long *)puVar8 + 0xbc) + param_3;
      memset(*(void **)(param_1 + 0xb0),0,(ulong)*(uint *)(param_1 + 0xac));
      puVar7 = PTR_DAT_04bc1510;
      puVar20 = *(undefined1 **)(param_1 + 0xb0);
      plVar12 = (long *)FUN_002ba788(*(undefined8 *)PTR_DAT_04bc1510);
      lVar11 = FUN_002ba790(*(undefined8 *)puVar7);
      lVar18 = *(long *)(lVar11 + 0x20);
      lVar11 = FUN_002ba790(*(undefined8 *)puVar7);
      bVar21 = 0;
      if (lVar18 == lVar11 + 0x18) {
        bVar22 = 0xff;
      }
      else {
        uVar17 = 0xc;
        bVar22 = 0xff;
        do {
          plVar13 = *(long **)(lVar18 + 0x10);
          bVar3 = *(byte *)(plVar13 + 7);
          if (bVar3 < 0x20) {
            uVar14 = FUN_00269a70(*(undefined8 *)puVar8,bVar3);
            if ((uVar14 & 1) == 0) {
              plVar13 = *(long **)(lVar18 + 0x10);
              goto LAB_00270194;
            }
            bVar1 = bVar21;
            if (bVar3 != bVar9) {
              bVar1 = bVar22;
            }
            local_e4 = 0;
            (**(code **)(*plVar12 + 0x20))
                      (&local_f4,plVar12,*(undefined8 *)(lVar18 + 0x10),auStack_e0);
            FUN_002b4564(&local_f4,auStack_e0,puVar20 + uVar17,&local_e4,0x40);
            iVar16 = (int)uVar17;
            puVar20[iVar16 + 0x40] = bVar3;
            FUN_002284a0(puVar20 + (iVar16 + 0x41),*(undefined2 *)(*(long *)(lVar18 + 0x10) + 0xb2))
            ;
            uVar17 = (ulong)(iVar16 + 0x44);
            bVar21 = bVar21 + 1;
            bVar22 = bVar1;
          }
          else {
LAB_00270194:
            local_f4 = 0x800000000000;
            local_ec = 0;
            (**(code **)(*plVar13 + 0x28))(plVar13,&local_f4);
          }
          lVar18 = *(long *)(lVar18 + 8);
          lVar11 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
        } while (lVar18 != lVar11 + 0x18);
      }
      if (*(ushort *)(*(long *)puVar8 + 0x98) < (ushort)bVar21) {
        plVar13 = (long *)FUN_002ba790(DAT_04c61168);
        local_ec = 0;
        local_f4 = 0x200000000000;
        (**(code **)(*plVar13 + 0x90))(plVar13,&local_f4);
        local_f4 = 0x200000000000;
        local_ec = 0;
        (**(code **)(*plVar12 + 0x50))(plVar12,&local_f4);
      }
      puVar20[1] = bVar21;
      *puVar20 = 0x20;
      puVar20[2] = bVar22;
      FUN_00228480(puVar20 + 4,*(undefined4 *)(*(long *)puVar8 + 0xbc));
      puVar20[10] = bVar21;
      *(undefined2 *)(puVar20 + 8) = 1;
      puVar20[0xb] = 0;
      *(undefined1 *)(param_1 + 0xb8) = 1;
      cVar4 = *(char *)(param_1 + 200);
    }
    if (((cVar4 == '\0') || (*(char *)(param_1 + 0xc9) == '\0')) ||
       (*(char *)(param_1 + 0xca) == '\0')) {
      if (*(short *)(param_1 + 0x8a) != 0) {
        lVar11 = 0;
        uVar17 = 0;
        uVar5 = *(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58);
        if ((uVar10 & 1) == 0) {
          uVar19 = (uint)uVar5;
          if ((param_2 & 1) == 0) {
            iVar16 = 0;
            do {
              uVar10 = FUN_002aed20(*(long *)(param_1 + 0x90) + lVar11);
              if ((uVar10 & 1) != 0) {
                plVar12 = (long *)FUN_002ba790(DAT_04c61168);
                uVar15 = (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + lVar11) + 0x28))();
                lVar18 = (**(code **)(*plVar12 + 0x38))(plVar12,uVar15);
                if ((lVar18 != 0) &&
                   (uVar10 = FUN_00269a70(*(undefined8 *)puVar8,*(undefined1 *)(lVar18 + 0x38)),
                   plVar12 = DAT_04c61168, (uVar10 & 1) != 0)) {
                  iVar2 = 0;
                  if (uVar19 != 0) {
                    iVar2 = *(int *)(param_1 + 0x74) / (int)uVar19;
                  }
                  iVar2 = iVar2 * iVar16;
                  plVar13 = (long *)FUN_00228380();
                  iVar16 = iVar16 + 1;
                  *(long *)(*(long *)(param_1 + 0xc0) + uVar17 * 8) =
                       *plVar12 + *plVar13 * (long)iVar2;
                }
              }
              uVar17 = uVar17 + 1;
              lVar11 = lVar11 + 0x6b0;
            } while (uVar17 < *(ushort *)(param_1 + 0x8a));
          }
          else {
            iVar16 = 0;
            do {
              uVar10 = FUN_002aed20(*(long *)(param_1 + 0x90) + lVar11);
              if ((uVar10 & 1) != 0) {
                plVar12 = (long *)FUN_002ba790(DAT_04c61168);
                uVar15 = (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + lVar11) + 0x28))();
                lVar18 = (**(code **)(*plVar12 + 0x38))(plVar12,uVar15);
                if ((lVar18 != 0) &&
                   (uVar10 = FUN_00269a70(*(undefined8 *)puVar8,*(undefined1 *)(lVar18 + 0x38)),
                   (uVar10 & 1) != 0)) {
                  iVar2 = 0;
                  if (uVar19 != 0) {
                    iVar2 = *(int *)(param_1 + 0x74) / (int)uVar19;
                  }
                  FUN_002705fc(&local_f4,param_1,*(undefined1 *)(lVar18 + 0x38));
                  plVar12 = DAT_04c61168;
                  iVar6 = *(int *)(param_1 + 0x74);
                  if ((int)local_f4 != 0) {
                    iVar6 = 0;
                  }
                  iVar2 = iVar2 * iVar16;
                  plVar13 = (long *)FUN_00228380();
                  iVar16 = iVar16 + 1;
                  *(long *)(*(long *)(param_1 + 0xc0) + uVar17 * 8) =
                       *plVar12 + *plVar13 * (long)(iVar6 + iVar2);
                }
              }
              uVar17 = uVar17 + 1;
              lVar11 = lVar11 + 0x6b0;
            } while (uVar17 < *(ushort *)(param_1 + 0x8a));
          }
        }
        else {
          iVar16 = 0;
          do {
            uVar10 = FUN_002aed20(*(long *)(param_1 + 0x90) + lVar11);
            if ((uVar10 & 1) != 0) {
              plVar12 = (long *)FUN_002ba790(DAT_04c61168);
              uVar15 = (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + lVar11) + 0x28))();
              lVar18 = (**(code **)(*plVar12 + 0x38))(plVar12,uVar15);
              if ((lVar18 != 0) &&
                 (uVar10 = FUN_00269a70(*(undefined8 *)puVar8,*(undefined1 *)(lVar18 + 0x38)),
                 plVar12 = DAT_04c61168, (uVar10 & 1) != 0)) {
                iVar2 = *(int *)(param_1 + 0x74);
                iVar6 = 0;
                if (uVar5 != 0) {
                  iVar6 = iVar2 / (int)(uint)uVar5;
                }
                iVar6 = iVar6 * iVar16;
                plVar13 = (long *)FUN_00228380();
                iVar16 = iVar16 + 1;
                *(long *)(*(long *)(param_1 + 0xc0) + uVar17 * 8) =
                     *plVar12 + *plVar13 * (long)(iVar2 + iVar6);
              }
            }
            uVar17 = uVar17 + 1;
            lVar11 = lVar11 + 0x6b0;
          } while (uVar17 < *(ushort *)(param_1 + 0x8a));
        }
      }
    }
    else {
      if ((uVar10 & 1) == 0) {
        FUN_002705fc(&local_f4,param_1,0xff);
        if ((int)local_f4 != 0) goto LAB_002705d4;
      }
      *(long *)(param_1 + 0x78) = *DAT_04c61168;
    }
  }
LAB_002705d4:
  FUN_002b4104(auStack_e0);
  return;
}

