
/* WARNING: Removing unreachable block (ram,0x02329210) */
/* WARNING: Removing unreachable block (ram,0x02329088) */
/* WARNING: Removing unreachable block (ram,0x02329044) */
/* WARNING: Removing unreachable block (ram,0x02329050) */
/* WARNING: Removing unreachable block (ram,0x0232905c) */
/* WARNING: Removing unreachable block (ram,0x02329070) */
/* WARNING: Removing unreachable block (ram,0x0232907c) */
/* WARNING: Removing unreachable block (ram,0x023291e4) */
/* WARNING: Removing unreachable block (ram,0x023291f0) */
/* WARNING: Removing unreachable block (ram,0x023291fc) */
/* WARNING: Removing unreachable block (ram,0x0232921c) */
/* WARNING: Removing unreachable block (ram,0x0232922c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02328d9c(long param_1,long param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined2 local_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined6 uStack_70;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined4 local_58;
  byte local_54;
  undefined1 local_53;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x17d0) >> 2 & 1) == 0) {
    if (*(char *)(param_2 + 0xdc) != '\0') {
LAB_02328de4:
      if (*(int *)(param_2 + 0xd8) == 0) {
        return 0;
      }
      local_78 = 0xfffe;
      uStack_76 = 0;
      uStack_75 = 0;
      uStack_74 = 0;
      uStack_72 = 0;
      FUN_0277d4ac(&local_78);
      FUN_016e49e4(&local_78,param_2 + 0xb0,*(int *)(param_2 + 0xb8) == 1);
      iVar5 = *(int *)(param_2 + 0xd8);
      if (iVar5 != 0) {
        uVar12 = *(undefined8 *)(param_2 + 200);
        cVar2 = *(char *)(param_2 + 0xdc);
        if (cVar2 == '\0') {
          if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
            pbVar13 = PTR_DAT_04bb32e0;
            if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
              pbVar13 = (byte *)(DAT_04cd19d8 + 0x158);
            }
            bVar11 = *(byte *)(param_1 + 0x1ee8);
            bVar10 = *pbVar13;
            if (7 < bVar10) {
              bVar10 = 0xff;
            }
            if (7 < bVar11) {
              bVar11 = 0xff;
            }
            if (bVar10 != bVar11) goto LAB_02328e38;
          }
        }
        else {
LAB_02328e38:
          *(char *)(param_1 + 0x1ec8) = (char)uVar12;
          *(int *)(param_1 + 0x1ecc) = (int)((ulong)uVar12 >> 0x20);
          *(undefined2 *)(param_1 + 0x1ed0) = local_78;
          *(undefined1 *)(param_1 + 0x1ed2) = uStack_76;
          *(undefined1 *)(param_1 + 0x1ed3) = uStack_75;
          *(uint *)(param_1 + 0x1ed4) = CONCAT22(uStack_72,uStack_74);
          *(int *)(param_1 + 0x1ed8) = iVar5;
          *(char *)(param_1 + 0x1edc) = cVar2;
          *(undefined2 *)(param_1 + 0x1ee0) = 0;
          lVar6 = FUN_0251e98c(1);
          puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x24a0) + 0xf0))(lVar6 + 0x24a0);
          *(undefined4 *)(param_1 + 0x1ee4) = *puVar7;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x17d0) | 4;
      goto LAB_02329294;
    }
    if (((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) &&
       (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar13 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar13 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar11 = *(byte *)(param_1 + 0x1ee8);
      bVar10 = *pbVar13;
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      if (bVar10 != bVar11) goto LAB_02328de4;
    }
  }
  if ((*(uint *)(param_1 + 0x17d0) >> 1 & 1) != 0) {
    return 0;
  }
  local_58 = *(undefined4 *)(param_1 + 0x230);
  local_53 = 0;
  pbVar13 = (byte *)(param_1 + 0x1ee8);
  local_54 = *pbVar13;
  if (7 < local_54) {
    local_54 = 0xff;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = SUB82(puVar1,0);
  uStack_76 = (undefined1)((ulong)puVar1 >> 0x10);
  uStack_75 = (undefined1)((ulong)puVar1 >> 0x18);
  uStack_74 = (undefined2)((ulong)puVar1 >> 0x20);
  uStack_72 = (undefined2)((ulong)puVar1 >> 0x30);
  uStack_70 = (undefined6)*(undefined8 *)(param_2 + 8);
  uStack_6a = (undefined2)((ulong)*(undefined8 *)(param_2 + 8) >> 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x60);
  local_68 = SUB86(puVar1,0);
  local_50 = param_1 + 0x1da0;
  uStack_62 = uStack_72;
  FUN_01184fd0(param_1 + 0x1db0,&local_78);
  uVar8 = FUN_01180280(*(undefined8 *)PTR_DAT_04bb3240,&local_78);
  if ((uVar8 & 1) == 0) {
    return 0;
  }
  if (*(char *)(param_2 + 0xc4) != '\0') {
    uStack_6a = 0;
    local_68 = 0;
    uStack_72 = 0;
    uStack_70 = 0;
    lVar6 = *(long *)PTR_DAT_04bb2230;
    if (lVar6 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x28);
    }
    local_48 = 0xd;
    *(undefined8 *)(lVar9 + 0xd90) = 0;
    *(undefined4 *)(lVar9 + 0xd98) = 1;
    *(undefined2 *)(lVar9 + 0xd78) = 0x100;
    *(undefined1 *)(lVar9 + 0xd9c) = 0;
    *(undefined4 *)(&DAT_00002140 + lVar9) = 0xd;
    *(undefined8 *)(lVar9 + 0xd80) = 0;
    *(undefined8 *)(lVar9 + 0xd88) = 0;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x28);
    }
    local_78 = 1;
    uStack_76 = 0;
    uStack_75 = 0;
    local_44 = 1;
    *(undefined4 *)(&DAT_00002140 + lVar6) = 1;
    uVar3 = DAT_0558600c;
    *(undefined4 *)(lVar6 + 0x2c) = _DAT_05586008;
    *(undefined4 *)(lVar6 + 0x30) = uVar3;
  }
  FUN_023292c0(param_1 + 0x1cb8,param_2);
  local_78 = 0xfffe;
  uStack_76 = 0;
  uStack_75 = 0;
  uStack_74 = 0;
  uStack_72 = 0;
  FUN_0277d4ac(&local_78);
  FUN_016e49e4(&local_78,param_2 + 0xb0,*(int *)(param_2 + 0xb8) == 1);
  puVar1 = PTR_DAT_04bb43c0;
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_78);
  lVar6 = *(long *)puVar1;
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
       (uVar4 = FUN_0277d6c4(&local_78), *(long *)puVar1 != 0)) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if (((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
         (uVar8 = (ulong)*pbVar13, uVar8 < 8)) {
        lVar6 = *DAT_0537d558;
        if (*(byte *)(lVar6 + 0x476) < 2) {
          iVar5 = FUN_02582d8c(pbVar13,2);
          if ((-1 < iVar5) && (uVar8 = (ulong)*pbVar13, *pbVar13 < 8)) {
LAB_02329254:
            lVar6 = DAT_054f5738 + uVar8 * 8;
            *(undefined2 *)(lVar6 + 0xe10) = local_78;
            *(undefined1 *)(lVar6 + 0xe12) = uStack_76;
            *(undefined1 *)(lVar6 + 0xe13) = uStack_75;
            *(uint *)(lVar6 + 0xe14) = CONCAT22(uStack_72,uStack_74);
          }
        }
        else {
          bVar10 = *(byte *)(lVar6 + uVar8 * 4 + 0x44e);
          if ((long)(char)bVar10 != 0xffffffffffffffff) {
            pbVar13 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x80;
            if (7 < bVar10) {
              pbVar13 = (byte *)(lVar6 + 0x48);
            }
            if ((*pbVar13 >> 3 & 1) != 0) goto LAB_02329254;
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1d98) = *(undefined4 *)(param_2 + 0xb8);
  uVar4 = *(uint *)(param_1 + 0x17d0) | 2;
LAB_02329294:
  *(uint *)(param_1 + 0x17d0) = uVar4;
  return 1;
}

