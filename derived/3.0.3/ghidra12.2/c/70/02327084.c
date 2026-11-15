
undefined8 FUN_02327084(byte *param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  
  if (7 < *param_1) {
    return 1;
  }
  uVar3 = FUN_02582d8c(param_1,1);
  puVar2 = PTR_DAT_04bb4fb8;
  if (7 < uVar3) {
    return 1;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0') {
    return 1;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0') {
    return 1;
  }
  FUN_0369fe54(*(undefined8 *)PTR_DAT_04bc3a50,param_2);
  iVar4 = *param_3;
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  FUN_016e49e4(&local_48,param_2,iVar4 == 1);
  if ((((*param_1 < 8) && (uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8)) &&
      (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0')) {
    FUN_0264b650(param_1,&local_48);
  }
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_48);
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return 1;
  }
  lVar9 = *(long *)(lVar9 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
  if (*(uint *)(lVar9 + 0x1d8) <= uVar3) {
    return 1;
  }
  if (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 1;
  }
  local_50 = 0;
  local_58 = (undefined4)local_48;
  uStack_54 = local_48._4_4_;
  uVar3 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(&local_48);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = 0;
        uVar3 = *puVar6;
        if ((uVar3 != 0) && (puVar6 != (uint *)(ulong)uVar3)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar7 != 0) {
            uVar3 = puVar7[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
                goto LAB_0232731c;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_0232731c;
      }
    }
  }
  uVar5 = 0xbc;
LAB_0232731c:
  if (uVar5 == 0x72) {
    *(undefined1 *)(*(long *)PTR_DAT_04bb26a8 + 0x633fc) = 1;
  }
  iVar4 = FUN_0277d6c4(&local_48);
  if ((iVar4 == 0xa12) || (iVar4 = FUN_0277d6c4(&local_48), iVar4 == 0x515)) {
    FUN_026738b0(param_1,&local_48,1,0);
  }
  return 1;
}

