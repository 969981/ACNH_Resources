
/* WARNING: Removing unreachable block (ram,0x02031afc) */

void FUN_02031970(long param_1,long param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  byte *pbVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint3 uVar13;
  void *__src;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  void *__dest;
  float fVar22;
  float fVar23;
  ushort local_128;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined4 uStack_124;
  void *local_120;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  
  lVar18 = *(long *)PTR_DAT_04bb46b0;
  if (lVar18 == 0) {
LAB_020319f8:
    lVar18 = 0;
  }
  else {
    puVar19 = *(undefined8 **)(lVar18 + 0x10);
    if ((*(byte *)(lVar18 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar19 + 0x38))();
      lVar18 = 0;
      if (lVar15 != 0) {
        lVar18 = lVar15 + 0x70;
      }
    }
    else {
      if (puVar19 == (undefined8 *)0x0) goto LAB_020319f8;
      lVar18 = 0;
      if ((long *)puVar19[0x26] != (long *)0x0) {
        lVar18 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar18 + 0x1c2980) == (long *)0x0) ||
     (puVar19 = (undefined8 *)**(long **)(lVar18 + 0x1c2980), puVar19 == (undefined8 *)0x0)) {
    uVar16 = 0;
  }
  else {
    uVar16 = (**(code **)*puVar19)();
    uVar16 = uVar16 & 0xffffffff;
  }
  lVar15 = *(long *)(lVar18 + 0x1c2960);
  lVar20 = *(long *)(lVar18 + 0x1c2968);
  uVar17 = FUN_027c5f10();
  if ((uVar17 & 1) == 0) {
    local_128 = 0x23;
    uStack_126 = 8;
    uVar9 = *(ushort *)(lVar20 + lVar15);
    if ((byte)(uVar9 >> 8) < 0x23) {
      FUN_020fd218(&local_128,uVar9 >> 8,uVar9 & 0xff);
    }
  }
  else {
    local_128 = *(ushort *)PTR_DAT_04bb9cf0;
    uStack_126 = PTR_DAT_04bb9cf0[2];
  }
  uVar13 = CONCAT12(uStack_126,local_128);
  if (0x22 < (uVar13 & 0xff)) goto LAB_02031edc;
  uVar17 = (ulong)(uint)uVar13 & 0xff;
  if (((uint)(byte)PTR_DAT_04bc27f0[uVar17] < (uVar13 >> 8 & 0xff)) ||
     ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(uVar13 >> 8 & 0x1f) & 1) == 0))
  goto LAB_02031edc;
  uVar9 = local_128 >> 8;
  puVar2 = (ushort *)(param_1 + 0x5858);
  lVar15 = *(long *)PTR_DAT_04bb4760;
  local_128 = *(byte *)(lVar15 + 0xd9) >> 2 & 3;
  uStack_126 = 0;
  uStack_125 = 0;
  if (local_128 == 1) {
    uVar14 = nn::os::GetSystemTick();
    lVar20 = *(long *)(param_1 + 0x5898);
    fVar22 = 10.0;
    if (0 < (int)*(uint *)(lVar20 + 8)) {
      uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      uVar14 = 0;
      uVar5 = uVar11 ^ uVar11 * 0x800;
      uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
      uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4;
      uVar21 = (ulong)*(uint *)(lVar20 + 0x18) *
               (ulong)(uVar5 >> 8 ^ uVar11 >> 0x13 ^ uVar5 ^ uVar11) >> 0x20;
      do {
        if ((*(uint *)(*(long *)(lVar20 + 0x10) + (ulong)(uVar14 >> 5) * 4) >>
             (ulong)(uVar14 & 0x1f) & 1) != 0) {
          if ((int)uVar21 == 0) {
            iVar6 = *(int *)(lVar20 + 0x1c);
            iVar12 = 0;
            if (iVar6 != 0) {
              iVar12 = (int)uVar14 / iVar6;
            }
            fVar22 = (float)(int)((uVar14 - iVar12 * iVar6) + (uint)*puVar2) * 5.0;
            fVar23 = (float)(int)(iVar12 + (uint)*(ushort *)(param_1 + 0x585a)) * 5.0;
            goto LAB_02031d8c;
          }
          uVar21 = (ulong)((int)uVar21 - 1);
        }
        uVar14 = uVar14 + 1;
      } while (*(uint *)(lVar20 + 8) != uVar14);
    }
    fVar23 = 10.0;
  }
  else {
    bVar7 = *(byte *)(lVar15 + 0xd3);
    uVar14 = (uint)*(byte *)(lVar15 + 0xd2) | (bVar7 & 0xf) << 8;
    bVar8 = *(byte *)(lVar15 + 0xd4);
    uVar5 = uVar14 | 0xfffff000;
    if ((bVar7 & 8) == 0) {
      uVar5 = uVar14;
    }
    uVar11 = (uint)(bVar7 >> 4) | (uint)bVar8 << 4;
    fVar22 = (float)(int)uVar5;
    uVar14 = uVar11 | 0xfffff000;
    if (-1 < (char)bVar8) {
      uVar14 = uVar11;
    }
    fVar23 = (float)(int)uVar14;
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar20 + 0x473);
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      pbVar1 = (byte *)(lVar20 + 0x48);
      uVar21 = (long)(char)bVar10 & 0xffffffff;
      pbVar3 = pbVar1 + uVar21 * 0x80;
      if (7 < bVar10) {
        pbVar3 = pbVar1;
      }
      if ((*pbVar3 >> 3 & 1) != 0) {
        lVar20 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
        lVar4 = lVar20 + uVar21 * 0xc;
        if (0xb < bVar10) {
          lVar4 = lVar20;
        }
        if (*(char *)(lVar4 + 10) == '\0') goto LAB_02031d8c;
      }
    }
    uVar14 = (((int)((float)(int)fVar22 / 5.0) - (uint)(7 < (bVar7 & 0xf))) - (uint)*puVar2) +
             *(int *)(*(long *)(param_1 + 0x5898) + 0x1c) *
             (((int)((float)(int)fVar23 / 5.0) + ((int)(char)bVar8 >> 7)) -
             (uint)*(ushort *)(param_1 + 0x585a));
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x5898) + 0x10) + (long)((int)uVar14 >> 5) * 4) >>
         (ulong)(uVar14 & 0x1f) & 1) == 0) {
      uVar14 = nn::os::GetSystemTick();
      lVar20 = *(long *)(param_1 + 0x5898);
      if (0 < (int)*(uint *)(lVar20 + 8)) {
        uVar11 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
        uVar14 = 0;
        uVar5 = uVar11 ^ uVar11 * 0x800;
        uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
        uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
        uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4;
        uVar21 = (ulong)*(uint *)(lVar20 + 0x18) *
                 (ulong)(uVar5 >> 8 ^ uVar11 >> 0x13 ^ uVar5 ^ uVar11) >> 0x20;
        do {
          if ((*(uint *)(*(long *)(lVar20 + 0x10) + (ulong)(uVar14 >> 5) * 4) >>
               (ulong)(uVar14 & 0x1f) & 1) != 0) {
            if ((int)uVar21 == 0) {
              iVar6 = *(int *)(lVar20 + 0x1c);
              iVar12 = 0;
              if (iVar6 != 0) {
                iVar12 = (int)uVar14 / iVar6;
              }
              fVar22 = (float)(int)((uVar14 - iVar12 * iVar6) + (uint)*puVar2) * 5.0;
              fVar23 = (float)(int)(iVar12 + (uint)*(ushort *)(param_1 + 0x585a)) * 5.0;
              break;
            }
            uVar21 = (ulong)((int)uVar21 - 1);
          }
          uVar14 = uVar14 + 1;
        } while (*(uint *)(lVar20 + 8) != uVar14);
      }
    }
  }
