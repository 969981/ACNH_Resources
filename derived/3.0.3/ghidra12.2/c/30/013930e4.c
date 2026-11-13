
uint FUN_013930e4(long param_1,undefined2 *param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_a0 [40];
  undefined2 local_78 [2];
  undefined4 local_74;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  byte local_47;
  undefined2 local_46;
  undefined8 local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined4 local_30;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_24;
  undefined1 uStack_23;
  undefined2 uStack_22;
  
  local_60 = 0;
  local_74 = 0;
  local_70 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_68 = PTR_DAT_04bb2010 + 0x10;
  local_78[0] = *param_2;
  uStack_50 = 0;
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  bVar4 = *(byte *)(lVar8 + 0x473);
  puVar7 = PTR_DAT_04bc1220;
  if ((long)(char)bVar4 != 0xffffffffffffffff) {
    puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
    if (7 < bVar4) {
      puVar2 = (uint *)(lVar8 + 0x48);
    }
    if ((*puVar2 & 8) != 0) {
      puVar7 = (undefined1 *)(lVar8 + 0x473);
    }
  }
  local_48 = *puVar7;
  local_34 = 0;
  local_30 = 0;
  local_40 = *(undefined8 *)(param_2 + 0x1c);
  local_38 = *(undefined4 *)(param_2 + 0x18);
  local_2c = param_2[0x24];
  local_47 = *(byte *)(param_1 + 0x10);
  if (7 < local_47) {
    local_47 = 0xff;
  }
  local_2a = *(undefined1 *)((long)param_2 + 0x4b);
  local_32 = *(undefined1 *)((long)param_2 + 0x4d);
  local_46 = param_2[0x1a];
  local_29 = *(undefined1 *)(param_2 + 0x1b);
  local_58 = puStack_68;
  FUN_01398524(auStack_a0,local_78);
  uVar6 = 0;
  uVar3 = *(uint *)(param_3 + 8);
  lVar8 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
  uVar5 = *(uint *)(param_3 + 0xc);
  uVar1 = uVar3;
  if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= uVar3) {
    uVar1 = 0;
  }
  if (uVar5 < *(uint *)(lVar8 + (long)(int)uVar1 * 0x18 + 8)) {
    lVar8 = *(long *)(lVar8 + (long)(int)uVar1 * 0x18 + 0x10);
    if ((*(uint *)(param_3 + 0x10) < *(uint *)(lVar8 + (long)(int)uVar5 * 0x10)) &&
       (lVar8 = *(long *)(lVar8 + (long)(int)uVar5 * 0x10 + 8), lVar8 != 0)) {
      uStack_22 = (undefined2)(uVar3 >> 0x10);
      _local_24 = CONCAT11(*(undefined1 *)(param_2 + 0x26),*(undefined1 *)(param_2 + 0x25));
      uVar6 = FUN_01395654(lVar8 + (long)(int)*(uint *)(param_3 + 0x10) * 0x518,auStack_a0,&local_24
                          );
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6 & 1;
}

