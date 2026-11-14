
void FUN_01b0678c(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar3) {
    return;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return;
  }
  local_48 = 0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  uVar3 = FUN_0277d6c4(&local_50);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar2 == 0) {
LAB_01b06918:
    uVar3 = 0xbc;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_01b06918;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_01b06918;
    uVar1 = *puVar5;
    uVar3 = 0;
    if ((uVar1 != 0) && (puVar5 != (uint *)(ulong)uVar1)) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar1);
      uVar3 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar3 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar3 < 0xbd))
            goto LAB_01b0691c;
          }
        }
        uVar3 = 0;
      }
    }
  }
LAB_01b0691c:
  if (((0xd < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x2601U) == 0)) && (uVar3 != 0x57)) {
    return;
  }
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar4 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar4 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar4 < 0xbd))
            goto LAB_01b069ec;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_01b069ec:
  if (uVar4 == 0x8d) {
    FUN_01b01728(param_1 + 0xc,param_2);
    return;
  }
  return;
}

