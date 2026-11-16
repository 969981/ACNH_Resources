
void FUN_029ab4d0(long param_1,long param_2,byte *param_3,uint param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  
  local_6c = 0xfffe;
  FUN_0277d4ac(&local_6c);
  local_a4 = (ulong)(ushort)*(undefined4 *)(param_3 + 0x24);
  FUN_0277d4ac(&local_a4);
  local_74 = 0xfffe;
  local_6c._0_4_ = (undefined4)local_a4;
  local_6c._4_4_ = local_a4._4_4_;
  FUN_0277d4ac(&local_74);
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar6 = 0;
  if (uVar2 != 99999 && -1 < (int)uVar2) {
    uVar6 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  lVar9 = *(long *)(DAT_055f6860 + 0x19f820);
joined_r0x029ab580:
  do {
    if (lVar9 == 0) {
      local_a4 = 0xfffe;
LAB_029ab5d8:
      FUN_0277d4ac(&local_a4);
      uVar4 = local_a4;
      local_74._4_4_ = local_a4._4_4_;
      local_a4 = 0xfffe;
      local_74._0_4_ = (undefined4)uVar4;
      FUN_0277d4ac(&local_a4);
      local_9c = 0xfffe;
      FUN_0277d4ac(&local_9c);
      uVar6 = 0xffffffff;
      local_84 = 0;
      local_7c = 0;
      local_88 = 0;
      local_90 = 0xffffffff;
      local_a4 = CONCAT44(local_6c._4_4_,(undefined4)local_6c);
      local_9c = CONCAT44(local_74._4_4_,(undefined4)local_74);
      iVar8 = *(int *)(param_2 + 4);
      local_94 = *(undefined4 *)(param_2 + 0x18);
      if (0xffffffea < iVar8 - 0xf9U) {
        uVar6 = FUN_026641e0((uint)(int)(char)((char)(iVar8 + 0x1bU) +
                                              (char)((iVar8 + 0x1bU & 0x80) >> 7)) >> 1 & 0xff,0);
        iVar8 = *(int *)(param_2 + 4);
      }
      local_90._0_6_ = (uint6)uVar6;
      local_90._0_7_ = CONCAT16(param_8,(uint6)local_90) & 0x1ffffffffffff;
      local_90 = (ulong)CONCAT25((short)((uint7)local_90 >> 0x28),
                                 CONCAT14(*param_3 >> 3,(undefined4)local_90)) & 0xffffff01ffffffff;
      local_90._0_6_ = CONCAT15(*(undefined1 *)(param_2 + 8),(undefined5)local_90);
      local_90 = CONCAT17(iVar8 - 0x109U < 0x2a,(uint7)local_90);
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 == -1) {
        bVar7 = 0;
      }
      else {
        local_64 = 0x20;
        puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
        if (0xff < (uint)(int)sVar3) {
          puVar1 = PTR_DAT_04bc39f8;
        }
        bVar7 = (byte)*(undefined4 *)(puVar1 + 4) & 1;
      }
      local_88 = CONCAT11(bVar7,iVar8 - 0x133U < 0x20);
      if (*(uint *)(param_2 + 0x18) < 0xc) {
        lVar9 = param_1 + (ulong)*(uint *)(param_2 + 0x18) * 0x10;
        local_84 = *(undefined8 *)(lVar9 + 0x62c60);
        local_7c = *(undefined8 *)(lVar9 + 0x62c68);
      }
      else {
        local_84 = 0;
        local_7c = 0;
      }
      FUN_0298b040(param_2 + 0x40,&local_a4);
      if ((*(char *)(param_2 + 8) != '\0') && ((*(byte *)(param_2 + 0x58) & 0xfe) == 0)) {
        local_a4 = 0xfffe;
        FUN_0277d4ac(&local_a4);
        uVar5 = FUN_0277d6c4(&local_a4);
        *(undefined2 *)(param_2 + 0x122) = uVar5;
        local_a8 = 0;
        FUN_029a7d90(param_1,param_2,&local_a8);
        FUN_029ab224(param_2,param_4 & 1,param_5,param_6,param_7);
        *(undefined1 *)(param_2 + 8) = 0;
      }
      return;
    }
    if ((int)uVar6 < *(int *)(lVar9 + 0x20)) {
      lVar9 = *(long *)(lVar9 + 8);
      goto joined_r0x029ab580;
    }
    if ((int)uVar6 <= *(int *)(lVar9 + 0x20)) {
      local_a4 = (ulong)(ushort)*(undefined4 *)(lVar9 + 0x2c);
      goto LAB_029ab5d8;
    }
    lVar9 = *(long *)(lVar9 + 0x10);
  } while( true );
}

