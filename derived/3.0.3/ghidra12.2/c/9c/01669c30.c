
void FUN_01669c30(long param_1,uint param_2,uint param_3,ulong param_4,long *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long *plVar20;
  int *piVar21;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 *puStack_68;
  
  uVar17 = (ulong)param_3;
  uVar12 = 1;
  if ((param_4 & 1) != 0) {
    uVar12 = 2;
  }
  uVar13 = (ulong)uVar12;
  *(uint *)(param_1 + 0x408) = uVar12;
  uVar12 = (param_2 >> 1 & 1) + (param_2 & 1) + (param_2 >> 2 & 1) + (param_2 >> 3 & 1) +
           (param_2 >> 4 & 1) + (param_2 >> 5 & 1) + (param_2 >> 6 & 1) +
           (param_2 >> 7 & 1) + (param_2 >> 8 & 1) + (param_2 >> 9 & 1) + (param_2 >> 10 & 1) +
           (param_2 >> 0xb & 1) + (param_2 >> 0xc & 1) + (param_2 >> 0xd & 1);
  if (uVar12 != 0) {
    uVar18 = 0;
    plVar20 = (long *)(param_1 + 8);
    do {
      lVar15 = DAT_05ae7600;
      if (DAT_05ae7600 == 0) {
        pvVar5 = malloc((ulong)uVar12 << 3);
joined_r0x01669d6c:
        if (pvVar5 != (void *)0x0) {
          *(uint *)(plVar20 + -1) = uVar12;
          *plVar20 = (long)pvVar5;
        }
      }
      else {
        plVar4 = param_5;
        if (param_5 != (long *)0x0) {
LAB_01669d48:
          pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,(ulong)uVar12 << 3,8);
          goto joined_r0x01669d6c;
        }
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 != (long *)0x0) goto LAB_01669d48;
      }
      uVar13 = (ulong)*(uint *)(param_1 + 0x408);
      uVar18 = uVar18 + 1;
      plVar20 = plVar20 + 2;
    } while (uVar18 < uVar13);
  }
  *(undefined1 *)(param_1 + 0x414) = 1;
  lVar15 = 0;
  iVar16 = 0;
  lVar3 = uVar17 << 4;
  plVar20 = (long *)(param_1 + 8);
  uVar18 = uVar13;
  do {
    if ((param_2 >> (ulong)((uint)lVar15 & 0x1f) & 1) != 0) {
      if (*(int *)(param_1 + 0x40c) == 0) {
        *(uint *)(param_1 + 0x40c) = param_3;
        if ((int)uVar18 != 0) goto LAB_01669e18;
      }
      else if ((int)uVar18 != 0) {
LAB_01669e18:
        lVar14 = (long)iVar16;
        iVar1 = *(int *)((long)&DAT_0417684c + lVar15 * 0xc + 4);
        if (iVar1 - 0x16U < 0x1b) {
          puVar19 = (undefined8 *)((long)&DAT_0417684c + lVar15 * 0xc);
          switch(iVar1) {
          case 0x16:
            uVar18 = 0;
            plVar4 = plVar20;
            do {
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar8 = malloc(0x158);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                    goto LAB_01669f4c;
                  }
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x158,8);
              }
LAB_01669f4c:
              *puVar8 = &PTR_LAB_049ba848;
              FUN_0390e944(puVar8 + 1);
              *(undefined4 *)((long)puVar8 + 0x154) = 0;
              *puVar8 = &PTR_LAB_049ba9c8;
              *(undefined8 *)((long)puVar8 + 0x134) = 0;
              *(undefined8 *)((long)puVar8 + 0x13c) = 0;
              *(undefined8 *)((long)puVar8 + 0x144) = 0;
              *(undefined8 *)((long)puVar8 + 0x14c) = 0;
              puVar8[0x25] = *puVar19;
              *(undefined4 *)(puVar8 + 0x26) = (&DAT_04176854)[lVar15 * 3];
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar9 = malloc(0x38);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                }
                puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
              }
              puVar9[6] = 0;
              bVar11 = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              piVar21 = (int *)(puVar9 + 1);
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[4] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              *(undefined1 *)(puVar9 + 5) = 0;
              *puVar9 = &PTR_LAB_049baa08;
              lVar10 = DAT_05ae7600;
              plVar7 = param_5;
              if (param_5 == (long *)0x0) {
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar7 = (long *)(lVar10 + 8);
                if (lVar6 != 0) {
                  plVar7 = (long *)(lVar6 + 0xa8);
                }
                plVar7 = (long *)*plVar7;
                bVar11 = *(byte *)(puVar9 + 5);
              }
              puVar9[6] = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              *(byte *)(puVar9 + 5) = bVar11 & 0xfe;
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              if (param_3 == 0) {
                uVar13 = 0;
LAB_0166a0d8:
                local_70 = 0;
                uStack_74 = 0;
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                lVar10 = 0;
                *(undefined4 *)((long)puVar8 + 0x144) = 0;
                puVar8[0x29] = 0;
                puVar8[0x2a] = puVar9;
              }
              else {
                FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar9,plVar7,uVar17 << 3,0x20,0);
                lVar10 = puVar9[3];
                *(undefined2 *)((long)puVar9 + 0x2a) = 0;
                uVar13 = 0;
                if (puVar9[4] != 0) {
                  uVar13 = (ulong)(uint)(*piVar21 - *(int *)(puVar9[4] + 0x10));
                }
                if (lVar10 == 0) goto LAB_0166a0d8;
                uVar2 = *(undefined4 *)(lVar10 + 0x104);
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                puVar8[0x29] = lVar10;
                puVar8[0x2a] = puVar9;
                *(undefined4 *)((long)puVar8 + 0x144) = uVar2;
                lVar10 = (**(code **)PTR_DAT_04bb2cd8)();
                uVar13 = (ulong)*(uint *)(puVar8 + 0x28);
                uStack_74 = *(undefined4 *)((long)puVar8 + 0x144);
                local_70 = puVar8[0x29];
                puVar9 = (undefined8 *)puVar8[0x2a];
              }
              puVar8[0x27] = lVar10 + uVar13;
              local_78 = (undefined4)uVar13;
              puStack_68 = puVar9;
              FUN_0390ebc0(puVar8 + 1,&local_78,8,uVar17 << 3);
              *(uint *)((long)puVar8 + 0x134) = param_3;
              uVar18 = uVar18 + 1;
              puVar8[8] = 0x16;
              *(undefined2 *)(puVar8 + 9) = 1;
              *(undefined8 **)(*plVar4 + lVar14 * 8) = puVar8;
              uVar13 = (ulong)*(uint *)(param_1 + 0x408);
              plVar4 = plVar4 + 2;
            } while (uVar18 < uVar13);
            break;
          default:
            goto switchD_01669e4c_caseD_17;
          case 0x22:
            uVar18 = 0;
            plVar4 = plVar20;
            do {
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar8 = malloc(0x158);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                    goto LAB_0166a1fc;
                  }
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x158,8);
              }
