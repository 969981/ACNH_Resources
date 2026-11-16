
void FUN_029ab7c0(long param_1,long param_2,long param_3,long *param_4,undefined1 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  uint local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 local_34;
  
  lVar12 = DAT_055f6860;
  if (*(int *)(param_2 + 0x58) != 0) {
    lVar11 = *(long *)(param_2 + 0x50);
    if (*(int *)(param_2 + 0x58) < 1) {
      lVar11 = 0;
    }
    puVar1 = (undefined4 *)0x0;
    if (lVar11 != 0) {
      puVar1 = (undefined4 *)(lVar11 + -8);
    }
    puVar2 = (undefined4 *)&DAT_05586008;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uVar6 = FUN_0277d6c4(&local_58);
    for (lVar12 = *(long *)(lVar12 + 0x19f800); lVar12 != 0; lVar12 = *(long *)(lVar12 + 8)) {
      while (*(ushort *)(lVar12 + 0x20) <= uVar6) {
        if (uVar6 <= *(ushort *)(lVar12 + 0x20)) {
          uVar8 = *(undefined4 *)(lVar12 + 0x24);
          goto LAB_029ab888;
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 == 0) goto LAB_029ab87c;
      }
    }
LAB_029ab87c:
    uVar8 = 0;
LAB_029ab888:
    if (*param_4 == 0) {
      uVar7 = FUN_0277d6c4(&local_58);
      *(undefined2 *)(param_2 + 0x122) = uVar7;
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
      *(undefined8 *)(param_2 + 0x30) = 0;
      local_38 = uVar8;
      FUN_029a7d90(param_1,param_2,&local_38);
      *(long *)(param_2 + 0x20) = param_3;
      *(undefined1 *)(param_2 + 0x120) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0x28) = uVar8;
      *(long *)(param_2 + 0x30) = *param_4 + param_3;
    }
    local_88 = 0xfffe;
    FUN_0277d4ac(&local_88);
    local_80 = 0xfffe;
    FUN_0277d4ac(&local_80);
    local_68 = 0;
    uStack_60 = 0;
    lVar12 = *(long *)(param_2 + 0x50);
    local_70 = 0;
    local_6c = 0;
    if (*(int *)(param_2 + 0x58) < 1) {
      lVar12 = 0;
    }
    puVar3 = (undefined8 *)0x0;
    if (lVar12 != 0) {
      puVar3 = (undefined8 *)(lVar12 + -8);
    }
    puVar4 = (undefined8 *)&DAT_05586008;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    local_88 = *puVar4;
    _local_78 = CONCAT44(0xffffffff,*(undefined4 *)(param_2 + 0x18));
    iVar10 = *(int *)(param_2 + 4);
    if (iVar10 - 0xf9U < 0xffffffeb) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = FUN_026641e0((uint)(int)(char)((char)(iVar10 + 0x1bU) +
                                            (char)((iVar10 + 0x1bU & 0x80) >> 7)) >> 1 & 0xff,0);
      iVar10 = *(int *)(param_2 + 4);
    }
    _local_78 = CONCAT44(uVar8,local_78);
    local_70 = CONCAT13(iVar10 - 0x109U < 0x2a,CONCAT12(param_5,(short)local_70)) & 0xff01ff00;
    if (DAT_04c487d4 == -1) {
      bVar9 = 0;
    }
    else {
      local_34 = 0x20;
      puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar5 = PTR_DAT_04bc39f8;
      }
      bVar9 = (byte)*(undefined4 *)(puVar5 + 4) & 1;
    }
    local_6c = CONCAT11(bVar9,iVar10 - 0x133U < 0x20);
    if (*(uint *)(param_2 + 0x18) < 0xc) {
      param_1 = param_1 + (ulong)*(uint *)(param_2 + 0x18) * 0x10;
      local_68 = *(undefined8 *)(param_1 + 0x62c60);
      uStack_60 = *(undefined8 *)(param_1 + 0x62c68);
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
    }
    FUN_0298b040(param_2 + 0x40,&local_88);
  }
  return;
}

