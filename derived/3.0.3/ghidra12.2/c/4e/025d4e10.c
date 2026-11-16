
void FUN_025d4e10(long param_1,long *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  short sVar8;
  short *psVar9;
  long lVar10;
  ushort *puVar11;
  undefined *local_68;
  char *pcStack_60;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  
  lVar10 = *param_2;
  local_54 = 0x1f0000001e;
  local_4c = 0x2100000020;
  local_44 = 0x22;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_54 + (long)*(int *)(param_1 + 0x28) * 4));
  puVar3 = PTR_DAT_04bb2020;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  pcStack_60 = "HasItem";
  psVar9 = (short *)(lVar10 + 0xc0);
  sVar8 = *psVar9;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_68,sVar8 != -2);
    sVar8 = *psVar9;
  }
  if (sVar8 != -2) {
    local_68 = puVar3 + 0x10;
    pcStack_60 = "ItemUniqueID";
    uVar4 = FUN_0277d6c4(psVar9);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_68,uVar4);
    }
  }
  local_68 = puVar3 + 0x10;
  pcStack_60 = "CardDesignID";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_68,*(undefined2 *)(lVar10 + 0x36e));
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    puVar11 = (ushort *)param_2[1];
    pcStack_60 = "ReserveYear";
    local_68 = puVar3 + 0x10;
    uVar6 = nn::time::IsValidDate
                      ((uint)*puVar11,(uint)(byte)puVar11[1],(uint)*(byte *)((long)puVar11 + 3));
    if (*(long *)(param_1 + 8) != 0) {
      uVar2 = *puVar11;
      if ((uVar6 & 1) == 0) {
        uVar2 = 2000;
      }
      FUN_02605660(*(long *)(param_1 + 8),&local_68,uVar2);
    }
    pcStack_60 = "ReserveMonth";
    puVar11 = (ushort *)param_2[1];
    local_68 = puVar3 + 0x10;
    uVar6 = nn::time::IsValidDate
                      ((uint)*puVar11,(uint)(byte)puVar11[1],(uint)*(byte *)((long)puVar11 + 3));
    if (*(long *)(param_1 + 8) != 0) {
      uVar1 = (undefined1)puVar11[1];
      if ((uVar6 & 1) == 0) {
        uVar1 = 1;
      }
      FUN_02605660(*(long *)(param_1 + 8),&local_68,uVar1);
    }
    puVar11 = (ushort *)param_2[1];
    local_68 = puVar3 + 0x10;
    pcStack_60 = "ReserveDay";
    uVar6 = nn::time::IsValidDate
                      ((uint)*puVar11,(uint)(byte)puVar11[1],(uint)*(byte *)((long)puVar11 + 3));
    lVar10 = *(long *)(param_1 + 8);
    if (lVar10 == 0) {
      return;
    }
    uVar7 = (ulong)*(byte *)((long)puVar11 + 3);
    if ((uVar6 & 1) == 0) {
      uVar7 = 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) != 1) {
      return;
    }
    if (*(char *)(lVar10 + 0xb8) != '\x01') {
      return;
    }
    local_68 = puVar3 + 0x10;
    pcStack_60 = "ToNpcUniqueID";
    iVar5 = FUN_020fd950(lVar10 + 0x60);
    lVar10 = *(long *)(param_1 + 8);
    if (lVar10 == 0) {
      return;
    }
    uVar7 = (ulong)iVar5;
  }
  FUN_02605660(lVar10,&local_68,uVar7);
  return;
}

