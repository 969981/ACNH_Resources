
void FUN_006e9c00(undefined8 param_1,undefined4 param_2,long *param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ushort *puVar5;
  long lVar6;
  int iVar7;
  byte *pbVar8;
  undefined **local_58;
  byte *pbStack_50;
  undefined4 local_48;
  byte local_44 [12];
  undefined1 local_38;
  
  local_38 = 0;
  local_44[0] = 0;
  local_48 = 0xd;
  local_58 = &PTR_LAB_048fc088;
  pbStack_50 = local_44;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar4 = 0;
  lVar6 = 0x7fffffff;
  puVar5 = (ushort *)param_3[1];
  do {
    uVar3 = (uint)uVar4;
    pbVar8 = local_44 + uVar4;
    if (lVar6 == 0) goto LAB_006e9d04;
    uVar1 = *puVar5;
    if (uVar1 == 0) goto LAB_006e9d04;
    bVar2 = (byte)uVar1;
    if (uVar1 < 0x80) {
      *pbVar8 = bVar2;
      iVar7 = 1;
    }
    else if (uVar1 < 0x800) {
      if (0xb < uVar3) break;
      *pbVar8 = (byte)(uVar1 >> 6) | 0xc0;
      local_44[uVar4 + 1] = bVar2 & 0x3f | 0x80;
      iVar7 = 2;
    }
    else {
      if (0xc < uVar3 + 2) break;
      *pbVar8 = (byte)(uVar1 >> 0xc) | 0xe0;
      local_44[uVar4 + 1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
      local_44[uVar4 + 2] = bVar2 & 0x3f | 0x80;
      iVar7 = 3;
    }
    uVar4 = (ulong)(iVar7 + uVar3);
    lVar6 = lVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar7 + uVar3 < 0xd);
  pbVar8 = local_44 + ((int)uVar4 - 1);
LAB_006e9d04:
  *pbVar8 = 0;
  FUN_006e9870(param_1,param_2,&local_58);
  return;
}

