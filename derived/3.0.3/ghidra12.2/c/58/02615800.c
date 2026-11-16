
/* WARNING: Removing unreachable block (ram,0x02617270) */
/* WARNING: Removing unreachable block (ram,0x026171d0) */
/* WARNING: Removing unreachable block (ram,0x02617130) */
/* WARNING: Removing unreachable block (ram,0x0261708c) */
/* WARNING: Removing unreachable block (ram,0x02616a0c) */
/* WARNING: Removing unreachable block (ram,0x0261694c) */
/* WARNING: Removing unreachable block (ram,0x02616888) */
/* WARNING: Removing unreachable block (ram,0x026167cc) */
/* WARNING: Removing unreachable block (ram,0x02615f18) */
/* WARNING: Removing unreachable block (ram,0x02615e88) */
/* WARNING: Removing unreachable block (ram,0x02615ed8) */
/* WARNING: Removing unreachable block (ram,0x02615f58) */
/* WARNING: Removing unreachable block (ram,0x02616824) */
/* WARNING: Removing unreachable block (ram,0x026168e8) */
/* WARNING: Removing unreachable block (ram,0x026169a4) */
/* WARNING: Removing unreachable block (ram,0x02616a64) */
/* WARNING: Removing unreachable block (ram,0x026170d8) */
/* WARNING: Removing unreachable block (ram,0x0261717c) */
/* WARNING: Removing unreachable block (ram,0x0261721c) */
/* WARNING: Removing unreachable block (ram,0x026172bc) */

ulong FUN_02615800(void *param_1,undefined8 param_2,byte param_3)

{
  void *__dest;
  void *__dest_00;
  void *pvVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  ushort uVar12;
  byte bVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  byte bVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint *puVar28;
  uint *puVar29;
  long lVar30;
  long *plVar31;
  uint *puVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c;
  
  lVar35 = *(long *)PTR_DAT_04bb46f0;
  if (lVar35 == 0) goto LAB_026174c4;
  __dest = (void *)((long)param_1 + 0x218);
  puVar29 = (uint *)(lVar35 + 0xea6c0);
  memcpy(__dest,param_1,0x100);
  memcpy((void *)((long)param_1 + 0x318),param_1,0x100);
  memcpy((void *)((long)param_1 + 0x418),param_1,0x100);
  memcpy((undefined8 *)((long)param_1 + 0x518),param_1,0x100);
  __dest_00 = (void *)((long)param_1 + 0x618);
  pvVar1 = (void *)((long)param_1 + 0x100);
  memcpy(__dest_00,pvVar1,0x100);
  memcpy((void *)((long)param_1 + 0x718),pvVar1,0x100);
  memcpy((void *)((long)param_1 + 0x818),pvVar1,0x100);
  memcpy((undefined8 *)((long)param_1 + 0x918),pvVar1,0x100);
  puVar2 = (undefined4 *)((long)param_1 + 0xa28);
  iVar21 = 0;
  lVar22 = lVar35 + 0xe98e0;
  do {
    while (iVar21 == 0) {
      iVar21 = 1;
    }
    uVar37 = 0;
    local_6c = iVar21;
    pvVar1 = (void *)((long)__dest + (ulong)(iVar21 - 1U) * 0x100);
    if (3 < iVar21 - 1U) {
      pvVar1 = __dest;
    }
    do {
      uVar36 = uVar37 >> 3;
      uVar27 = 1 << (ulong)((uint)uVar37 & 7);
      bVar24 = *(byte *)((long)pvVar1 + uVar36);
      if ((uVar27 & bVar24) != 0) {
        if ((uVar27 & *(byte *)(lVar22 + uVar36)) != 0) {
          iVar20 = FUN_0262298c(lVar35,puVar2,uVar37,0);
          local_170 = CONCAT44(local_170._4_4_,iVar20);
          if (iVar20 == local_6c) goto LAB_02615950;
          bVar24 = *(byte *)((long)pvVar1 + uVar36);
        }
        *(byte *)((long)pvVar1 + uVar36) = bVar24 & ((byte)(1 << (uVar37 & 7)) ^ 0xff);
      }
LAB_02615950:
      lVar30 = DAT_055588d0;
      uVar27 = (uint)uVar37 + 1;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    uVar37 = 0;
    pvVar1 = (void *)((long)__dest_00 + (ulong)(local_6c - 1) * 0x100);
    if (3 < local_6c - 1) {
      pvVar1 = __dest_00;
    }
    lVar4 = DAT_055588d0 + 0xe99e0;
    do {
      uVar36 = uVar37 >> 3;
      uVar27 = 1 << (ulong)((uint)uVar37 & 7);
      bVar24 = *(byte *)((long)pvVar1 + uVar36);
      if ((uVar27 & bVar24) != 0) {
        if ((uVar27 & *(byte *)(lVar4 + uVar36)) != 0) {
          iVar20 = FUN_0262298c(lVar30,puVar2,uVar37,0);
          local_170 = CONCAT44(local_170._4_4_,iVar20);
          if (iVar20 == local_6c) goto LAB_02615a00;
          bVar24 = *(byte *)((long)pvVar1 + uVar36);
        }
        *(byte *)((long)pvVar1 + uVar36) = bVar24 & ((byte)(1 << (uVar37 & 7)) ^ 0xff);
      }
LAB_02615a00:
      uVar27 = (uint)uVar37 + 1;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    iVar21 = iVar21 + 1;
  } while (iVar21 != 5);
  if ((*(char *)((long)param_1 + 0x205) == '\0') &&
     (uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x200)), (uVar37 & 1) != 0)) {
    uVar27 = (uint)*(ushort *)((long)param_1 + 0x200) - (uint)*(ushort *)(lVar35 + 0xea6e0);
    if ((uVar27 < *puVar29) &&
       (puVar28 = *(uint **)(*(long *)(lVar35 + 0xea6c8) + (long)(int)uVar27 * 8),
       puVar28 != (uint *)0x0)) {
      uVar27 = *puVar28;
      uVar25 = 0;
      if ((uVar27 != 0) && (puVar28 != (uint *)(ulong)uVar27)) {
        puVar32 = (uint *)((long)puVar28 - (long)(ulong)uVar27);
        uVar25 = 0;
        if (*puVar32 != 0) {
          uVar27 = puVar32[1];
          if ((uVar27 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar32 + lVar30 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar30 != 0) {
              uVar25 = 0;
              if ((ulong)uVar27 != 0) {
                uVar25 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar27);
              }
              if (*puVar32 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < DAT_055577a0) &&
                 (uVar25 = (uint)*(ushort *)(DAT_055577a8 + (long)(int)uVar25 * 2), uVar25 < 3))
              goto LAB_02615b48;
            }
          }
          uVar25 = 0;
        }
      }
LAB_02615b48:
      local_170 = CONCAT44(local_170._4_4_,uVar25);
      bVar17 = uVar25 != 0;
    }
    else {
      bVar17 = true;
    }
    iVar21 = FUN_0262298c(lVar35,puVar2,*(ushort *)((long)param_1 + 0x200),0);
    bVar16 = iVar21 == 1;
    if (*(char *)((long)param_1 + 0x20b) == '\0') goto LAB_02615b6c;
