
void FUN_01af193c(undefined4 *param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  if ((param_1 != (undefined4 *)0x0) && (param_3 != (code *)0x0)) {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4();
    lVar7 = *(long *)puVar1;
    if (lVar7 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_48 = 0;
        local_58 = &PTR_FUN_04a36b50;
        local_50 = *param_1;
        uStack_4c = param_1[1];
        uVar2 = FUN_0277d6c4(&local_50);
        lVar8 = DAT_0532a768;
        if (*(long *)puVar1 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            uVar2 = FUN_0277d6c4(param_1);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar7 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8), lVar7 != 0)) {
              local_48 = lVar7;
            }
          }
        }
        iVar3 = FUN_01ad7260(&local_58);
        if (((iVar3 != 0) && (uVar5 = FUN_01ae6580(&local_58), (uVar5 & 1) != 0)) &&
           (iVar3 = FUN_01afe130(&local_58), iVar3 != 1)) {
          iVar3 = (*param_3)(param_1,param_2);
          iVar4 = FUN_01ad7260(&local_58);
          if (((iVar4 != 0) && ((iVar3 == 0 || (iVar4 = FUN_01ad7260(&local_58), iVar3 < iVar4))))
             && (puVar6 = (ushort *)FUN_01afd600(&local_58), puVar6 != (ushort *)0x0)) {
            *puVar6 = *puVar6 & 0xfff8 | (ushort)iVar3 & 7;
          }
          *param_1 = local_50;
          param_1[1] = uStack_4c;
        }
      }
    }
  }
  return;
}

