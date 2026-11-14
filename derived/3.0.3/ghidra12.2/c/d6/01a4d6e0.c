
void FUN_01a4d6e0(uint *param_1,undefined4 *param_2,uint param_3,code *param_4,ulong param_5)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  if ((param_4 != (code *)0x0) || (param_5 != 0 && (param_5 & 1) != 0)) {
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_2);
    lVar10 = *(long *)puVar2;
    if (lVar10 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        local_68 = 0;
        local_70 = *param_2;
        uStack_6c = param_2[1];
        local_78 = &PTR_FUN_04a36b50;
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar9 = *(long *)(lVar10 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar9 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_2);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
              lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
              if (lVar9 != 0) {
                local_68 = lVar9;
              }
            }
          }
        }
        iVar4 = FUN_01ad7260(&local_78);
        if (((iVar4 != 0) && (uVar6 = FUN_01ae6580(&local_78), (uVar6 & 1) != 0)) &&
           (iVar4 = FUN_01afe130(&local_78), iVar4 != 1)) {
          if (param_3 != 0) {
            uVar3 = (param_3 ^ param_3 >> 0x1e) * 0x6c078965 + 1;
            uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 2;
            *param_1 = uVar3;
            param_1[1] = uVar5;
            uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
            param_1[2] = uVar3;
            param_1[3] = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
          }
          local_48 = *param_2;
          uStack_44 = param_2[1];
          plVar1 = (long *)((long)param_1 + ((long)param_5 >> 1));
          if ((param_5 & 1) != 0) {
            param_4 = *(code **)(param_4 + *plVar1);
          }
          (*param_4)(plVar1,&local_48);
          lVar9 = *(long *)puVar2;
          local_90 = &PTR_FUN_04a36b50;
          local_80 = 0;
          local_88 = local_48;
          uStack_84 = uStack_44;
          uVar3 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar2 != 0) {
            lVar9 = *(long *)(lVar9 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar9 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar9 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(&local_48);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if (uVar3 < *(uint *)(lVar9 + 0x1d8)) {
                lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8);
                if (lVar9 != 0) {
                  local_80 = lVar9;
                }
              }
            }
          }
          iVar4 = FUN_01ad7260(&local_90);
          if ((iVar4 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_90), puVar7 == (ushort *)0x0))
          {
            uVar3 = 0;
          }
          else {
            uVar3 = *puVar7 & 7;
            uVar5 = FUN_01ad7260(&local_90);
            if (uVar5 <= uVar3) {
              uVar3 = 0;
            }
          }
          iVar4 = FUN_01ad7260(&local_78);
          uVar8 = param_1[3];
          uVar5 = *param_1 ^ *param_1 << 0xb;
          *param_1 = param_1[1];
          param_1[1] = param_1[2];
          uVar5 = uVar5 >> 8 ^ uVar8 >> 0x13 ^ uVar5 ^ uVar8;
          param_1[2] = uVar8;
          param_1[3] = uVar5;
          uVar8 = (uint)((ulong)uVar5 * (ulong)(iVar4 - 1U) >> 0x20);
          uVar5 = iVar4 - 1U;
          if (uVar3 != uVar8) {
            uVar5 = uVar8;
          }
          iVar4 = FUN_01ad7260(&local_78);
          if ((iVar4 != 0) &&
             (((uVar5 == 0 || (iVar4 = FUN_01ad7260(&local_78), (int)uVar5 < iVar4)) &&
              (puVar7 = (ushort *)FUN_01afd600(&local_78), puVar7 != (ushort *)0x0)))) {
            *puVar7 = *puVar7 & 0xfff8 | (ushort)uVar5 & 7;
          }
          *param_2 = local_70;
          param_2[1] = uStack_6c;
        }
      }
    }
  }
  return;
}