LAB_02615c64:
    if (*(char *)((long)param_1 + 0x211) != '\0') goto LAB_02615d68;
LAB_02615c6c:
    uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x20c));
    if ((uVar37 & 1) == 0) goto LAB_02615d68;
    uVar27 = (uint)*(ushort *)((long)param_1 + 0x20c) - (uint)*(ushort *)(lVar35 + 0xea6e0);
    if ((uVar27 < *puVar29) &&
       (puVar28 = *(uint **)(*(long *)(lVar35 + 0xea6c8) + (long)(int)uVar27 * 8),
       puVar28 != (uint *)0x0)) {
      uVar27 = *puVar28;
      uVar25 = 0;
      if ((uVar27 != 0) && (puVar28 != (uint *)(ulong)uVar27)) {
        puVar32 = (uint *)((long)puVar28 - (long)(ulong)uVar27);
        uVar25 = 0;
        if (*puVar32 != 0) {
          uVar27 = puVar32[1];
          if ((uVar27 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar32 + lVar30 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar30 != 0) {
              uVar25 = 0;
              if ((ulong)uVar27 != 0) {
                uVar25 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar27);
              }
              if (*puVar32 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < DAT_055577a0) &&
                 (uVar25 = (uint)*(ushort *)(DAT_055577a8 + (long)(int)uVar25 * 2), uVar25 < 3))
              goto LAB_02615d2c;
            }
          }
          uVar25 = 0;
        }
      }
LAB_02615d2c:
      local_170 = CONCAT44(local_170._4_4_,uVar25);
      bVar15 = uVar25 != 0;
    }
    else {
      bVar15 = true;
    }
    bVar17 = (bool)(bVar17 | bVar15);
    iVar21 = FUN_0262298c(lVar35,puVar2,*(ushort *)((long)param_1 + 0x20c),0);
    if (iVar21 == 1) {
      bVar16 = true;
    }
    if (*(char *)((long)param_1 + 0x217) == '\0') goto LAB_02615d70;
LAB_02615e6c:
    if (bVar17) {
LAB_02615e70:
      local_170 = local_170 & 0xffffffff00000000;
      FUN_0262c270(lVar35,__dest,lVar22);
      puVar14 = PTR_DAT_04bb46f0;
      pvVar1 = (void *)((long)__dest_00 + (local_170 & 0xffffffff) * 0x100);
      if (3 < (uint)local_170) {
        pvVar1 = __dest_00;
      }
      FUN_0262c270(*(long *)PTR_DAT_04bb46f0,pvVar1,*(long *)PTR_DAT_04bb46f0 + 0xe99e0);
      local_170 = CONCAT44(local_170._4_4_,1);
      FUN_0262c270(lVar35,(long)param_1 + 0x318,lVar22);
      pvVar1 = (void *)((long)__dest_00 + (local_170 & 0xffffffff) * 0x100);
      if (3 < (uint)local_170) {
        pvVar1 = __dest_00;
      }
      FUN_0262c270(*(long *)puVar14,pvVar1,*(long *)puVar14 + 0xe99e0);
      local_170 = CONCAT44(local_170._4_4_,2);
      FUN_0262c270(lVar35,(long)param_1 + 0x418,lVar22);
      pvVar1 = (void *)((long)__dest_00 + (local_170 & 0xffffffff) * 0x100);
      if (3 < (uint)local_170) {
        pvVar1 = __dest_00;
      }
      FUN_0262c270(*(long *)puVar14,pvVar1,*(long *)puVar14 + 0xe99e0);
      local_170 = CONCAT44(local_170._4_4_,3);
      FUN_0262c270(lVar35,(long)param_1 + 0x518,lVar22);
      pvVar1 = (void *)((long)__dest_00 + (local_170 & 0xffffffff) * 0x100);
      if (3 < (uint)local_170) {
        pvVar1 = __dest_00;
      }
      FUN_0262c270(*(long *)puVar14,pvVar1,*(long *)puVar14 + 0xe99e0);
    }
  }
  else {
    bVar16 = false;
    bVar17 = false;
    if (*(char *)((long)param_1 + 0x20b) != '\0') goto LAB_02615c64;
LAB_02615b6c:
    uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x206));
    if ((uVar37 & 1) == 0) goto LAB_02615c64;
    uVar27 = (uint)*(ushort *)((long)param_1 + 0x206) - (uint)*(ushort *)(lVar35 + 0xea6e0);
    if ((uVar27 < *puVar29) &&
       (puVar28 = *(uint **)(*(long *)(lVar35 + 0xea6c8) + (long)(int)uVar27 * 8),
       puVar28 != (uint *)0x0)) {
      uVar27 = *puVar28;
      uVar25 = 0;
      if ((uVar27 != 0) && (puVar28 != (uint *)(ulong)uVar27)) {
        puVar32 = (uint *)((long)puVar28 - (long)(ulong)uVar27);
        uVar25 = 0;
        if (*puVar32 != 0) {
          uVar27 = puVar32[1];
          if ((uVar27 != 0) && ((ulong)(ushort)puVar32[2] != 0)) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar32 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar32 + lVar30 + (ulong)(ushort)puVar32[2] * 8;
            if (lVar30 != 0) {
              uVar25 = 0;
              if ((ulong)uVar27 != 0) {
                uVar25 = (uint)((ulong)((long)puVar28 - lVar30) / (ulong)uVar27);
              }
              if (*puVar32 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < DAT_055577a0) &&
                 (uVar25 = (uint)*(ushort *)(DAT_055577a8 + (long)(int)uVar25 * 2), uVar25 < 3))
              goto LAB_02615c2c;
            }
          }
          uVar25 = 0;
        }
      }
