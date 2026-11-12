
byte FUN_009b5a34(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  
  local_54 = 0;
  uVar11 = 0x828282ff;
  uVar10 = 0xf0f0fff;
  iVar5 = nn::hid::GetNpadControllerColor
                    ((NpadControllerColor *)&local_48,(NpadControllerColor *)&local_50,&local_54);
  uVar8 = uVar10;
  uVar9 = uVar11;
  uVar6 = uVar10;
  uVar7 = uVar11;
  if (iVar5 == 0) {
    uVar7 = (local_50 & 0xff00ff00) >> 8 | (local_50 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar6 = (uStack_4c & 0xff00ff00) >> 8 | (uStack_4c & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar9 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar8 = (uStack_44 & 0xff00ff00) >> 8 | (uStack_44 & 0xff00ff) << 8;
    uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
  }
  if (((uint)DAT_04d0222b == uVar9 >> 0x18) && ((uint)DAT_04d0222a == (uVar9 >> 0x10 & 0xff))) {
    bVar1 = false;
    if (((uint)DAT_04d02229 == (uVar9 >> 8 & 0xff)) && ((uint)DAT_04d02228 == (uVar9 & 0xff))) {
      if ((((uint)DAT_04d0222f != uVar8 >> 0x18) || ((uint)DAT_04d0222e != (uVar8 >> 0x10 & 0xff)))
         || ((uint)DAT_04d0222d != (uVar8 >> 8 & 0xff))) goto LAB_009b5b1c;
      bVar1 = (uint)DAT_04d0222c == (uVar8 & 0xff);
    }
  }
  else {
LAB_009b5b1c:
    bVar1 = false;
  }
  if (((uint)DAT_04d02233 == uVar7 >> 0x18) && ((uint)DAT_04d02232 == (uVar7 >> 0x10 & 0xff))) {
    bVar2 = false;
    if (((uint)DAT_04d02231 == (uVar7 >> 8 & 0xff)) && ((uint)DAT_04d02230 == (uVar7 & 0xff))) {
      if ((((uint)DAT_04d02237 != uVar6 >> 0x18) || ((uint)DAT_04d02236 != (uVar6 >> 0x10 & 0xff)))
         || ((uint)DAT_04d02235 != (uVar6 >> 8 & 0xff))) goto LAB_009b5ba0;
      bVar2 = (uint)DAT_04d02234 == (uVar6 & 0xff);
    }
  }
  else {
LAB_009b5ba0:
    bVar2 = false;
  }
  local_54 = 0x20;
  iVar5 = nn::hid::GetNpadControllerColor
                    ((NpadControllerColor *)&local_48,(NpadControllerColor *)&local_50,&local_54);
  uVar6 = uVar10;
  uVar7 = uVar11;
  if (iVar5 == 0) {
    uVar11 = (local_50 & 0xff00ff00) >> 8 | (local_50 & 0xff00ff) << 8;
    uVar7 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (uStack_4c & 0xff00ff00) >> 8 | (uStack_4c & 0xff00ff) << 8;
    uVar6 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar10 = (uStack_44 & 0xff00ff00) >> 8 | (uStack_44 & 0xff00ff) << 8;
    uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
  }
  if (((uint)DAT_04d0222b == uVar11 >> 0x18) && ((uint)DAT_04d0222a == (uVar11 >> 0x10 & 0xff))) {
    bVar3 = false;
    if (((uint)DAT_04d02229 == (uVar11 >> 8 & 0xff)) && ((uint)DAT_04d02228 == (uVar11 & 0xff))) {
      if ((((uint)DAT_04d0222f != uVar10 >> 0x18) || ((uint)DAT_04d0222e != (uVar10 >> 0x10 & 0xff))
          ) || ((uint)DAT_04d0222d != (uVar10 >> 8 & 0xff))) goto LAB_009b5c58;
      bVar3 = (uint)DAT_04d0222c == (uVar10 & 0xff);
    }
  }
  else {
LAB_009b5c58:
    bVar3 = false;
  }
  if (((uint)DAT_04d02233 == uVar7 >> 0x18) && ((uint)DAT_04d02232 == (uVar7 >> 0x10 & 0xff))) {
    bVar4 = false;
    if (((uint)DAT_04d02231 != (uVar7 >> 8 & 0xff)) || ((uint)DAT_04d02230 != (uVar7 & 0xff)))
    goto LAB_009b5cd8;
    if ((((uint)DAT_04d02237 == uVar6 >> 0x18) && ((uint)DAT_04d02236 == (uVar6 >> 0x10 & 0xff))) &&
       ((uint)DAT_04d02235 == (uVar6 >> 8 & 0xff))) {
      bVar4 = (uint)DAT_04d02234 == (uVar6 & 0xff);
      goto LAB_009b5cd8;
    }
  }
  bVar4 = false;
LAB_009b5cd8:
  return (bVar1 | bVar3) & (bVar2 | bVar4);
}

