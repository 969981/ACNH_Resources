
char * FUN_024f4140(undefined4 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) goto LAB_024f43b0;
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024f43b0;
  local_40 = 0;
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uVar3 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar2 == 0) {
LAB_024f42d0:
    local_38 = 0xbc;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_024f42d0;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_024f42d0;
    local_38 = 0;
    uVar3 = *puVar5;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      local_38 = 0;
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
               (local_38 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_38 < 0xbd))
            goto LAB_024f42dc;
          }
        }
        local_38 = 0;
      }
    }
  }
LAB_024f42dc:
  local_34 = 0x96;
  if (local_38 == 0x96) {
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30dd) {
      return "Ground";
    }
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30de) {
      return "Rock";
    }
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30df) {
      return "Leaf";
    }
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30e0) {
      return "Forest";
    }
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30e1) {
      return "Sky";
    }
    iVar4 = FUN_0277d6c4(param_1);
    if (iVar4 == 0x30e2) {
      return "Fish";
    }
  }
LAB_024f43b0:
  return "";
}

