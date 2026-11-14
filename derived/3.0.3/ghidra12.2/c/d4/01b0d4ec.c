
void FUN_01b0d4ec(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  uint local_48;
  uint uStack_44;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  
  puVar6 = *(uint **)(param_2 + 0x10);
  if (puVar6 == (uint *)0x0) {
    local_38 = 0xbc;
  }
  else {
    uVar4 = *puVar6;
    if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_38 = (uint)uVar5,
             uVar5 < 0xbd)) goto LAB_01b0d5a4;
        }
      }
    }
    local_38 = 0;
  }
LAB_01b0d5a4:
  if (local_38 != 0x71) {
    param_1[0] = 0x128;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
    return;
  }
  local_34 = 0;
  local_38 = *(uint *)(param_2 + 0xc) & 0xffff;
  FUN_0277d4ac(&local_38);
  puVar3 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_48 = local_38;
  uStack_44 = local_34;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_48);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar3 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(&local_38);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar6 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 != (uint *)0x0)) {
        uVar5 = 0;
        uVar4 = *puVar6;
        if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
          uVar5 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
                goto LAB_01b0d730;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_01b0d730;
      }
    }
  }
  uVar5 = 0xbc;
LAB_01b0d730:
  if (uVar5 == 0x70) {
    *param_1 = local_38;
    param_1[1] = local_34;
  }
  else {
    param_1[0] = 0x128;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
  }
  return;
}

