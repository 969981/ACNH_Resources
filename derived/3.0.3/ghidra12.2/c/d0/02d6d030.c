
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02d6d030(long param_1)

{
  long lVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_52 [2];
  ushort local_50 [4];
  ushort local_48 [2];
  ushort local_44 [2];
  
  puVar4 = PTR_DAT_04bb3170;
  if ((*(long *)(param_1 + 0x1680) != 0) &&
     (lVar10 = *(long *)(*(long *)(param_1 + 0x1680) + 0x570), lVar10 != 0)) {
    uVar3 = *(ushort *)(param_1 + 0x1668);
    local_48[0] = *(ushort *)PTR_DAT_04bb3170;
    uVar6 = FUN_007ef180(param_1 + 0x1668);
    FUN_0344d0c0(local_48,uVar3 & 0x7f,uVar6 & 1);
    puVar5 = PTR_DAT_04bb5ce0;
    if (local_48[0] != *(ushort *)puVar4) {
      uVar3 = local_48[0] & 0x7f;
      local_50[0] = *(ushort *)puVar4;
      uVar6 = FUN_007ef180(local_48);
      FUN_0344d0c0(local_50,uVar3,uVar6 & 1);
      lVar9 = *(long *)puVar5;
      puVar2 = puVar4;
      if (lVar9 != 0) {
        puVar2 = (undefined *)(lVar9 + 0xe5c);
      }
      FUN_007ef010(local_44,puVar2);
      if (local_50[0] == local_44[0]) {
        return;
      }
    }
    FUN_0308c680(local_50);
    if (local_50[0] != 0xfffe) {
      uVar8 = FUN_0267c100(param_1 + 0x1f8);
      if ((uVar8 & 1) == 0) {
        *(undefined4 *)(param_1 + 0x2454) = 0x50;
        return;
      }
      FUN_0267d2b0(param_1 + 0x1f8,0,local_50,0);
    }
    FUN_007ef010(auStack_52,local_48);
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      FUN_007ef010(local_44,auStack_52);
      FUN_007ef010(local_50,local_44);
      if (*(char *)(lVar9 + 0xee4) != '\0') {
        lVar1 = lVar9 + 0xda0;
        *(ushort *)(lVar9 + 0xe5c) = local_50[0];
        *(byte *)(lVar9 + 0xedc) = *(byte *)(lVar9 + 0xedc) & 0xdf;
        uVar7 = _DAT_05586008;
        if (local_50[0] != *(ushort *)puVar4) {
          *(undefined4 *)(lVar9 + 0xe58) = DAT_0558600c;
          *(undefined4 *)(lVar9 + 0xe54) = uVar7;
          *(undefined4 *)(lVar9 + 0xfa8) = 0xffffffff;
        }
        FUN_017ef108(lVar1,0,0);
        FUN_017eff3c(lVar1,0,0);
        FUN_017f0b3c(lVar1);
      }
    }
    uVar7 = FUN_02d6cf20(param_1 + 0x1668,param_1 + 0x1750,param_1 + 0x1db0);
    FUN_02d6ccbc(param_1 + 0x1688,lVar10,0,uVar7);
  }
  return;
}

