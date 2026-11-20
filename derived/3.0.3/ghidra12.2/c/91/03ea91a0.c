
bool FUN_03ea91a0(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  char *local_70;
  undefined1 local_68;
  
  pcVar8 = (char *)param_1[1];
  if ((pcVar8 != (char *)0x0) && (*pcVar8 == -0x3f)) {
    psVar6 = (short *)*param_1;
    sVar2 = *psVar6;
    uVar7 = *(uint *)(psVar6 + 2);
    uVar9 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    if (sVar2 != 0x5942) {
      uVar9 = uVar7;
    }
    puVar1 = (uint *)((long)psVar6 + (long)(int)uVar9);
    if (uVar9 != 0) {
      uVar9 = *puVar1 >> 8;
      if (sVar2 == 0x5942) {
        iVar10 = 0;
        uVar9 = uVar9 & 0xff00 | *puVar1 >> 0x18 | (uVar9 & 0xff) << 0x10;
        do {
          if ((int)uVar9 <= iVar10) {
            return false;
          }
          iVar4 = iVar10 + uVar9;
          if (iVar4 < 0 != SCARRY4(iVar10,uVar9)) {
            iVar4 = iVar4 + 1;
          }
          uVar7 = iVar4 >> 1;
          uVar3 = (puVar1[(long)(int)uVar7 + 1] & 0xff00ff00) >> 8 |
                  (puVar1[(long)(int)uVar7 + 1] & 0xff00ff) << 8;
          iVar4 = strcmp(param_2,(char *)((long)puVar1 + (ulong)(uVar3 >> 0x10 | uVar3 << 0x10)));
          if (iVar4 < 1) {
            uVar9 = uVar7;
          }
          else {
            iVar10 = uVar7 + 1;
          }
        } while (iVar4 != 0);
      }
      else {
        iVar10 = 0;
        do {
          if ((int)uVar9 <= iVar10) {
            return false;
          }
          iVar4 = iVar10 + uVar9;
          if (iVar4 < 0 != SCARRY4(iVar10,uVar9)) {
            iVar4 = iVar4 + 1;
          }
          uVar7 = iVar4 >> 1;
          iVar4 = strcmp(param_2,(char *)((long)puVar1 + (ulong)puVar1[(long)(int)uVar7 + 1]));
          if (iVar4 < 1) {
            uVar9 = uVar7;
          }
          else {
            iVar10 = uVar7 + 1;
          }
        } while (iVar4 != 0);
      }
      if (-1 < (int)uVar7) {
        local_68 = sVar2 == 0x5942;
        local_70 = pcVar8;
        lVar5 = FUN_03eaa9a0(&local_70,uVar7);
        return lVar5 != 0;
      }
    }
  }
  return false;
}

