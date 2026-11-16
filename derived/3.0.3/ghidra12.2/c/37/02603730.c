
void FUN_02603730(long param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined *local_30;
  char *pcStack_28;
  
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 1) ||
     (uVar3 = *(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) + 1 & 0xff, uVar3 < 2)) {
    if ((*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2) ||
       (lVar4 = **(long **)PTR_DAT_04bb27d0, *(byte *)(lVar4 + 0x476) < 2)) {
      uVar3 = 1;
    }
    else {
      bVar2 = *(byte *)(lVar4 + 0x473);
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        pbVar1 = (byte *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
        if (7 < bVar2) {
          pbVar1 = (byte *)(lVar4 + 0x48);
        }
        if ((*pbVar1 >> 3 & 1) != 0) {
          uVar3 = (uint)*(byte *)(lVar4 + 0x477);
          goto LAB_026037d8;
        }
      }
      uVar3 = FUN_0250a5c8(*(undefined8 *)PTR_DAT_04bb4fb8);
    }
  }
LAB_026037d8:
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "CurPlayingPlayerNum";
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_30,(long)(int)uVar3);
  }
  return;
}

