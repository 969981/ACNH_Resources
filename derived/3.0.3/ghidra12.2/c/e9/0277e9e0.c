
uint FUN_0277e9e0(short *param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined *local_68;
  short local_60;
  short local_5e;
  undefined4 local_5c;
  long local_58;
  
  puVar4 = PTR_DAT_04bb43c0;
  sVar2 = *param_1;
  if (sVar2 == -2) {
LAB_0277ea0c:
    uVar6 = 1;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4();
    puVar5 = PTR_DAT_04bc0510;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar3 = *(ushort *)(lVar8 + 0x1f8);
      uVar1 = *(uint *)(lVar8 + 0x1d8);
      uVar6 = (uVar6 & 0xffff) - (uint)uVar3;
      if ((uVar6 < uVar1) &&
         (lVar8 = *(long *)(lVar8 + 0x1e0), *(long *)(lVar8 + (long)(int)uVar6 * 8) != 0)) {
        local_5e = param_1[1];
        local_58 = 0;
        local_68 = PTR_DAT_04bc0510 + 0x10;
        local_5c = *(undefined4 *)(param_1 + 2);
        local_60 = sVar2;
        uVar6 = FUN_0277d6c4(&local_60);
        uVar6 = (uVar6 & 0xffff) - (uint)uVar3;
        if ((uVar6 < uVar1) && (*(long *)(lVar8 + (long)(int)uVar6 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(param_1);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
            local_58 = lVar8;
          }
        }
        uVar7 = FUN_01b14730(&local_68);
        if ((uVar7 & 1) != 0) {
          local_60 = *param_1;
          if (local_60 != -2) {
            local_5e = param_1[1];
            local_5c = *(undefined4 *)(param_1 + 2);
            local_68 = puVar5 + 0x10;
            lVar8 = *(long *)puVar4;
            local_58 = 0;
            uVar6 = FUN_0277d6c4(&local_60);
            if (lVar8 != 0) {
              lVar8 = *(long *)(lVar8 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar8 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(param_1);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
                   (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0))
                {
                  local_58 = lVar8;
                }
              }
            }
            uVar6 = FUN_01b14990(&local_68);
            goto LAB_0277ebb0;
          }
          goto LAB_0277ea0c;
        }
      }
    }
    uVar6 = 0;
  }
LAB_0277ebb0:
  return uVar6 & 1;
}

