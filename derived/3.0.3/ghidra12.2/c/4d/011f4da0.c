
/* WARNING: Removing unreachable block (ram,0x011f5434) */
/* WARNING: Removing unreachable block (ram,0x011f4f5c) */
/* WARNING: Removing unreachable block (ram,0x011f4e54) */
/* WARNING: Removing unreachable block (ram,0x011f5274) */
/* WARNING: Removing unreachable block (ram,0x011f51b4) */
/* WARNING: Removing unreachable block (ram,0x011f5484) */
/* WARNING: Removing unreachable block (ram,0x011f52c4) */

void FUN_011f4da0(long param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined1 auStack_20b8 [8];
  undefined1 auStack_20b0 [8];
  uint local_20a8;
  uint local_20a4;
  undefined *local_20a0;
  undefined8 local_2098;
  undefined8 local_1098;
  undefined8 local_1090;
  undefined *local_1088;
  undefined4 local_1080;
  undefined4 local_107c;
  byte local_1078;
  undefined4 local_106c;
  undefined8 local_1068;
  char *local_1060 [512];
  
  puVar6 = PTR_DAT_04bb2020;
  local_20a0 = PTR_DAT_04bb2020 + 0x10;
  local_2098 = "BuiltTownOffice";
  iVar7 = FUN_0273ea30(&local_20a0);
  if (iVar7 != 0) {
    if (*(char *)(param_1 + 0x12) == '\x01') {
      if ('\x06' < *(char *)(param_1 + 0x13)) {
        return;
      }
    }
    else {
      if (*(char *)(param_1 + 0x12) != '\f') {
        return;
      }
      if (*(char *)(param_1 + 0x13) < '\x0f') {
        return;
      }
    }
    local_20a0 = (undefined *)CONCAT44(local_20a0._4_4_,8);
    lVar10 = 0;
    iVar7 = 0;
    do {
      uVar8 = *(uint *)(param_2 + 0x1c070 + lVar10);
      lVar10 = lVar10 + 4;
      uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      iVar7 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar7;
    } while (lVar10 != 0x1000);
    iVar5 = *(int *)(param_2 + 0x3216c);
    iVar7 = (iVar7 + 1U >> 1) - iVar5;
    if (0 < iVar7) {
      local_1080 = 1;
      local_107c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
      local_1078 = FUN_017baf44();
      local_1078 = local_1078 & 1;
      local_1088 = PTR_DAT_04bb6268 + 0x10;
      local_1090 = 0xec9a;
      FUN_0277d4ac(&local_1090);
      local_1098 = 0xec97;
      FUN_0277d4ac(&local_1098);
      local_20a0 = PTR_DAT_04bbdd38 + 0x10;
      local_1068 = (undefined *)CONCAT44(local_1068._4_4_,8);
      memset(&local_2098,0,0x1000);
      lVar10 = 0;
      do {
        puVar2 = (uint *)(param_2 + 0x1c070 + lVar10);
        uVar8 = *(uint *)((long)&local_2098 + lVar10 + 4);
        lVar1 = lVar10 + 8;
        uVar4 = puVar2[1];
        *(uint *)((long)local_1060 + lVar10 + -8) = *puVar2 | *(uint *)((long)&local_2098 + lVar10);
        *(uint *)((long)local_1060 + lVar10 + -4) = uVar4 | uVar8;
        lVar10 = lVar1;
      } while (lVar1 != 0x1000);
      memcpy(&local_2098,&local_1068,0x1000);
      iVar11 = 0;
      do {
        iVar9 = 0;
        lVar10 = 2;
        do {
          uVar8 = *(uint *)((long)&local_20a0 + lVar10 * 4);
          lVar10 = lVar10 + 1;
          uVar8 = uVar8 - (uVar8 >> 1 & 0x55555555);
          uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
          uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
          uVar8 = uVar8 + (uVar8 >> 8);
          iVar9 = (uVar8 + (uVar8 >> 0x10) & 0x3f) + iVar9;
        } while (lVar10 != 0x402);
        if (iVar9 == 0) {
          return;
        }
        FUN_01696be0(auStack_20b0,&local_20a0);
        if (iVar5 == 0) {
LAB_011f5330:
          uVar8 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar8 = uVar8 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar8 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          puVar3 = &local_1098;
          if ((uVar8 & 1) != 0) {
            puVar3 = &local_1090;
          }
          DAT_05582b7c = uVar8;
          FUN_011f3390(&local_1088,0,puVar3,auStack_20b0);
          local_1060[0] = "ExistIllminations";
          local_1068 = puVar6 + 0x10;
          FUN_0273f3c4(&local_1068,1);
          if (((DAT_05233970 <= (int)local_20a8) && ((int)local_20a8 <= DAT_05233980)) &&
             ((DAT_05233974 <= (int)local_20a4 && ((int)local_20a4 <= DAT_05233984)))) {
            uVar8 = (local_20a4 & 0x1fffffe) * 0x80 + ((int)local_20a8 >> 1);
            if (uVar8 >> 0xf == 0) {
              *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) =
                   *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) &
                   (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
              lVar10 = param_2 + 0x1c068 + (ulong)(uVar8 >> 5) * 4;
              *(uint *)(lVar10 + 8) =
                   *(uint *)(lVar10 + 8) & (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
            }
          }
          local_1068 = (undefined *)CONCAT44(local_1068._4_4_,7);
          if ((((DAT_05233970 <= (int)local_20a8) && ((int)local_20a8 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)local_20a4)) &&
             (((int)local_20a4 <= DAT_05233984 &&
              (uVar8 = (local_20a4 & 0x1fffffe) * 0x80 + ((int)local_20a8 >> 1), uVar8 >> 0xf == 0))
             )) {
            lVar10 = param_2 + 0x1b060 + (ulong)(uVar8 >> 5) * 4;
            *(uint *)(lVar10 + 8) =
                 *(uint *)(lVar10 + 8) & (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          iVar11 = iVar11 + 1;
        }
        else {
          FUN_01a5033c(auStack_20b8,&local_1088,0,auStack_20b0,0);
          lVar10 = DAT_05150358;
          if ((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
              (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
             (((*(long *)(DAT_05150358 + 0x488) == 0 ||
               (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)) ||
              ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
               (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))))) {
LAB_011f51e0:
            if ((DAT_05233970 <= (int)local_20a8) &&
               (((((int)local_20a8 <= DAT_05233980 && (DAT_05233974 <= (int)local_20a4)) &&
                 ((int)local_20a4 <= DAT_05233984)) &&
                (uVar8 = (local_20a4 & 0x1fffffe) * 0x80 + ((int)local_20a8 >> 1), uVar8 >> 0xf == 0
                )))) {
              *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) =
                   *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) &
                   (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
              lVar10 = param_2 + 0x1c068 + (ulong)(uVar8 >> 5) * 4;
              *(uint *)(lVar10 + 8) =
                   *(uint *)(lVar10 + 8) & (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            local_1068 = (undefined *)CONCAT44(local_1068._4_4_,7);
          }
          else {
            uVar8 = FUN_0277d6c4(auStack_20b8);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
            if ((*(uint *)(lVar10 + 0x1d8) <= uVar8) ||
               (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
            goto LAB_011f51e0;
            FUN_0124c030(&local_1068,auStack_20b8);
            iVar9 = FUN_0277d6c4(local_1060);
            if ((iVar9 != 0xec9a) && (iVar9 = FUN_0277d6c4(local_1060), iVar9 != 0xec97))
            goto LAB_011f5330;
            if (((DAT_05233970 <= (int)local_20a8) && ((int)local_20a8 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_20a4 && ((int)local_20a4 <= DAT_05233984)))) {
              uVar8 = (local_20a4 & 0x1fffffe) * 0x80 + ((int)local_20a8 >> 1);
              if (uVar8 >> 0xf == 0) {
                *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) =
                     *(uint *)((long)&local_2098 + (ulong)(uVar8 >> 5) * 4) &
                     (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
                lVar10 = param_2 + 0x1c068 + (ulong)(uVar8 >> 5) * 4;
                *(uint *)(lVar10 + 8) =
                     *(uint *)(lVar10 + 8) & (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
              }
            }
            local_106c = 7;
          }
          if ((((DAT_05233970 <= (int)local_20a8) && ((int)local_20a8 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)local_20a4)) &&
             (((int)local_20a4 <= DAT_05233984 &&
              (uVar8 = (local_20a4 & 0x1fffffe) * 0x80 + ((int)local_20a8 >> 1), uVar8 >> 0xf == 0))
             )) {
            lVar10 = param_2 + 0x1b060 + (ulong)(uVar8 >> 5) * 4;
            *(uint *)(lVar10 + 8) =
                 *(uint *)(lVar10 + 8) & (1 << (ulong)(local_20a8 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
      } while (iVar11 < iVar7);
    }
  }
  return;
}

