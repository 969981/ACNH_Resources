
/* WARNING: Removing unreachable block (ram,0x01a22e58) */
/* WARNING: Removing unreachable block (ram,0x01a22d84) */
/* WARNING: Removing unreachable block (ram,0x01a22d5c) */
/* WARNING: Removing unreachable block (ram,0x01a22e30) */
/* WARNING: Removing unreachable block (ram,0x01a2323c) */
/* WARNING: Removing unreachable block (ram,0x01a23284) */
/* WARNING: Removing unreachable block (ram,0x01a23164) */
/* WARNING: Removing unreachable block (ram,0x01a23084) */
/* WARNING: Removing unreachable block (ram,0x01a22c84) */
/* WARNING: Removing unreachable block (ram,0x01a22c74) */
/* WARNING: Removing unreachable block (ram,0x01a22c90) */
/* WARNING: Removing unreachable block (ram,0x01a22cd8) */
/* WARNING: Removing unreachable block (ram,0x01a230ac) */
/* WARNING: Removing unreachable block (ram,0x01a2318c) */
/* WARNING: Removing unreachable block (ram,0x01a232ac) */

void FUN_01a22c30(long param_1)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  void *pvVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  size_t __size;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long *local_90;
  undefined4 local_84;
  
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar19 == 0) {
    return;
  }
  local_90 = (long *)0x0;
  if ((DAT_05231900 == 0) || (*(long *)(DAT_05231900 + 0x50) == 0)) {
LAB_01a22d08:
    plVar22 = (long *)0x0;
  }
  else {
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    plVar22 = *(long **)(*(long *)(DAT_05231900 + 0x50) + 0x118);
    if (plVar22 != (long *)0x0) {
      if (((char)plVar22[7] == '\0') ||
         (uVar13 = (**(code **)(*plVar22 + 0xc0))(plVar22), (uVar13 & 1) == 0)) goto LAB_01a22d08;
      local_90 = plVar22;
    }
  }
  local_b0 = PTR_DAT_04bb2018 + 0x10;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = local_b0;
  FUN_01a1ff10(&local_a0,&local_b0);
  if (plVar22 == (long *)0x0) {
    iVar12 = 0;
    local_b8 = 0;
    iStack_b4 = 0;
    iVar11 = 0;
LAB_01a22efc:
    uVar20 = 0;
    do {
      iVar23 = local_b8;
      uVar15 = uVar20;
      if (local_b8 <= iStack_b4) {
        do {
          local_a0 = (undefined *)CONCAT44(iVar12,iVar23);
          iVar7 = FUN_015afa70(&local_90,&local_a0,0);
          iVar8 = FUN_015afb74(&local_90,&local_a0,0);
          if ((iVar8 + iVar7 == 4) && (uVar15 < 0x8c)) {
            lVar18 = (ulong)(uVar15 >> 5) * 4;
            *(uint *)(param_1 + lVar18) = *(uint *)(param_1 + lVar18) | 1 << (ulong)(uVar15 & 0x1f);
          }
          iVar23 = iVar23 + 1;
          uVar15 = uVar15 + 1;
        } while (iStack_b4 + 1 != iVar23);
      }
      uVar20 = uVar20 + ((iStack_b4 + 1) - local_b8);
      bVar1 = iVar12 < iVar11;
      iVar12 = iVar12 + 1;
    } while (bVar1);
  }
  else if ((DAT_05231900 == 0) || (lVar18 = *(long *)(DAT_05231900 + 0x50), lVar18 == 0)) {
LAB_01a22d98:
    if (*(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10) < 1) {
      local_b8 = 0;
      iVar12 = 0;
    }
    else {
LAB_01a22db0:
      lVar18 = plVar22[0x168];
      iVar11 = (int)local_98;
      if (*(int *)(lVar18 + 0x20) <= (int)local_98) {
        iVar11 = *(int *)(lVar18 + 0x20);
      }
      local_b8 = 0;
      if (*(int *)(lVar18 + 0x10) <= (int)local_98) {
        local_b8 = iVar11 - *(int *)(lVar18 + 0x10);
      }
      iVar11 = local_98._4_4_;
      if (*(int *)(lVar18 + 0x24) <= local_98._4_4_) {
        iVar11 = *(int *)(lVar18 + 0x24);
      }
      iVar12 = 0;
      if (*(int *)(lVar18 + 0x14) <= local_98._4_4_) {
        iVar12 = iVar11 - *(int *)(lVar18 + 0x14);
      }
    }
    if ((DAT_05231900 == 0) || (lVar18 = *(long *)(DAT_05231900 + 0x50), lVar18 == 0))
    goto LAB_01a22e80;
LAB_01a22e18:
    local_84 = 0;
    if ((*(long *)(lVar18 + 0x118) != 0) && (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) == '\0'))
    goto LAB_01a22ee0;
    local_84 = 0;
    if ((*(long *)(lVar18 + 0x118) == 0) || (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) != '\0'))
    goto LAB_01a22e80;