LAB_0166a1fc:
              *puVar8 = &PTR_LAB_049ba848;
              FUN_0390e944(puVar8 + 1);
              *(undefined4 *)((long)puVar8 + 0x154) = 0;
              *puVar8 = &PTR_LAB_049ba808;
              *(undefined8 *)((long)puVar8 + 0x134) = 0;
              *(undefined8 *)((long)puVar8 + 0x13c) = 0;
              *(undefined8 *)((long)puVar8 + 0x144) = 0;
              *(undefined8 *)((long)puVar8 + 0x14c) = 0;
              puVar8[0x25] = *puVar19;
              *(undefined4 *)(puVar8 + 0x26) = (&DAT_04176854)[lVar15 * 3];
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar9 = malloc(0x38);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                }
                puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
              }
              puVar9[6] = 0;
              bVar11 = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              piVar21 = (int *)(puVar9 + 1);
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[4] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              *(undefined1 *)(puVar9 + 5) = 0;
              *puVar9 = &PTR_LAB_049ba888;
              lVar10 = DAT_05ae7600;
              plVar7 = param_5;
              if (param_5 == (long *)0x0) {
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar7 = (long *)(lVar10 + 8);
                if (lVar6 != 0) {
                  plVar7 = (long *)(lVar6 + 0xa8);
                }
                plVar7 = (long *)*plVar7;
                bVar11 = *(byte *)(puVar9 + 5);
              }
              puVar9[6] = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              *(byte *)(puVar9 + 5) = bVar11 & 0xfe;
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              if (param_3 == 0) {
                uVar13 = 0;
LAB_0166a388:
                local_70 = 0;
                uStack_74 = 0;
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                lVar10 = 0;
                *(undefined4 *)((long)puVar8 + 0x144) = 0;
                puVar8[0x29] = 0;
                puVar8[0x2a] = puVar9;
              }
              else {
                FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar9,plVar7,uVar17 * 0xc,0x20,0);
                lVar10 = puVar9[3];
                *(undefined2 *)((long)puVar9 + 0x2a) = 0;
                uVar13 = 0;
                if (puVar9[4] != 0) {
                  uVar13 = (ulong)(uint)(*piVar21 - *(int *)(puVar9[4] + 0x10));
                }
                if (lVar10 == 0) goto LAB_0166a388;
                uVar2 = *(undefined4 *)(lVar10 + 0x104);
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                puVar8[0x29] = lVar10;
                puVar8[0x2a] = puVar9;
                *(undefined4 *)((long)puVar8 + 0x144) = uVar2;
                lVar10 = (**(code **)PTR_DAT_04bb2cd8)();
                uVar13 = (ulong)*(uint *)(puVar8 + 0x28);
                uStack_74 = *(undefined4 *)((long)puVar8 + 0x144);
                local_70 = puVar8[0x29];
                puVar9 = (undefined8 *)puVar8[0x2a];
              }
              puVar8[0x27] = lVar10 + uVar13;
              local_78 = (undefined4)uVar13;
              puStack_68 = puVar9;
              FUN_0390ebc0(puVar8 + 1,&local_78,0xc,uVar17 * 0xc);
              *(uint *)((long)puVar8 + 0x134) = param_3;
              uVar18 = uVar18 + 1;
              puVar8[8] = 0x22;
              *(undefined2 *)(puVar8 + 9) = 1;
              *(undefined8 **)(*plVar4 + lVar14 * 8) = puVar8;
              uVar13 = (ulong)*(uint *)(param_1 + 0x408);
              plVar4 = plVar4 + 2;
            } while (uVar18 < uVar13);
            break;
          case 0x2e:
            uVar18 = 0;
            plVar4 = plVar20;
            do {
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar8 = malloc(0x158);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                    goto LAB_0166a4ac;
                  }
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x158,8);
              }
