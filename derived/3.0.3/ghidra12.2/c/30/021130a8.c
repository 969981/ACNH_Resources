
void FUN_021130a8(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  uint3 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long *plVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  undefined1 local_24 [4];
  ulong local_20;
  uint local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  puVar4 = PTR_DAT_04bb27d0;
  plVar8 = *(long **)PTR_DAT_04bb27d0;
  lVar11 = *plVar8;
  bVar3 = *(byte *)(lVar11 + 0x473);
  pbVar9 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      pbVar9 = (byte *)(lVar11 + 0x473);
    }
  }
  local_20._0_3_ =
       CONCAT12(*pbVar9 >> 3,
                CONCAT11((char)(CONCAT14(*pbVar9,param_3 << 0x18) >> 0x1b),(char)(param_3 << 5))) &
       0x1ffff | 7;
  uVar5 = (uint3)local_20;
  local_20 = (ulong)(uint3)local_20;
  uVar6 = local_20;
  if (DAT_053e5c10 != 0) {
    uVar10 = (ulong)param_3;
    if (0x6c < param_3) {
      uVar10 = 0;
    }
    *(byte *)(DAT_053e5c10 + uVar10 + 0x1a00) = *(byte *)(DAT_053e5c10 + uVar10 + 0x1a00) | 1;
  }
  lVar11 = *plVar8;
  bVar3 = *(byte *)(lVar11 + 0x473);
  uVar10 = (ulong)(char)bVar3;
  if (uVar10 != 0xffffffffffffffff) {
    pbVar9 = (byte *)(lVar11 + 0x48) + (uVar10 & 0xffffffff) * 0x80;
    if (7 < bVar3) {
      pbVar9 = (byte *)(lVar11 + 0x48);
    }
    if (((*pbVar9 >> 3 & 1) != 0) && (*(byte *)(lVar11 + 0x472) != bVar3)) {
      local_18 = 0;
      local_12 = 0;
      local_14 = 0xff01;
      if (*(int *)(param_1 + 8) < 0) {
        return;
      }
      FUN_01db1df0(**(long **)puVar4 + 0x480,*(int *)(param_1 + 8),&local_18,&local_20,8,0);
      return;
    }
  }
  local_20._0_2_ = (ushort)uVar5;
  local_18 = (ushort)local_20 >> 5 & 0xff;
  puVar7 = &DAT_0537bdbc;
  lVar1 = param_1 + 0x30 + (ulong)local_18 * 2;
  if (0x6c < local_18) {
    lVar1 = param_1 + 0x30;
  }
  if (bVar3 != 0xff) {
    puVar2 = (uint *)(lVar11 + 0x48) + (uVar10 & 0xffffffff) * 0x20;
    if (7 < bVar3) {
      puVar2 = (uint *)(lVar11 + 0x48);
    }
    puVar7 = &DAT_0537bdbc;
    if ((*puVar2 & 8) != 0) {
      puVar7 = (undefined1 *)(lVar11 + 0x473);
    }
  }
  local_24[0] = *puVar7;
  local_20 = uVar6;
  FUN_02112740(lVar1,&local_20,local_24);
  return;
}

