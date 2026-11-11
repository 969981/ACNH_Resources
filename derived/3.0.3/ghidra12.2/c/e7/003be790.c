
long FUN_003be790(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined1 *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar9 = *(long *)(param_1 + 0x1d8);
  uVar4 = (undefined1)param_2;
  iVar5 = (int)((uint)*(byte *)(param_1 + 0x198) * param_3) / 0x7f;
  if ((param_5 & 1) == 0) {
    lVar8 = 0;
    if (*(char *)(param_1 + 0x7b) != '\0') goto LAB_003be808;
LAB_003be848:
    if (lVar8 != 0) goto LAB_003be914;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x1e0);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x170) = uVar4;
      uVar10 = FUN_003de318(iVar5);
      *(undefined4 *)(lVar8 + 0x178) = uVar10;
    }
    if (*(char *)(param_1 + 0x7b) == '\0') goto LAB_003be848;
LAB_003be808:
    lVar8 = *(long *)(param_1 + 0x1e0);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x20) != 4) {
        *(undefined1 *)(lVar8 + 0x170) = uVar4;
        uVar10 = FUN_003de318(iVar5);
        *(undefined4 *)(lVar8 + 0x178) = uVar10;
        *(int *)(lVar8 + 0x164) = param_4;
        goto LAB_003be914;
      }
      FUN_003bf4f0(lVar8);
      FUN_003bfa90(lVar8,0);
      FUN_003bfb9c(lVar8);
    }
  }
  lVar8 = *(long *)(param_1 + 0x1d8);
  iStack_7c = param_4;
  if ((param_5 & 1) != 0) {
    iStack_7c = -1;
  }
  local_88 = *(undefined4 *)(param_1 + 300);
  iStack_74 = (uint)*(byte *)(param_1 + 0x19d) + (uint)*(byte *)(lVar9 + 0x110);
  local_60 = *(undefined8 *)(lVar8 + 0x30);
  local_70 = &LAB_003be530;
  local_58 = *(undefined4 *)(lVar8 + 0x360);
  local_78 = (int)*(char *)(param_1 + 0x19a);
  iStack_84 = param_2;
  local_80 = iVar5;
  lStack_68 = param_1;
  lVar8 = FUN_003c85dc(lVar8,*(undefined1 *)(param_1 + 299),&local_88);
  if (lVar8 == 0) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x1e0);
  if ((*(char *)(lVar8 + 0x172) != '\0') && (lVar9 != 0)) {
    do {
      if (*(char *)(lVar9 + 0x172) == *(char *)(lVar8 + 0x172)) {
        FUN_003bfe68(lVar9 + 0x20,0x7e);
        FUN_003bf544(lVar9);
      }
      lVar9 = *(long *)(lVar9 + 0x198);
    } while (lVar9 != 0);
    lVar9 = *(long *)(param_1 + 0x1e0);
  }
  *(long *)(lVar8 + 0x198) = lVar9;
  *(long *)(param_1 + 0x1e0) = lVar8;
LAB_003be914:
  if (-1 < *(char *)(param_1 + 0x1a0)) {
    FUN_003bfdb4(lVar8 + 0x20,*(char *)(param_1 + 0x1a0));
  }
  if (-1 < *(char *)(param_1 + 0x1a1)) {
    FUN_003bfddc(lVar8 + 0x20,*(char *)(param_1 + 0x1a1));
  }
  if (-1 < *(char *)(param_1 + 0x1a2)) {
    FUN_003bfe60(lVar8 + 0x20,*(char *)(param_1 + 0x1a2));
  }
  if (-1 < *(char *)(param_1 + 0x1a3)) {
    FUN_003bfe68(lVar8 + 0x20,*(char *)(param_1 + 0x1a3));
  }
  if (*(short *)(param_1 + 0x1a4) < 0x80) {
    FUN_003bfdc8(lVar8 + 0x20);
  }
  bVar1 = *(byte *)(param_1 + 0x19f);
  fVar11 = -0.0;
  if (*(char *)(param_1 + 0x129) != '\0') {
    fVar11 = (float)(int)((uint)*(byte *)(param_1 + 0x19e) - param_2);
  }
  fVar11 = *(float *)(param_1 + 0x130) + fVar11;
  if (bVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
    if (fVar11 < 0.0) {
      fVar11 = -fVar11;
    }
    param_4 = ((int)(fVar11 * (float)((uint)bVar1 * (uint)bVar1)) >> 5) * 5;
  }
  FUN_003bf934(lVar8,param_4,uVar6);
  *(undefined1 *)(param_1 + 0x19e) = uVar4;
  cVar2 = *(char *)(param_1 + 0x123);
  uVar3 = *(ushort *)(lVar8 + 0x156);
  if ((uint)*(ushort *)(lVar8 + 0x158) < (uint)uVar3) {
    cVar7 = '\0';
    if (uVar3 != 0) {
      cVar7 = (char)((int)(((uint)*(byte *)(lVar8 + 0x155) - (uint)*(byte *)(lVar8 + 0x154)) *
                          (uint)*(ushort *)(lVar8 + 0x158)) / (int)(uint)uVar3);
    }
    cVar7 = *(byte *)(lVar8 + 0x154) + cVar7;
  }
  else {
    cVar7 = *(char *)(lVar8 + 0x155);
  }
  *(char *)(lVar8 + 0x154) = cVar7;
  *(char *)(lVar8 + 0x155) = cVar2 + -1;
  *(undefined4 *)(lVar8 + 0x156) = 0;
  *(undefined1 *)(lVar8 + 0xc4) = *(undefined1 *)(*(long *)(param_1 + 0x1d8) + 0xf0);
  *(undefined4 *)(lVar8 + 0x168) = *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x54);
  *(undefined4 *)(lVar8 + 0x16c) = *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x58);
  return lVar8;
}

