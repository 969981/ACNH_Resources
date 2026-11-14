
void FUN_01a4c85c(uint *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  long lVar9;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar2;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar2 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_2);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
            local_48 = lVar8;
          }
        }
      }
      iVar4 = FUN_01ad7260(&local_58);
      if (((iVar4 != 0) && (uVar6 = FUN_01ae6580(&local_58), (uVar6 & 1) != 0)) &&
         (iVar4 = FUN_01afe130(&local_58), iVar4 != 1)) {
        if (param_3 != 0) {
          uVar3 = (param_3 ^ param_3 >> 0x1e) * 0x6c078965 + 1;
          uVar1 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
          *param_1 = uVar3;
          param_1[1] = uVar1;
          uVar3 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
          param_1[2] = uVar3;
          param_1[3] = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
        }
        uVar6 = FUN_01ad7260(&local_58);
        uVar1 = param_1[3];
        uVar3 = *param_1 ^ *param_1 << 0xb;
        *param_1 = param_1[1];
        param_1[1] = param_1[2];
        uVar3 = uVar3 >> 8 ^ uVar1 >> 0x13 ^ uVar3 ^ uVar1;
        param_1[2] = uVar1;
        param_1[3] = uVar3;
        iVar4 = FUN_01ad7260(&local_58);
        if (iVar4 != 0) {
          lVar8 = (ulong)uVar3 * (uVar6 & 0xffffffff);
          iVar4 = (int)((ulong)lVar8 >> 0x20);
          if (((iVar4 == 0) || (iVar5 = FUN_01ad7260(&local_58), iVar4 < iVar5)) &&
             (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 != (ushort *)0x0)) {
            *puVar7 = *puVar7 & 0xfff8 | (ushort)((ulong)lVar8 >> 0x20) & 7;
          }
        }
        *param_2 = local_50;
        param_2[1] = uStack_4c;
      }
    }
  }
  return;
}

