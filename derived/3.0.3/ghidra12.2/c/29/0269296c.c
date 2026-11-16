
void FUN_0269296c(long param_1,short *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,ulong param_7,uint param_8)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  ulong local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  uint local_68;
  int local_64;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*param_2 != -2) {
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      return;
    }
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
      return;
    }
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      return;
    }
    local_90 = 0;
    uStack_8c = 0;
    local_98 = *(undefined4 *)param_2;
    uStack_94 = *(undefined4 *)(param_2 + 2);
    local_a0 = 0x4a36b50;
    uStack_9c = 0;
    uVar4 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar12 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
          local_90 = (undefined4)lVar11;
          uStack_8c = (undefined4)((ulong)lVar11 >> 0x20);
        }
      }
    }
    local_64 = FUN_01ae1100(&local_a0);
    if (local_64 != 2) {
      return;
    }
  }
  puVar7 = (undefined4 *)(param_1 + 0x12618);
  if ((param_7 & 1) == 0) {
    FUN_0277d6c4(param_2);
  }
  else {
    uVar6 = FUN_0277d7b4(param_1 + 0x12618,param_2);
    puVar3 = PTR_DAT_04bb43c0;
    if ((((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x1261b) == *(char *)((long)param_2 + 3))) &&
       (*(int *)(param_1 + 0x1261c) == *(int *)(param_2 + 2))) {
      return;
    }
    lVar11 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        uVar6 = FUN_0277d7b4(param_1 + 0x1094c,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x1094f) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10950) == *(int *)(param_2 + 2))))) {
          lVar11 = 0;
LAB_02693424:
          lVar12 = *(long *)puVar3;
          puVar7 = (undefined4 *)(param_1 + 0x1094c + lVar11 * 0x2c);
          uVar6 = *(ulong *)(puVar7 + 9);
          local_a0 = *puVar7;
          uStack_9c = puVar7[1];
          local_80 = puVar7[8];
          local_98 = (undefined4)*(undefined8 *)(puVar7 + 2);
          uStack_94 = (undefined4)((ulong)*(undefined8 *)(puVar7 + 2) >> 0x20);
          local_90 = (undefined4)*(undefined8 *)(puVar7 + 4);
          uStack_8c = (undefined4)((ulong)*(undefined8 *)(puVar7 + 4) >> 0x20);
          if (1 < local_80) {
            local_80 = 0;
          }
          local_88 = (undefined4)*(undefined8 *)(puVar7 + 6);
          uStack_84 = (undefined4)((ulong)*(undefined8 *)(puVar7 + 6) >> 0x20);
          local_7c = uVar6;
          uVar4 = FUN_0277d6c4(&local_a0);
          if (*(long *)puVar3 == 0) {
            return;
          }
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if (*(uint *)(lVar12 + 0x1d8) <= uVar4) {
            return;
          }
          if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
            return;
          }
          if ((param_8 & 1) != 0) {
            FUN_026b3b80(param_1,lVar11,1);
          }
          FUN_0269296c(param_1,&local_a0,&local_98,uVar6 & 0xffffffff,uVar6 >> 0x20,0,param_8 & 1,1)
          ;
          return;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10978,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x1097b) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x1097c) == *(int *)(param_2 + 2))))) {
          lVar11 = 1;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x109a4,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x109a7) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x109a8) == *(int *)(param_2 + 2))))) {
          lVar11 = 2;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x109d0,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x109d3) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x109d4) == *(int *)(param_2 + 2))))) {
          lVar11 = 3;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x109fc,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x109ff) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10a00) == *(int *)(param_2 + 2))))) {
          lVar11 = 4;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10a28,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10a2b) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10a2c) == *(int *)(param_2 + 2))))) {
          lVar11 = 5;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10a54,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10a57) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10a58) == *(int *)(param_2 + 2))))) {
          lVar11 = 6;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10a80,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10a83) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10a84) == *(int *)(param_2 + 2))))) {
          lVar11 = 7;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10aac,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10aaf) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10ab0) == *(int *)(param_2 + 2))))) {
          lVar11 = 8;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10ad8,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10adb) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10adc) == *(int *)(param_2 + 2))))) {
          lVar11 = 9;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10b04,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10b07) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10b08) == *(int *)(param_2 + 2))))) {
          lVar11 = 10;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10b30,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10b33) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10b34) == *(int *)(param_2 + 2))))) {
          lVar11 = 0xb;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10b5c,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10b5f) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10b60) == *(int *)(param_2 + 2))))) {
          lVar11 = 0xc;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10b88,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10b8b) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10b8c) == *(int *)(param_2 + 2))))) {
          lVar11 = 0xd;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10bb4,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10bb7) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10bb8) == *(int *)(param_2 + 2))))) {
          lVar11 = 0xe;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10be0,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10be3) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10be4) == *(int *)(param_2 + 2))))) {
          lVar11 = 0xf;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10c0c,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10c0f) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10c10) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x10;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10c38,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10c3b) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10c3c) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x11;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10c64,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10c67) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10c68) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x12;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10c90,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10c93) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10c94) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x13;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10cbc,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10cbf) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10cc0) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x14;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10ce8,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10ceb) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10cec) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x15;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10d14,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10d17) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10d18) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x16;
          goto LAB_02693424;
        }
        uVar6 = FUN_0277d7b4(param_1 + 0x10d40,param_2);
        if (((uVar6 & 1) != 0) &&
           ((*(char *)(param_1 + 0x10d43) == *(char *)((long)param_2 + 3) &&
            (*(int *)(param_1 + 0x10d44) == *(int *)(param_2 + 2))))) {
          lVar11 = 0x17;
          goto LAB_02693424;
        }
      }
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  if ((param_8 & 1) == 0) {
    return;
  }
  local_64 = *(int *)(param_1 + 0x1263c);
  if ((local_64 == 7) || (local_64 == 0)) goto LAB_02693008;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(puVar7);
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) goto LAB_02693008;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02693008;
  local_90 = 0;
  uStack_8c = 0;
  local_98 = *puVar7;
  uStack_94 = *(undefined4 *)(param_1 + 0x1261c);
  local_a0 = 0x4a36b50;
  uStack_9c = 0;
  uVar4 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar3 == 0) {
LAB_02692f84:
    local_68 = 0xbc;
  }
  else {
    lVar11 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02692f84;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(puVar7);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), puVar9 == (uint *)0x0
       )) goto LAB_02692f84;
    uVar4 = *puVar9;
    local_68 = 0;
    if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
      local_68 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar9 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_68 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_68 < 0xbd))
            goto LAB_02692f88;
          }
        }
        local_68 = 0;
      }
    }
  }
