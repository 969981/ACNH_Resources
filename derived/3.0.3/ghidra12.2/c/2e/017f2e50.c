
void FUN_017f2e50(long param_1,short *param_2,byte param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  char cVar8;
  long lVar9;
  uint *puVar10;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = *param_2;
  if (*(char *)(param_1 + 0x144) != '\0' && local_70 != -2) {
    local_6e = param_2[1];
    local_68 = 0;
    local_6c = *(undefined4 *)(param_2 + 2);
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        __s = PTR_DAT_04bbfe90;
        puVar3 = PTR_DAT_04bbfe88;
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           ((puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8),
            puVar10 != (uint *)0x0 && (uVar4 = *puVar10, uVar4 != 0)))) {
          cVar8 = *PTR_DAT_04bbfe88;
          do {
            if (cVar8 == '\0') {
              *puVar3 = 1;
              memset(__s,0xff,0x1ac);
              uVar4 = *puVar10;
              cVar8 = '\x01';
            }
            else {
              uVar2 = *(uint *)(__s + 0x128);
              if (-1 < (int)uVar2) {
                if (((short *)((ulong)uVar2 + (long)puVar10) != (short *)0x0) &&
                   (*(short *)((ulong)uVar2 + (long)puVar10) == 0x2aa6)) {
                  return;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar5 = (uint *)(ulong)uVar4;
            if ((puVar5 == (uint *)0x0) || (puVar10 == puVar5)) break;
            lVar9 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
            if (lVar9 == 0) break;
            uVar6 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
            *(undefined4 *)(__s + 0x128) = 0xfffffffe;
            if (uVar6 == 0) break;
            piVar7 = (int *)(lVar9 + 4);
            while (piVar7[-1] != 0x54706054) {
              piVar7 = piVar7 + 2;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_017f3050;
            }
            iVar1 = 0;
            if (*piVar7 != -1) {
              iVar1 = *piVar7;
            }
            *(int *)(__s + 0x128) = iVar1;
            uVar4 = *puVar10;
            if (uVar4 == 0) break;
          } while( true );
        }
      }
    }
LAB_017f3050:
    *(byte *)(param_1 + 0x182) = (param_3 ^ 0xff) & 1;
    *(short *)(param_1 + 0xd0) = *param_2;
    *(char *)(param_1 + 0xd2) = (char)param_2[1];
    *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)param_2 + 3);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_2 + 2);
    if ((param_5 & 1) != 0) {
      *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)PTR_DAT_04bb3170;
      *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
    }
    if ((param_4 & 1) != 0) {
      FUN_017ef108(param_1,0,0);
      FUN_017eff3c(param_1,0,0);
      FUN_017f0b3c(param_1);
      return;
    }
  }
  return;
}