LAB_0166a4ac:
              *puVar8 = &PTR_LAB_049ba848;
              FUN_0390e944(puVar8 + 1);
              *(undefined4 *)((long)puVar8 + 0x154) = 0;
              *puVar8 = &PTR_LAB_049ba8c8;
              *(undefined8 *)((long)puVar8 + 0x134) = 0;
              *(undefined8 *)((long)puVar8 + 0x13c) = 0;
              *(undefined8 *)((long)puVar8 + 0x144) = 0;
              *(undefined8 *)((long)puVar8 + 0x14c) = 0;
              puVar8[0x25] = *puVar19;
              *(undefined4 *)(puVar8 + 0x26) = (&DAT_04176854)[lVar15 * 3];
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar9 = malloc(0x38);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                }
                puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
              }
              puVar9[6] = 0;
              bVar11 = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              piVar21 = (int *)(puVar9 + 1);
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[4] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              *(undefined1 *)(puVar9 + 5) = 0;
              *puVar9 = &PTR_LAB_049ba908;
              lVar10 = DAT_05ae7600;
              plVar7 = param_5;
              if (param_5 == (long *)0x0) {
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar7 = (long *)(lVar10 + 8);
                if (lVar6 != 0) {
                  plVar7 = (long *)(lVar6 + 0xa8);
                }
                plVar7 = (long *)*plVar7;
                bVar11 = *(byte *)(puVar9 + 5);
              }
              puVar9[6] = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              *(byte *)(puVar9 + 5) = bVar11 & 0xfe;
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              if (param_3 == 0) {
                uVar13 = 0;
LAB_0166a638:
                local_70 = 0;
                uStack_74 = 0;
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                lVar10 = 0;
                *(undefined4 *)((long)puVar8 + 0x144) = 0;
                puVar8[0x29] = 0;
                puVar8[0x2a] = puVar9;
              }
              else {
                FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar9,plVar7,lVar3,0x20,0);
                lVar10 = puVar9[3];
                *(undefined2 *)((long)puVar9 + 0x2a) = 0;
                uVar13 = 0;
                if (puVar9[4] != 0) {
                  uVar13 = (ulong)(uint)(*piVar21 - *(int *)(puVar9[4] + 0x10));
                }
                if (lVar10 == 0) goto LAB_0166a638;
                uVar2 = *(undefined4 *)(lVar10 + 0x104);
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                puVar8[0x29] = lVar10;
                puVar8[0x2a] = puVar9;
                *(undefined4 *)((long)puVar8 + 0x144) = uVar2;
                lVar10 = (**(code **)PTR_DAT_04bb2cd8)();
                uVar13 = (ulong)*(uint *)(puVar8 + 0x28);
                uStack_74 = *(undefined4 *)((long)puVar8 + 0x144);
                local_70 = puVar8[0x29];
                puVar9 = (undefined8 *)puVar8[0x2a];
              }
              puVar8[0x27] = lVar10 + uVar13;
              local_78 = (undefined4)uVar13;
              puStack_68 = puVar9;
              FUN_0390ebc0(puVar8 + 1,&local_78,0x10,lVar3);
              *(uint *)((long)puVar8 + 0x134) = param_3;
              uVar18 = uVar18 + 1;
              puVar8[8] = 0x2e;
              *(undefined2 *)(puVar8 + 9) = 1;
              *(undefined8 **)(*plVar4 + lVar14 * 8) = puVar8;
              uVar13 = (ulong)*(uint *)(param_1 + 0x408);
              plVar4 = plVar4 + 2;
            } while (uVar18 < uVar13);
            break;
          case 0x30:
            uVar18 = 0;
            plVar4 = plVar20;
            do {
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar8 = malloc(0x158);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                  if (plVar7 == (long *)0x0) {
                    puVar8 = (undefined8 *)0x0;
                    goto LAB_0166a78c;
                  }
                }
                puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x158,8);
              }