LAB_02615c2c:
      local_170 = CONCAT44(local_170._4_4_,uVar25);
      bVar15 = uVar25 != 0;
    }
    else {
      bVar15 = true;
    }
    bVar17 = (bool)(bVar17 | bVar15);
    iVar21 = FUN_0262298c(lVar35,puVar2,*(ushort *)((long)param_1 + 0x206),0);
    if (iVar21 == 1) {
      bVar16 = true;
    }
    if (*(char *)((long)param_1 + 0x211) == '\0') goto LAB_02615c6c;
LAB_02615d68:
    if (*(char *)((long)param_1 + 0x217) != '\0') goto LAB_02615e6c;
LAB_02615d70:
    uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x212));
    if ((uVar37 & 1) == 0) goto LAB_02615e6c;
    uVar27 = (uint)*(ushort *)((long)param_1 + 0x212) - (uint)*(ushort *)(lVar35 + 0xea6e0);
    if ((uVar27 < *puVar29) &&
       (puVar29 = *(uint **)(*(long *)(lVar35 + 0xea6c8) + (long)(int)uVar27 * 8),
       puVar29 != (uint *)0x0)) {
      uVar27 = *puVar29;
      uVar25 = 0;
      if ((uVar27 != 0) && (puVar29 != (uint *)(ulong)uVar27)) {
        puVar28 = (uint *)((long)puVar29 - (long)(ulong)uVar27);
        uVar25 = 0;
        if (*puVar28 != 0) {
          uVar27 = puVar28[1];
          if ((uVar27 != 0) && ((ulong)(ushort)puVar28[2] != 0)) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar28 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar28 + lVar30 + (ulong)(ushort)puVar28[2] * 8;
            if (lVar30 != 0) {
              uVar25 = 0;
              if ((ulong)uVar27 != 0) {
                uVar25 = (uint)((ulong)((long)puVar29 - lVar30) / (ulong)uVar27);
              }
              if (*puVar28 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < DAT_055577a0) &&
                 (uVar25 = (uint)*(ushort *)(DAT_055577a8 + (long)(int)uVar25 * 2), uVar25 < 3))
              goto LAB_02615e30;
            }
          }
          uVar25 = 0;
        }
      }
LAB_02615e30:
      local_170 = CONCAT44(local_170._4_4_,uVar25);
      bVar15 = uVar25 != 0;
    }
    else {
      bVar15 = true;
    }
    iVar21 = FUN_0262298c(lVar35,puVar2,*(ushort *)((long)param_1 + 0x212),0);
    if (iVar21 == 1) {
      bVar16 = true;
    }
    if (bVar17 || bVar15) goto LAB_02615e70;
  }
  puVar14 = PTR_DAT_04bb46b0;
  local_170 = 0x4c7b4c7b4c7b4c7b;
  local_168 = 0x4c7b4c7b4c7b4c7b;
  if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
     (lVar22 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*puVar2), lVar22 != 0)) {
    lVar30 = lVar22 + 0x194b0;
    if (*(long *)(lVar22 + 0x194b8) == 0) {
      lVar30 = *(long *)(*(long *)puVar14 + 0x20);
    }
    plVar3 = (long *)(lVar30 + 0x2d140);
    plVar31 = *(long **)(lVar30 + 0x2d160);
    if (plVar31 == (long *)0x0) {
      uVar37 = 0;
    }
    else {
      uVar37 = 0;
      if ((undefined8 *)*plVar31 != (undefined8 *)0x0) {
        uVar37 = (*(code *)**(undefined8 **)*plVar31)();
        plVar31 = *(long **)(lVar30 + 0x2d160);
      }
    }
    local_170 = CONCAT62(local_170._2_6_,
                         *(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x20));
    if ((uVar37 & 1) == 0) {
LAB_02616028:
      if (plVar31 == (long *)0x0) goto LAB_02616078;
LAB_0261602c:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_02616078;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_170._0_4_ =
           CONCAT22(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x22),
                    (undefined2)local_170);
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_02616088;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_02616088;
        }
        goto LAB_0261608c;
      }
LAB_026160d8:
      local_170._0_6_ =
           CONCAT24(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x24),(uint)local_170);
LAB_026160e8:
      if (plVar31 == (long *)0x0) goto LAB_02616138;
LAB_026160ec:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_02616138;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_170 = CONCAT26(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x26),
                           (undefined6)local_170);
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_02616148;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_02616148;
        }
        goto LAB_0261614c;
      }
LAB_02616198:
      local_168 = CONCAT62(local_168._2_6_,
                           *(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x28));
LAB_026161a8:
      if (plVar31 == (long *)0x0) goto LAB_026161f8;
LAB_026161ac:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_026161f8;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_168._0_4_ =
           CONCAT22(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2a),
                    (undefined2)local_168);
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_02616208;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_02616208;
        }
        goto LAB_0261620c;
      }
LAB_02616258:
      local_168._0_6_ =
           CONCAT24(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2c),
                    (undefined4)local_168);
LAB_02616268:
      if (plVar31 != (long *)0x0) {
LAB_0261626c:
        if ((undefined8 *)*plVar31 != (undefined8 *)0x0) {
          uVar37 = (*(code *)**(undefined8 **)*plVar31)();
          local_168 = CONCAT26(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2e),
                               (undefined6)local_168);
          if ((((uVar37 & 1) != 0) && (*(long *)(lVar30 + 0x2d160) != 0)) &&
             (puVar23 = *(undefined8 **)(*(long *)(lVar30 + 0x2d160) + 8),
             puVar23 != (undefined8 *)0x0)) {
            (**(code **)*puVar23)();
          }
          goto LAB_026162c4;
        }
      }
    }
    else {
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_02616028;
        }
        goto LAB_0261602c;
      }
LAB_02616078:
      local_170._0_4_ =
           CONCAT22(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x22),
                    (undefined2)local_170);
LAB_02616088:
      if (plVar31 == (long *)0x0) goto LAB_026160d8;
LAB_0261608c:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_026160d8;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_170._0_6_ =
           CONCAT24(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x24),(uint)local_170);
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_026160e8;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_026160e8;
        }
        goto LAB_026160ec;
      }
LAB_02616138:
      local_170 = CONCAT26(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x26),
                           (undefined6)local_170);
