
byte * FUN_02830784(long param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  bVar1 = *(byte *)(param_1 + 0xa8b0);
  uVar6 = (ulong)bVar1;
  if (bVar1 == 0) {
LAB_02830ab4:
    uVar7 = 0;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(param_1 + 0xa8b4);
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
LAB_02830ab0:
      uVar6 = 0;
      goto LAB_02830ab4;
    }
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) goto LAB_02830ab0;
    uVar6 = 0;
    if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0) goto LAB_02830ab4;
    local_68 = 0;
    local_70 = *(undefined4 *)(param_1 + 0xa8b4);
    uStack_6c = *(undefined4 *)(param_1 + 0xa8b8);
    local_78 = &PTR_FUN_04a36b50;
    uVar3 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar2 != 0) {
      lVar8 = *(long *)(lVar9 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_1 + 0xa8b4);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
          local_68 = lVar8;
        }
      }
    }
    uVar6 = FUN_01b032d0(&local_78);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = nn::time::IsValidDate
                          ((uint)*(ushort *)(param_1 + 0xa8bc),(uint)*(byte *)(param_1 + 0xa8be),
                           (uint)*(byte *)(param_1 + 0xa8bf)), (uVar6 & 1) == 0)) goto LAB_02830ab0;
    if (*(char *)(param_1 + 0xa8c0) == '\0') {
      uVar6 = 1;
      uVar7 = 1;
    }
    else {
      lVar9 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(param_1 + 0xa8c4);
      lVar8 = *(long *)puVar2;
      if (lVar8 == 0) {
LAB_02830ae0:
        uVar6 = 1;
      }
      else {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_02830ae0;
        local_68 = 0;
        local_78 = &PTR_FUN_04a36b50;
        local_70 = *(undefined4 *)(param_1 + 0xa8c4);
        uStack_6c = *(undefined4 *)(param_1 + 0xa8c8);
        uVar3 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar2 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar3 = FUN_0277d6c4(param_1 + 0xa8c4);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), lVar8 != 0)) {
              local_68 = lVar8;
            }
          }
        }
        uVar6 = FUN_01b032d0(&local_78);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = nn::time::IsValidDate
                              ((uint)*(ushort *)(param_1 + 0xa8cc),(uint)*(byte *)(param_1 + 0xa8ce)
                               ,(uint)*(byte *)(param_1 + 0xa8cf)), (uVar6 & 1) == 0))
        goto LAB_02830ae0;
        if (*(char *)(param_1 + 0xa8d0) == '\0') {
LAB_02830af8:
          uVar6 = 2;
        }
        else {
          uVar6 = FUN_0277d9a8(param_1 + 0xa8d4);
          if ((uVar6 & 1) == 0) goto LAB_02830af8;
          FUN_01ad5d04(&local_78,param_1 + 0xa8d4);
          uVar6 = FUN_01b032d0(&local_78);
          if (((uVar6 & 1) == 0) ||
             (uVar6 = nn::time::IsValidDate
                                ((uint)*(ushort *)(param_1 + 0xa8dc),
                                 (uint)*(byte *)(param_1 + 0xa8de),(uint)*(byte *)(param_1 + 0xa8df)
                                ), (uVar6 & 1) == 0)) goto LAB_02830af8;
          if (*(char *)(param_1 + 0xa8e0) == '\0') {
LAB_02830b00:
            uVar6 = 3;
          }
          else {
            uVar6 = FUN_0277d9a8(param_1 + 0xa8e4);
            if ((uVar6 & 1) == 0) goto LAB_02830b00;
            FUN_01ad5d04(&local_78,param_1 + 0xa8e4);
            uVar6 = FUN_01b032d0(&local_78);
            if (((uVar6 & 1) == 0) ||
               (uVar6 = nn::time::IsValidDate
                                  ((uint)*(ushort *)(param_1 + 0xa8ec),
                                   (uint)*(byte *)(param_1 + 0xa8ee),
                                   (uint)*(byte *)(param_1 + 0xa8ef)), (uVar6 & 1) == 0))
            goto LAB_02830b00;
            if (*(char *)(param_1 + 0xa8f0) != '\0') {
              uVar6 = FUN_0277d9a8(param_1 + 0xa8f4);
              if ((uVar6 & 1) != 0) {
                FUN_01ad5d04(&local_78,param_1 + 0xa8f4);
                uVar6 = FUN_01b032d0(&local_78);
                if (((uVar6 & 1) != 0) &&
                   (uVar6 = nn::time::IsValidDate
                                      ((uint)*(ushort *)(param_1 + 0xa8fc),
                                       (uint)*(byte *)(param_1 + 0xa8fe),
                                       (uint)*(byte *)(param_1 + 0xa8ff)), (uVar6 & 1) != 0)) {
                  pbVar4 = (byte *)0x0;
                  uVar5 = 0xffffffff;
                  goto LAB_02830abc;
                }
              }
            }
            uVar6 = 4;
          }
        }
      }
      uVar7 = uVar6;
    }
  }
  uVar5 = (undefined4)uVar6;
  pbVar4 = (byte *)(param_1 + 0xa8b0) + uVar7 * 0x10;
LAB_02830abc:
  *param_2 = uVar5;
  return pbVar4;
}

