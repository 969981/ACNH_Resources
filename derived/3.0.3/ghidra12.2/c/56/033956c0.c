
uint FUN_033956c0(byte *param_1)

{
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  long lVar10;
  undefined *local_40;
  char *pcStack_38;
  
  lVar10 = *(long *)PTR_DAT_04bc7368;
  FUN_02507c6c(&local_40,1,1,1,0);
  pbVar8 = (byte *)(lVar10 + 0xc);
  if (*pbVar8 < 8) {
    bVar9 = *param_1;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (*pbVar8 != bVar9) goto LAB_03395724;
LAB_0339579c:
    puVar1 = (uint *)(pbVar8 + 4);
    uVar7 = FUN_02640eb0();
  }
  else {
LAB_03395724:
    pbVar8 = (byte *)(lVar10 + 0x14);
    if (*pbVar8 < 8) {
      bVar9 = *param_1;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (*pbVar8 == bVar9) goto LAB_0339579c;
    }
    pbVar8 = (byte *)(lVar10 + 0x1c);
    if (*pbVar8 < 8) {
      bVar9 = *param_1;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (*pbVar8 == bVar9) goto LAB_0339579c;
    }
    pbVar8 = (byte *)(lVar10 + 0x24);
    if (*pbVar8 < 8) {
      bVar9 = *param_1;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (*pbVar8 == bVar9) goto LAB_0339579c;
    }
    puVar1 = (uint *)(lVar10 + 0x30);
    uVar7 = FUN_02640eb0();
  }
  if ((uVar7 & 1) != 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "WHEREAREN_Unlock_DustCloth_02";
    iVar5 = FUN_0274bce0(param_1,&local_40);
    puVar4 = PTR_DAT_04bb6298;
    uVar6 = 0;
    if (iVar5 == 0) goto LAB_03395a4c;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 1 & 1) != 0) goto LAB_03395a48;
    }
    local_40._0_4_ = 0xe;
    if ((*puVar1 >> 0xe & 1) == 0) {
      uVar6 = (uint)sVar3;
      if (*param_1 < 8) {
        if ((int)sVar3 != 0xffffffff) {
          local_40._0_4_ = 6;
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar6 * 8);
          if (0xff < uVar6) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar2 >> 6 & 1) != 0) && (uVar7 = FUN_02915598(param_1), (uVar7 & 1) != 0))
          goto LAB_03395848;
        }
      }
      else if (uVar6 != 0xffffffff) {
        local_40._0_4_ = 6;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < uVar6) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 6 & 1) != 0) goto LAB_03395848;
      }
      if ((*(long *)PTR_DAT_04bb5ce0 != 0) && (sVar3 = *(short *)puVar4, sVar3 != -1)) {
        local_40._0_4_ = 0x19;
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0x19 & 1) == 0) {
          local_40._0_4_ = 7;
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar2 >> 7 & 1) != 0) goto LAB_03395848;
        }
      }
      uVar7 = FUN_016e614c();
      if ((((uVar7 & 1) == 0) && (uVar7 = FUN_016cf9f0(), (uVar7 & 1) == 0)) &&
         (uVar7 = FUN_0180b700(), (uVar7 & 1) == 0)) goto LAB_03395a48;
    }
LAB_03395848:
    bVar9 = *(byte *)(lVar10 + 8);
    if ((((((bVar9 & 1) != 0) && ((bVar9 >> 1 & 1) == 0)) &&
         (((bVar9 >> 2 & 1) == 0 &&
          ((uVar6 = *puVar1, (uVar6 >> 1 & 1) == 0 && ((uVar6 >> 6 & 1) == 0)))))) &&
        (local_40 = (undefined *)CONCAT44(local_40._4_4_,0xc), (uVar6 >> 0xc & 1) == 0)) &&
       (uVar7 = FUN_02538bb0(param_1), (uVar7 & 1) != 0)) {
      FUN_025196e4(&local_40);
      uVar6 = FUN_02553884(3,&local_40,*(undefined4 *)PTR_DAT_04bb3238,1);
      goto LAB_03395a4c;
    }
  }
LAB_03395a48:
  uVar6 = 0;
LAB_03395a4c:
  return uVar6 & 1;
}

