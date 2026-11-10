
void FUN_002b2b90(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  uint uVar11;
  short sVar12;
  
  uVar5 = *(ushort *)(param_1 + 3);
  if (uVar5 == 0xffff) {
    uVar5 = 0xffff;
  }
  else {
    lVar10 = param_1[1];
    uVar2 = uVar5 ^ 0xffff;
    sVar12 = *(short *)((long)param_1 + 0x1a);
    uVar3 = *(uint *)(param_1 + 2);
    uVar6 = *(uint *)((long)param_1 + 0x14);
    sVar9 = *(short *)((long)param_1 + 0x1c);
    if (lVar10 == 0) {
      uVar11 = 0;
      do {
        sVar7 = sVar12;
        do {
          uVar6 = uVar3 + 1 + uVar6;
          do {
            uVar6 = uVar6 - uVar3;
          } while (uVar3 <= uVar6);
          if (sVar12 == 0) {
            sVar12 = 0;
          }
          else {
            sVar7 = sVar12 + -1;
            *(short *)((long)param_1 + 0x1a) = sVar7;
            sVar12 = sVar7;
          }
          if (sVar9 == 0) {
            uVar5 = uVar5 + 1;
            *(uint *)((long)param_1 + 0x14) = uVar6;
            *(undefined2 *)((long)param_1 + 0x1c) = 0;
            *(ushort *)(param_1 + 3) = uVar5;
            goto joined_r0x002b2d2c;
          }
          bVar4 = sVar9 != 1;
          sVar9 = sVar9 + -1;
        } while (bVar4);
        *(uint *)((long)param_1 + 0x14) = uVar6;
joined_r0x002b2d2c:
        uVar11 = uVar11 + 1;
        sVar9 = 0;
        sVar12 = sVar7;
      } while (uVar11 != uVar2);
    }
    else {
      uVar11 = 0;
LAB_002b2bf0:
      do {
        sVar7 = sVar12;
        sVar8 = sVar9;
        if (sVar12 != 0) {
          uVar1 = 0;
          if (uVar3 <= uVar6) {
            uVar1 = uVar3;
          }
          if (*(char *)(lVar10 + (ulong)(uVar6 - uVar1) * 0x5b0) != '\0') break;
        }
        do {
          uVar6 = uVar3 + 1 + uVar6;
          do {
            uVar6 = uVar6 - uVar3;
          } while (uVar3 <= uVar6);
          if (sVar7 == 0) {
            sVar7 = 0;
          }
          else {
            sVar12 = sVar7 + -1;
            *(short *)((long)param_1 + 0x1a) = sVar12;
            sVar7 = sVar12;
          }
          if (sVar8 == 0) {
            uVar5 = uVar5 + 1;
            sVar9 = 0;
            *(uint *)((long)param_1 + 0x14) = uVar6;
            *(undefined2 *)((long)param_1 + 0x1c) = 0;
            *(ushort *)(param_1 + 3) = uVar5;
            uVar11 = uVar11 + 1;
            if (uVar11 == uVar2) goto LAB_002b2d30;
            goto LAB_002b2bf0;
          }
          sVar9 = sVar8 + -1;
        } while ((sVar8 != 1) &&
                ((sVar8 = sVar9, sVar7 == 0 || (*(char *)(lVar10 + (ulong)uVar6 * 0x5b0) == '\0'))))
        ;
        *(uint *)((long)param_1 + 0x14) = uVar6;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar2);
    }
  }
LAB_002b2d30:
  *(ushort *)((long)param_1 + 0x1c) = ~uVar5;
  (**(code **)(*param_1 + 8))(param_1);
  *(char *)((long)param_1 + 0x1e) = *(char *)((long)param_1 + 0x1e) + '\x01';
  return;
}

