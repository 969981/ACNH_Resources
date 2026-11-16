
void FUN_029aae30(long param_1,long param_2,long param_3,uint param_4,undefined1 param_5)

{
  undefined *puVar1;
  long *plVar2;
  short sVar3;
  long *plVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  long *plVar8;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (*(int *)(param_2 + 0x18) != *(int *)(param_3 + 4)) {
    *(int *)(param_2 + 0x18) = *(int *)(param_3 + 4);
  }
  if ((param_4 & 1) != 0) {
    plVar4 = *(long **)(param_2 + 0x50);
    while (plVar4 != (long *)(param_2 + 0x48)) {
      plVar2 = (long *)plVar4[1];
      plVar8 = plVar2;
      if (*plVar4 != 0) {
        *(long **)(*plVar4 + 8) = plVar2;
        plVar8 = (long *)plVar4[1];
      }
      if (plVar8 != (long *)0x0) {
        *plVar8 = *plVar4;
      }
      *plVar4 = 0;
      plVar4[1] = 0;
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + -1;
      plVar4[-1] = *(long *)(param_2 + 0x60);
      *(long **)(param_2 + 0x60) = plVar4 + -1;
      plVar4 = plVar2;
    }
    uVar5 = 0xffffffff;
    *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
    local_74 = 0xfffe;
    FUN_0277d4ac(&local_74);
    local_6c = 0xfffe;
    FUN_0277d4ac(&local_6c);
    local_64 = *(undefined4 *)(param_2 + 0x18);
    local_60 = 0xffffffff;
    local_54 = 0;
    local_4c = 0;
    local_58 = 0;
    iVar7 = *(int *)(param_2 + 4);
    if (0xffffffea < iVar7 - 0xf9U) {
      uVar5 = FUN_026641e0((uint)(int)(char)((char)(iVar7 + 0x1bU) +
                                            (char)((iVar7 + 0x1bU & 0x80) >> 7)) >> 1 & 0xff,0);
      iVar7 = *(int *)(param_2 + 4);
    }
    local_60._0_5_ = CONCAT14(1,uVar5);
    local_60 = CONCAT17(iVar7 - 0x109U < 0x2a,CONCAT16(param_5,(undefined6)local_60)) &
               0xff01ffffffffffff;
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 == -1) {
      bVar6 = 0;
    }
    else {
      local_44 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      bVar6 = (byte)*(undefined4 *)(puVar1 + 4) & 1;
    }
    local_58 = CONCAT11(bVar6,iVar7 - 0x133U < 0x20);
    if (*(uint *)(param_2 + 0x18) < 0xc) {
      param_1 = param_1 + (ulong)*(uint *)(param_2 + 0x18) * 0x10;
      local_54 = *(undefined8 *)(param_1 + 0x62c60);
      local_4c = *(undefined8 *)(param_1 + 0x62c68);
    }
    else {
      local_54 = 0;
      local_4c = 0;
    }
    FUN_0298b040(param_2 + 0x40,&local_74);
  }
  return;
}

