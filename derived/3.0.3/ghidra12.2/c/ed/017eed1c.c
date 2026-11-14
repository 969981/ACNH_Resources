
void FUN_017eed1c(long param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  if (*(short *)(param_1 + 0xf4) != -2) {
    local_58 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_60 = *param_2;
    uStack_5c = param_2[1];
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    local_68 = puVar1;
    uVar6 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
          local_58 = lVar7;
        }
      }
    }
    local_78 = *(undefined4 *)(param_1 + 0xf4);
    uStack_74 = *(undefined4 *)(param_1 + 0xf8);
    lVar7 = *(long *)puVar2;
    local_70 = 0;
    local_80 = puVar1;
    uVar6 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar2 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4((short *)(param_1 + 0xf4));
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar6 * 8), lVar7 != 0)) {
          local_70 = lVar7;
        }
      }
    }
    sVar4 = FUN_01b01f10(&local_68);
    sVar5 = FUN_01b01f10(&local_80);
    if ((sVar4 != sVar5) || (*(char *)(param_1 + 0x183) != '\0')) {
      bVar3 = *(int *)(param_1 + 0x164) != 1;
      if (bVar3) {
        *(undefined1 *)(param_1 + 0x179) = 0;
        *(undefined4 *)(param_1 + 0x16c) = 0;
        *(undefined4 *)(param_1 + 0x174) = 0x3c;
      }
      else {
        *(undefined1 *)(param_1 + 0x178) = 0;
        *(undefined4 *)(param_1 + 0x170) = 0x3c;
        *(undefined4 *)(param_1 + 0x168) = 0;
      }
      *(uint *)(param_1 + 0x164) = (uint)bVar3;
      *(undefined1 *)(param_1 + 0x183) = 0;
    }
  }
  FUN_017f86e0(param_1,param_2,0,param_3 & 1,param_4 & 1);
  return;
}

