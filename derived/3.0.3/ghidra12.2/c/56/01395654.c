
undefined8 FUN_01395654(long param_1,long param_2,char *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  byte bVar15;
  undefined8 *puVar16;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  if (((*param_3 == '\0') && ((*DAT_055c10d8 != '\0' || (*DAT_055cdb40 != '\0')))) ||
     (*(int *)(param_1 + 0x2c) != 0)) {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  puVar1 = (uint *)(DAT_051a9970 + 0x20) + (ulong)uVar2 * 4;
  if (0x1d < uVar2) {
    puVar1 = (uint *)(DAT_051a9970 + 0x20);
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  if (*puVar1 <= uVar3) {
    uVar3 = 0;
  }
  lVar11 = *(long *)(puVar1 + 2) + (long)(int)uVar3 * 0x30;
  *(uint *)(lVar11 + 8) = uVar2;
  *(undefined8 *)(lVar11 + 0xc) = *(undefined8 *)(param_1 + 0x14);
  lVar11 = *DAT_0537d558;
  bVar15 = *(byte *)(lVar11 + 0x473);
  if ((long)(char)bVar15 != 0xffffffffffffffff) {
    pbVar12 = (byte *)(lVar11 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x80;
    if (7 < bVar15) {
      pbVar12 = (byte *)(lVar11 + 0x48);
    }
    if ((*pbVar12 >> 3 & 1) != 0) {
      bVar4 = *(byte *)(param_2 + 8);
      if (*(byte *)(lVar11 + 0x472) != bVar15) {
        if ((bVar4 >> 2 & 1) == 0) {
          if (((param_3[1] == '\0') || (*(char *)(param_2 + 10) == '\0')) ||
             (uVar9 = FUN_01395dd4(param_1,param_2,1), (uVar9 & 1) != 0)) {
            *(undefined4 *)(param_1 + 0x2c) = 3;
            uVar14 = *(undefined8 *)(param_2 + 10);
            uVar5 = *(undefined1 *)(param_2 + 8);
            uVar6 = *(undefined1 *)(param_2 + 0x16);
            uVar10 = *(undefined4 *)(param_2 + 0x12);
            bVar15 = *(byte *)(param_2 + 0x17);
            local_60 = (undefined4)*(undefined8 *)(param_2 + 0x18);
            uVar13 = *(undefined8 *)(param_2 + 0x1f);
            uStack_5c._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
            uStack_5c._3_1_ = (undefined1)uVar13;
            puVar16 = *(undefined8 **)(param_1 + 0x58);
            if (puVar16 != (undefined8 *)0x0) {
              if (((*PTR_DAT_04bbc658 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbc658), iVar8 != 0)) {
                *(undefined **)PTR_DAT_04bbc650 = PTR_DAT_04bbc660 + 0x10;
                __cxa_guard_release(PTR_DAT_04bbc658);
              }
              uVar9 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bbc650);
              if ((uVar9 & 1) != 0) {
                if (7 < bVar15) {
                  bVar15 = 0xff;
                }
                *(undefined1 *)(puVar16 + 3) = uVar5;
                *(undefined1 *)((long)puVar16 + 0x19) = 1;
                *(undefined1 *)((long)puVar16 + 0x26) = uVar6;
                *(byte *)((long)puVar16 + 0x27) = bVar15;
                *(undefined8 *)((long)puVar16 + 0x1a) = uVar14;
                *(undefined4 *)((long)puVar16 + 0x22) = uVar10;
                puVar16[5] = CONCAT44(uStack_5c,local_60);
                *(undefined8 *)((long)puVar16 + 0x2f) = uVar13;
              }
            }
            puVar7 = PTR_DAT_04bbc638;
            FUN_013925c4(PTR_DAT_04bbc638,*(undefined8 *)(param_1 + 0x78));
            FUN_013925c4(puVar7,*(undefined8 *)(param_1 + 0x58));
            uVar14 = 1;
          }
          else {
            uVar14 = 0;
          }
          return uVar14;
        }
        if ((*(char *)(param_2 + 10) != '\0') &&
           (uVar9 = FUN_01395dd4(param_1,param_2,0), (uVar9 & 1) == 0)) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x2c) = 3;
        uVar14 = *(undefined8 *)(param_2 + 10);
        uVar5 = *(undefined1 *)(param_2 + 8);
        uVar6 = *(undefined1 *)(param_2 + 0x16);
        uVar10 = *(undefined4 *)(param_2 + 0x12);
        bVar15 = *(byte *)(param_2 + 0x17);
        local_60 = (undefined4)*(undefined8 *)(param_2 + 0x18);
        uVar13 = *(undefined8 *)(param_2 + 0x1f);
        uStack_5c._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
        uStack_5c._3_1_ = (undefined1)uVar13;
        puVar16 = *(undefined8 **)(param_1 + 0x58);
        if (puVar16 != (undefined8 *)0x0) {
          if (((*PTR_DAT_04bbc658 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbc658), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bbc650 = PTR_DAT_04bbc660 + 0x10;
            __cxa_guard_release(PTR_DAT_04bbc658);
          }
          uVar9 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bbc650);
          if ((uVar9 & 1) != 0) {
            if (7 < bVar15) {
              bVar15 = 0xff;
            }
            *(undefined1 *)(puVar16 + 3) = uVar5;
            *(undefined1 *)((long)puVar16 + 0x19) = 10;
            *(undefined1 *)((long)puVar16 + 0x26) = uVar6;
            *(byte *)((long)puVar16 + 0x27) = bVar15;
            *(undefined8 *)((long)puVar16 + 0x1a) = uVar14;
            *(undefined4 *)((long)puVar16 + 0x22) = uVar10;
            puVar16[5] = CONCAT44(uStack_5c,local_60);
            *(undefined8 *)((long)puVar16 + 0x2f) = uVar13;
          }
        }
        puVar7 = PTR_DAT_04bbc638;
        FUN_013925c4(PTR_DAT_04bbc638,*(undefined8 *)(param_1 + 0x78));
        FUN_013925c4(puVar7,*(undefined8 *)(param_1 + 0x58));
        return 1;
      }
      goto joined_r0x01395744;
    }
  }
  bVar4 = *(byte *)(param_2 + 8);
joined_r0x01395744:
  if ((bVar4 >> 2 & 1) != 0) {
    if ((*(char *)(param_2 + 10) != '\0') &&
       (uVar9 = FUN_01395dd4(param_1,param_2,0), (uVar9 & 1) == 0)) {
      return 0;
    }
    lVar11 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar11 + 0x473);
    pbVar12 = PTR_DAT_04bc1220;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar1 = (uint *)(lVar11 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar12 = (byte *)(lVar11 + 0x473);
      }
    }
    if (*pbVar12 < 8) {
      *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | (byte)(1 << (ulong)(*pbVar12 & 0x1f));
    }
    *(undefined4 *)(param_1 + 0x2c) = 3;
    uVar14 = *(undefined8 *)(param_2 + 10);
    uVar5 = *(undefined1 *)(param_2 + 8);
    uVar6 = *(undefined1 *)(param_2 + 0x16);
    uVar10 = *(undefined4 *)(param_2 + 0x12);
    bVar15 = *(byte *)(param_2 + 0x17);
    local_60 = (undefined4)*(undefined8 *)(param_2 + 0x18);
    uVar13 = *(undefined8 *)(param_2 + 0x1f);
    uStack_5c._0_3_ = (undefined3)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
    uStack_5c._3_1_ = (undefined1)uVar13;
    puVar16 = *(undefined8 **)(param_1 + 0x58);
    if (puVar16 != (undefined8 *)0x0) {
      if (((*PTR_DAT_04bbc658 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbc658), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bbc650 = PTR_DAT_04bbc660 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbc658);
      }
      uVar9 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bbc650);
      if ((uVar9 & 1) != 0) {
        if (7 < bVar15) {
          bVar15 = 0xff;
        }
        *(undefined1 *)(puVar16 + 3) = uVar5;
        *(undefined1 *)((long)puVar16 + 0x19) = 7;
        *(undefined1 *)((long)puVar16 + 0x26) = uVar6;
        *(byte *)((long)puVar16 + 0x27) = bVar15;
        *(undefined8 *)((long)puVar16 + 0x1a) = uVar14;
        *(undefined4 *)((long)puVar16 + 0x22) = uVar10;
        puVar16[5] = CONCAT44(uStack_5c,local_60);
        *(undefined8 *)((long)puVar16 + 0x2f) = uVar13;
      }
    }
    puVar7 = PTR_DAT_04bbc638;
    FUN_01392498(PTR_DAT_04bbc638,*(undefined8 *)(param_1 + 0x78));
    FUN_01392498(puVar7,*(undefined8 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x100) = 1;
    return 1;
  }
  if (((*(byte *)(param_2 + 8) >> 2 & 1) == 0) &&
     (uVar9 = FUN_01395dd4(param_1,param_2,0), (uVar9 & 1) == 0)) {
    return 0;
  }
  puVar16 = *(undefined8 **)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x2c) = 3;
  if (puVar16 != (undefined8 *)0x0) {
    if (((*PTR_DAT_04bbc658 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bbc658), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bbc650 = PTR_DAT_04bbc660 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc658);
    }
    uVar9 = (**(code **)*puVar16)(puVar16,PTR_DAT_04bbc650);
    if ((uVar9 & 1) != 0) {
      uVar14 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)((long)puVar16 + 0x1f) = *(undefined8 *)(param_2 + 0xf);
      puVar16[3] = uVar14;
      bVar15 = *(byte *)(param_2 + 0x17);
      if (7 < bVar15) {
        bVar15 = 0xff;
      }
      *(byte *)((long)puVar16 + 0x27) = bVar15;
      uVar14 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)((long)puVar16 + 0x2f) = *(undefined8 *)(param_2 + 0x1f);
      puVar16[5] = uVar14;
    }
  }
  FUN_013961b0(param_1);
  uVar9 = FUN_01396358(param_1);
  if ((uVar9 & 1) == 0) {
    if ((*(long **)(param_1 + 0x58) != (long *)0x0) &&
       (lVar11 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar11 != 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      FUN_01396898(param_1,1);
      FUN_01391f64(param_1 + 0x30,3);
      puVar7 = PTR_DAT_04bbc638;
      FUN_01392498(PTR_DAT_04bbc638,*(undefined8 *)(param_1 + 0x78));
      FUN_01392498(puVar7,*(undefined8 *)(param_1 + 0x58));
      if ((*(short *)PTR_DAT_04bb6298 != *(short *)(lVar11 + 0x14)) && (-1 < *(char *)(lVar11 + 8)))
      {
        FUN_0139534c(param_1);
      }
    }
    uVar10 = 2;
  }
  else {
    uVar10 = 3;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar10;
  return 1;
}

