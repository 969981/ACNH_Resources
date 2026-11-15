
/* WARNING: Type propagation algorithm not settling */

bool FUN_021bea90(undefined8 param_1,uint *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  uint *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  char *pcVar12;
  byte *pbVar13;
  char cVar14;
  uint *puVar15;
  int *piVar16;
  long *plVar17;
  uint uVar18;
  undefined *local_48;
  long local_40;
  undefined1 local_38;
  byte local_37;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return false;
  }
  uVar18 = *param_2;
  if ((((uVar18 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
      ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar18 = 1;
      goto joined_r0x021beb4c;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021beb4c;
    }
  }
  uVar18 = 0;
joined_r0x021beb4c:
  if (plVar17 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
    if ((uVar18 & uVar5) == 1) {
      uVar18 = *(uint *)(plVar17 + 0xa1);
      if (uVar18 < 10) {
        if ((&DAT_053fee41)[(ulong)uVar18 * 0xba0] != '\0') {
          lVar11 = *(long *)PTR_DAT_04bb2208;
          uVar6 = FUN_006bd550("HalloweenApproachNowStage",0);
          local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar6);
          puVar8 = (uint *)FUN_021cb820(lVar11 + 0x660,&local_48);
          puVar3 = PTR_DAT_04bb6380;
          puVar2 = PTR_DAT_04bb6378;
          if (puVar8 != (uint *)0x0) {
            pcVar12 = &DAT_053feb60 + (ulong)uVar18 * 0xba0;
            if (*puVar8 != 0) {
              cVar14 = *PTR_DAT_04bb6378;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *(undefined8 *)puVar3 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar18 = *(uint *)(puVar3 + 8);
                  if (-1 < (int)uVar18) {
                    if (((ushort *)((ulong)uVar18 + (long)puVar8) != (ushort *)0x0) &&
                       (uVar1 = *(ushort *)((ulong)uVar18 + (long)puVar8), uVar1 < 0x80)) {
                      pcVar12 = pcVar12 + uVar1;
                    }
                    break;
                  }
                  if (uVar18 != 0xffffffff) break;
                }
                puVar15 = (uint *)(ulong)*puVar8;
                if ((*puVar8 == 0) || (puVar8 == puVar15)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar8 + (lVar11 - (long)puVar15);
                if (lVar11 == 0) break;
                uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
                *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
                if (uVar9 == 0) break;
                piVar16 = (int *)(lVar11 + 4);
                while (piVar16[-1] != 0x54706054) {
                  piVar16 = piVar16 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) goto LAB_021bece4;
                }
                iVar4 = 0;
                if (*piVar16 != -1) {
                  iVar4 = *piVar16;
                }
                *(int *)(puVar3 + 8) = iVar4;
                if (*puVar8 == 0) break;
              } while( true );
            }
LAB_021bece4:
            if (*pcVar12 == '\x01') {
              return false;
            }
          }
        }
        uVar18 = *(uint *)(plVar17 + 0xa1);
        if ((uVar18 < 10) && ((&DAT_053fee41)[(ulong)uVar18 * 0xba0] != '\0')) {
          lVar11 = *(long *)PTR_DAT_04bb2208;
          uVar6 = FUN_006bd550("SeasonEventPlace",0);
          local_48 = (undefined *)CONCAT44(local_48._4_4_,uVar6);
          puVar8 = (uint *)FUN_021cb820(lVar11 + 0x660,&local_48);
          puVar3 = PTR_DAT_04bb6380;
          puVar2 = PTR_DAT_04bb6378;
          if (puVar8 != (uint *)0x0) {
            pbVar13 = &DAT_053feb60 + (ulong)uVar18 * 0xba0;
            if (*puVar8 != 0) {
              cVar14 = *PTR_DAT_04bb6378;
              do {
                if (cVar14 == '\0') {
                  cVar14 = '\x01';
                  *(undefined8 *)puVar3 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                  *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar18 = *(uint *)(puVar3 + 8);
                  if (-1 < (int)uVar18) {
                    if (((ushort *)((ulong)uVar18 + (long)puVar8) != (ushort *)0x0) &&
                       (uVar1 = *(ushort *)((ulong)uVar18 + (long)puVar8), uVar1 < 0x80)) {
                      pbVar13 = pbVar13 + uVar1;
                    }
                    break;
                  }
                  if (uVar18 != 0xffffffff) break;
                }
                puVar15 = (uint *)(ulong)*puVar8;
                if ((*puVar8 == 0) || (puVar8 == puVar15)) break;
                lVar11 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar8 + (lVar11 - (long)puVar15);
                if (lVar11 == 0) break;
                uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
                *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
                if (uVar9 == 0) break;
                piVar16 = (int *)(lVar11 + 4);
                while (piVar16[-1] != 0x54706054) {
                  piVar16 = piVar16 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) goto LAB_021bee34;
                }
                iVar4 = 0;
                if (*piVar16 != -1) {
                  iVar4 = *piVar16;
                }
                *(int *)(puVar3 + 8) = iVar4;
                if (*puVar8 == 0) break;
              } while( true );
            }
LAB_021bee34:
            if (1 < *pbVar13) {
              return false;
            }
          }
        }
      }
      lVar11 = plVar17[0x77];
      if ((((4 < *(int *)(lVar11 + 0x77b0) - 3U) && ((*(byte *)(lVar11 + 0xad5a) >> 2 & 1) == 0)) &&
          (uVar9 = FUN_0212ef10(lVar11 + 0xaa50), (uVar9 & 1) == 0)) &&
         (lVar11 = plVar17[0x76], 0x22 < *(int *)(lVar11 + 0x378))) {
        if ((*(int *)(lVar11 + 0x4b8) == 0) || (*(int *)(lVar11 + 0x378) != 0x23)) {
          if (0x1f < *(uint *)(lVar11 + 0x360)) {
            return false;
          }
          if ((1 << (ulong)(*(uint *)(lVar11 + 0x360) & 0x1f) & 0x80000feeU) == 0) {
            return false;
          }
        }
        if (((int)plVar17[0xea] == 0) &&
           (local_40 = FUN_0265c3e0((int)plVar17[0xa1]), local_40 != 0)) {
          local_38 = 0;
          if (*(long *)(local_40 + 0x28) == 0) {
            local_37 = 0;
          }
          else {
            puVar10 = *(undefined8 **)(*(long *)(local_40 + 0x28) + 0x10);
            local_37 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              local_37 = (**(code **)*puVar10)();
            }
          }
          local_37 = local_37 & 1;
          local_48 = PTR_DAT_04bb67a0 + 0x10;
          lVar11 = FUN_0135d92c(&local_48);
          cVar14 = *(char *)(lVar11 + 0x1315b);
          FUN_02640184(&local_48);
          return cVar14 == '\x15';
        }
      }
    }
  }
  return false;
}

