
uint FUN_014a0f60(long param_1,byte param_2,undefined4 *param_3,long param_4,undefined4 *param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  uVar4 = FUN_0277e294(param_3);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar4 & 1) != 0) {
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = *param_3;
    uStack_6c = param_3[1];
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_3);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
          local_68 = lVar8;
        }
      }
    }
    local_90 = 0;
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_98 = PTR_DAT_04bb2010 + 0x10;
    local_80 = 0;
    local_88 = puStack_98;
    FUN_01afb480(&local_78,&local_a0);
    uVar6 = local_90._4_4_ + *(int *)(param_4 + 0xc);
    uVar1 = (int)local_90 + *(int *)(param_4 + 8);
    local_80._0_4_ = (int)local_80 + *(int *)(param_4 + 8);
    param_1 = param_1 + 0x280;
    uVar5 = local_80._4_4_ + *(int *)(param_4 + 0xc) + 1;
    if ((param_2 & 1) == 0) {
      if (uVar5 != uVar6) {
        uVar7 = uVar1;
        do {
          if ((((int)uVar6 < 0x40) && ((int)uVar7 < 0x40)) && (-1 < (int)(uVar6 | uVar7))) {
            lVar8 = param_1 + (ulong)uVar7 * 0x3000;
            if (0x3f < uVar7) {
              lVar8 = param_1;
            }
            lVar2 = lVar8 + (ulong)uVar6 * 0xc0;
            if (0x3f < uVar6) {
              lVar2 = lVar8;
            }
            *(byte *)(lVar2 + 0xa8) = param_2 & 1;
            *(undefined1 *)(lVar2 + 0xa9) = 0;
            *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_4 + 8);
            *(undefined4 *)(lVar2 + 0xbc) = *(undefined4 *)(param_4 + 0xc);
          }
          if ((int)uVar7 < (int)local_80) {
            uVar7 = uVar7 + 1;
          }
          else {
            uVar6 = uVar6 + 1;
            uVar7 = uVar1;
          }
        } while ((uVar1 != uVar7) || (uVar5 != uVar6));
      }
    }
    else if (uVar5 != uVar6) {
      uVar7 = uVar1;
      do {
        if ((((int)uVar6 < 0x40) && ((int)uVar7 < 0x40)) && (-1 < (int)(uVar6 | uVar7))) {
          lVar8 = param_1 + (ulong)uVar7 * 0x3000;
          if (0x3f < uVar7) {
            lVar8 = param_1;
          }
          lVar2 = lVar8 + (ulong)uVar6 * 0xc0;
          if (0x3f < uVar6) {
            lVar2 = lVar8;
          }
          *(byte *)(lVar2 + 0xa8) = param_2 & 1;
          *(char *)(lVar2 + 0xa9) = (char)*param_5;
          *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_4 + 8);
          *(undefined4 *)(lVar2 + 0xbc) = *(undefined4 *)(param_4 + 0xc);
        }
        if ((int)uVar7 < (int)local_80) {
          uVar7 = uVar7 + 1;
        }
        else {
          uVar6 = uVar6 + 1;
          uVar7 = uVar1;
        }
      } while ((uVar1 != uVar7) || (uVar5 != uVar6));
    }
  }
  return uVar4 & 1;
}

