
void FUN_01b0dac4(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar3 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar7 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar7 != (uint *)0x0)) {
        uVar4 = *puVar7;
        if (uVar4 != 0 && puVar7 != (uint *)(ulong)uVar4) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          if (((*puVar8 != 0) && (uVar4 = puVar8[1], uVar4 != 0)) && ((ulong)(ushort)puVar8[2] != 0)
             ) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
              goto LAB_01b0dc0c;
            }
          }
        }
        uVar6 = 0;
        goto LAB_01b0dc0c;
      }
    }
  }
  uVar6 = 0xbc;
LAB_01b0dc0c:
  if (uVar6 == 0x80) {
    uVar5 = FUN_01b037ac(param_2);
    FUN_01b0d9d0(param_1,uVar5);
    return;
  }
  return;
}

