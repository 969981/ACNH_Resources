
void FUN_0277d4ac(undefined4 *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  undefined **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_44;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  if (lVar8 == 0) {
    FUN_0277d6c4(param_1);
    goto LAB_0277d6a4;
  }
  lVar5 = *(long *)(lVar8 + 0x57e58);
  uVar2 = *(ushort *)(lVar5 + 0x1f8);
  uVar1 = *(uint *)(lVar5 + 0x1d8);
  uVar4 = (uVar4 & 0xffff) - (uint)uVar2;
  if ((uVar4 < uVar1) &&
     (lVar5 = *(long *)(lVar5 + 0x1e0), *(long *)(lVar5 + (long)(int)uVar4 * 8) != 0)) {
    local_50 = (uint *)0x0;
    local_58 = *param_1;
    uStack_54 = param_1[1];
    local_60 = &PTR_FUN_04a36b50;
    uVar4 = FUN_0277d6c4(&local_58);
    uVar4 = (uVar4 & 0xffff) - (uint)uVar2;
    if ((uVar4 < uVar1) && (*(long *)(lVar5 + (long)(int)uVar4 * 8) != 0)) {
      lVar5 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((*(uint *)(lVar5 + 0x1d8) <= uVar4) ||
         (puVar6 = *(uint **)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar6 == (uint *)0x0)) goto LAB_0277d620;
      uVar4 = *puVar6;
      local_50 = puVar6;
      if (uVar4 == 0 || puVar6 == (uint *)(ulong)uVar4) {
LAB_0277d60c:
        local_44 = 0;
      }
      else {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
        if (((*puVar7 == 0) || (uVar4 = puVar7[1], uVar4 == 0)) || ((ulong)(ushort)puVar7[2] == 0))
        goto LAB_0277d60c;
        lVar5 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar7 + lVar5 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar5 == 0) goto LAB_0277d60c;
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)puVar6 - lVar5) / (ulong)uVar4);
        }
        if (*puVar7 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((DAT_05326ec0 <= uVar1) ||
           (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_44 = (uint)uVar2,
           0xbc < uVar2)) goto LAB_0277d60c;
      }
    }
    else {
LAB_0277d620:
      local_44 = 0xbc;
    }
    if ((local_44 & 0xfffffffd) != 0xa4) goto LAB_0277d660;
    FUN_01afca60(&local_60,1);
    *(undefined1 *)((long)param_1 + 2) = local_58._2_1_;
    lVar8 = *(long *)puVar3;
    uVar4 = FUN_0277d6c4(param_1);
    if (lVar8 == 0) goto LAB_0277d6a4;
  }
  else {
LAB_0277d660:
    uVar4 = FUN_0277d6c4(param_1);
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
     (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
    *(byte *)((long)param_1 + 3) = *(byte *)((long)param_1 + 3) & 0x80;
  }
LAB_0277d6a4:
  FUN_0277f248(param_1);
  return;
}

