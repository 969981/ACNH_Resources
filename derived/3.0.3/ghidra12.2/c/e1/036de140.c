
/* WARNING: Removing unreachable block (ram,0x036de248) */
/* WARNING: Removing unreachable block (ram,0x036de3c4) */

void FUN_036de140(long param_1)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  byte *pbVar11;
  byte bVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  *(undefined4 *)(param_1 + 0x14) = 5;
  *(undefined2 *)(param_1 + 0x398) = 0;
  *(undefined1 *)(param_1 + 0x39e) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  uVar6 = -(*(uint *)(param_1 + 0x1a70) >> 1 & 1);
  *(undefined4 *)(param_1 + 0x39a) = 0x101;
  *(uint *)(param_1 + 0x3a0) = uVar6 & *(uint *)(param_1 + 0x3a0);
  *(uint *)(param_1 + 0x3a4) = uVar6 & *(uint *)(param_1 + 0x3a4);
  puVar4 = PTR_DAT_04bb32e8;
  *(undefined1 *)(param_1 + 0x3ac) = 1;
  *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(*(long *)puVar4 + 0x4060);
  puVar4 = PTR_DAT_04bb3968;
  *(uint *)(&DAT_00001230 + *(long *)PTR_DAT_04bb4e28) =
       *(uint *)(&DAT_00001230 + *(long *)PTR_DAT_04bb4e28) & 0xffff7bff;
  local_58 = &PTR_FUN_04b45420;
  iVar3 = *(int *)(*(long *)puVar4 + 0xb88);
  if (iVar3 != 0) {
    lVar14 = (long)iVar3 << 3;
    puVar8 = *(undefined8 **)(*(long *)puVar4 + 0xb90);
    do {
      (*(code *)*local_58)(&local_58,*puVar8);
      lVar14 = lVar14 + -8;
      puVar8 = puVar8 + 1;
    } while (lVar14 != 0);
  }
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 != 0) {
    local_58 = (undefined **)CONCAT44(local_58._4_4_,1);
    if ((((*(byte *)(lVar14 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar14 = (**(code **)(**(long **)(*(long *)(lVar14 + 0x10) + 0x188) + 0x30))(), lVar14 != 0)
       ) {
      local_58 = (undefined **)
                 (CONCAT44(local_58._4_4_,(uint)*(ushort *)(param_1 + 0xc0)) & 0xffffffff0000000f);
      if ((int)local_58 == 4) {
        plVar1 = (long *)(lVar14 + 0x37c50);
        local_34 = 1;
        local_58 = (undefined **)CONCAT44(local_58._4_4_,4);
        lVar9 = *(long *)(lVar14 + 0x37c70);
        if (lVar9 == 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0x37c58) + *plVar1 + 0x32) = 0x14;
        }
        else {
          if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
            uVar6 = 1;
LAB_036de308:
            plVar7 = *(long **)(lVar9 + 0x20);
            if (plVar7 != (long *)0x0) {
              local_58 = (undefined **)*plVar1;
              local_50 = *(char **)(lVar14 + 0x37c58);
              uStack_48 = 0x40;
              (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
            }
          }
          else {
            uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            lVar9 = *(long *)(lVar14 + 0x37c70);
            uVar6 = uVar6 ^ 1;
            if (lVar9 != 0) goto LAB_036de308;
          }
          *(undefined1 *)(*(long *)(lVar14 + 0x37c58) + *plVar1 + 0x32) = 0x14;
          if ((((uVar6 & 1) == 0) && (*(long *)(lVar14 + 0x37c70) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar14 + 0x37c70) + 0x18),
             puVar8 != (undefined8 *)0x0)) {
            (**(code **)*puVar8)();
          }
        }
      }
    }
  }
  FUN_008a339c(*(undefined8 *)PTR_DAT_04bb27b8,3,1);
  *(undefined8 *)(param_1 + 0x1a08) = 0;
  puVar4 = PTR_DAT_04bb2020;
  *(undefined8 *)(param_1 + 0x1a00) = 0;
  local_58 = (undefined **)(puVar4 + 0x10);
  local_50 = "RoomSketchPaste";
  FUN_02758bb8(&local_58,0);
  local_58 = (undefined **)((ulong)local_58 & 0xffffffff00000000);
  piVar10 = *(int **)PTR_DAT_04bc3a50;
  if (0 < *piVar10) {
    lVar14 = 0;
    puVar8 = *(undefined8 **)(piVar10 + 4);
    do {
      puVar13 = *(undefined8 **)(*(long *)(piVar10 + 2) + lVar14 * 8);
      lVar14 = lVar14 + 1;
      *puVar13 = puVar8;
      *(undefined8 **)(piVar10 + 4) = puVar13;
      puVar8 = puVar13;
    } while (lVar14 < *piVar10);
  }
  *piVar10 = 0;
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar14 == 0) {
LAB_036de468:
    if (7 < *pbVar11) {
LAB_036de474:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar14 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar14 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar2 = (uint *)(lVar14 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar11 = (byte *)(lVar14 + 0x471);
          }
        }
        bVar12 = *pbVar11;
        bVar5 = bVar12 < 8;
        if (!bVar5) {
          bVar12 = 0xff;
        }
        local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar12);
        if (bVar5) goto LAB_036de4f4;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar14 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_036de468;
      }
      goto LAB_036de474;
    }
  }
  bVar12 = *pbVar11;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_58 = (undefined **)CONCAT71(local_58._1_7_,bVar12);
LAB_036de4f4:
  FUN_01a20060(&local_58);
  return;
}

