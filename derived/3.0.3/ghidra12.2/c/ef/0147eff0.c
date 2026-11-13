
byte FUN_0147eff0(long param_1,byte param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  long lVar8;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  uint local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x900) == 0) {
    uStack_44 = *(undefined4 *)(param_1 + 0x28c);
    local_40 = 0;
    local_48 = *(undefined4 *)(param_1 + 0x288);
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_48);
    if (*(long *)puVar3 == 0) {
LAB_0147f188:
      local_38 = 0xbc;
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0147f188;
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x288);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_0147f188;
      uVar4 = *puVar5;
      if (uVar4 == 0 || puVar5 == (uint *)(ulong)uVar4) {
LAB_0147f180:
        local_38 = 0;
      }
      else {
        puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
        if (((*puVar6 == 0) || (uVar4 = puVar6[1], uVar4 == 0)) || ((ulong)(ushort)puVar6[2] == 0))
        goto LAB_0147f180;
        lVar8 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar6 + lVar8 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar8 == 0) goto LAB_0147f180;
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((DAT_05326ec0 <= uVar1) ||
           (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_38 = (uint)uVar2,
           0xbc < uVar2)) goto LAB_0147f180;
      }
    }
    local_34 = 0xb0;
    bVar7 = local_38 != 0xb0 | param_2;
    if (local_38 == 0xb0 && (param_2 & 1) == 0) goto LAB_0147f034;
  }
  else {
    bVar7 = param_2;
    if ((param_2 & 1) == 0) goto LAB_0147f034;
  }
  FUN_0147d8f0(param_1,1,0,param_2 & 1);
LAB_0147f034:
  return bVar7 & 1;
}

