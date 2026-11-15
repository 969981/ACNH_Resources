
void FUN_0236ced0(long param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  void *__src;
  void *pvVar10;
  long lVar11;
  long lVar12;
  undefined **local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  uint *local_188;
  void *local_138;
  int local_130;
  undefined8 *local_e0;
  int local_d8;
  undefined1 local_6c;
  undefined8 local_48;
  
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = *(undefined8 *)(param_1 + 0x1900);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_48);
  lVar11 = *(long *)puVar3;
  if (lVar11 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      local_188 = (uint *)0x0;
      local_190 = (undefined4)local_48;
      uStack_18c = local_48._4_4_;
      local_198 = &PTR_FUN_04a36b50;
      uVar5 = FUN_0277d6c4(&local_190);
      if (*(long *)puVar3 == 0) {
LAB_0236d0e0:
        uVar7 = FUN_01ad673c(&local_198);
        if ((uVar7 & 1) == 0) goto LAB_0236d0fc;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_0236d0e0;
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(&local_48);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
           (((puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8),
             puVar8 == (uint *)0x0 || (uVar5 = *puVar8, local_188 = puVar8, uVar5 == 0)) ||
            (puVar8 == (uint *)(ulong)uVar5)))) goto LAB_0236d0e0;
        puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
        if (*puVar9 == 0) goto LAB_0236d0e0;
        uVar5 = puVar9[1];
        if ((uVar5 == 0) || ((ulong)(ushort)puVar9[2] == 0)) {
LAB_0236d074:
          if ((*puVar9 != 0) && ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0)))
             ) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 2))
              goto LAB_0236d0ec;
            }
          }
          goto LAB_0236d0e0;
        }
        lVar11 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar11 == 0) goto LAB_0236d074;
        uVar1 = 0;
        if ((ulong)uVar5 != 0) {
          uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
        }
        if (*puVar9 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((DAT_05326ec0 <= uVar1) || (*(short *)(DAT_05326ec8 + (long)(int)uVar1 * 2) != 1))
        goto LAB_0236d074;
      }
LAB_0236d0ec:
      bVar4 = *(char *)(param_1 + 0x1923) != '\0';
      goto LAB_0236d100;
    }
  }
LAB_0236d0fc:
  bVar4 = false;
LAB_0236d100:
  iVar6 = FUN_0236c210(param_1,bVar4);
  if (iVar6 == 2) {
    uVar5 = (uint)*(byte *)(param_1 + 0x190b);
    if (4 < uVar5) {
      uVar5 = 0;
    }
    local_48 = CONCAT44(local_48._4_4_,uVar5);
    if (**(char **)(param_1 + 0x2100) == '\0') {
      if (uVar5 == 1) {
        bVar2 = *(byte *)(param_1 + 0x1909);
        if (7 < bVar2) {
          bVar2 = 0;
        }
        if (*(int *)(param_1 + 0x178) == 0) {
          FUN_023752f4(param_1,bVar2,6);
          return;
        }
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        if (bVar2 == 1) {
          FUN_0231b68c(param_1,6);
          return;
        }
      }
      else if (*(int *)(param_1 + 0x178) == 0) {
        FUN_02373ee0(param_1,6,1,1);
        return;
      }
      FUN_023164ec(param_1,6);
    }
    else {
      FUN_023164ec(param_1,6);
      uVar7 = FUN_0231eddc(param_1,0);
      if ((uVar7 & 1) != 0) {
        FUN_0257a010(&local_198);
        pvVar10 = (void *)CONCAT44(uStack_18c,local_190);
        (**(code **)(*(long *)(param_1 + 0x20f8) + 0x18))(param_1 + 0x20f8);
        __src = *(void **)(param_1 + 0x2100);
        if (pvVar10 != __src) {
          (**(code **)(*(long *)(param_1 + 0x20f8) + 0x18))(param_1 + 0x20f8);
          lVar11 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x2100) + lVar11) == '\0') goto LAB_0236d260;
            lVar12 = *(long *)(param_1 + 0x2100) + lVar11;
            if (*(char *)(lVar12 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_0236d260;
            }
            if (*(char *)(lVar12 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_0236d260;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_0236d260:
          iVar6 = (int)lVar11;
          if ((int)local_188 <= (int)lVar11) {
            iVar6 = (int)local_188 + -1;
          }
          memcpy(pvVar10,__src,(long)iVar6);
          *(undefined1 *)((long)pvVar10 + (long)iVar6) = 0;
        }
        (**(code **)(*(long *)(param_1 + 0x2150) + 0x18))(param_1 + 0x2150);
        pvVar10 = *(void **)(param_1 + 0x2158);
        if (local_138 != pvVar10) {
          (**(code **)(*(long *)(param_1 + 0x2150) + 0x18))(param_1 + 0x2150);
          lVar11 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x2158) + lVar11) == '\0') goto LAB_0236d30c;
            lVar12 = *(long *)(param_1 + 0x2158) + lVar11;
            if (*(char *)(lVar12 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_0236d30c;
            }
            if (*(char *)(lVar12 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_0236d30c;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_0236d30c:
          iVar6 = (int)lVar11;
          if (local_130 <= (int)lVar11) {
            iVar6 = local_130 + -1;
          }
          memcpy(local_138,pvVar10,(long)iVar6);
          *(undefined1 *)((long)local_138 + (long)iVar6) = 0;
        }
        if (local_e0 != &DAT_0407ebb1) {
          iVar6 = 0;
          if (local_d8 < 1) {
            iVar6 = local_d8 + -1;
          }
          memset(local_e0,0,(long)iVar6);
          *(undefined1 *)((long)local_e0 + (long)iVar6) = 0;
        }
        local_6c = 0;
        FUN_024480f0(param_1,&local_198);
        **(undefined1 **)(param_1 + 0x2100) = 0;
        **(undefined1 **)(param_1 + 0x2158) = 0;
      }
    }
  }
  return;
}