LAB_02616148:
      if (plVar31 == (long *)0x0) goto LAB_02616198;
LAB_0261614c:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_02616198;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_168 = CONCAT62(local_168._2_6_,
                           *(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x28));
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_026161a8;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_026161a8;
        }
        goto LAB_026161ac;
      }
LAB_026161f8:
      local_168._0_4_ =
           CONCAT22(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2a),
                    (undefined2)local_168);
LAB_02616208:
      if (plVar31 == (long *)0x0) goto LAB_02616258;
LAB_0261620c:
      if ((undefined8 *)*plVar31 == (undefined8 *)0x0) goto LAB_02616258;
      uVar37 = (*(code *)**(undefined8 **)*plVar31)();
      local_168._0_6_ =
           CONCAT24(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2c),
                    (undefined4)local_168);
      plVar31 = *(long **)(lVar30 + 0x2d160);
      if ((uVar37 & 1) == 0) goto LAB_02616268;
      if (plVar31 != (long *)0x0) {
        if ((undefined8 *)plVar31[1] != (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)plVar31[1])();
          plVar31 = *(long **)(lVar30 + 0x2d160);
          goto LAB_02616268;
        }
        goto LAB_0261626c;
      }
    }
    local_168 = CONCAT26(*(undefined2 *)(*(long *)(lVar30 + 0x2d148) + *plVar3 + 0x2e),
                         (undefined6)local_168);
  }
LAB_026162c4:
  uVar27 = 0;
  do {
    lVar22 = 0;
    local_6c = uVar27;
    do {
      uVar12 = *(ushort *)((long)&local_170 + lVar22);
      if (uVar12 < 0x800) {
        uVar37 = (ulong)(uVar12 >> 3);
        pvVar1 = (void *)((long)__dest + (ulong)uVar27 * 0x100);
        if (3 < uVar27) {
          pvVar1 = __dest;
        }
        uVar25 = 1 << (ulong)(uVar12 & 7);
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest + (ulong)uVar27 * 0x100);
          if (3 < uVar27) {
            pvVar1 = __dest;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)uVar25 ^ 0xff);
        }
        pvVar1 = (void *)((long)__dest_00 + (ulong)uVar27 * 0x100);
        if (3 < uVar27) {
          pvVar1 = __dest_00;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest_00 + (ulong)uVar27 * 0x100);
          if (3 < uVar27) {
            pvVar1 = __dest_00;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
        }
      }
      lVar22 = lVar22 + 2;
    } while (lVar22 != 0x10);
    if ((*(char *)((long)param_1 + 0x205) == '\0') &&
       (uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x200)), (uVar37 & 1) != 0)) {
      uVar12 = *(ushort *)((long)param_1 + 0x200);
      if (uVar12 < 0x800) {
        uVar37 = (ulong)(uVar12 >> 3);
        uVar25 = 1 << (ulong)(uVar12 & 7);
        pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
        if (3 < local_6c) {
          pvVar1 = __dest;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
          if (3 < (ulong)local_6c) {
            pvVar1 = __dest;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)uVar25 ^ 0xff);
          uVar12 = *(ushort *)((long)param_1 + 0x200);
          if (0x7ff < uVar12) goto LAB_02616464;
          uVar37 = (ulong)(uVar12 >> 3);
          uVar25 = 1 << (ulong)(uVar12 & 7);
        }
        pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
        if (3 < (ulong)local_6c) {
          pvVar1 = __dest_00;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
          if (3 < local_6c) {
            pvVar1 = __dest_00;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
        }
        goto LAB_02616464;
      }
      if (*(char *)((long)param_1 + 0x20b) == '\0') goto LAB_0261646c;
LAB_02616540:
      cVar11 = *(char *)((long)param_1 + 0x211);
joined_r0x02616614:
      if (cVar11 != '\0') goto LAB_02616620;
LAB_02616548:
      uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x20c));
      if ((uVar37 & 1) == 0) goto LAB_02616620;
      uVar12 = *(ushort *)((long)param_1 + 0x20c);
      if (uVar12 < 0x800) {
        uVar37 = (ulong)(uVar12 >> 3);
        uVar25 = 1 << (ulong)(uVar12 & 7);
        pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
        if (3 < local_6c) {
          pvVar1 = __dest;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
          if (3 < (ulong)local_6c) {
            pvVar1 = __dest;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)uVar25 ^ 0xff);
          uVar12 = *(ushort *)((long)param_1 + 0x20c);
          if (0x7ff < uVar12) goto LAB_02616620;
          uVar37 = (ulong)(uVar12 >> 3);
          uVar25 = 1 << (ulong)(uVar12 & 7);
        }
        pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
        if (3 < (ulong)local_6c) {
          pvVar1 = __dest_00;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) == 0) goto LAB_02616620;
        pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
        if (3 < local_6c) {
          pvVar1 = __dest_00;
        }
        *(byte *)((long)pvVar1 + uVar37) =
             *(byte *)((long)pvVar1 + uVar37) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
        cVar11 = *(char *)((long)param_1 + 0x217);
      }
      else {
        cVar11 = *(char *)((long)param_1 + 0x217);
      }
    }
    else {
LAB_02616464:
      if (*(char *)((long)param_1 + 0x20b) != '\0') goto LAB_02616540;
LAB_0261646c:
      uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x206));
      if ((uVar37 & 1) == 0) goto LAB_02616540;
      uVar12 = *(ushort *)((long)param_1 + 0x206);
      if (0x7ff < uVar12) {
        cVar11 = *(char *)((long)param_1 + 0x211);
        goto joined_r0x02616614;
      }
      uVar37 = (ulong)(uVar12 >> 3);
      uVar25 = 1 << (ulong)(uVar12 & 7);
      pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
      if (3 < local_6c) {
        pvVar1 = __dest;
      }
      if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
        pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
        if (3 < (ulong)local_6c) {
          pvVar1 = __dest;
        }
        *(byte *)((long)pvVar1 + uVar37) = *(byte *)((long)pvVar1 + uVar37) & ((byte)uVar25 ^ 0xff);
        uVar12 = *(ushort *)((long)param_1 + 0x206);
        if (0x7ff < uVar12) goto LAB_02616540;
        uVar37 = (ulong)(uVar12 >> 3);
        uVar25 = 1 << (ulong)(uVar12 & 7);
      }
      pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
      if (3 < (ulong)local_6c) {
        pvVar1 = __dest_00;
      }
      if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) == 0) goto LAB_02616540;
      pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
      if (3 < local_6c) {
        pvVar1 = __dest_00;
      }
      *(byte *)((long)pvVar1 + uVar37) =
           *(byte *)((long)pvVar1 + uVar37) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
      if (*(char *)((long)param_1 + 0x211) == '\0') goto LAB_02616548;
