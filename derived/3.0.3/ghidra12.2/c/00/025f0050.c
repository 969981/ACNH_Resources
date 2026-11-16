
void FUN_025f0050(long param_1,long param_2)

{
  undefined *puVar1;
  ushort uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  ushort *puVar10;
  undefined *local_168;
  char *pcStack_160;
  undefined *local_158;
  char *local_150;
  uint local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  FUN_02602950(param_1,0x3d);
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_150 = "MusicId";
  local_158 = puVar1;
  uVar5 = FUN_0277d6c4(param_2);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_158,uVar5);
    local_150 = "SongMethod";
    iVar6 = *(int *)(param_2 + 8);
    if (*(long *)(param_1 + 8) == 0) goto LAB_025f00d8;
    local_158 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_158,(long)iVar6);
  }
  iVar6 = *(int *)(param_2 + 8);
LAB_025f00d8:
  if (iVar6 == 0) {
    local_45 = 0;
    local_148 = 0x100;
    local_150 = local_144;
    local_144[0] = 0;
    local_158 = PTR_DAT_04bb21f8 + 0x10;
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))((long *)(param_2 + 0x10));
    puVar10 = *(ushort **)(param_2 + 0x18);
    (**(code **)(local_158 + 0x18))(&local_158);
    if (local_148 != 0) {
      uVar7 = 0;
      lVar8 = 0x7fffffff;
      do {
        pbVar9 = (byte *)(local_150 + uVar7);
        if (lVar8 == 0) goto LAB_025f0220;
        uVar2 = *puVar10;
        if (uVar2 == 0) goto LAB_025f0220;
        bVar3 = (byte)uVar2;
        if (uVar2 < 0x80) {
          *pbVar9 = bVar3;
          iVar6 = 1;
        }
        else if (uVar2 < 0x800) {
          if (local_148 <= uVar7 + 1) break;
          *pbVar9 = (byte)(uVar2 >> 6) | 0xc0;
          pbVar9[1] = bVar3 & 0x3f | 0x80;
          iVar6 = 2;
        }
        else {
          if (local_148 <= uVar7 + 2) break;
          *pbVar9 = (byte)(uVar2 >> 0xc) | 0xe0;
          pbVar9[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
          pbVar9[2] = bVar3 & 0x3f | 0x80;
          iVar6 = 3;
        }
        uVar7 = iVar6 + uVar7;
        lVar8 = lVar8 + -1;
        puVar10 = puVar10 + 1;
      } while (uVar7 < local_148);
      pbVar9 = (byte *)(local_150 + (uVar7 - 1));
LAB_025f0220:
      *pbVar9 = 0;
    }
    local_168 = puVar4 + 0x10;
    pcStack_160 = "ReqName";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605980(*(long *)(param_1 + 8),&local_168,&local_158);
    }
  }
  else if (iVar6 == 1) {
    local_158 = puVar4 + 0x10;
    local_150 = "FeelType";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_158,(long)*(int *)(param_2 + 0xc));
    }
  }
  local_158 = puVar4 + 0x10;
  local_150 = "HasStickLight";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_026054d0(*(long *)(param_1 + 8),&local_158,*(undefined1 *)(param_2 + 0x88));
  }
  return;
}

