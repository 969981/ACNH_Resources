
void FUN_017ee860(long param_1,short *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  undefined *puVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 *puVar12;
  char cVar13;
  long lVar14;
  uint *puVar15;
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0x144) == '\0' || *param_2 == -2) {
    return;
  }
  local_68 = 0;
  local_70 = CONCAT22(param_2[1],*param_2);
  local_6c = *(undefined4 *)(param_2 + 2);
  local_78 = PTR_DAT_04bc0510 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      __s = PTR_DAT_04bbfe90;
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
         ((puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8),
          puVar15 != (uint *)0x0 && (uVar8 = *puVar15, uVar8 != 0)))) {
        cVar13 = *PTR_DAT_04bbfe88;
        puVar12 = PTR_DAT_04bbfe88;
        do {
          if (cVar13 == '\0') {
            *puVar12 = 1;
            memset(__s,0xff,0x1ac);
            uVar8 = *puVar15;
            cVar13 = '\x01';
            puVar12 = PTR_DAT_04bbfe88;
          }
          else {
            uVar2 = *(uint *)(__s + 0x128);
            if (-1 < (int)uVar2) {
              if (((short *)((ulong)uVar2 + (long)puVar15) != (short *)0x0) &&
                 (*(short *)((ulong)uVar2 + (long)puVar15) == 0x2aa6)) {
                return;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar9 = (uint *)(ulong)uVar8;
          if ((puVar9 == (uint *)0x0) || (puVar15 == puVar9)) break;
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar9)) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + (lVar14 - (long)puVar9);
          if (lVar14 == 0) break;
          uVar10 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar9));
          *(undefined4 *)(__s + 0x128) = 0xfffffffe;
          if (uVar10 == 0) break;
          piVar11 = (int *)(lVar14 + 4);
          while (piVar11[-1] != 0x54706054) {
            piVar11 = piVar11 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_017eea80;
          }
          iVar1 = 0;
          if (*piVar11 != -1) {
            iVar1 = *piVar11;
          }
          *(int *)(__s + 0x128) = iVar1;
          uVar8 = *puVar15;
          if (uVar8 == 0) break;
        } while( true );
      }
    }
  }
LAB_017eea80:
  if (*(short *)(param_1 + 0xd0) != -2) {
    local_70 = *(undefined4 *)param_2;
    local_6c = *(undefined4 *)(param_2 + 2);
    lVar14 = *(long *)puVar3;
    local_68 = 0;
    local_78 = puVar4 + 0x10;
    uVar8 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(param_2);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
           (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8), lVar14 != 0)) {
          local_68 = lVar14;
        }
      }
    }
    local_88 = *(undefined4 *)(param_1 + 0xd0);
    uStack_84 = *(undefined4 *)(param_1 + 0xd4);
    lVar14 = *(long *)puVar3;
    local_80 = 0;
    local_90 = puVar4 + 0x10;
    uVar8 = FUN_0277d6c4(&local_88);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4((short *)(param_1 + 0xd0));
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
           (lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8), lVar14 != 0)) {
          local_80 = lVar14;
        }
      }
    }
    sVar6 = FUN_01b01f10(&local_78);
    sVar7 = FUN_01b01f10(&local_90);
    if ((sVar6 != sVar7) || (*(char *)(param_1 + 0x182) != '\0')) {
      bVar5 = *(int *)(param_1 + 0x14c) != 1;
      if (bVar5) {
        *(undefined1 *)(param_1 + 0x161) = 0;
        *(undefined4 *)(param_1 + 0x154) = 0;
        *(undefined4 *)(param_1 + 0x15c) = 0x3c;
      }
      else {
        *(undefined1 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x158) = 0x3c;
        *(undefined4 *)(param_1 + 0x150) = 0;
      }
      *(uint *)(param_1 + 0x14c) = (uint)bVar5;
      *(undefined1 *)(param_1 + 0x182) = 0;
    }
  }
  FUN_017f2e50(param_1,param_2,0,param_3 & 1,param_4 & 1);
  return;
}

