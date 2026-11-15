
void FUN_02470028(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = CONCAT44(local_38._4_4_,0xfe);
  uVar4 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar4 = 0;
    if (uVar2 < 0x149) {
      uVar4 = uVar2;
    }
  }
  if ((uVar4 == 0xfe) && (*(int *)(param_1 + 0x178) == 0)) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if (7 < *pbVar1) {
      DAT_054967ac = 0;
    }
    if ((*(byte *)(param_1 + 0x17d2) >> 6 & 1) != 0) {
      local_40 = 0xfffe;
      FUN_0277d4ac(&local_40);
      local_40 = *(undefined8 *)(param_1 + 0x1900);
      local_38 = 0xfffe;
      FUN_0277d4ac(&local_38);
      FUN_016e49e4(&local_38,&local_40,0);
      puVar3 = PTR_DAT_04bb43c0;
      lVar6 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_38);
      lVar5 = *(long *)puVar3;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar6 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_026738b0(pbVar1,&local_38,1,0);
          lVar5 = *(long *)puVar3;
        }
      }
      uVar4 = FUN_0277d6c4(&local_40);
      if (*(long *)puVar3 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          FUN_023277b0(pbVar1,&local_40);
        }
      }
    }
  }
  return;
}

