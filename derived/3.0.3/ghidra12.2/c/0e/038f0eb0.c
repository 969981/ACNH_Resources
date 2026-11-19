
void FUN_038f0eb0(long param_1,long param_2,int param_3,uint param_4,long *param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte bVar5;
  void *pvVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  size_t __size;
  long lVar21;
  undefined *local_60;
  char *pcStack_58;
  
  lVar21 = DAT_05ae7600;
  puVar2 = PTR_DAT_04bb2698;
  lVar19 = *(long *)(param_2 + 0x80);
  if (lVar19 == 0) {
    return;
  }
  if (param_3 == 1) {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_58 = "<![CDATA[";
    local_60 = puVar2;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_60,9);
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x88));
    pcStack_58 = "]]>";
    local_60 = puVar2;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_60,3);
    return;
  }
  if (param_3 != 2) {
    uVar20 = 0;
    do {
      if (*(char *)(lVar19 + uVar20) == '\0') {
LAB_038f1040:
        iVar17 = (int)uVar20;
joined_r0x038f1054:
        if (0 < iVar17) {
          if (uVar20 == 1) {
            uVar12 = 0;
            iVar17 = 0;
          }
          else {
            uVar12 = 0;
            iVar17 = 0;
            do {
              pbVar1 = (byte *)(lVar19 + uVar12);
              lVar21 = lVar19 + uVar12;
              uVar12 = uVar12 + 2;
              bVar5 = *(byte *)(lVar21 + 1);
              if (*pbVar1 < 0x3f && (1L << ((ulong)*pbVar1 & 0x3f) & 0x500000c400000000U) != 0) {
                iVar17 = iVar17 + 1;
              }
              iVar10 = iVar17;
              if ((1L << ((ulong)bVar5 & 0x3f) & 0x500000c400000000U) != 0) {
                iVar10 = iVar17 + 1;
              }
              if (bVar5 < 0x3f) {
                iVar17 = iVar10;
              }
            } while ((uVar20 & 0xfffffffffffffffe) != uVar12);
          }
          if ((((uVar20 & 1) != 0) && (*(byte *)(lVar19 + uVar12) < 0x3f)) &&
             ((1L << ((ulong)*(byte *)(lVar19 + uVar12) & 0x3f) & 0x500000c400000000U) != 0)) {
            iVar17 = iVar17 + 1;
          }
          if (iVar17 != 0) {
            __size = (size_t)(iVar17 * 5 + (int)uVar20);
            lVar21 = *(long *)PTR_DAT_04bb2698;
            if (lVar21 == 0) {
              pvVar6 = malloc(__size);
            }
            else {
              if (param_5 == (long *)0x0) {
                lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
                param_5 = (long *)(lVar21 + 8);
                if (lVar7 != 0) {
                  param_5 = (long *)(lVar7 + 0xa8);
                }
                param_5 = (long *)*param_5;
                if (param_5 == (long *)0x0) {
                  pvVar6 = (void *)0x0;
                  goto LAB_038f125c;
                }
              }
              pvVar6 = (void *)(**(code **)(*param_5 + 0x30))(param_5,__size,0xfffffff8);
            }
LAB_038f125c:
            iVar17 = 0;
            iVar10 = 0;
            do {
              uVar14 = *(undefined1 *)(lVar19 + iVar17);
              lVar21 = 0;
              switch(uVar14) {
              case 0x22:
                lVar21 = 4;
                break;
              default:
                iVar9 = iVar10 + 1;
                goto LAB_038f1288;
              case 0x26:
                lVar21 = (long)iVar17 + 1;
                if (*(char *)(lVar19 + lVar21) != '&') {
                  lVar21 = 2;
                  break;
                }
                iVar9 = iVar10 + 1;
                uVar14 = 0x26;
                iVar17 = (int)lVar21;
                goto LAB_038f1288;
              case 0x27:
                lVar21 = 3;
                break;
              case 0x3c:
                break;
              case 0x3e:
                lVar21 = 1;
              }
              *(undefined1 *)((long)pvVar6 + (long)iVar10) = 0x26;
              uVar12 = 0;
              puVar15 = (&PTR_DAT_04b658d0)[lVar21];
              do {
                if (puVar15[uVar12] == '\0') {
LAB_038f135c:
                  uVar13 = (ulong)(iVar10 + 1U);
                  if (0 < (int)uVar12) {
                    uVar13 = (ulong)(int)(iVar10 + 1U);
                    if (uVar12 - 1 < 3) {
                      uVar18 = 0;
                    }
                    else {
                      uVar18 = 0;
                      do {
                        puVar16 = puVar15 + uVar18;
                        puVar3 = (undefined1 *)((long)pvVar6 + uVar18 + uVar13);
                        uVar18 = uVar18 + 4;
                        *puVar3 = *puVar16;
                        puVar3[1] = puVar16[1];
                        puVar3[2] = puVar16[2];
                        puVar3[3] = puVar16[3];
                      } while ((uVar12 & 0xfffffffffffffffc) != uVar18);
                      uVar13 = uVar13 + uVar18;
                      iVar10 = (int)uVar13 + -1;
                    }
                    if ((uVar12 & 3) != 0) {
                      uVar12 = uVar12 & 3;
                      puVar16 = puVar15 + uVar18;
                      do {
                        uVar12 = uVar12 - 1;
                        *(undefined1 *)((long)pvVar6 + uVar13) = *puVar16;
                        uVar13 = uVar13 + 1;
                        puVar16 = puVar16 + 1;
                      } while (uVar12 != 0);
                      iVar10 = (int)uVar13 + -1;
                    }
                  }
                  goto LAB_038f1280;
                }
                if (puVar15[uVar12 + 1] == '\0') {
                  uVar12 = uVar12 + 1;
                  goto LAB_038f135c;
                }
                if (puVar15[uVar12 + 2] == '\0') {
                  uVar12 = uVar12 + 2;
                  goto LAB_038f135c;
                }
                uVar12 = uVar12 + 3;
              } while (uVar12 != 0x80001);
              uVar13 = (ulong)(iVar10 + 1);
LAB_038f1280:
              iVar9 = iVar10 + 2;
              uVar14 = 0x3b;
              iVar10 = (int)uVar13;
LAB_038f1288:
              iVar17 = iVar17 + 1;
              *(undefined1 *)((long)pvVar6 + (long)iVar10) = uVar14;
              iVar10 = iVar9;
              if ((int)uVar20 <= iVar17) {
                *(undefined1 *)((long)pvVar6 + (long)iVar9) = 0;
                (**(code **)(**(long **)(param_1 + 8) + 0xb8))
                          (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),pvVar6);
                if (*(long *)puVar2 == 0) {
                  free(pvVar6);
                  return;
                }
                plVar8 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
                if (plVar8 == (long *)0x0) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x038f144c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar8 + 0x38))(plVar8,pvVar6);
                return;
              }
            } while( true );
          }
        }
        break;
      }
      if (*(char *)(lVar19 + uVar20 + 1) == '\0') {
        uVar20 = uVar20 + 1;
        goto LAB_038f1040;
      }
      if (*(char *)(lVar19 + uVar20 + 2) == '\0') {
        uVar20 = uVar20 + 2;
        iVar17 = (int)uVar20;
        goto joined_r0x038f1054;
      }
      uVar20 = uVar20 + 3;
    } while (uVar20 != 0x80001);
                    /* WARNING: Could not recover jumptable at 0x038f1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 8) + 0xb8))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar19,
               *(undefined4 *)(param_2 + 0x88));
    return;
  }
  uVar4 = *(uint *)(param_2 + 0x88);
  uVar11 = uVar4 / 3;
  if (uVar4 != (uVar4 / 3) * 3) {
    uVar11 = uVar11 + 1;
  }
  uVar20 = (ulong)(uVar11 * 4);
  if (param_4 < uVar11 * 4) {
    return;
  }
  if (DAT_05ae7600 == 0) {
    pvVar6 = malloc(uVar20);
  }
  else {
    if (param_5 == (long *)0x0) {
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_5 = (long *)(lVar21 + 8);
      if (lVar19 != 0) {
        param_5 = (long *)(lVar19 + 0xa8);
      }
      param_5 = (long *)*param_5;
      if (param_5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_038f1198;
      }
    }
    pvVar6 = (void *)(**(code **)(*param_5 + 0x30))(param_5,uVar20,0xfffffff8);
  }
LAB_038f1198:
  FUN_038e8220(pvVar6,*(undefined8 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0x88),0);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "<![CDATA[<!BASE64[";
  local_60 = puVar2;
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_60,0x12);
  (**(code **)(**(long **)(param_1 + 8) + 0xb8))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),pvVar6,uVar20);
  pcStack_58 = "]>]]>";
  local_60 = puVar2;
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_60,5);
  if (pvVar6 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar6);
    }
    else {
      plVar8 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,pvVar6);
      }
    }
  }
  return;
}

