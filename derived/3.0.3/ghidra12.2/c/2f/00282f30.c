
void FUN_00282f30(undefined8 param_1,long param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar3 = (uint)param_3;
  memset(*(void **)(param_2 + 0x10),0,(ulong)*(ushort *)(param_2 + 0x3c));
  uVar9 = (ulong)*(ushort *)(param_2 + 0x3c);
  uVar8 = (uint)*(ushort *)(param_2 + 0x3c);
  if (uVar8 != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        lVar13 = 0;
        uVar14 = (ulong)uVar8;
        do {
          bVar2 = *(byte *)(*(long *)(param_2 + 8) + lVar10 * uVar14 + lVar13);
          uVar15 = (uint)uVar14;
          if (((uint)bVar2 < (uint)uVar14 && uVar11 != bVar2) && (uint)lVar13 != (uint)bVar2) {
            *(char *)(*(long *)(param_2 + 0x10) + (ulong)bVar2) =
                 *(char *)(*(long *)(param_2 + 0x10) + (ulong)bVar2) + '\x01';
            uVar9 = (ulong)*(ushort *)(param_2 + 0x3c);
            uVar8 = (uint)*(ushort *)(param_2 + 0x3c);
            uVar14 = uVar9;
            uVar15 = uVar8;
          }
          lVar13 = lVar13 + 1;
        } while ((uint)lVar13 < uVar15);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 1;
    } while (uVar11 < uVar8);
    param_3 = param_3 & 0xff;
    if ((*(char *)(*(long *)(param_2 + 0x10) + param_3) != '\0') && ((int)uVar9 != 0)) {
      bVar12 = true;
      uVar8 = 0;
      uVar11 = 0;
      do {
        uVar15 = uVar8 + 1;
        uVar1 = uVar15 & 0xff;
        if (((uVar8 & 0xff) != (uVar3 & 0xff)) && (uVar1 < (uint)uVar9)) {
          uVar17 = uVar1;
          uVar16 = uVar15;
          do {
            if ((uVar16 & 0xff) != (uVar3 & 0xff)) {
              uVar18 = (uint)uVar9;
              lVar13 = *(long *)(param_2 + 8);
              lVar10 = (ulong)(uVar18 * uVar11) + (ulong)uVar17;
              if ((uint)*(byte *)(lVar13 + lVar10) == (uVar3 & 0xff)) {
                uVar7 = uVar18 * uVar18;
                uVar4 = 0;
                uVar6 = 0;
                uVar14 = uVar9;
                do {
                  uVar5 = (uint)uVar6;
                  if (((((uVar5 & 0xff) != (uVar3 & 0xff)) && ((uVar5 & 0xff) != (uVar8 & 0xff))) &&
                      ((uVar5 & 0xff) != (uVar16 & 0xff))) &&
                     (((uint)*(byte *)(lVar13 + (ulong)uVar4 + (ulong)(uVar18 * uVar11)) ==
                       (uVar5 & 0xff) &&
                      ((uint)*(byte *)(lVar13 + (ulong)(uVar4 * uVar18) + (ulong)uVar17) ==
                       (uVar16 & 0xff))))) {
                    bVar2 = *(byte *)(*(long *)(param_2 + 0x10) + (uVar6 & 0xff));
                    uVar4 = uVar5;
                    if (uVar7 <= bVar2) {
                      uVar4 = (uint)uVar14;
                    }
                    uVar14 = (ulong)uVar4;
                    if (bVar2 <= uVar7) {
                      uVar7 = (uint)bVar2;
                    }
                  }
                  uVar6 = (ulong)(uVar5 + 1);
                  uVar4 = uVar5 + 1 & 0xff;
                } while (uVar4 < uVar18);
                if (uVar18 == ((uint)uVar14 & 0xff)) {
                  bVar12 = false;
                }
                else {
                  *(char *)(lVar13 + lVar10) = (char)uVar14;
                  *(char *)(*(long *)(param_2 + 8) +
                           (ulong)uVar11 + (ulong)*(ushort *)(param_2 + 0x3c) * (ulong)uVar17) =
                       (char)uVar14;
                  *(char *)(*(long *)(param_2 + 0x10) + param_3) =
                       *(char *)(*(long *)(param_2 + 0x10) + param_3) + -2;
                  *(char *)(*(long *)(param_2 + 0x10) + (uVar14 & 0xff)) =
                       *(char *)(*(long *)(param_2 + 0x10) + (uVar14 & 0xff)) + '\x02';
                  uVar9 = (ulong)*(ushort *)(param_2 + 0x3c);
                }
              }
            }
            uVar16 = uVar16 + 1;
            uVar17 = uVar16 & 0xff;
          } while (uVar17 < (uint)uVar9);
        }
        uVar8 = uVar15;
        uVar11 = uVar1;
      } while ((uVar15 & 0xff) < (uint)uVar9);
      if (!bVar12) {
        local_34 = 0x2c0a;
        goto LAB_0028318c;
      }
    }
  }
  local_34 = 0;
LAB_0028318c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

