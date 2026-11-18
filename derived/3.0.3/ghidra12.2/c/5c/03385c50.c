
/* WARNING: Removing unreachable block (ram,0x03386148) */

void FUN_03385c50(long param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  byte bVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  FUN_03ebb268(*(long *)(param_1 + 0x10) + 0x88);
  FUN_033b9510(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(DAT_05739190 + 0x10) == 0) {
    if (*(char *)(param_1 + 0x3f4) != '\0') goto LAB_03385c9c;
  }
  else if (*(int *)(*(long *)(DAT_05739190 + 0x10) + 0x178) == 0 &&
           *(char *)(param_1 + 0x3f4) != '\0') {
LAB_03385c9c:
    *(undefined1 *)(param_1 + 0x3f4) = 0;
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined1 *)(param_1 + 0x3fc) = 1;
  }
  if (*(char *)(param_1 + 0x3fc) != '\0') {
    iVar1 = *(int *)(param_1 + 0x400);
    if ((0 < iVar1) && (*(int *)(param_1 + 0x400) = iVar1 + -1, iVar1 == 0 || iVar1 + -1 == 0)) {
      if ((2 < *(uint *)(DAT_04cce818 + 8)) &&
         ((lVar9 = *(long *)(*(long *)(DAT_04cce818 + 0x10) + 0x10), lVar9 != 0 &&
          (DAT_05b05848 != 0)))) {
        FUN_03f36b70(DAT_05b05848,lVar9 + 0x20);
      }
      *(undefined1 *)(param_1 + 0x3fc) = 0;
    }
  }
  lVar9 = DAT_0575aaf0;
  if (*(int *)(DAT_0575aaf0 + 0x10) == 2) {
    iVar1 = *(int *)(DAT_0575aaf0 + 0xc);
    if ((((1 < iVar1) || (*(int *)(DAT_0575aaf0 + 0xc) = iVar1 + 1, iVar1 == 1)) &&
        (lVar11 = *(long *)(DAT_05231900 + 0x140),
        *(char *)(lVar11 + 0x16c) != '\0' || *(char *)(lVar11 + 0x16d) != '\0')) &&
       ((*(uint *)(lVar11 + 0x170) & 1) != 0)) {
      puVar13 = (uint *)(lVar11 + 0x170);
      do {
        uVar3 = *puVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar5) {
          *puVar13 = uVar3 | 2;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((uVar3 >> 1 & 1) == 0) {
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar5) {
            *puVar13 = *puVar13 & 0xfffffffe;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        *(undefined1 *)(lVar11 + 0x16a) = 1;
        *(undefined8 *)(lVar9 + 0xc) = 0;
      }
    }
  }
  lVar9 = DAT_057514a0;
  if (*(int *)(DAT_057514a0 + 0x10) == 2) {
    iVar1 = *(int *)(DAT_057514a0 + 0xc);
    if (((1 < iVar1) || (*(int *)(DAT_057514a0 + 0xc) = iVar1 + 1, iVar1 == 1)) &&
       (lVar11 = *(long *)(DAT_05231900 + 0x148),
       *(char *)(lVar11 + 0x3a0) != '\0' || *(char *)(lVar11 + 0x3a1) != '\0')) {
      uVar6 = local_48 >> 0x20;
      uVar7 = local_48 >> 0x20;
      local_48 = uVar6 << 0x20;
      puVar13 = (uint *)(lVar11 + 0xf8);
      if ((*puVar13 & 1) != 0) {
        local_48 = CONCAT44((int)uVar7,1);
        do {
          uVar3 = *puVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar5) {
            *puVar13 = uVar3 | 2;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar3 & 2) == 0) {
          local_48 = uVar6 << 0x20;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar5) {
              *puVar13 = *puVar13 & 0xfffffffe;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *(undefined1 *)(lVar11 + 0x3a3) = 1;
          *(undefined8 *)(lVar9 + 0xc) = 0;
        }
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x38);
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x18) < 1) {
      lVar11 = 0;
    }
    if ((lVar11 != 0 && lVar11 != 0x40) && (*(char *)(lVar11 + -8) != '\0')) {
      uVar3 = *(uint *)(*(long *)(lVar11 + -0x18) + 0x48);
      local_48 = CONCAT44(local_48._4_4_,uVar3);
      if ((uVar3 < 7) && ((1 << (ulong)(uVar3 & 0x1f) & 0x58U) != 0)) {
        lVar9 = *(long *)(*(long *)(*(long *)(lVar11 + -0x18) + 0x210) + 0x48);
        if (lVar9 == 0) {
          puVar12 = &DAT_0418e5bc;
        }
        else {
          if (*(int *)(lVar9 + 0x18) == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = **(long **)(lVar9 + 0x20);
            if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
              puVar12 = (undefined4 *)(*(long *)(lVar9 + 0x10) + 0x14a0);
              goto LAB_03385f2c;
            }
          }
          puVar12 = (undefined4 *)PTR_DAT_04bb2f48;
          if (lVar9 != 0) {
            puVar12 = (undefined4 *)(lVar9 + 4);
          }
        }
LAB_03385f2c:
        *(undefined4 *)(lVar11 + -0x10) = *puVar12;
        *(undefined4 *)(lVar11 + -0xc) = puVar12[1];
      }
    }
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    *(int *)(param_1 + 0x42c) = *(int *)(param_1 + 0x42c) + -1;
  }
  if (*(int *)(param_1 + 0x430) != 0) {
    *(int *)(param_1 + 0x430) = *(int *)(param_1 + 0x430) + -1;
  }
  if (*(int *)(param_1 + 0x434) != 0) {
    *(int *)(param_1 + 0x434) = *(int *)(param_1 + 0x434) + -1;
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x438) + -1;
  }
  if (*(int *)(param_1 + 0x43c) != 0) {
    *(int *)(param_1 + 0x43c) = *(int *)(param_1 + 0x43c) + -1;
  }
  if (*(int *)(param_1 + 0x440) != 0) {
    *(int *)(param_1 + 0x440) = *(int *)(param_1 + 0x440) + -1;
  }
  if (*(int *)(param_1 + 0x444) != 0) {
    *(int *)(param_1 + 0x444) = *(int *)(param_1 + 0x444) + -1;
  }
  if (*(int *)(param_1 + 0x448) != 0) {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
  }
  FUN_03397f80(DAT_05742720);
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0xffffffffffffffff;
  local_48 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  FUN_0339c17c(*(undefined8 *)(param_1 + 0x10),&local_48);
  bVar8 = FUN_03389820(&local_48);
  bVar2 = *(byte *)(param_1 + 0x3f0);
  *(byte *)(param_1 + 0x3f0) = bVar2 & 0xfe | bVar8 & 1;
  if ((0x3f < (int)local_48 - 0xbU) ||
     ((1L << ((ulong)((int)local_48 - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
    if ((0x3f < local_48._4_4_ - 0xbU) ||
       ((1L << ((ulong)(local_48._4_4_ - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
      if ((0x3f < (int)local_40 - 0xbU) ||
         ((1L << ((ulong)((int)local_40 - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
        if ((0x3f < local_40._4_4_ - 0xbU) ||
           ((1L << ((ulong)(local_40._4_4_ - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
          if ((0x3f < (int)local_38 - 0xbU) ||
             ((1L << ((ulong)((int)local_38 - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
            if ((0x3f < local_38._4_4_ - 0xbU) ||
               ((1L << ((ulong)(local_38._4_4_ - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
              if ((0x3f < (int)local_30 - 0xbU) ||
                 ((1L << ((ulong)((int)local_30 - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) {
                if (((0x3f < local_30._4_4_ - 0xbU) ||
                    ((1L << ((ulong)(local_30._4_4_ - 0xbU) & 0x3f) & 0x8be806c000100bbbU) == 0)) &&
                   (((*(long *)(DAT_05739190 + 0x88) == 0 ||
                     (uVar3 = *(uint *)(*(long *)(DAT_05739190 + 0x88) + 0xa8), 6 < uVar3)) ||
                    ((1 << (ulong)(uVar3 & 0x1f) & 0x58U) == 0)))) {
                  bVar10 = 0;
                  if (DAT_056b6f18 == 0) goto LAB_03386030;
                  if (*(int *)(DAT_056b6f18 + 0x1b0) != 6) {
                    bVar10 = 0;
                    goto LAB_03386030;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  bVar10 = 2;
LAB_03386030:
  *(byte *)(param_1 + 0x3f0) = bVar10 | bVar2 & 0xfc | bVar8 & 1;
  return;
}

