
undefined8 FUN_01b4a920(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_44 [4];
  
  if (*(char *)(param_1 + 0xb8) != '\0') {
    return 0;
  }
  local_44[0] = *param_2;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
  lVar5 = FUN_02583354(DAT_055021a0,local_44,1);
  if (lVar5 == 0) {
    return 0;
  }
  lVar10 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar5 = *(long *)(lVar10 + 0x8528);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar10 + 0x8528) == 0) goto LAB_01b4aa38;
      plVar7 = *(long **)(*(long *)(lVar10 + 0x8528) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_78 = *(long *)(lVar10 + 0x8508);
      local_70 = *(undefined8 *)(lVar10 + 0x8510);
      uStack_68 = 0xeab4;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_78);
    }
  }
LAB_01b4aa38:
  lVar5 = *(long *)(lVar10 + 0x8510) + *(long *)(lVar10 + 0x8508);
  puVar14 = (undefined1 *)(lVar5 + 0xcd7c);
  uVar8 = FUN_02829aa0(puVar14);
  if ((uVar8 & 1) != 0) {
    puVar14 = (undefined1 *)(lVar5 + 0xd068);
    uVar8 = FUN_02829aa0(puVar14);
    if ((uVar8 & 1) != 0) {
      puVar14 = (undefined1 *)(lVar5 + 0xd354);
      uVar8 = FUN_02829aa0(puVar14);
      if ((uVar8 & 1) != 0) {
        puVar14 = (undefined1 *)(lVar5 + 0xd640);
        uVar8 = FUN_02829aa0(puVar14);
        if ((uVar8 & 1) != 0) {
          puVar14 = (undefined1 *)(lVar5 + 0xd92c);
          uVar8 = FUN_02829aa0(puVar14);
          if ((uVar8 & 1) != 0) {
            uVar15 = 0;
            goto LAB_01b4ac14;
          }
        }
      }
    }
  }
  lVar5 = *(long *)PTR_DAT_04bb32e8;
  uVar4 = *(ushort *)(lVar5 + 0x4060);
  bVar2 = *(byte *)(lVar5 + 0x4062);
  bVar3 = *(byte *)(lVar5 + 0x4063);
  nn::time::IsValidDate((uint)uVar4,(uint)bVar2,(uint)bVar3);
  uVar15 = 1;
  *puVar14 = 1;
  puVar14[1] = *(undefined1 *)(param_1 + 0xcc);
  *(undefined2 *)(puVar14 + 2) = *(undefined2 *)(param_1 + 0x36e);
  *(undefined2 *)(puVar14 + 4) = *(undefined2 *)(param_1 + 0xc0);
  puVar14[6] = *(undefined1 *)(param_1 + 0xc2);
  puVar14[7] = *(undefined1 *)(param_1 + 0xc3);
  *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(param_1 + 0xc4);
  *(uint *)(puVar14 + 0xc) = (uint)bVar3 << 0x18 | (uint)bVar2 << 0x10 | (uint)uVar4;
  uVar11 = *(undefined8 *)(param_1 + 0xce);
  uVar12 = *(undefined8 *)(param_1 + 0xd6);
  uVar13 = *(undefined8 *)(param_1 + 0xe6);
  *(undefined8 *)(puVar14 + 0x20) = *(undefined8 *)(param_1 + 0xde);
  *(undefined8 *)(puVar14 + 0x28) = uVar13;
  *(undefined8 *)(puVar14 + 0x10) = uVar11;
  *(undefined8 *)(puVar14 + 0x18) = uVar12;
  uVar11 = *(undefined8 *)(param_1 + 0x106);
  uVar12 = *(undefined8 *)(param_1 + 0xee);
  uVar13 = *(undefined8 *)(param_1 + 0xf6);
  *(undefined8 *)(puVar14 + 0x40) = *(undefined8 *)(param_1 + 0xfe);
  *(undefined8 *)(puVar14 + 0x48) = uVar11;
  *(undefined8 *)(puVar14 + 0x30) = uVar12;
  *(undefined8 *)(puVar14 + 0x38) = uVar13;
  uVar11 = *(undefined8 *)(param_1 + 0x126);
  uVar12 = *(undefined8 *)(param_1 + 0x10e);
  uVar13 = *(undefined8 *)(param_1 + 0x116);
  *(undefined8 *)(puVar14 + 0x60) = *(undefined8 *)(param_1 + 0x11e);
  *(undefined8 *)(puVar14 + 0x68) = uVar11;
  *(undefined8 *)(puVar14 + 0x50) = uVar12;
  *(undefined8 *)(puVar14 + 0x58) = uVar13;
  memcpy(puVar14 + 0x70,(void *)(param_1 + 0x12e),0x1e0);
  uVar12 = *(undefined8 *)(param_1 + 0x316);
  uVar11 = *(undefined8 *)(param_1 + 0x31e);
  uVar13 = *(undefined8 *)(param_1 + 0x326);
  *(undefined8 *)(puVar14 + 0x250) = *(undefined8 *)(param_1 + 0x30e);
  *(undefined8 *)(puVar14 + 0x268) = uVar13;
  *(undefined8 *)(puVar14 + 0x260) = uVar11;
  *(undefined8 *)(puVar14 + 600) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x336);
  uVar11 = *(undefined8 *)(param_1 + 0x33e);
  uVar13 = *(undefined8 *)(param_1 + 0x346);
  *(undefined8 *)(puVar14 + 0x270) = *(undefined8 *)(param_1 + 0x32e);
  *(undefined8 *)(puVar14 + 0x288) = uVar13;
  *(undefined8 *)(puVar14 + 0x280) = uVar11;
  *(undefined8 *)(puVar14 + 0x278) = uVar12;
  uVar12 = *(undefined8 *)(param_1 + 0x356);
  uVar11 = *(undefined8 *)(param_1 + 0x35e);
  uVar13 = *(undefined8 *)(param_1 + 0x366);
  *(undefined8 *)(puVar14 + 0x290) = *(undefined8 *)(param_1 + 0x34e);
  *(undefined8 *)(puVar14 + 0x2a8) = uVar13;
  *(undefined8 *)(puVar14 + 0x2a0) = uVar11;
  *(undefined8 *)(puVar14 + 0x298) = uVar12;
  puVar14[0x2b0] = *(undefined1 *)(param_1 + 200);
  uVar12 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x68);
  uVar13 = *(undefined8 *)(param_1 + 0x70);
  puVar14[0x2cc] = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(puVar14 + 0x2b4) = uVar12;
  *(undefined8 *)(puVar14 + 700) = uVar11;
  *(undefined8 *)(puVar14 + 0x2c4) = uVar13;
  uVar12 = *(undefined8 *)(param_1 + 0x8c);
  uVar11 = *(undefined8 *)(param_1 + 0x84);
  *(undefined8 *)(puVar14 + 0x2d0) = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(puVar14 + 0x2d8) = uVar11;
  *(undefined8 *)(puVar14 + 0x2e0) = uVar12;
  uVar1 = *(uint *)(param_1 + 0x94);
  if (1 < uVar1) {
    uVar1 = 0;
  }
  *(uint *)(puVar14 + 0x2e8) = uVar1;
LAB_01b4ac14:
  if ((uVar6 & 1) == 0) {
    return uVar15;
  }
  if (*(long *)(lVar10 + 0x8528) == 0) {
    return uVar15;
  }
  puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x8528) + 0x18);
  if (puVar9 == (undefined8 *)0x0) {
    return uVar15;
  }
  (**(code **)*puVar9)();
  return uVar15;
}