LAB_02616620:
      cVar11 = *(char *)((long)param_1 + 0x217);
    }
    if ((cVar11 == '\0') &&
       (uVar37 = FUN_0261d530(lVar35,*(undefined2 *)((long)param_1 + 0x212)), (uVar37 & 1) != 0)) {
      uVar12 = *(ushort *)((long)param_1 + 0x212);
      if (uVar12 < 0x800) {
        uVar37 = (ulong)(uVar12 >> 3);
        uVar25 = 1 << (ulong)(uVar12 & 7);
        pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
        if (3 < local_6c) {
          pvVar1 = __dest;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest + (ulong)local_6c * 0x100);
          if (3 < (ulong)local_6c) {
            pvVar1 = __dest;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)uVar25 ^ 0xff);
          uVar12 = *(ushort *)((long)param_1 + 0x212);
          if (0x7ff < uVar12) goto LAB_026162e4;
          uVar37 = (ulong)(uVar12 >> 3);
          uVar25 = 1 << (ulong)(uVar12 & 7);
        }
        pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
        if (3 < (ulong)local_6c) {
          pvVar1 = __dest_00;
        }
        if ((uVar25 & *(byte *)((long)pvVar1 + uVar37)) != 0) {
          pvVar1 = (void *)((long)__dest_00 + (ulong)local_6c * 0x100);
          if (3 < local_6c) {
            pvVar1 = __dest_00;
          }
          *(byte *)((long)pvVar1 + uVar37) =
               *(byte *)((long)pvVar1 + uVar37) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
        }
      }
    }
