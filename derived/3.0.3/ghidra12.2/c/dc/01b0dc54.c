
void FUN_01b0dc54(long param_1,undefined4 *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_40 = 0;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(&local_48);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar4 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar1 + 0x1d8)) &&
         (puVar8 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar5 * 8),
         puVar8 != (uint *)0x0)) {
        uVar5 = *puVar8;
        if (uVar5 != 0 && puVar8 != (uint *)(ulong)uVar5) {
          puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
          if (((*puVar9 != 0) && (uVar5 = puVar9[1], uVar5 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar5);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_34 = (uint)uVar3,
                 uVar3 < 0xbd)) goto LAB_01b0dd9c;
            }
          }
        }
        local_34 = 0;
        goto LAB_01b0dd9c;
      }
    }
  }
  local_34 = 0xbc;
LAB_01b0dd9c:
  if (local_34 == 0x81) {
    local_38 = FUN_01b03c30(param_2);
    local_34 = 3;
    uVar6 = FUN_01b032d0(param_1);
    if ((uVar6 & 1) != 0) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfc | (byte)local_34 & 3;
    }
    uVar5 = local_38;
    if (3 < local_38) {
      uVar5 = 0;
    }
    local_34 = (&DAT_0532a758)[(int)uVar5];
    uVar6 = FUN_01b032d0(param_1);
    if ((uVar6 & 1) != 0) {
      uVar6 = FUN_01b032d0(param_1);
      bVar7 = *(byte *)(param_1 + 0xb);
      if (((uVar6 & 1) == 0) || ((bVar7 & 3) == 0)) {
        bVar7 = bVar7 & 0xc3;
      }
      else {
        bVar7 = (byte)((local_34 & 0xf) << 2) | bVar7 & 0xc3;
      }
      *(byte *)(param_1 + 0xb) = bVar7;
    }
  }
  return;
}

