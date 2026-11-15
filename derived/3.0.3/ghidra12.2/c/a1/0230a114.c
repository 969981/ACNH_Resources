
void FUN_0230a114(char *param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_68;
  char *pcStack_60;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if (*param_1 == '\0') {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_1 + 4);
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    return;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar2) {
    return;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return;
  }
  if (DAT_04c487d4 != -1) {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x15 & 1) != 0) {
      return;
    }
  }
  local_48 = 0;
  local_50 = *(undefined4 *)(param_1 + 4);
  uStack_4c = *(undefined4 *)(param_1 + 8);
  local_58 = &PTR_FUN_04a36b50;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_1 + 4);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (puVar4 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8),
         puVar4 != (uint *)0x0)) {
        uVar2 = *puVar4;
        uVar3 = 0;
        if ((uVar2 == 0) || (puVar4 == (uint *)(ulong)uVar2)) goto LAB_0230a2fc;
        puVar5 = (uint *)((long)puVar4 - (long)(ulong)uVar2);
        uVar3 = 0;
        if (*puVar5 == 0) goto LAB_0230a2fc;
        uVar2 = puVar5[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar3 = 0;
            if ((ulong)uVar2 != 0) {
              uVar3 = (uint)((ulong)((long)puVar4 - lVar6) / (ulong)uVar2);
            }
            if (*puVar5 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05327490) &&
               (uVar3 = (uint)*(ushort *)(DAT_05327498 + (long)(int)uVar3 * 2), uVar3 < 6))
            goto LAB_0230a2fc;
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_0230a2fc:
  if ((uVar3 < 6) && ((1 << (ulong)(uVar3 & 0x1f) & 0x32U) != 0)) {
    local_68 = PTR_DAT_04bb2020 + 0x10;
    pcStack_60 = "EDWearFlower";
    FUN_0279b044(param_1 + 1,&local_68,1);
  }
  return;
}

