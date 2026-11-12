
void FUN_00b67620(undefined8 param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  long lVar5;
  long lVar6;
  uint local_58;
  uint uStack_54;
  undefined **local_50;
  uint local_48;
  uint uStack_44;
  long local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb43c0;
  if ((short)*param_2 != -2) {
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar2 = FUN_0277d6c4(param_2);
    lVar5 = *(long *)puVar1;
    if (lVar5 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        local_40 = 0;
        local_48 = *param_2;
        uStack_44 = param_2[1];
        local_50 = &PTR_FUN_04a36b50;
        uVar2 = FUN_0277d6c4(&local_48);
        if (*(long *)puVar1 != 0) {
          lVar5 = *(long *)(lVar5 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
          if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
            lVar5 = *(long *)PTR_DAT_04bc0428;
            uVar2 = FUN_0277d6c4(param_2);
            uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
            if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
               (lVar5 = *(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) {
              local_40 = lVar5;
            }
          }
        }
        iVar3 = FUN_01ad7260(&local_50);
        if (((iVar3 != 0) && (iVar3 = FUN_01ad7260(&local_50), iVar3 != 0)) &&
           (puVar4 = (ushort *)FUN_01afd600(&local_50), puVar4 != (ushort *)0x0)) {
          *puVar4 = *puVar4 & 0xfff8;
        }
        local_58 = 2;
        iVar3 = FUN_01afcfa0(&local_50);
        uVar2 = local_58;
        if ((iVar3 != 0) && (local_34 = FUN_01b006b0(&local_50), uVar2 == local_34)) {
          FUN_01afdd70(&local_50,0);
        }
        iVar3 = FUN_01afcfa0(&local_50);
        if ((iVar3 != 0) && (iVar3 = FUN_01afcfa0(&local_50), iVar3 != 0)) {
          local_58 = 0;
          puVar4 = (ushort *)FUN_01afd600(&local_50);
          if (puVar4 != (ushort *)0x0) {
            *puVar4 = (ushort)((local_58 & 3) << 3) | *puVar4 & 0xffe7;
          }
          iVar3 = FUN_01afcfa0(&local_50);
          if ((iVar3 != 0) && (puVar4 = (ushort *)FUN_01afd600(&local_50), puVar4 != (ushort *)0x0))
          {
            *puVar4 = *puVar4 & 0xe01f;
          }
        }
        local_58 = local_48;
        uStack_54 = uStack_44;
        if (DAT_053d2ea8 != 0) {
          FUN_0206fe60(DAT_053d2ea8,&local_58);
        }
      }
    }
  }
  return;
}

