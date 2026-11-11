
void FUN_003d6e40(long param_1)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  iVar2 = *(int *)(param_1 + 0x46c);
  if (0 < iVar2) {
    lVar5 = 0;
    lVar6 = param_1 + 0x10c88;
    do {
      lVar3 = param_1 + lVar5 * 0x80;
      if (*(char *)(lVar3 + 0x10c80) != '\0') {
        pbVar1 = (byte *)(lVar3 + 0x10c98);
        bVar4 = *pbVar1;
        if (bVar4 != 0) {
          uVar8 = 0;
          do {
            lVar3 = *(long *)(lVar6 + uVar8 * 8);
            if ((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 8), lVar3 != 0)) {
              FUN_003c1470(lVar3,*(undefined4 *)(param_1 + 0x138));
              FUN_003c14e0(lVar3,*(undefined4 *)(param_1 + 0x13c));
              *(undefined4 *)(lVar3 + 0x278) = *(undefined4 *)(param_1 + 0x11080);
              FUN_003c1e40(lVar3,*(undefined8 *)(param_1 + 0x30));
              FUN_003c0c10(lVar3);
              bVar4 = *pbVar1;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < bVar4);
          iVar2 = *(int *)(param_1 + 0x46c);
        }
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x80;
    } while (lVar5 < iVar2);
  }
  bVar4 = *(byte *)(param_1 + 0xdd) | *(byte *)(param_1 + 0x3a);
  if (*(byte *)(param_1 + 0xdc) != bVar4) {
    iVar2 = *(int *)(param_1 + 0x468);
    if (0 < iVar2) {
      lVar6 = 0;
      plVar7 = (long *)(param_1 + 0x488);
      do {
        if (*plVar7 != 0) {
          FUN_003c0db0(*plVar7,bVar4 != 0);
          iVar2 = *(int *)(param_1 + 0x468);
        }
        lVar6 = lVar6 + 1;
        plVar7 = plVar7 + 0x210;
      } while (lVar6 < iVar2);
    }
    *(byte *)(param_1 + 0xdc) = bVar4;
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  return;
}

