
/* WARNING: Removing unreachable block (ram,0x01ca9bf0) */

void FUN_01ca9b30(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  MutexType *pMVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  byte bVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  byte *pbVar32;
  void *__src;
  ulong *__src_00;
  ulong *puVar33;
  ushort *puVar34;
  ushort *local_88;
  uint local_80;
  int iStack_7c;
  int local_78;
  ushort local_74;
  uint local_70;
  byte local_6c;
  undefined8 local_68;
  
  puVar13 = PTR_DAT_04bcb7d8;
  lVar24 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x80);
  if ((((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0x10), lVar24 != 0)) &&
      (*(int *)(lVar24 + 0xc) != 0)) ||
     ((**(char **)(DAT_05358908 + 0x2070) == '\0' || ((int)param_1[7] == 0)))) {
    return;
  }
  pMVar2 = (MutexType *)(*(long *)PTR_DAT_04bcb7d8 + 0xd0);
  nn::os::LockMutex(pMVar2);
  lVar24 = 0;
  if (*(int *)*param_2 != 0) {
    lVar24 = *(long *)((int *)*param_2 + 2);
  }
  local_88 = (ushort *)CONCAT44(local_88._4_4_,1);
  lVar25 = *(long *)(*(long *)(*(long *)puVar13 + 0x70) + 0x3b8);
  if (lVar25 != 0) {
    do {
      while (*(uint *)(lVar25 + 0x20) <= *(uint *)(param_1 + 0x27)) {
        if (*(uint *)(param_1 + 0x27) <= *(uint *)(lVar25 + 0x20)) {
          uVar21 = *(uint *)(lVar25 + 0x24);
          if (uVar21 != 0xffffffff) {
            puVar4 = (undefined4 *)(lVar24 + 0x40) + uVar21;
            if (0xf < uVar21) {
              puVar4 = (undefined4 *)(lVar24 + 0x40);
            }
            uVar19 = *puVar4;
            goto LAB_01ca9c7c;
          }
          goto LAB_01ca9c78;
        }
        lVar25 = *(long *)(lVar25 + 0x10);
        if (lVar25 == 0) goto LAB_01ca9c78;
      }
      lVar25 = *(long *)(lVar25 + 8);
    } while (lVar25 != 0);
  }
LAB_01ca9c78:
  uVar19 = 0;
