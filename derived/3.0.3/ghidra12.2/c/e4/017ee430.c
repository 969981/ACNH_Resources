
void FUN_017ee430(long param_1,short *param_2,ulong param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  int *piVar8;
  char cVar9;
  long lVar10;
  uint *puVar11;
  short local_70;
  short local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_70 = *param_2;
  if (*(char *)(param_1 + 0x144) == '\0' || local_70 == -2) {
    return;
  }
  local_6e = param_2[1];
  local_68 = 0;
  local_6c = *(undefined4 *)(param_2 + 2);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      __s = PTR_DAT_04bbfe90;
      puVar3 = PTR_DAT_04bbfe88;
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
         ((puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
          puVar11 != (uint *)0x0 && (uVar4 = *puVar11, uVar4 != 0)))) {
        cVar9 = *PTR_DAT_04bbfe88;
        do {
          if (cVar9 == '\0') {
            *puVar3 = 1;
            memset(__s,0xff,0x1ac);
            uVar4 = *puVar11;
            cVar9 = '\x01';
          }
          else {
            uVar2 = *(uint *)(__s + 0x128);
            if (-1 < (int)uVar2) {
              if (((short *)((ulong)uVar2 + (long)puVar11) != (short *)0x0) &&
                 (*(short *)((ulong)uVar2 + (long)puVar11) == 0x2aa7)) {
                return;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar6 = (uint *)(ulong)uVar4;
          if ((puVar6 == (uint *)0x0) || (puVar11 == puVar6)) break;
          lVar10 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar11 + (lVar10 - (long)puVar6);
          if (lVar10 == 0) break;
          uVar5 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
          *(undefined4 *)(__s + 0x128) = 0xfffffffe;
          if (uVar5 == 0) break;
          piVar8 = (int *)(lVar10 + 4);
          while (piVar8[-1] != 0x54706054) {
            piVar8 = piVar8 + 2;
            uVar5 = uVar5 - 1;
            if (uVar5 == 0) goto LAB_017ee630;
          }
          iVar1 = 0;
          if (*piVar8 != -1) {
            iVar1 = *piVar8;
          }
          *(int *)(__s + 0x128) = iVar1;
          uVar4 = *puVar11;
          if (uVar4 == 0) break;
        } while( true );
      }
    }
  }
LAB_017ee630:
  *(short *)(param_1 + 0xb4) = *param_2;
  *(char *)(param_1 + 0xb6) = (char)param_2[1];
  *(undefined1 *)(param_1 + 0xb7) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_2 + 2);
  if ((param_5 & 1) != 0) {
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)PTR_DAT_04bb3170;
    *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  }
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    cVar9 = *(char *)(param_1 + 0x144);
joined_r0x017ee6b0:
    if (cVar9 == '\0') goto joined_r0x017ee6b4;
    bVar7 = *(byte *)(param_1 + 0x13c) & 0xbf;
  }
  else {
    uVar5 = FUN_017f8d00(*(long *)PTR_DAT_04bb5ce0 + 0xda0);
    cVar9 = *(char *)(param_1 + 0x144);
    if ((uVar5 & 1) == 0) goto joined_r0x017ee6b0;
    if (cVar9 == '\0') goto joined_r0x017ee6b4;
    bVar7 = 0x40;
    if ((param_3 & 1) == 0) {
      bVar7 = 0;
    }
    bVar7 = *(byte *)(param_1 + 0x13c) & 0xbf | bVar7;
  }
  *(byte *)(param_1 + 0x13c) = bVar7;
joined_r0x017ee6b4:
  if ((param_4 & 1) == 0) {
    return;
  }
  FUN_017ef108(param_1,0,0);
  FUN_017eff3c(param_1,0,0);
  FUN_017f0b3c(param_1);
  return;
}