LAB_01a22e98:
    lVar18 = plVar22[0x168];
    iVar11 = (int)local_a8;
    if (*(int *)(lVar18 + 0x20) <= (int)local_a8) {
      iVar11 = *(int *)(lVar18 + 0x20);
    }
    iStack_b4 = 0;
    if (*(int *)(lVar18 + 0x10) <= (int)local_a8) {
      iStack_b4 = iVar11 - *(int *)(lVar18 + 0x10);
    }
    iVar23 = local_a8._4_4_;
    if (*(int *)(lVar18 + 0x24) <= local_a8._4_4_) {
      iVar23 = *(int *)(lVar18 + 0x24);
    }
    iVar11 = 0;
    if (*(int *)(lVar18 + 0x14) <= local_a8._4_4_) {
      iVar11 = iVar23 - *(int *)(lVar18 + 0x14);
    }
    if (iVar12 <= iVar11) {
LAB_01a22ef0:
      if (local_b8 <= iStack_b4) goto LAB_01a22efc;
    }
  }
  else {
    local_84 = 0;
    if ((*(long *)(lVar18 + 0x118) == 0) || (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) != '\0'))
    {
      local_84 = 0;
      if ((*(long *)(lVar18 + 0x118) == 0) || (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) != '\0')
         ) goto LAB_01a22d98;
      goto LAB_01a22db0;
    }
    iVar12 = 0;
    local_b8 = 0;
    lVar18 = *(long *)(DAT_05231900 + 0x50);
    if (lVar18 != 0) goto LAB_01a22e18;
LAB_01a22e80:
    if (0 < *(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10)) goto LAB_01a22e98;