LAB_0166a78c:
              *puVar8 = &PTR_LAB_049ba848;
              FUN_0390e944(puVar8 + 1);
              *(undefined4 *)((long)puVar8 + 0x154) = 0;
              *puVar8 = &PTR_LAB_049ba948;
              *(undefined8 *)((long)puVar8 + 0x134) = 0;
              *(undefined8 *)((long)puVar8 + 0x13c) = 0;
              *(undefined8 *)((long)puVar8 + 0x144) = 0;
              *(undefined8 *)((long)puVar8 + 0x14c) = 0;
              puVar8[0x25] = *puVar19;
              *(undefined4 *)(puVar8 + 0x26) = (&DAT_04176854)[lVar15 * 3];
              lVar10 = DAT_05ae7600;
              if (DAT_05ae7600 == 0) {
                puVar9 = malloc(0x38);
              }
              else {
                plVar7 = param_5;
                if (param_5 == (long *)0x0) {
                  lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                  plVar7 = (long *)(lVar10 + 8);
                  if (lVar6 != 0) {
                    plVar7 = (long *)(lVar6 + 0xa8);
                  }
                  plVar7 = (long *)*plVar7;
                }
                puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x38,8);
              }
              puVar9[6] = 0;
              bVar11 = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              piVar21 = (int *)(puVar9 + 1);
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[4] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              *(undefined1 *)(puVar9 + 5) = 0;
              *puVar9 = &PTR_LAB_049ba988;
              lVar10 = DAT_05ae7600;
              plVar7 = param_5;
              if (param_5 == (long *)0x0) {
                lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                plVar7 = (long *)(lVar10 + 8);
                if (lVar6 != 0) {
                  plVar7 = (long *)(lVar6 + 0xa8);
                }
                plVar7 = (long *)*plVar7;
                bVar11 = *(byte *)(puVar9 + 5);
              }
              puVar9[6] = 0;
              *(undefined2 *)((long)puVar9 + 0x2a) = 0;
              *(byte *)(puVar9 + 5) = bVar11 & 0xfe;
              piVar21[0] = 0;
              piVar21[1] = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              if (param_3 == 0) {
                uVar13 = 0;
LAB_0166a6b8:
                local_70 = 0;
                uStack_74 = 0;
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                lVar10 = 0;
                *(undefined4 *)((long)puVar8 + 0x144) = 0;
                puVar8[0x29] = 0;
                puVar8[0x2a] = puVar9;
              }
              else {
                FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,puVar9,plVar7,lVar3,0x20,0);
                lVar10 = puVar9[3];
                *(undefined2 *)((long)puVar9 + 0x2a) = 0;
                uVar13 = 0;
                if (puVar9[4] != 0) {
                  uVar13 = (ulong)(uint)(*piVar21 - *(int *)(puVar9[4] + 0x10));
                }
                if (lVar10 == 0) goto LAB_0166a6b8;
                uVar2 = *(undefined4 *)(lVar10 + 0x104);
                *(int *)(puVar8 + 0x28) = (int)uVar13;
                puVar8[0x29] = lVar10;
                puVar8[0x2a] = puVar9;
                *(undefined4 *)((long)puVar8 + 0x144) = uVar2;
                lVar10 = (**(code **)PTR_DAT_04bb2cd8)();
                uVar13 = (ulong)*(uint *)(puVar8 + 0x28);
                uStack_74 = *(undefined4 *)((long)puVar8 + 0x144);
                local_70 = puVar8[0x29];
                puVar9 = (undefined8 *)puVar8[0x2a];
              }
              puVar8[0x27] = lVar10 + uVar13;
              local_78 = (undefined4)uVar13;
              puStack_68 = puVar9;
              FUN_0390ebc0(puVar8 + 1,&local_78,0x10,lVar3);
              *(uint *)((long)puVar8 + 0x134) = param_3;
              uVar18 = uVar18 + 1;
              puVar8[8] = 0x30;
              *(undefined2 *)(puVar8 + 9) = 1;
              *(undefined8 **)(*plVar4 + lVar14 * 8) = puVar8;
              uVar13 = (ulong)*(uint *)(param_1 + 0x408);
              plVar4 = plVar4 + 2;
            } while (uVar18 < uVar13);
          }
          uVar18 = uVar13;
        }
        else {
switchD_01669e4c_caseD_17:
          uVar18 = 0;
          plVar4 = plVar20;
          do {
            uVar18 = uVar18 + 1;
            *(undefined8 *)(*plVar4 + lVar14 * 8) = 0;
            uVar13 = (ulong)*(uint *)(param_1 + 0x408);
            plVar4 = plVar4 + 2;
          } while (uVar18 < uVar13);
          uVar18 = uVar13;
        }
      }
      iVar16 = iVar16 + 1;
    }
    lVar15 = lVar15 + 1;
    if (lVar15 == 0xe) {
      *(uint *)(param_1 + 0x40c) = param_3;
      if ((int)uVar13 != 0) {
        uVar17 = 0;
        do {
          uVar12 = *(uint *)(param_1 + uVar17 * 0x10);
          lVar15 = param_1 + uVar17 * 0x1e0 + 0x20;
          FUN_0390e390(lVar15,(ulong)uVar12,param_5);
          if (0 < (int)uVar12) {
            lVar3 = 0;
            do {
              lVar14 = *(long *)(*(long *)(param_1 + uVar17 * 0x10 + 8) + lVar3);
              FUN_0390e4c0(lVar15,*(undefined4 *)(lVar14 + 0x130),lVar14 + 8,0);
              lVar3 = lVar3 + 8;
            } while ((ulong)uVar12 * 8 != lVar3);
          }
          FUN_0390e640(lVar15);
          uVar17 = uVar17 + 1;
        } while (uVar17 < *(uint *)(param_1 + 0x408));
      }
      return;
    }
  } while( true );
}