LAB_026162e4:
    uVar25 = 4;
    if ((int)uVar27 < 4) {
      uVar25 = uVar27 + 1;
    }
    uVar27 = uVar25;
  } while (uVar25 != 4);
  if (*(int *)((long)param_1 + 0xa2c) == 1) {
    memset((void *)((long)param_1 + 0x418),0,0x200);
    memset((void *)((long)param_1 + 0x818),0,0x200);
  }
  else if (*(int *)((long)param_1 + 0xa2c) == 2) {
    *(undefined8 *)((long)param_1 + 0x608) = 0;
    *(undefined8 *)((long)param_1 + 0x610) = 0;
    *(undefined8 *)((long)param_1 + 0x5f8) = 0;
    *(undefined8 *)((long)param_1 + 0x600) = 0;
    *(undefined8 *)((long)param_1 + 0x5e8) = 0;
    *(undefined8 *)((long)param_1 + 0x5f0) = 0;
    *(undefined8 *)((long)param_1 + 0x5d8) = 0;
    *(undefined8 *)((long)param_1 + 0x5e0) = 0;
    *(undefined8 *)((long)param_1 + 0x5c8) = 0;
    *(undefined8 *)((long)param_1 + 0x5d0) = 0;
    *(undefined8 *)((long)param_1 + 0x5b8) = 0;
    *(undefined8 *)((long)param_1 + 0x5c0) = 0;
    *(undefined8 *)((long)param_1 + 0x5a8) = 0;
    *(undefined8 *)((long)param_1 + 0x5b0) = 0;
    *(undefined8 *)((long)param_1 + 0x598) = 0;
    *(undefined8 *)((long)param_1 + 0x5a0) = 0;
    *(undefined8 *)((long)param_1 + 0x588) = 0;
    *(undefined8 *)((long)param_1 + 0x590) = 0;
    *(undefined8 *)((long)param_1 + 0x578) = 0;
    *(undefined8 *)((long)param_1 + 0x580) = 0;
    *(undefined8 *)((long)param_1 + 0x568) = 0;
    *(undefined8 *)((long)param_1 + 0x570) = 0;
    *(undefined8 *)((long)param_1 + 0x558) = 0;
    *(undefined8 *)((long)param_1 + 0x560) = 0;
    *(undefined8 *)((long)param_1 + 0x548) = 0;
    *(undefined8 *)((long)param_1 + 0x550) = 0;
    *(undefined8 *)((long)param_1 + 0x538) = 0;
    *(undefined8 *)((long)param_1 + 0x540) = 0;
    *(undefined8 *)((long)param_1 + 0x528) = 0;
    *(undefined8 *)((long)param_1 + 0x530) = 0;
    *(undefined8 *)((long)param_1 + 0x518) = 0;
    *(undefined8 *)((long)param_1 + 0x520) = 0;
    *(undefined8 *)((long)param_1 + 0xa08) = 0;
    *(undefined8 *)((long)param_1 + 0xa10) = 0;
    *(undefined8 *)((long)param_1 + 0x9f8) = 0;
    *(undefined8 *)((long)param_1 + 0xa00) = 0;
    *(undefined8 *)((long)param_1 + 0x9e8) = 0;
    *(undefined8 *)((long)param_1 + 0x9f0) = 0;
    *(undefined8 *)((long)param_1 + 0x9d8) = 0;
    *(undefined8 *)((long)param_1 + 0x9e0) = 0;
    *(undefined8 *)((long)param_1 + 0x9c8) = 0;
    *(undefined8 *)((long)param_1 + 0x9d0) = 0;
    *(undefined8 *)((long)param_1 + 0x9b8) = 0;
    *(undefined8 *)((long)param_1 + 0x9c0) = 0;
    *(undefined8 *)((long)param_1 + 0x9a8) = 0;
    *(undefined8 *)((long)param_1 + 0x9b0) = 0;
    *(undefined8 *)((long)param_1 + 0x998) = 0;
    *(undefined8 *)((long)param_1 + 0x9a0) = 0;
    *(undefined8 *)((long)param_1 + 0x988) = 0;
    *(undefined8 *)((long)param_1 + 0x990) = 0;
    *(undefined8 *)((long)param_1 + 0x978) = 0;
    *(undefined8 *)((long)param_1 + 0x980) = 0;
    *(undefined8 *)((long)param_1 + 0x968) = 0;
    *(undefined8 *)((long)param_1 + 0x970) = 0;
    *(undefined8 *)((long)param_1 + 0x958) = 0;
    *(undefined8 *)((long)param_1 + 0x960) = 0;
    *(undefined8 *)((long)param_1 + 0x948) = 0;
    *(undefined8 *)((long)param_1 + 0x950) = 0;
    *(undefined8 *)((long)param_1 + 0x938) = 0;
    *(undefined8 *)((long)param_1 + 0x940) = 0;
    *(undefined8 *)((long)param_1 + 0x928) = 0;
    *(undefined8 *)((long)param_1 + 0x930) = 0;
    *(undefined8 *)((long)param_1 + 0x918) = 0;
    *(undefined8 *)((long)param_1 + 0x920) = 0;
  }
  iVar21 = 0;
  uVar37 = 0;
  do {
    uVar25 = (uint)uVar37 & 6;
    uVar27 = (uint)uVar37 + 2;
    bVar24 = *(byte *)((long)__dest + (uVar37 >> 3));
    iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
    uVar37 = (ulong)uVar27;
  } while (uVar27 != 0x800);
  bVar17 = true;
  if (iVar21 == 0) {
    iVar21 = 0;
    uVar37 = 0;
    do {
      uVar25 = (uint)uVar37 & 6;
      uVar27 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)__dest_00 + (uVar37 >> 3));
      iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    bVar17 = iVar21 != 0;
  }
  iVar21 = 0;
  uVar37 = 0;
  do {
    uVar25 = (uint)uVar37 & 6;
    uVar27 = (uint)uVar37 + 2;
    bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x318);
    iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
    uVar37 = (ulong)uVar27;
  } while (uVar27 != 0x800);
  if (iVar21 == 0) {
    iVar21 = 0;
    uVar37 = 0;
    do {
      uVar25 = (uint)uVar37 & 6;
      uVar27 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x718);
      iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    bVar15 = iVar21 != 0;
  }
  else {
    bVar15 = true;
  }
  iVar21 = 0;
  uVar37 = 0;
  do {
    uVar25 = (uint)uVar37 & 6;
    uVar27 = (uint)uVar37 + 2;
    bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x418);
    iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
    uVar37 = (ulong)uVar27;
  } while (uVar27 != 0x800);
  if (iVar21 == 0) {
    iVar21 = 0;
    uVar37 = 0;
    do {
      uVar25 = (uint)uVar37 & 6;
      uVar27 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x818);
      iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    bVar18 = iVar21 != 0;
  }
  else {
    bVar18 = true;
  }
  iVar21 = 0;
  uVar37 = 0;
  do {
    uVar25 = (uint)uVar37 & 6;
    uVar27 = (uint)uVar37 + 2;
    bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x518);
    iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
    uVar37 = (ulong)uVar27;
  } while (uVar27 != 0x800);
  if (iVar21 == 0) {
    iVar21 = 0;
    uVar37 = 0;
    do {
      uVar25 = (uint)uVar37 & 6;
      uVar27 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)param_1 + (uVar37 >> 3) + 0x918);
      iVar21 = (bVar24 >> (ulong)(uVar25 | 1) & 1) + (bVar24 >> (ulong)uVar25 & 1) + iVar21;
      uVar37 = (ulong)uVar27;
    } while (uVar27 != 0x800);
    bVar19 = iVar21 != 0;
  }
  else {
    bVar19 = true;
  }
  bVar7 = (bool)(bVar15 ^ 1);
  if (param_3 < 2) {
    if ((bool)(bVar17 ^ 1U | bVar7)) {
      if ((bool)(bVar15 | bVar17 ^ 1U)) {
        bVar19 = !bVar17 && !bVar7;
        uVar26 = 4;
LAB_02616ae4:
        local_6c = 10;
        if (bVar19) {
          local_6c = uVar26;
        }
      }
      else {
        local_6c = 3;
      }
    }
    else {
LAB_02616c24:
      local_6c = 0;
      if (!bVar16) {
        local_6c = 3;
      }
    }
  }
  else {
    bVar24 = bVar18 ^ 1;
    if (param_3 == 2) {
      if ((bool)(bVar7 | bVar24)) {
        if (!(bool)(bVar17 ^ 1U | bVar7)) goto LAB_02616c24;
        if ((bool)(bVar18 | bVar7)) {
          if ((bool)(bVar15 | bVar24)) {
            bVar19 = (bool)(bVar15 | bVar17 ^ 1U);
LAB_02616b34:
            bVar19 = !bVar19;
            uVar26 = 3;
            goto LAB_02616ae4;
          }
LAB_02617384:
          local_6c = 5;
        }
        else {
LAB_0261737c:
          local_6c = 4;
        }
      }
      else {
LAB_02616c34:
        local_6c = 1;
      }
    }
    else if ((bool)(bVar15 & bVar18 & bVar19)) {
      local_6c = 2;
    }
    else {
      if (!(bool)(bVar17 | bVar7 | bVar24 | bVar19)) goto LAB_02616c34;
      if (!(bool)(bVar17 ^ 1U | bVar7 | bVar18 | bVar19)) goto LAB_02616c24;
      if ((bool)(bVar17 | bVar15 | bVar18 & bVar19 ^ 1U)) {
        bVar8 = bVar19 ^ 1;
        if ((bool)(bVar17 | bVar7 | bVar18 | bVar8)) {
          bVar13 = bVar15 | bVar17 ^ 1U | bVar18;
          if ((bool)(bVar13 | bVar8)) {
            if (!(bool)(bVar18 | bVar7 | bVar19)) goto LAB_0261737c;
            if (!(bool)(bVar15 | bVar24 | bVar19)) goto LAB_02617384;
            if ((bool)(bVar15 | bVar18 | bVar8)) {
              bVar19 = (bool)(bVar13 | bVar19);
              goto LAB_02616b34;
            }
            local_6c = 6;
          }
          else {
            local_6c = 7;
          }
        }
        else {
          local_6c = 8;
        }
      }
      else {
        local_6c = 9;
      }
    }
  }
  switch(local_6c) {
  case 1:
    bVar16 = false;
    uVar27 = 0;
    bVar18 = false;
    iVar21 = 0;
    iVar20 = 0x28;
    iVar33 = 0x3c;
    bVar17 = true;
    bVar15 = true;
    break;
  case 2:
    iVar20 = 0x1e;
    iVar33 = 0x32;
    bVar17 = true;
    goto LAB_02616dbc;
  case 3:
    bVar17 = false;
    iVar33 = 0;
    bVar15 = false;
    iVar20 = 0;
    bVar18 = false;
    iVar21 = 0;
    uVar27 = 100;
    bVar16 = true;
    break;
  case 4:
    bVar16 = false;
    uVar27 = 0;
    bVar15 = false;
    iVar20 = 0;
    bVar18 = false;
    iVar21 = 0;
    iVar33 = 100;
    bVar17 = true;
    break;
  case 5:
    bVar16 = false;
    uVar27 = 0;
    bVar17 = false;
    iVar33 = 0;
    bVar18 = false;
    iVar21 = 0;
    iVar20 = 100;
    bVar15 = true;
    break;
  case 6:
    bVar16 = false;
    uVar27 = 0;
    bVar17 = false;
    iVar33 = 0;
    bVar15 = false;
    iVar20 = 0;
    iVar21 = 100;
    bVar18 = true;
    break;
  case 7:
    bVar17 = false;
    iVar33 = 0;
    bVar15 = false;
    iVar20 = 0;
    iVar21 = 0x14;
    uVar27 = 0x50;
    bVar16 = true;
    bVar18 = true;
    break;
  case 8:
    bVar16 = false;
    uVar27 = 0;
    bVar15 = false;
    iVar20 = 0;
    iVar21 = 0x14;
    iVar33 = 0x50;
    bVar17 = true;
    bVar18 = true;
    break;
  case 9:
    bVar17 = false;
    iVar33 = 0;
    iVar20 = 0x50;
LAB_02616dbc:
    bVar16 = false;
    uVar27 = 0;
    iVar21 = 0x14;
    bVar15 = true;
    bVar18 = true;
    break;
  case 10:
    bVar16 = false;
    uVar27 = 0;
    bVar17 = false;
    iVar33 = 0;
    bVar15 = false;
    iVar20 = 0;
    bVar18 = false;
    iVar21 = 0;
    break;
  default:
    bVar15 = false;
    iVar20 = 0;
    bVar18 = false;
    iVar21 = 0;
    iVar33 = 0x1e;
    uVar27 = 0x46;
    bVar16 = true;
    bVar17 = true;
  }
  uVar25 = *(uint *)((long)param_1 + 0xa18) ^ *(uint *)((long)param_1 + 0xa18) << 0xb;
  uVar9 = *(uint *)((long)param_1 + 0xa24);
  uVar10 = *(uint *)((long)param_1 + 0xa1c);
  uVar26 = *(undefined4 *)((long)param_1 + 0xa20);
  *(uint *)((long)param_1 + 0xa18) = uVar10;
  *(undefined4 *)((long)param_1 + 0xa1c) = uVar26;
  *(uint *)((long)param_1 + 0xa20) = uVar9;
  uVar25 = uVar25 >> 8 ^ uVar9 >> 0x13 ^ uVar25 ^ uVar9;
  *(uint *)((long)param_1 + 0xa24) = uVar25;
  uVar34 = (uint)((ulong)uVar25 * 100 >> 0x20);
  if ((!bVar16) || (uVar27 <= uVar34)) {
    bVar16 = false;
    if (uVar34 < iVar33 + uVar27) {
      bVar16 = bVar17;
    }
    if (bVar16) {
      lVar22 = 1;
      goto LAB_02616e7c;
    }
    uVar27 = iVar20 + iVar33 + uVar27;
    bVar16 = false;
    if (uVar34 < uVar27) {
      bVar16 = bVar15;
    }
    if (bVar16) {
      lVar22 = 2;
      goto LAB_02616e7c;
    }
    uVar27 = iVar21 + uVar27;
    bVar16 = false;
    if (uVar34 < uVar27) {
      bVar16 = bVar18;
    }
    if (bVar16) {
      lVar22 = 3;
      goto LAB_02616e7c;
    }
    if (uVar27 != 0) {
LAB_026174c4:
      uVar36 = 1;
      uVar37 = 0x4c7b;
      goto LAB_026174c8;
    }
    local_100 = 0;
    uStack_f8 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = 0;
    lVar22 = 0;
    do {
      lVar30 = lVar22 + 2;
      bVar24 = ((byte *)((long)__dest + lVar22))[1];
      *(byte *)((long)&local_170 + lVar22) =
           *(byte *)((long)__dest + lVar22) | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      lVar30 = lVar22 + 2;
      bVar24 = ((byte *)((long)__dest_00 + lVar22))[1];
      *(byte *)((long)&local_170 + lVar22) =
           *(byte *)((long)__dest_00 + lVar22) | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x318);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x718);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x418);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x818);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x518);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    lVar22 = 0;
    do {
      pbVar5 = (byte *)((long)param_1 + lVar22 + 0x918);
      lVar30 = lVar22 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar22) = *pbVar5 | *(byte *)((long)&local_170 + lVar22);
      *(byte *)((long)&local_170 + lVar22 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar22 + 1);
      lVar22 = lVar30;
    } while (lVar30 != 0x100);
    uVar27 = 0;
    uVar37 = 0;
    do {
      uVar6 = (uint)uVar37 & 6;
      uVar34 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)&local_170 + (uVar37 >> 3));
      uVar27 = (bVar24 >> (ulong)(uVar6 | 1) & 1) + (bVar24 >> (ulong)uVar6 & 1) + uVar27;
      uVar37 = (ulong)uVar34;
    } while (uVar34 != 0x800);
    uVar10 = uVar10 ^ uVar10 << 0xb;
    *(undefined4 *)((long)param_1 + 0xa18) = uVar26;
    *(uint *)((long)param_1 + 0xa1c) = uVar9;
    *(uint *)((long)param_1 + 0xa20) = uVar25;
    uVar25 = uVar10 >> 8 ^ uVar25 >> 0x13 ^ uVar10 ^ uVar25;
    *(uint *)((long)param_1 + 0xa24) = uVar25;
    uVar27 = (uint)((ulong)uVar27 * (ulong)uVar25 >> 0x20);
    if (uVar27 < 0x7fffffff) {
      uVar37 = 0;
      uVar25 = 0;
      do {
        if ((*(byte *)((long)&local_170 + (uVar37 >> 3)) >> (ulong)((uint)uVar37 & 7) & 1) != 0) {
          if (uVar25 == uVar27) goto LAB_026173e8;
          uVar25 = uVar25 + 1;
        }
        uVar10 = (uint)uVar37 + 1;
        uVar37 = (ulong)uVar10;
      } while (uVar10 != 0x800);
      uVar37 = 0xffffffff;
    }
    else {
      uVar37 = 0xffffffff;
    }
