
void FUN_0231ca24(long param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  byte bVar7;
  long lVar8;
  undefined *local_40;
  char *pcStack_38;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((param_2 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x17cc) >> 0x19 & 1) == 0) {
      return;
    }
    uVar6 = FUN_00a79390(pbVar1);
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar5 = *(uint *)(param_1 + 0x17cc) & 0xfdffffff;
  }
  else {
    if ((*(uint *)(param_1 + 0x17cc) >> 0x19 & 1) != 0) {
      return;
    }
    uVar5 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar3 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      uVar5 = 0;
      if (uVar3 < 0x149) {
        uVar5 = uVar3;
      }
    }
    if (uVar5 == 0x19) {
      return;
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "WHEREAREN_LessonEventStart";
    iVar4 = FUN_02753180(pbVar1,&local_40);
    if (iVar4 != 0) {
      return;
    }
    lVar8 = *(long *)PTR_DAT_04bb6270;
    if (lVar8 == 0) {
      return;
    }
    uVar5 = FUN_00a76844(lVar8,0x13);
    if (uVar5 == 0xffffffff) {
      return;
    }
    pbVar2 = (byte *)(lVar8 + 0x10) + (ulong)uVar5 * 0x20;
    if (0x1f < uVar5) {
      pbVar2 = (byte *)(lVar8 + 0x10);
    }
    bVar7 = *pbVar1;
    pbVar2[0x18] = 0;
    pbVar2[0x1c] = 0;
    pbVar2[0x1d] = 0;
    pbVar2[0x1e] = 0;
    pbVar2[0x1f] = 0;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *pbVar2 = bVar7;
    pbVar2[8] = 0xff;
    pbVar2[9] = 0xff;
    pbVar2[10] = 0xff;
    pbVar2[0xb] = 0xff;
    pbVar2[0xc] = 0xff;
    pbVar2[0xd] = 0xff;
    pbVar2[0xe] = 0xff;
    pbVar2[0xf] = 0xff;
    pbVar2[0x10] = 9;
    pbVar2[0x11] = 0;
    pbVar2[0x12] = 0;
    pbVar2[0x13] = 0;
    pbVar2[0x14] = 0;
    pbVar2[0x15] = 0;
    pbVar2[0x16] = 0;
    pbVar2[0x17] = 0;
    if (*(int *)(lVar8 + 0x410) < *(int *)(lVar8 + 0x414)) {
      *(byte **)(*(long *)(lVar8 + 0x418) + (long)*(int *)(lVar8 + 0x410) * 8) = pbVar2;
      *(int *)(lVar8 + 0x410) = *(int *)(lVar8 + 0x410) + 1;
    }
    uVar5 = *(uint *)(param_1 + 0x17cc) | 0x2000000;
  }
  *(uint *)(param_1 + 0x17cc) = uVar5;
  return;
}