LAB_02031d8c:
  *(float *)(param_2 + 8) = fVar22;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(float *)(param_2 + 0x10) = fVar23;
  local_80 = 8;
  local_75 = 0;
  local_7c[0] = 0;
  local_90 = PTR_DAT_04bb3768 + 0x10;
  *(uint *)(param_2 + 0x18) = (uint)*(byte *)(lVar15 + 0xd5) << 0x18;
  local_88 = local_7c;
  FUN_038d1270(&local_90,"-----");
  FUN_038d1270(&local_90,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar17 * 8 + 0xb0),uVar9);
  (**(code **)(local_90 + 0x18))(&local_90);
  FUN_0074fda4(&local_128,"%s/AIC:Camp/AIF:AI_NPC_Camp",local_88);
  __dest = *(void **)(param_2 + 0x38);
  (**(code **)(CONCAT44(uStack_124,CONCAT13(uStack_125,CONCAT12(uStack_126,local_128))) + 0x18))
            (&local_128);
  __src = local_120;
  if (__dest != local_120) {
    (**(code **)(CONCAT44(uStack_124,CONCAT13(uStack_125,CONCAT12(uStack_126,local_128))) + 0x18))
              (&local_128);
    lVar15 = 0;
    do {
      if (*(char *)((long)local_120 + lVar15) == '\0') goto LAB_02031ea0;
      if (*(char *)((long)local_120 + lVar15 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02031ea0;
      }
      if (*(char *)((long)local_120 + lVar15 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02031ea0;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02031ea0:
    iVar6 = (int)lVar15;
    if (*(int *)(param_2 + 0x40) <= (int)lVar15) {
      iVar6 = *(int *)(param_2 + 0x40) + -1;
    }
    memcpy(__dest,__src,(long)iVar6);
    *(undefined1 *)((long)__dest + (long)iVar6) = 0;
  }
  *(undefined4 *)(param_2 + 0x1c) = 0xffffffff;
  FUN_02030e80(param_1,param_2);
LAB_02031edc:
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar18 + 0x1c2980) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x1c2980) + 8), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  return;
}

