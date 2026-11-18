
undefined8 FUN_034655d0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int local_48 [2];
  
  if (((param_2 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (uVar5 = FUN_01d77c78(), (uVar5 & 1) == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x19410) != 1) goto LAB_0346579c;
  lVar7 = *(long *)(param_1 + 8);
  uVar5 = FUN_01d77c78(lVar7);
  if ((((uVar5 & 1) == 0) ||
      (uVar5 = FUN_01d77c78(lVar7), puVar2 = PTR_DAT_04bb7bc0, (uVar5 & 1) == 0)) ||
     (*(char *)(lVar7 + 0xc) != '\0')) {
LAB_03465728:
    local_48[0] = -1;
    FUN_0083075c(local_48,*(undefined4 *)(*(long *)(param_1 + 8) + 4),0);
    if (local_48[0] != -1) {
      iVar4 = 0;
      lVar7 = param_2 + 8;
      iVar6 = 0x40;
      do {
        if (((*(ushort *)(lVar7 + (long)iVar4 * 0x30 + 4) & 1) == 0) &&
           (*(int *)(lVar7 + (long)iVar4 * 0x30 + 0x20) == local_48[0])) {
          *(undefined4 *)(lVar7 + (long)iVar4 * 0x30 + 0x28) = 0xffffffff;
          break;
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar7 + 0xd,lVar7);
    *(byte *)(lVar7 + 0xc) = bVar3 & 1;
    if (((bVar3 & 1) != 0) || (lVar7 = FUN_01dff648(*(undefined8 *)puVar2,lVar7), lVar7 == 0))
    goto LAB_03465728;
    if (*(char *)(lVar7 + 0xfc0) != '\0') {
      if (*(char *)(lVar7 + 0xfc1) != '\0') {
        iVar4 = FUN_01d7a28c(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
        if (iVar4 == 1) goto LAB_0346579c;
        if (iVar4 == 0) {
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 4);
          uVar5 = FUN_015d82b8(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x140),uVar1,0,
                               param_1 + 0x10);
          uVar8 = 0;
          if ((uVar5 & 1) != 0) {
            local_48[1] = 0xffffffff;
            FUN_0083075c(local_48 + 1,uVar1,0);
            FUN_03465fc0(param_2,local_48 + 1);
            uVar8 = 1;
            *(int *)(param_1 + 0x19410) = 2;
          }
          goto LAB_034657a0;
        }
      }
      goto LAB_03465728;
    }
  }
LAB_0346579c:
  uVar8 = 0;
LAB_034657a0:
  if (*(int *)(param_1 + 0x32820) != 1) {
    return uVar8;
  }
  lVar7 = *(long *)(param_1 + 8);
  uVar5 = FUN_01d77c78(lVar7);
  if ((((uVar5 & 1) != 0) &&
      (uVar5 = FUN_01d77c78(lVar7), puVar2 = PTR_DAT_04bb7bc0, (uVar5 & 1) != 0)) &&
     (*(char *)(lVar7 + 0xc) == '\0')) {
    bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar7 + 0xd,lVar7);
    *(byte *)(lVar7 + 0xc) = bVar3 & 1;
    if (((bVar3 & 1) == 0) && (lVar7 = FUN_01dff648(*(undefined8 *)puVar2,lVar7), lVar7 != 0)) {
      if (*(char *)(lVar7 + 0xfd0) == '\0') {
        return uVar8;
      }
      if (*(char *)(lVar7 + 0xfd1) != '\0') {
        iVar4 = FUN_01d7a358(*(undefined8 *)(param_1 + 8),param_1 + 0x19420);
        if (iVar4 == 0) {
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 8) + 4);
          uVar5 = FUN_015d82b8(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x140),uVar1,1,
                               param_1 + 0x19420);
          if ((uVar5 & 1) == 0) {
            return uVar8;
          }
          local_48[1] = 0xffffffff;
          FUN_0083075c(local_48 + 1,uVar1,1);
          FUN_03465fc0(param_2,local_48 + 1);
          *(int *)(param_1 + 0x32820) = 2;
          return 1;
        }
        if (iVar4 == 1) {
          return uVar8;
        }
      }
    }
  }
  local_48[0] = -1;
  FUN_0083075c(local_48,*(undefined4 *)(*(long *)(param_1 + 8) + 4),1);
  if (local_48[0] != -1) {
    iVar4 = 0;
    param_2 = param_2 + 8;
    iVar6 = 0x40;
    do {
      if (((*(ushort *)(param_2 + (long)iVar4 * 0x30 + 4) & 1) == 0) &&
         (*(int *)(param_2 + (long)iVar4 * 0x30 + 0x20) == local_48[0])) {
        *(undefined4 *)(param_2 + (long)iVar4 * 0x30 + 0x28) = 0xffffffff;
        return uVar8;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar8;
}

