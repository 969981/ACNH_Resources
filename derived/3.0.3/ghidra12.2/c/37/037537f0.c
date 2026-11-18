
void FUN_037537f0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  undefined **local_70;
  uint *puStack_68;
  uint local_4c;
  uint uStack_48;
  undefined1 local_44;
  undefined1 local_43;
  
  puVar5 = PTR_DAT_04bc3968;
  puVar4 = PTR_DAT_04bc3960;
  lVar8 = *(long *)PTR_DAT_04bb4960;
  uVar3 = (param_1 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
     (puVar13 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8), puVar13 != (uint *)0x0)
     ) {
    bVar7 = param_2 == 0;
    if (*puVar13 == 0) {
LAB_03753940:
      local_4c = 0;
    }
    else {
      cVar9 = *PTR_DAT_04bc3960;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar3) {
            if (((ushort *)((ulong)uVar3 + (long)puVar13) == (ushort *)0x0) ||
               (uVar2 = *(ushort *)((ulong)uVar3 + (long)puVar13), local_4c = (uint)uVar2,
               0x15 < uVar2)) goto LAB_03753940;
            goto LAB_03753944;
          }
          if (uVar3 != 0xffffffff) goto LAB_03753940;
        }
        puVar11 = (uint *)(ulong)*puVar13;
        local_4c = 0;
        if ((*puVar13 == 0) || (puVar13 == puVar11)) goto LAB_03753944;
        lVar8 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar13 + (lVar8 - (long)puVar11);
        if (lVar8 == 0) goto LAB_03753940;
        uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        local_4c = 0;
        if (uVar10 == 0) goto LAB_03753944;
        piVar12 = (int *)(lVar8 + 4);
        while (piVar12[-1] != -0x1e3de1fd) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            local_4c = 0;
            goto LAB_03753944;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 0x14) = iVar1;
      } while (*puVar13 != 0);
      local_4c = 0;
    }
LAB_03753944:
    puVar4 = PTR_DAT_04bb4970;
    uStack_48 = (uint)bVar7;
    puStack_68 = &local_4c;
    local_70 = &PTR_LAB_04b46920;
    local_44 = param_2 != 0;
    local_43 = bVar7;
    FUN_036f09c0(*(undefined8 *)PTR_DAT_04bb4970,&local_70);
    puVar6 = PTR_DAT_04bc3968;
    puVar5 = PTR_DAT_04bc3960;
    if ((param_3 & 1) != 0) {
      if (*puVar13 == 0) {
LAB_03753a70:
        local_4c = 0;
      }
      else {
        cVar9 = *PTR_DAT_04bc3960;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x18);
            if (-1 < (int)uVar3) {
              if (((ushort *)((ulong)uVar3 + (long)puVar13) == (ushort *)0x0) ||
                 (uVar2 = *(ushort *)((ulong)uVar3 + (long)puVar13), local_4c = (uint)uVar2,
                 0x15 < uVar2)) goto LAB_03753a70;
              goto LAB_03753a74;
            }
            if (uVar3 != 0xffffffff) goto LAB_03753a70;
          }
          puVar11 = (uint *)(ulong)*puVar13;
          local_4c = 0;
          if ((*puVar13 == 0) || (puVar13 == puVar11)) goto LAB_03753a74;
          lVar8 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar11)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar13 + (lVar8 - (long)puVar11);
          if (lVar8 == 0) goto LAB_03753a70;
          uVar10 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar11));
          *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
          local_4c = 0;
          if (uVar10 == 0) goto LAB_03753a74;
          piVar12 = (int *)(lVar8 + 4);
          while (piVar12[-1] != 0x1dd11bc9) {
            piVar12 = piVar12 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              local_4c = 0;
              goto LAB_03753a74;
            }
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0x18) = iVar1;
        } while (*puVar13 != 0);
        local_4c = 0;
      }
LAB_03753a74:
      puStack_68 = &local_4c;
      uStack_48 = (uint)bVar7;
      local_70 = &PTR_LAB_04b46920;
      local_44 = param_2 != 0;
      local_43 = bVar7;
      FUN_036f09c0(*(undefined8 *)puVar4,&local_70);
    }
  }
  return;
}