LAB_01a22ee0:
    iStack_b4 = 0;
    iVar11 = 0;
    if (iVar12 < 1) goto LAB_01a22ef0;
  }
  lVar18 = DAT_05abff60;
  if (DAT_05abff60 == 0) {
    return;
  }
  fVar27 = (float)*(int *)(lVar19 + 0x20) * 0.5;
  uVar20 = 0;
  if (fVar27 != (float)(int)fVar27) {
    uVar20 = (uint)(fVar27 < 0.0);
  }
  fVar28 = (float)*(int *)(lVar19 + 0x24) * 0.5;
  uVar15 = 0;
  if (fVar28 != (float)(int)fVar28) {
    uVar15 = (uint)(fVar28 < 0.0);
  }
  fVar26 = (float)*(int *)(lVar19 + 0x34) * 0.5;
  fVar25 = (float)*(int *)(lVar19 + 0x30) * 0.5;
  uVar16 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar16 = (uint)(fVar25 < 0.0);
  }
  uVar17 = 0;
  if (fVar26 != (float)(int)fVar26) {
    uVar17 = (uint)(fVar26 < 0.0);
  }
  if (plVar22 == (long *)0x0) {
    iVar23 = 0;
    iVar11 = 0;
    uVar20 = 0;
    iVar12 = 0;
LAB_01a232dc:
    iVar7 = 0;
    do {
      if (iVar11 <= (int)uVar20) {
        fVar28 = (float)iVar23 * 10.0 + 2.5;
        fVar27 = (float)iVar23 * 10.0 + 10.0 + -2.5;
        iVar5 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
        iVar9 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        iVar8 = iVar5;
        if (iVar9 <= iVar5) {
          iVar8 = iVar9;
        }
        iVar24 = iVar11;
        if (iVar5 <= iVar9) {
          iVar5 = iVar9;
        }
        do {
          fVar28 = (float)iVar24 * 10.0 + 2.5;
          fVar27 = (float)iVar24 * 10.0 + 10.0 + -2.5;
          iVar10 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
          iVar6 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
          iVar9 = iVar10;
          if (iVar6 <= iVar10) {
            iVar9 = iVar6;
          }
          if (iVar9 < *(int *)(lVar18 + 0x28)) {
LAB_01a23420:
            local_a0 = (undefined *)CONCAT44(iVar23,iVar24);
            iVar9 = FUN_015afa70(&local_90,&local_a0,0);
            iVar10 = FUN_015afb74(&local_90,&local_a0,0);
            if ((iVar10 + iVar9 == 4) && (uVar15 = iVar7 + iVar24, uVar15 >> 8 < 0x19)) {
              lVar19 = (ulong)(uVar15 >> 5) * 4;
              *(uint *)(param_1 + 0x14 + lVar19) =
                   *(uint *)(param_1 + 0x14 + lVar19) | 1 << (ulong)(uVar15 & 0x1f);
            }
          }
          else {
            if (iVar10 <= iVar6) {
              iVar10 = iVar6;
            }
            if (((*(int *)(lVar18 + 0x38) < iVar10) || (iVar8 < *(int *)(lVar18 + 0x2c))) ||
               (*(int *)(lVar18 + 0x3c) < iVar5)) goto LAB_01a23420;
          }
          iVar24 = iVar24 + 1;
        } while (uVar20 + 1 != iVar24);
      }
      iVar7 = iVar7 + ((uVar20 + 1) - iVar11);
      bVar1 = iVar23 < iVar12;
      iVar23 = iVar23 + 1;
    } while (bVar1);
    lVar19 = DAT_05ae7600;
    if (plVar22 != (long *)0x0) goto joined_r0x01a23498;
    uVar20 = 0;
  }
  else {
    lVar19 = DAT_05ae7600;
    if ((DAT_05231900 == 0) || (lVar21 = *(long *)(DAT_05231900 + 0x50), lVar21 == 0)) {
LAB_01a230c0:
      if (*(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10) < 1) {
        iVar11 = 0;
        iVar23 = 0;
      }
      else {
LAB_01a230d8:
        iVar23 = (int)fVar27 - uVar20;
        iVar7 = (int)fVar28 - uVar15;
        lVar21 = plVar22[0x168];
        iVar12 = iVar23;
        if (*(int *)(lVar21 + 0x20) <= iVar23) {
          iVar12 = *(int *)(lVar21 + 0x20);
        }
        iVar11 = 0;
        if (*(int *)(lVar21 + 0x10) <= iVar23) {
          iVar11 = iVar12 - *(int *)(lVar21 + 0x10);
        }
        iVar12 = iVar7;
        if (*(int *)(lVar21 + 0x24) <= iVar7) {
          iVar12 = *(int *)(lVar21 + 0x24);
        }
        iVar23 = 0;
        if (*(int *)(lVar21 + 0x14) <= iVar7) {
          iVar23 = iVar12 - *(int *)(lVar21 + 0x14);
        }
      }
      if ((DAT_05231900 == 0) || (lVar21 = *(long *)(DAT_05231900 + 0x50), lVar21 == 0))
      goto LAB_01a231b4;
LAB_01a2314c:
      uVar13 = (ulong)local_a0 >> 0x20;
      local_a0 = (undefined *)(uVar13 << 0x20);
      if ((*(long *)(lVar21 + 0x118) != 0) &&
         (bVar4 = *(byte *)(*(long *)(lVar21 + 0x118) + 0xe0b), uVar20 = (uint)bVar4, bVar4 == 0))
      goto LAB_01a232c8;
      local_a0 = (undefined *)(uVar13 << 0x20);
      if ((*(long *)(lVar21 + 0x118) == 0) || (*(char *)(*(long *)(lVar21 + 0x118) + 0xe0b) != '\0')
         ) goto LAB_01a231b4;
LAB_01a231cc:
      iVar7 = (int)fVar25 - uVar16;
      iVar8 = (int)fVar26 - uVar17;
      lVar21 = plVar22[0x168];
      iVar12 = iVar7;
      if (*(int *)(lVar21 + 0x20) <= iVar7) {
        iVar12 = *(int *)(lVar21 + 0x20);
      }
      uVar20 = 0;
      if (*(int *)(lVar21 + 0x10) <= iVar7) {
        uVar20 = iVar12 - *(int *)(lVar21 + 0x10);
      }
      iVar7 = iVar8;
      if (*(int *)(lVar21 + 0x24) <= iVar8) {
        iVar7 = *(int *)(lVar21 + 0x24);
      }
      iVar12 = 0;
      if (*(int *)(lVar21 + 0x14) <= iVar8) {
        iVar12 = iVar7 - *(int *)(lVar21 + 0x14);
      }
      if (iVar23 <= iVar12) {
LAB_01a232d4:
        if (iVar11 <= (int)uVar20) goto LAB_01a232dc;
      }
    }
    else {
      uVar13 = (ulong)local_a0 >> 0x20;
      local_a0 = (undefined *)(uVar13 << 0x20);
      if ((*(long *)(lVar21 + 0x118) == 0) || (*(char *)(*(long *)(lVar21 + 0x118) + 0xe0b) != '\0')
         ) {
        local_a0 = (undefined *)(uVar13 << 0x20);
        if ((*(long *)(lVar21 + 0x118) == 0) ||
           (*(char *)(*(long *)(lVar21 + 0x118) + 0xe0b) != '\0')) goto LAB_01a230c0;
        goto LAB_01a230d8;
      }
      iVar23 = 0;
      iVar11 = 0;
      lVar21 = *(long *)(DAT_05231900 + 0x50);
      if (lVar21 != 0) goto LAB_01a2314c;
LAB_01a231b4:
      if (0 < *(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10)) goto LAB_01a231cc;
      uVar20 = 0;
LAB_01a232c8:
      iVar12 = 0;
      if (iVar23 < 1) goto LAB_01a232d4;
    }
joined_r0x01a23498:
    DAT_05ae7600 = lVar19;
    if (DAT_05231900 == 0) {
      uVar20 = *(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10) - 1;
LAB_01a234b0:
      iVar11 = *(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10) + -1;
    }
    else {
      if (*(long *)(DAT_05231900 + 0x50) == 0) {
LAB_01a23250:
        uVar20 = *(int *)(plVar22[0x164] + (long)(int)plVar22[0x166] * 0x10) - 1;
        lVar18 = *(long *)(DAT_05231900 + 0x50);
      }
      else {
        local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
        lVar18 = *(long *)(*(long *)(DAT_05231900 + 0x50) + 0x118);
        if ((lVar18 == 0) || (*(char *)(lVar18 + 0xe0b) != '\0')) goto LAB_01a23250;
        uVar20 = 0;
        lVar18 = *(long *)(DAT_05231900 + 0x50);
      }
      if (lVar18 == 0) goto LAB_01a234b0;
      if ((*(long *)(lVar18 + 0x118) != 0) && (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) == '\0')
         ) goto LAB_01a2357c;
      local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
      if ((*(long *)(lVar18 + 0x118) == 0) || (*(char *)(*(long *)(lVar18 + 0x118) + 0xe0b) != '\0')
         ) goto LAB_01a234b0;
      iVar11 = 0;
    }
    if ((int)uVar20 <= iVar11) {
      puVar3 = (uint *)(plVar22[0x164] + (long)(int)*(uint *)(plVar22 + 0x166) * 0x10);
      if (*(uint *)(plVar22 + 0x163) <= *(uint *)(plVar22 + 0x166)) {
        puVar3 = (uint *)0x0;
      }
      piVar2 = (int *)(*(long *)(puVar3 + 2) + (long)(int)uVar20 * 0x10);
      if (*puVar3 <= uVar20) {
        piVar2 = (int *)0x0;
      }
      iVar11 = *piVar2;
      iVar12 = piVar2[1];
      if (0 < iVar11 && 0 < iVar12) {
        uVar15 = iVar12 * iVar11;
        __size = -(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2;
        if ((int)uVar15 < 0) {
          __size = 0xffffffffffffffff;
        }
        if (lVar19 == 0) {
          pvVar14 = malloc(__size);
        }
        else {
          lVar18 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar22 = (long *)(lVar19 + 8);
          if (lVar18 != 0) {
            plVar22 = (long *)(lVar18 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_01a2357c;
          pvVar14 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,__size,8);
        }
        if (pvVar14 != (void *)0x0) {
          *(int *)(param_1 + 0x338) = iVar11;
          *(int *)(param_1 + 0x33c) = iVar12;
          *(void **)(param_1 + 0x340) = pvVar14;
          goto LAB_01a23594;
        }
      }
    }
  }
LAB_01a2357c:
  iVar11 = *(int *)(param_1 + 0x338);
  if (iVar11 < 1) {
    return;
  }
  iVar12 = *(int *)(param_1 + 0x33c);
  if (iVar12 < 1) {
    return;
  }
LAB_01a23594:
  uVar15 = 0;
  do {
    if (0 < iVar12) {
      uVar16 = 0;
      do {
        local_a0 = (undefined *)CONCAT44(uVar16,uVar15);
        iVar11 = FUN_015afa70(&local_90,&local_a0,uVar20);
        iVar12 = FUN_015afb74(&local_90,&local_a0,uVar20);
        piVar2 = (int *)(*(long *)(param_1 + 0x340) +
                        (long)(int)(uVar15 + *(uint *)(param_1 + 0x338) * uVar16) * 4);
        if (*(uint *)(param_1 + 0x33c) <= uVar16 || *(uint *)(param_1 + 0x338) <= uVar15) {
          piVar2 = (int *)0x0;
        }
        *piVar2 = iVar12 + iVar11;
        FUN_01a23690(param_1,uVar15,uVar16);
        iVar12 = *(int *)(param_1 + 0x33c);
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < iVar12);
      iVar11 = *(int *)(param_1 + 0x338);
    }
    uVar15 = uVar15 + 1;
  } while ((int)uVar15 < iVar11);
  return;
}

