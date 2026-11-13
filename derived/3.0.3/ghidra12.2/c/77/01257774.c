
/* WARNING: Type propagation algorithm not settling */

void FUN_01257774(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  uint local_2c;
  undefined8 local_28;
  
  if ((*(ushort *)(param_1 + 0x1a) >> 9 & 1) != 0) {
    lVar4 = *(long *)PTR_DAT_04bbbc68;
    if (((((lVar4 != 0) && (*(long *)(lVar4 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar4 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar4 + 0x488) != 0 && (*(long *)(*(long *)(lVar4 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar4 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar4 + 0x2b0) + 8) != 0)))) {
      uVar2 = FUN_0277d6c4(param_1);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        FUN_0124c030(auStack_38,param_1);
        bVar1 = *(byte *)((long)param_1 + 0x6d);
        if (bVar1 == 0) {
          iVar3 = FUN_0123db50(&local_30,local_28);
          if (iVar3 == 0x2e) {
            local_2c = local_2c | 0x300;
          }
        }
        else {
          if ((bVar1 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x400 |
                       ((local_2c | (local_2c | 0x400) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 1 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x800 |
                       ((local_2c | (local_2c | 0x800) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 2 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x1000 |
                       ((local_2c | (local_2c | 0x1000) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 3 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x2000 |
                       ((local_2c | (local_2c | 0x2000) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 4 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x4000 |
                       ((local_2c | (local_2c | 0x4000) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 5 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x8000 |
                       ((local_2c | (local_2c | 0x8000) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((bVar1 >> 6 & 1) != 0) {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x10000 |
                       ((local_2c | (local_2c | 0x10000) << 8) >> 0x12 & 0xff) << 0x12;
          }
          if ((char)bVar1 < '\0') {
            local_2c = local_2c & 0xfc000000 |
                       local_2c & 0x3ffff | 0x20000 |
                       ((local_2c | (local_2c | 0x20000) << 8) >> 0x12 & 0xff) << 0x12;
          }
        }
        local_48 = 0;
        if (DAT_05aed670 == 0) {
          puVar5 = &DAT_055c04a0;
        }
        else {
          puVar5 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar5 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar3 = FUN_006bd550(*puVar5,0);
            puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar3 != 0x758f7eaf) {
              puVar5 = &DAT_055c04a0;
            }
          }
        }
        local_44 = *(undefined4 *)(puVar5 + 7);
        local_40 = FUN_017baf44();
        local_40 = local_40 & 1;
        local_50 = PTR_DAT_04bb6268 + 0x10;
        *param_1 = local_30;
        param_1[1] = local_2c;
        FUN_011f3390(&local_50,0,param_1,param_1 + 4);
        *(undefined1 *)(param_1 + 0x1b) = 0;
        *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfdfb;
        *(undefined1 *)(param_1 + 0x1c) = 0xff;
        return;
      }
    }
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfdff;
  }
  return;
}

