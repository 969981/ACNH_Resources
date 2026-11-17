
uint FUN_02ac6f0c(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  iVar4 = FUN_02a6cb24(param_1 + 0x298);
  if (iVar4 == 0) {
    local_24 = *(uint *)(param_1 + 0x2a0);
    if (local_24 != 0) {
      if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
        if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
             (puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar6 != (uint *)0x0)) &&
            ((*(uint *)(DAT_05635578 + 0xe8) <= local_24 ||
             (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)local_24) != '\0')))) &&
           (((local_24 < *puVar6 && (puVar6[1] != 0)) && ((ushort)puVar6[2] != 0)))) {
          iVar4 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            iVar4 = 0x1c;
          }
          puVar6 = (uint *)((ulong)(puVar6[1] * local_24 + (uint)(ushort)puVar6[2] * 8 + iVar4) +
                           (long)puVar6);
          goto joined_r0x02ac7080;
        }
      }
      else if (local_24 < *(uint *)(DAT_05635578 + 0x1e0)) {
        uVar5 = local_24;
        if (*(uint *)(DAT_05635578 + 0x1d0) <= local_24) {
          uVar5 = 0;
        }
        puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar5 * 8);
joined_r0x02ac7080:
        if ((puVar6 != (uint *)0x0) &&
           (uVar5 = *puVar6, uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
          if ((*puVar7 != 0) && ((uVar5 = puVar7[1], uVar5 != 0 && ((ulong)(ushort)puVar7[2] != 0)))
             ) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_0560bae8) &&
                 (uVar3 = *(ushort *)(DAT_0560baf0 + (long)(int)uVar2 * 2), uVar3 < 5)) {
                if (uVar3 == 1) {
                  local_2c = 0;
                  uVar5 = FUN_02b67620(&local_2c);
                  if ((uVar5 & 1) != 0) {
                    FUN_02b5c7a0(local_2c,param_2);
                  }
                  goto LAB_02ac70a4;
                }
                if (uVar3 != 0) goto LAB_02ac6f30;
              }
            }
          }
        }
      }
    }
    local_28 = 0;
    uVar5 = FUN_02b673a0(&local_28);
    if ((uVar5 & 1) != 0) {
      FUN_02b5c500(local_28,param_2);
    }
  }
  else {
LAB_02ac6f30:
    uVar5 = 0;
  }
LAB_02ac70a4:
  return uVar5 & 1;
}

