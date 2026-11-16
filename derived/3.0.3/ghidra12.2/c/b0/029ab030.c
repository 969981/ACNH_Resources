
void FUN_029ab030(long param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  short sVar4;
  long *plVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  cVar3 = *(char *)(param_3 + 3);
  if ((*(char *)(param_2 + 8) != cVar3) && (*(char *)(param_2 + 8) = cVar3, cVar3 != '\0')) {
    plVar5 = *(long **)(param_2 + 0x50);
    while (plVar5 != (long *)(param_2 + 0x48)) {
      plVar2 = (long *)plVar5[1];
      plVar9 = plVar2;
      if (*plVar5 != 0) {
        *(long **)(*plVar5 + 8) = plVar2;
        plVar9 = (long *)plVar5[1];
      }
      if (plVar9 != (long *)0x0) {
        *plVar9 = *plVar5;
      }
      *plVar5 = 0;
      plVar5[1] = 0;
      *(int *)(param_2 + 0x58) = *(int *)(param_2 + 0x58) + -1;
      plVar5[-1] = *(long *)(param_2 + 0x60);
      *(long **)(param_2 + 0x60) = plVar5 + -1;
      plVar5 = plVar2;
    }
    uVar6 = 0xffffffff;
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
    iVar8 = *(int *)(param_2 + 4);
    if (0xffffffea < iVar8 - 0xf9U) {
      uVar6 = FUN_026641e0((uint)(int)(char)((char)(iVar8 + 0x1bU) +
                                            (char)((iVar8 + 0x1bU & 0x80) >> 7)) >> 1 & 0xff,0);
      iVar8 = *(int *)(param_2 + 4);
    }
    local_60._0_5_ = CONCAT14(1,uVar6);
    local_60 = CONCAT17(iVar8 - 0x109U < 0x2a,CONCAT16(param_4,(undefined6)local_60)) &
               0xff01ffffffffffff;
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 == -1) {
      bVar7 = 0;
    }
    else {
      local_44 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      bVar7 = (byte)*(undefined4 *)(puVar1 + 4) & 1;
    }
    local_58 = CONCAT11(bVar7,iVar8 - 0x133U < 0x20);
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

