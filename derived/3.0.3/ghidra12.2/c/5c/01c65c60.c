
ulong FUN_01c65c60(byte *param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar10;
  uint uVar9;
  ulong uVar11;
  uint uVar13;
  uint uVar12;
  ulong uVar14;
  ulong unaff_x27;
  byte local_44 [4];
  
  local_44[0] = *param_1;
  uVar14 = 1;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_44,1);
  if (lVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    uVar12 = 0;
    uVar11 = 1;
  }
  else {
    if ((*(long **)(lVar4 + 0x184e0) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x184e0), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    lVar1 = *(long *)(lVar4 + 0x184c8) + *(long *)(lVar4 + 0x184c0);
    uVar14 = nn::time::IsValidDate
                       ((uint)*(ushort *)(lVar1 + 0x230cc),(uint)*(byte *)(lVar1 + 0x230ce),
                        (uint)*(byte *)(lVar1 + 0x230cf));
    if ((uVar14 & 1) == 0) {
      uVar11 = 1;
      uVar7 = 0;
      uVar8 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar13 = 0;
      uVar12 = 0;
      uVar14 = 1;
    }
    else {
      uVar6 = FUN_0272eca4((ushort *)(lVar1 + 0x230cc),0);
      uVar7 = (uint)(uVar6 >> 0x20);
      uVar10 = uVar7 >> 8;
      uVar9 = uVar7 >> 8;
      uVar2 = (ushort)(uVar6 >> 0x30);
      uVar13 = (uint)uVar2;
      uVar12 = (uint)uVar2;
      uVar8 = uVar6 & 0xffffffff;
      uVar14 = uVar6 >> 0x10;
      uVar11 = uVar6 >> 0x18;
      unaff_x27 = uVar6 >> 0x38;
    }
    if ((((uVar3 & 1) == 0) && (uVar12 = uVar13, uVar9 = uVar10, *(long *)(lVar4 + 0x184e0) != 0))
       && (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x184e0) + 8), puVar5 != (undefined8 *)0x0))
    {
      (**(code **)*puVar5)();
    }
  }
  return (ulong)(uVar12 & 0xff) << 0x30 | unaff_x27 << 0x38 | (ulong)(uVar9 & 0xff) << 0x28 |
         (ulong)(uVar7 & 0xff) << 0x20 | (uVar11 & 0xff) << 0x18 | (uVar14 & 0xff) << 0x10 |
         uVar8 & 0xffff;
}

