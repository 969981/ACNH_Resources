
bool FUN_01ae6580(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *__s;
  bool bVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  char cVar10;
  
  uVar6 = FUN_01ae59b0();
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  if ((uVar6 & 1) == 0) {
LAB_01ae6780:
    bVar5 = false;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x10);
    if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
      cVar10 = *PTR_DAT_04bbfe88;
      do {
        if (cVar10 != '\0') {
          uVar2 = *(uint *)(__s + 0x10c);
          uVar6 = (ulong)uVar2;
          if ((int)uVar2 < 0) {
            if (uVar2 == 0xffffffff) {
              uVar2 = *puVar9;
              if (uVar2 != 0) goto LAB_01ae6624;
LAB_01ae673c:
              uVar6 = 0xffffffff;
            }
          }
          else if ((((ushort *)(uVar6 + (long)puVar9) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)(uVar6 + (long)puVar9), uVar3 < 0x800)) &&
                  ((*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar3 >> 3) + 0xe98e0) >>
                    (ulong)(uVar3 & 7) & 1) != 0)) goto LAB_01ae6780;
          break;
        }
        cVar10 = '\x01';
        *puVar4 = 1;
        memset(__s,0xff,0x1ac);
        uVar2 = *puVar9;
        if (uVar2 == 0) goto LAB_01ae673c;
LAB_01ae6624:
        puVar7 = (uint *)(ulong)uVar2;
        uVar6 = 0xffffffff;
        if (puVar9 == puVar7) break;
        lVar1 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar9 + (lVar1 - (long)puVar7);
        if (lVar1 == 0) goto LAB_01ae673c;
        uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        uVar6 = 0xfffffffe;
        *(undefined4 *)(__s + 0x10c) = 0xfffffffe;
        if (uVar8 == 0) break;
        puVar7 = (uint *)(lVar1 + 4);
        while (puVar7[-1] != 0xbcf5d17a) {
          puVar7 = puVar7 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar6 = 0xfffffffe;
            goto LAB_01ae669c;
          }
        }
        uVar2 = 0;
        if (*puVar7 != 0xffffffff) {
          uVar2 = *puVar7;
        }
        uVar6 = (ulong)uVar2;
        *(uint *)(__s + 0x10c) = uVar2;
      } while (*puVar9 != 0);
LAB_01ae669c:
      puVar9 = *(uint **)(param_1 + 0x10);
      if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
        while ((int)uVar6 < 0) {
          if ((int)uVar6 != -1) goto LAB_01ae67cc;
          puVar7 = (uint *)(ulong)*puVar9;
          if (*puVar9 == 0) {
            return true;
          }
          if (puVar9 == puVar7) {
            return true;
          }
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar7);
          if (lVar1 == 0) {
            return true;
          }
          uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
          *(undefined4 *)(__s + 0x10c) = 0xfffffffe;
          if (uVar6 == 0) {
            return true;
          }
          puVar7 = (uint *)(lVar1 + 4);
          while (puVar7[-1] != 0xbcf5d17a) {
            puVar7 = puVar7 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_01ae67cc;
          }
          uVar2 = 0;
          if (*puVar7 != 0xffffffff) {
            uVar2 = *puVar7;
          }
          uVar6 = (ulong)uVar2;
          *(uint *)(__s + 0x10c) = uVar2;
          if (*puVar9 == 0) {
            return true;
          }
        }
        if (((ushort *)((long)puVar9 + uVar6) != (ushort *)0x0) &&
           (uVar3 = *(ushort *)((long)puVar9 + uVar6), uVar3 < 0x800)) {
          return (*(byte *)(*(long *)PTR_DAT_04bb46f0 + (ulong)(uVar3 >> 3) + 0xe99e0) >>
                  (ulong)(uVar3 & 7) & 1) == 0;
        }
      }
    }
LAB_01ae67cc:
    bVar5 = true;
  }
  return bVar5;
}