LAB_02692f88:
  if ((local_68 != 0xac) &&
     (uVar4 = FUN_0268f390(param_1,puVar7,param_1 + 0x12620,*(undefined4 *)(param_1 + 0x1263c),
                           *(undefined1 *)(param_1 + 0x12640),1,0), -1 < (int)uVar4)) {
    uVar8 = 0x20;
    uVar2 = uVar4 - 0x18;
    if (uVar4 < 0x18) {
      uVar8 = 0x18;
      uVar2 = uVar4;
    }
    if (uVar2 < uVar8) {
      lVar11 = param_1 + 0x10d6c;
      if (uVar4 < 0x18) {
        lVar11 = param_1 + 0x1094c;
      }
      FUN_027d2014(lVar11 + (ulong)uVar2 * 0x2c,puVar7);
    }
  }
LAB_02693008:
  local_a0 = 0;
  local_88 = CONCAT31(local_88._1_3_,2);
  uStack_9c = 0;
  local_98 = 0;
  puVar1 = &uStack_84;
  if (param_3 != (undefined4 *)0x0) {
    puVar1 = param_3;
  }
  uStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  uStack_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  uVar5 = FUN_021d7d60(param_1);
  FUN_027d2090(puVar7,param_2,puVar1,param_4,param_5,0);
  if ((param_6 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x12641) = 1;
  }
  FUN_020ed39c(uVar5,2,puVar7);
  return;
}

