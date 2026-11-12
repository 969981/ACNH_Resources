
/* WARNING: Type propagation algorithm not settling */

bool FUN_00872588(undefined8 param_1,uint param_2,byte param_3,byte param_4)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  long lVar8;
  byte local_34 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  local_34[0] = DAT_0548e140;
  if (lVar8 == 0) {
joined_r0x00872618:
    if (local_34[0] < 8) goto LAB_00872688;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    local_34[0] = *pbVar7;
    if (*pbVar7 < 8) goto LAB_00872688;
    if ((*(int *)(lVar8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
      local_34[0] = *(byte *)(DAT_054f5738 + 0x11a5);
      goto joined_r0x00872618;
    }
  }
  if (DAT_0537d558 != (long *)0x0) {
    lVar8 = *DAT_0537d558;
    bVar2 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_34[0] = *pbVar7;
    if (*pbVar7 < 8) goto LAB_00872688;
  }
  local_34[0] = DAT_0548e168;
  if (7 < DAT_0548e168) {
    return false;
  }
LAB_00872688:
  lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  if (lVar8 == 0) {
    return false;
  }
  if ((*(long **)(lVar8 + 0x18390) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar8 + 0x18390), puVar6 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar6)();
    uVar5 = uVar5 ^ 1;
  }
  pbVar7 = (byte *)(*(long *)(lVar8 + 0x18378) + *(long *)(lVar8 + 0x18370));
  bVar2 = *pbVar7;
  if ((bVar2 - 1 < 0xc) && (bVar3 = pbVar7[1], (byte)(bVar3 - 1) < (byte)(&DAT_0417b531)[bVar2 - 1])
     ) {
    if ((bVar2 == 2 && bVar3 == 0x1d) &&
       (((param_2 & 3) != 0 ||
        ((((param_2 & 0xffff) * -0x3d70a3d7 >> 2 | param_2 * 0x40000000) < 0x28f5c29 &&
         ((param_2 & 0xf) != 0)))))) {
      bVar4 = param_3 == 2 && param_4 == 0x1c;
    }
    else {
      bVar4 = bVar2 == param_3 && bVar3 == param_4;
    }
  }
  else {
    bVar4 = false;
  }
  if ((uVar5 & 1) != 0) {
    return bVar4;
  }
  if (*(long *)(lVar8 + 0x18390) == 0) {
    return bVar4;
  }
  puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x18390) + 8);
  if (puVar6 == (undefined8 *)0x0) {
    return bVar4;
  }
  (**(code **)*puVar6)();
  return bVar4;
}

