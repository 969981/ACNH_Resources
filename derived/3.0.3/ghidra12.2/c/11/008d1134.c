
undefined4 FUN_008d1134(long param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined4 extraout_s0;
  undefined4 uVar13;
  byte local_60 [4];
  byte local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  
  bVar1 = *param_2;
  local_5c[0] = bVar1;
  if (7 < bVar1) {
    local_5c[0] = 0xff;
  }
  if (*(char *)(param_1 + 0x315c8) == '\0') {
    if (*(int *)(param_1 + 0x315b8) < 1) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x315b8) + *(int *)(param_1 + 0x315b4) + -1;
    iVar7 = 0;
    if (*(int *)(param_1 + 0x315b0) <= iVar2) {
      iVar7 = *(int *)(param_1 + 0x315b0);
    }
    if (*(int *)(*(long *)(param_1 + 0x315a8) + (long)(iVar2 - iVar7) * 4) == 1) {
      return 0;
    }
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = &DAT_054f0958;
        if (iVar7 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = &DAT_054f0958;
      }
    }
    else {
      puVar11 = (undefined8 *)(DAT_054f5738 + 0x204);
      if (bVar1 < 8) {
        puVar11 = (undefined8 *)(DAT_054f5738 + 0x204) + bVar1;
      }
    }
    local_58 = 0x20;
    if ((*(uint *)((long)puVar11 + 4) & 1) != 0) {
      return 0;
    }
  }
  uVar5 = FUN_02582d8c(local_5c,1);
  lVar4 = DAT_04d02f58;
  puVar3 = PTR_DAT_04bb4fb8;
  if ((uVar5 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar5 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d8);
    uVar10 = (ulong)uVar5;
    if ((-1 < (int)uVar5) &&
       (((DAT_04d02f58 != 0 && (uVar6 = FUN_02582d8c(local_5c,1), uVar6 < 8)) &&
        (*(char *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')))) {
      uVar6 = *(uint *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d8);
      uVar9 = (ulong)uVar6;
      if ((-1 < (int)uVar6) && (DAT_04d02f58 != 0)) {
        if (3 < uVar6) {
          uVar9 = 0;
        }
        lVar8 = *(long *)(DAT_04d02f58 + uVar9 * 8 + 0xf5b20);
        if (lVar8 == 0) {
          return 0;
        }
        if (3 < uVar5) {
          uVar10 = 0;
        }
        uVar5 = *(uint *)(lVar4 + uVar10 * 4 + 0xf5b40);
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(extraout_s0,0,&DAT_054f0960);
            puVar12 = (uint *)&DAT_054f0958;
            if (iVar7 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar12 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar12 = (uint *)(DAT_054f5738 + 0x204);
          if ((ulong)*param_2 < 8) {
            puVar12 = puVar12 + (ulong)*param_2 * 2;
          }
        }
        local_54 = 0x19;
        local_60[0] = *param_2;
        if (7 < local_60[0]) {
          local_60[0] = 0xff;
        }
        uVar13 = FUN_008d0d7c(param_1,lVar8,local_60,(uVar5 & 0xfffffffd) == 0 || uVar5 == 1,
                              (*puVar12 >> 0x19 & 1) != 0);
        return uVar13;
      }
    }
  }
  return 0;
}