LAB_01ca9c7c:
  uVar14 = FUN_002ab090(DAT_04c61168 + 0x10,uVar19,0x7c);
  if ((long *)param_1[6] != param_1 + 5) {
    lVar25 = (long)*(int *)((long)param_1 + 0x3c);
    pbVar32 = (byte *)(param_1[6] - lVar25);
    lVar24 = *(long *)(DAT_05358908 + 0xf88);
    pbVar27 = pbVar32 + lVar25;
    do {
      uVar21 = (uint)(char)*pbVar32;
      pbVar27 = *(byte **)(pbVar27 + 8);
      if ((char)*pbVar32 < '\b') {
        iVar23 = *(int *)(pbVar32 + 4);
        do {
          uVar10 = *(ushort *)(pbVar32 + 8);
          uVar22 = (uint)uVar10;
          bVar9 = pbVar32[10];
          puVar34 = (ushort *)param_1[1];
          local_80 = 3;
          local_78 = 0;
          local_70 = 0;
          if (iVar23 == 0) {
            *(byte *)(puVar34 + 1) = bVar9;
            uVar28 = 0;
            *puVar34 = uVar10 << 2;
            uVar21 = (uint)*pbVar32;
          }
          else {
            uVar28 = (ulong)(long)iVar23 / 0x752d;
            local_70 = (uint)uVar28;
          }
          if (8 < (uVar21 + 1 & 0xff)) {
            uVar21 = 0xffffffff;
          }
          puVar5 = (undefined8 *)(lVar24 + 0x18 + ((ulong)uVar21 & 0xff) * 0x20);
          if ((uVar21 & 0xf8) != 0) {
            puVar5 = &DAT_053565d0;
          }
          local_68 = *puVar5;
          local_88 = puVar34;
          iStack_7c = iVar23;
          local_74 = uVar10;
          local_6c = bVar9;
          if (*(byte **)(pbVar32 + 0x18) != pbVar32 + 0x10) {
            lVar26 = (long)*(int *)(pbVar32 + 0x24);
            bVar12 = 0;
            iVar30 = 0;
            uVar29 = 3;
            puVar33 = (ulong *)(*(byte **)(pbVar32 + 0x18) + -lVar26);
            do {
              if ((*puVar33 >> ((long)(char)*pbVar32 & 0x3fU) & 1) != 0) {
                iVar31 = iVar30 + 7;
                if (iVar23 < iVar31) {
                  __src_00 = puVar33 + 1;
                  iVar31 = iVar23 - iVar30;
                  if (iVar31 == 0 || iVar23 < iVar30) {
                    uVar21 = 7;
                  }
                  else {
                    if (6 < iVar31) {
                      iVar31 = iVar23;
                      local_78 = iVar23;
                      goto LAB_01ca9e38;
                    }
                    __src_00 = (ulong *)((long)__src_00 + (long)iVar31);
                    iVar30 = iVar23;
                    uVar21 = 7 - iVar31;
                    local_78 = iVar23;
                  }
                  do {
                    if (0x752 < (uint)(uVar29 >> 4)) {
                      uVar15 = FUN_01cac654(&local_88,uVar14);
                      if ((uVar15 & 1) == 0) goto LAB_01caa198;
                      local_70 = (int)uVar28 + 1;
                      uVar28 = (ulong)local_70;
                      iVar30 = iVar30 + (int)uVar29 + -3;
                      uVar6 = local_70 ^ uVar22;
                      local_78 = iVar30;
                      puVar16 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                      uVar7 = *puVar16 ^ *puVar16 << 0xb;
                      uVar8 = puVar16[3];
                      *puVar16 = puVar16[1];
                      puVar16[1] = puVar16[2];
                      uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
                      puVar16[2] = uVar8;
                      puVar16[3] = uVar7;
                      *(byte *)(puVar34 + 1) = bVar9;
                      uVar20 = 1;
                      if ((uVar7 & 1) != 0) {
                        uVar20 = 2;
                      }
                      uVar29 = 3;
                      *puVar34 = uVar20 | (ushort)(uVar6 << 2);
                    }
                    uVar7 = 30000 - (int)uVar29;
                    uVar6 = uVar21;
                    if ((int)uVar7 <= (int)uVar21) {
                      uVar6 = uVar7;
                    }
                    memcpy((void *)((long)puVar34 + uVar29),__src_00,(ulong)uVar6);
                    local_80 = uVar6 + (int)uVar29;
                    uVar29 = (ulong)local_80;
                    uVar7 = uVar21 - uVar6;
                    __src_00 = (ulong *)((ulong)uVar6 + (long)__src_00);
                    bVar1 = (int)uVar6 <= (int)uVar21;
                    iVar31 = iVar30;
                    uVar21 = uVar7;
                  } while (uVar7 != 0 && bVar1);
                }
                else {
                  local_78 = iVar31;
                }
LAB_01ca9e38:
                uVar21 = (uint)puVar33[1];
                iVar30 = uVar21 + iVar31;
                if (iVar23 < iVar30) {
                  __src = (void *)puVar33[2];
                  iVar11 = iVar23 - iVar31;
                  iVar30 = iVar31;
                  if (iVar11 != 0 && iVar31 <= iVar23) {
                    __src = (void *)((long)__src + (long)iVar11);
                    uVar21 = uVar21 - iVar11;
                    iVar30 = iVar23;
                    local_78 = iVar23;
                  }
                  if (0 < (int)uVar21) {
                    do {
                      if (0x752 < (uint)uVar29 >> 4) {
                        uVar15 = FUN_01cac654(&local_88,uVar14);
                        if ((uVar15 & 1) == 0) goto LAB_01caa198;
                        local_70 = (int)uVar28 + 1;
                        uVar28 = (ulong)local_70;
                        iVar30 = iVar30 + (uint)uVar29 + -3;
                        uVar6 = local_70 ^ uVar22;
                        local_78 = iVar30;
                        puVar16 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
                        uVar7 = *puVar16 ^ *puVar16 << 0xb;
                        uVar8 = puVar16[3];
                        *puVar16 = puVar16[1];
                        puVar16[1] = puVar16[2];
                        uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar7 ^ uVar8;
                        puVar16[2] = uVar8;
                        puVar16[3] = uVar7;
                        *(byte *)(puVar34 + 1) = bVar9;
                        uVar20 = 1;
                        if ((uVar7 & 1) != 0) {
                          uVar20 = 2;
                        }
                        uVar29 = 3;
                        *puVar34 = uVar20 | (ushort)(uVar6 << 2);
                      }
                      uVar7 = 30000 - (int)uVar29;
                      uVar6 = uVar21;
                      if ((int)uVar7 <= (int)uVar21) {
                        uVar6 = uVar7;
                      }
                      memcpy((void *)((long)puVar34 + uVar29),__src,(ulong)uVar6);
                      local_80 = uVar6 + (int)uVar29;
                      uVar29 = (ulong)local_80;
                      uVar7 = uVar21 - uVar6;
                      __src = (void *)((ulong)uVar6 + (long)__src);
                      bVar1 = (int)uVar6 <= (int)uVar21;
                      uVar21 = uVar7;
                    } while (uVar7 != 0 && bVar1);
                  }
                  bVar12 = 1;
                }
                else {
                  bVar12 = 1;
                  local_78 = iVar30;
                }
              }
              puVar33 = (ulong *)(*(long *)((long)puVar33 + lVar26 + 8) - lVar26);
            } while (puVar33 != (ulong *)(pbVar32 + 0x10 + -lVar26));
            if ((bool)(bVar12 & 3 < (uint)uVar29)) {
              *puVar34 = (ushort)(~uVar22 << 2) | 3;
              uVar28 = FUN_01cac654(&local_88,uVar14);
              if ((uVar28 & 1) == 0) {
LAB_01caa198:
                *(int *)(pbVar32 + 4) = iVar30;
                goto LAB_01caa19c;
              }
              *puVar34 = uVar10 << 2;
            }
          }
          iVar23 = 0;
          pbVar32[4] = 0;
          pbVar32[5] = 0;
          pbVar32[6] = 0;
          pbVar32[7] = 0;
          uVar21 = (uint)(char)(*pbVar32 + 1);
          *pbVar32 = *pbVar32 + 1;
        } while ((int)uVar21 < 8);
      }
      pbVar3 = pbVar32 + *(int *)((long)param_1 + 0x3c);
      if (*(long *)pbVar3 != 0) {
        *(undefined8 *)(*(long *)pbVar3 + 8) = *(undefined8 *)(pbVar3 + 8);
      }
      if (*(undefined8 **)(pbVar3 + 8) != (undefined8 *)0x0) {
        **(undefined8 **)(pbVar3 + 8) = *(undefined8 *)pbVar3;
      }
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      plVar17 = (long *)*param_1;
      *(int *)(param_1 + 7) = (int)param_1[7] + -1;
      if (plVar17 != (long *)0x0) {
        iVar23 = *(int *)(pbVar32 + 0x20);
        if (iVar23 != 0) {
          do {
            if (iVar23 < 1) {
              plVar17 = (long *)0x0;
              plVar18 = (long *)*param_1;
            }
            else {
              plVar17 = *(long **)(pbVar32 + 0x18);
              if (*plVar17 != 0) {
                *(long *)(*plVar17 + 8) = plVar17[1];
              }
              if ((long *)plVar17[1] != (long *)0x0) {
                *(long *)plVar17[1] = *plVar17;
              }
              *plVar17 = 0;
              plVar17[1] = 0;
              iVar23 = *(int *)(pbVar32 + 0x20) + -1;
              *(int *)(pbVar32 + 0x20) = iVar23;
              plVar18 = (long *)*param_1;
            }
            if (plVar18 != (long *)0x0) {
              lVar26 = 0;
              if (plVar17 != (long *)0x0) {
                lVar26 = (long)plVar17 - (long)*(int *)(pbVar32 + 0x24);
              }
              (**(code **)(*plVar18 + 0x38))(plVar18,lVar26);
              iVar23 = *(int *)(pbVar32 + 0x20);
            }
          } while (iVar23 != 0);
          plVar17 = (long *)*param_1;
        }
        (**(code **)(*plVar17 + 0x38))(plVar17,pbVar32);
      }
      pbVar32 = pbVar27 + -lVar25;
    } while (pbVar32 != (byte *)((long)(param_1 + 5) - lVar25));
  }
LAB_01caa19c:
  nn::os::UnlockMutex(pMVar2);
  return;
}

