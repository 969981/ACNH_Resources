
/* WARNING: Removing unreachable block (ram,0x00991e58) */
/* WARNING: Removing unreachable block (ram,0x00991ebc) */

undefined8 FUN_00991e00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined *local_78;
  int local_70;
  uint uStack_6c;
  undefined1 auStack_68 [8];
  
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = 0;
  puVar2 = PTR_DAT_04bb2200;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar7 != 0)) {
    local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
    plVar10 = *(long **)(lVar7 + 0x118);
    if ((plVar10 != (long *)0x0) && ((char)plVar10[7] != '\0')) {
      uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar6 & 1) == 0) {
        if (*plVar9 == 0) {
          return 0;
        }
      }
      else {
        *plVar9 = (long)plVar10;
      }
      puVar1 = PTR_DAT_04bb2010;
      if ((((*(long *)puVar2 == 0) || (lVar7 = *(long *)(*(long *)puVar2 + 0x50), lVar7 == 0)) ||
          (lVar7 = *(long *)(lVar7 + 0x118), lVar7 == 0)) || (*(char *)(lVar7 + 0xe0b) != '\0')) {
        uVar11 = 0;
        puVar8 = (undefined8 *)(param_1 + 0x24);
        *puVar8 = 0;
        *(undefined4 *)(param_1 + 0xd4) = 0;
        puVar12 = (undefined8 *)(param_1 + 0x6c);
        *puVar12 = 0;
        puVar13 = (undefined8 *)(param_1 + 0xb4);
        *puVar13 = 0;
        *(undefined8 *)(param_1 + 0xbc) = 0;
        local_78 = puVar1 + 0x10;
        iVar14 = 8;
        *(undefined8 *)(param_1 + 0xc4) = 0;
        *(undefined8 *)(param_1 + 0xcc) = 0;
        *(undefined8 *)(param_1 + 0xa4) = 0;
        *(undefined8 *)(param_1 + 0xac) = 0;
        *(undefined8 *)(param_1 + 0x94) = 0;
        *(undefined8 *)(param_1 + 0x9c) = 0;
        *(undefined8 *)(param_1 + 0x84) = 0;
        *(undefined8 *)(param_1 + 0x8c) = 0;
        *(undefined8 *)(param_1 + 0x74) = 0;
        *(undefined8 *)(param_1 + 0x7c) = 0;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(undefined8 *)(param_1 + 100) = 0;
        *(undefined8 *)(param_1 + 0x4c) = 0;
        *(undefined8 *)(param_1 + 0x54) = 0;
        *(undefined8 *)(param_1 + 0x3c) = 0;
        *(undefined8 *)(param_1 + 0x44) = 0;
        *(undefined8 *)(param_1 + 0x2c) = 0;
        *(undefined8 *)(param_1 + 0x34) = 0;
        do {
          local_70 = iVar14 + (uVar11 / 0x12) * -0x120;
          uStack_6c = (uVar11 & 0xffff) * 0xe38f >> 0x10 & 0xfff0 | 8;
          FUN_015af3fc(plVar9,auStack_68,&local_78,3);
          iVar3 = FUN_015af618(plVar9,auStack_68,3);
          if (0 < iVar3) {
            *(byte *)((long)puVar8 + (ulong)(uVar11 >> 3)) =
                 *(byte *)((long)puVar8 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar11 & 7));
          }
          iVar3 = FUN_015afa70(plVar9,auStack_68,3);
          iVar4 = FUN_015afb74(plVar9,auStack_68,3);
          iVar5 = FUN_015afc6c(plVar9,auStack_68,3);
          if (8 < iVar4 + iVar3 + iVar5) {
            *(byte *)(param_1 + 0x48 + (ulong)(uVar11 >> 3)) =
                 *(byte *)(param_1 + 0x48 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar11 & 7))
            ;
          }
          iVar3 = FUN_015afd70(plVar9,auStack_68,3);
          if (8 < iVar3) {
            *(byte *)((long)puVar12 + (ulong)(uVar11 >> 3)) =
                 *(byte *)((long)puVar12 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar11 & 7));
          }
          iVar3 = FUN_015afe74(plVar9,auStack_68,3);
          if (8 < iVar3) {
            *(byte *)(param_1 + 0x90 + (ulong)(uVar11 >> 3)) =
                 *(byte *)(param_1 + 0x90 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar11 & 7))
            ;
          }
          iVar3 = FUN_015afb74(plVar9,auStack_68,3);
          if (8 < iVar3) {
            *(byte *)((long)puVar13 + (ulong)(uVar11 >> 3)) =
                 *(byte *)((long)puVar13 + (ulong)(uVar11 >> 3)) | (byte)(1 << (ulong)(uVar11 & 7));
          }
          uVar11 = uVar11 + 1;
          iVar14 = iVar14 + 0x10;
        } while (uVar11 != 0x120);
        return 1;
      }
    }
  }
  return 0;
}

