
bool FUN_0285875c(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 == 0) {
LAB_028588c8:
    FUN_01aed730(&local_48);
    return false;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_028588c8;
  lVar8 = *(long *)PTR_DAT_04bc0428;
  uVar4 = FUN_0277d6c4(param_2);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
     (puVar6 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8), puVar6 == (uint *)0x0))
  goto LAB_028588c8;
  uVar4 = *puVar6;
  local_38 = puVar6;
  if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
    if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar8 != 0) {
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)puVar6 - lVar8) / (ulong)uVar4);
        }
        if (*puVar7 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (uVar1 < DAT_05326ec0) {
          uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
          iVar5 = FUN_01aed730(&local_48);
          uVar4 = (uint)uVar2;
          if (uVar4 < 0xbd) {
            if (uVar4 - 9 < 2 || uVar4 == 0x10) {
              if (iVar5 - 3000U < 0xfffff63d) {
                return true;
              }
              return false;
            }
            if (uVar4 != 0) {
              if (uVar2 != 0x12) {
                return false;
              }
              if (iVar5 - 3000U < 0xfffff63d) {
                return true;
              }
              return false;
            }
          }
          goto LAB_028588f4;
        }
      }
    }
  }
  iVar5 = FUN_01aed730(&local_48);
LAB_028588f4:
  return 4999 < iVar5;
}