LAB_026173e8:
    uVar36 = FUN_0261d530(lVar35,uVar37);
    if ((uVar36 & 1) == 0) goto LAB_026174c4;
    iVar21 = FUN_0262298c(lVar35,puVar2,uVar37,0);
    uVar36 = FUN_02626600(lVar35,uVar37);
    if ((uVar36 & 1) == 0) {
      if (iVar21 != 1) {
        if (iVar21 != 2) goto LAB_026174b8;
        goto LAB_02616fd8;
      }
      goto LAB_02617438;
    }
  }
  else {
    lVar22 = 0;
LAB_02616e7c:
    memcpy(&local_170,(void *)((long)__dest + lVar22 * 0x100),0x100);
    lVar30 = 0;
    do {
      pbVar5 = (byte *)((long)__dest_00 + lVar30 + lVar22 * 0x100);
      lVar4 = lVar30 + 2;
      bVar24 = pbVar5[1];
      *(byte *)((long)&local_170 + lVar30) = *pbVar5 | *(byte *)((long)&local_170 + lVar30);
      *(byte *)((long)&local_170 + lVar30 + 1) = bVar24 | *(byte *)((long)&local_170 + lVar30 + 1);
      lVar30 = lVar4;
    } while (lVar4 != 0x100);
    uVar27 = 0;
    uVar37 = 0;
    do {
      uVar6 = (uint)uVar37 & 6;
      uVar34 = (uint)uVar37 + 2;
      bVar24 = *(byte *)((long)&local_170 + (uVar37 >> 3));
      uVar27 = (bVar24 >> (ulong)(uVar6 | 1) & 1) + (bVar24 >> (ulong)uVar6 & 1) + uVar27;
      uVar37 = (ulong)uVar34;
    } while (uVar34 != 0x800);
    uVar10 = uVar10 ^ uVar10 << 0xb;
    *(undefined4 *)((long)param_1 + 0xa18) = uVar26;
    *(uint *)((long)param_1 + 0xa1c) = uVar9;
    *(uint *)((long)param_1 + 0xa20) = uVar25;
    uVar25 = uVar10 >> 8 ^ uVar25 >> 0x13 ^ uVar10 ^ uVar25;
    *(uint *)((long)param_1 + 0xa24) = uVar25;
    uVar27 = (uint)((ulong)uVar27 * (ulong)uVar25 >> 0x20);
    if (uVar27 < 0x7fffffff) {
      uVar37 = 0;
      uVar25 = 0;
      do {
        if ((*(byte *)((long)&local_170 + (uVar37 >> 3)) >> (ulong)((uint)uVar37 & 7) & 1) != 0) {
          if (uVar25 == uVar27) goto LAB_02616fa8;
          uVar25 = uVar25 + 1;
        }
        uVar10 = (uint)uVar37 + 1;
        uVar37 = (ulong)uVar10;
      } while (uVar10 != 0x800);
      uVar37 = 0xffffffff;
    }
    else {
      uVar37 = 0xffffffff;
    }
LAB_02616fa8:
    uVar36 = FUN_0261d530(lVar35,uVar37);
    if ((uVar36 & 1) == 0) {
      uVar37 = 0x4c7b;
      uVar36 = 1;
      goto LAB_026174c8;
    }
    uVar36 = FUN_02626600(lVar35,uVar37);
    if ((uVar36 & 1) == 0) {
      if ((int)lVar22 == 0) {
LAB_02617438:
        uVar27 = *(uint *)((long)param_1 + 0xa18) ^ *(uint *)((long)param_1 + 0xa18) << 0xb;
        uVar10 = *(uint *)((long)param_1 + 0xa24);
        uVar25 = *(uint *)((long)param_1 + 0xa1c);
        uVar26 = *(undefined4 *)((long)param_1 + 0xa20);
        *(undefined4 *)((long)param_1 + 0xa1c) = uVar26;
        *(uint *)((long)param_1 + 0xa20) = uVar10;
        *(uint *)((long)param_1 + 0xa18) = uVar25;
        uVar27 = uVar27 >> 8 ^ uVar10 >> 0x13 ^ uVar27 ^ uVar10;
        *(uint *)((long)param_1 + 0xa24) = uVar27;
        if ((uint)((ulong)uVar27 * 100 >> 0x20) < 0x32) {
          uVar25 = uVar25 ^ uVar25 << 0xb;
          *(undefined4 *)((long)param_1 + 0xa18) = uVar26;
          *(uint *)((long)param_1 + 0xa1c) = uVar10;
          *(uint *)((long)param_1 + 0xa20) = uVar27;
          uVar27 = uVar25 >> 8 ^ uVar27 >> 0x13 ^ uVar25 ^ uVar27;
          *(uint *)((long)param_1 + 0xa24) = uVar27;
          uVar25 = (uint)((ulong)uVar27 * 100 >> 0x20);
          uVar27 = 2;
LAB_026174b0:
          if (uVar25 < 0x32) {
            uVar27 = uVar27 + 1;
          }
          uVar36 = (ulong)uVar27;
          goto LAB_026174c8;
        }
      }
      else if ((int)lVar22 == 1) {
LAB_02616fd8:
        uVar27 = *(uint *)((long)param_1 + 0xa18);
        *(undefined4 *)((long)param_1 + 0xa18) = *(undefined4 *)((long)param_1 + 0xa1c);
        uVar27 = uVar27 ^ uVar27 << 0xb;
        *(undefined4 *)((long)param_1 + 0xa1c) = *(undefined4 *)((long)param_1 + 0xa20);
        uVar25 = *(uint *)((long)param_1 + 0xa24);
        *(uint *)((long)param_1 + 0xa20) = uVar25;
        uVar27 = uVar27 >> 8 ^ uVar25 >> 0x13 ^ uVar27 ^ uVar25;
        *(uint *)((long)param_1 + 0xa24) = uVar27;
        uVar25 = (uint)((ulong)uVar27 * 100 >> 0x20);
        uVar27 = 1;
        goto LAB_026174b0;
      }
    }
  }
LAB_026174b8:
  uVar36 = 1;
LAB_026174c8:
  return uVar37 & 0xffff | uVar36 << 0x10 | 0x1000000;
}

