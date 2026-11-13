
uint FUN_01257a24(long param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  byte local_64 [4];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  byte local_54;
  undefined8 local_50;
  byte local_48 [4];
  uint local_44;
  undefined *local_40;
  char *pcStack_38;
  
  if ((param_3 & 1) == 0) {
LAB_01257b88:
    bVar1 = *(byte *)(param_1 + 0x6c);
    uVar2 = (uint)bVar1;
    if (bVar1 < 8) {
      uVar2 = bVar1 + 1;
      *(char *)(param_1 + 0x6c) = (char)uVar2;
      if (bVar1 != 7) {
        return uVar2;
      }
      uVar2 = 8;
    }
    *(undefined2 *)(param_1 + 0x6a) = 0;
    *(undefined1 *)(param_1 + 0x70) = 0xff;
    *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | 0x200;
  }
  else {
    lVar4 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar4 != 0) && (*(long *)(lVar4 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar4 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar4 + 0x488) != 0 && (*(long *)(*(long *)(lVar4 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar4 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar4 + 0x2b0) + 8) != 0)))) {
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0124c030(auStack_60,param_1);
        iVar3 = FUN_0123db50(auStack_58,local_50);
        if (iVar3 == 0x2e) {
          bVar1 = *param_2;
          iVar3 = FUN_0123db50(auStack_58,local_50);
          if (iVar3 == 0x2e) {
            local_48[0] = bVar1;
            if (7 < bVar1) {
              local_48[0] = 0xff;
            }
            local_44 = FUN_02582fe0(local_48);
            if (local_44 != 0xffffffff) {
              local_40 = PTR_DAT_04bb2020 + 0x10;
              pcStack_38 = "TodayFortune";
              iVar3 = FUN_0274ce10(&local_44,&local_40);
              if ((iVar3 != 2) && ((local_54 >> (ulong)(local_44 & 0x1f) & 1) != 0)) {
                local_64[0] = *param_2;
                if (7 < local_64[0]) {
                  local_64[0] = 0xff;
                }
                uVar2 = FUN_02582fe0(local_64);
                if (uVar2 != 0xffffffff) {
                  *(byte *)(param_1 + 0x6d) =
                       *(byte *)(param_1 + 0x6d) | (byte)(1 << (ulong)(uVar2 & 0x1f));
                  goto LAB_01257b88;
                }
              }
            }
          }
        }
      }
    }
    uVar2 = 8;
  }
  return uVar2;
}

