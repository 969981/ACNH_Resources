
void FUN_030fd930(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  undefined *local_190;
  undefined1 *local_188;
  undefined4 local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  undefined *local_78;
  undefined4 local_70;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 != 0) {
    param_2 = param_2 + 8;
    lVar14 = *(long *)(param_1 + 0x28);
    iVar13 = 0;
    puVar1 = PTR_DAT_04bb21f8 + 0x10;
    puVar2 = PTR_DAT_04bc0cb8 + 0x10;
    do {
      puVar7 = PTR_DAT_04bc0cb8;
      lVar15 = lVar14 + (long)iVar13 * 0x60;
      iVar4 = *(int *)(lVar15 + 0x20);
      if (-1 < iVar4) {
        plVar12 = *(long **)(lVar15 + 8);
        *(int *)(lVar15 + 0x20) = iVar4 + -1;
        local_188 = (undefined1 *)CONCAT44(local_188._4_4_,0x14);
        uVar6 = ~(int)(*(float *)(lVar15 + 0x24) * (float)iVar4);
        local_190 = puVar7 + 0x10;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_190);
        (**(code **)(plVar12[3] + 0x158))(plVar12[1],uVar6);
        plVar12 = *(long **)(lVar15 + 0x10);
        if (plVar12 != (long *)0x0) {
          local_188 = (undefined1 *)CONCAT44(local_188._4_4_,0x14);
          local_190 = puVar7 + 0x10;
          (**(code **)(*plVar12 + 0x18))(plVar12,&local_190);
          (**(code **)(plVar12[3] + 0x158))(plVar12[1],uVar6);
        }
      }
      pcVar16 = (char *)(lVar14 + (long)iVar13 * 0x60 + 0x50);
      if (*pcVar16 != '\0') {
        uVar6 = *(uint *)(lVar14 + (long)iVar13 * 0x60 + 0x48);
        if ((uVar6 < 0x10e) &&
           (lVar8 = param_2 + (ulong)uVar6 * 0x1a8, *(int *)(lVar8 + 0x1a0) == 2)) {
          uVar9 = FUN_03463a4c(lVar8,lVar8 + 0x148,*(undefined8 *)(lVar15 + 0x18));
          local_7d = 0;
          local_180 = 0x100;
          local_17c[0] = 0;
          plVar12 = *(long **)(lVar15 + 8);
          local_70 = 1;
          local_190 = puVar1;
          local_188 = local_17c;
          local_78 = puVar2;
          (**(code **)(*plVar12 + 0x20))(plVar12,&local_78);
          (**(code **)(plVar12[3] + 0x30))(&local_190,plVar12[1]);
          if (((uVar9 & 1) == 0) && (*(long *)(param_1 + 0x38) != -1)) {
            lVar15 = *(long *)(lVar15 + 0x18);
            *(undefined8 *)(lVar15 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(param_1 + 0x38);
            *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(param_1 + 0x40);
            *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(param_1 + 0x48);
          }
          *pcVar16 = '\0';
          puVar10 = (uint *)(lVar14 + (long)iVar13 * 0x60 + 0x4c);
          uVar6 = *puVar10;
          if (uVar6 != 0xffffffff) {
joined_r0x030fdba0:
            uVar9 = (ulong)uVar6;
            if ((uVar9 < 0x10e) && (lVar15 = param_2 + uVar9 * 0x1a8, *(int *)(lVar15 + 0x1a0) != 0)
               ) {
              lVar8 = param_2 + uVar9 * 0x1a8;
              **(undefined1 **)(lVar8 + 0x60) = 0;
              *(undefined1 *)(lVar8 + 0xf0) = 0;
              if ((*(int *)(lVar8 + 0x100) != 1) &&
                 (((*(byte *)(lVar8 + 0x18) >> 1 & 1) != 0 && (*(int *)(lVar8 + 0x140) == -1)))) {
                *(undefined4 *)(lVar8 + 0x140) = 1;
              }
              *(undefined4 *)(lVar15 + 0x1a0) = 0;
            }
            *puVar10 = 0xffffffff;
          }
        }
        else {
          puVar10 = (uint *)(lVar14 + (long)iVar13 * 0x60 + 0x4c);
          if (*puVar10 != 0xffffffff) {
            pbVar11 = (byte *)(lVar14 + (long)iVar13 * 0x60 + 0x5c);
            bVar5 = *pbVar11;
            if (1 < bVar5) {
              lVar15 = *(long *)(lVar15 + 0x18);
              *(undefined8 *)(lVar15 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(lVar15 + 8) = *(undefined8 *)(param_1 + 0x38);
              *(undefined4 *)(lVar15 + 0x10) = *(undefined4 *)(param_1 + 0x40);
              *(undefined4 *)(lVar15 + 0x18) = *(undefined4 *)(param_1 + 0x48);
              uVar6 = *puVar10;
              goto joined_r0x030fdba0;
            }
            *pbVar11 = bVar5 + 1;
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar3 != iVar13);
  }
  return;
}

