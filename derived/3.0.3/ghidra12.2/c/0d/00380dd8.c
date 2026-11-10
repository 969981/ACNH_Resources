
void FUN_00380dd8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ushort local_114;
  ushort local_112;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 == 0) {
    uVar9 = (uint)DAT_00000008;
  }
  else {
    uVar9 = (uint)*(byte *)(lVar7 + 8);
    if (((*(byte *)(lVar7 + 8) >> 5 & 1) != 0) && (*(char *)(param_1 + 0x98) != '\0')) {
      return;
    }
  }
  uStack_78 = *(undefined8 *)(param_2 + 0x138);
  local_70 = *(undefined8 *)(param_2 + 0x140);
  uStack_88 = *(undefined8 *)(param_2 + 0x128);
  local_80 = *(undefined8 *)(param_2 + 0x130);
  puVar1 = (undefined8 *)(param_2 + 0x130);
  puVar2 = (undefined8 *)(param_2 + 0x100);
  uStack_68 = *(undefined8 *)(param_2 + 0x148);
  uStack_a8 = *(undefined8 *)(param_2 + 0x108);
  local_a0 = *(undefined8 *)(param_2 + 0x110);
  uStack_98 = *(undefined8 *)(param_2 + 0x118);
  local_90 = *(undefined8 *)(param_2 + 0x120);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  local_b0 = *(undefined8 *)(param_2 + 0x100);
  if (((uVar9 >> 2 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd4))) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uVar9 = (uint)*(byte *)(lVar7 + 8);
    if ((*(byte *)(lVar7 + 8) >> 5 & 1) == 0) {
      switch(*(undefined1 *)(lVar7 + 0xf)) {
      case 1:
        uVar6 = 4;
        break;
      case 2:
        uVar6 = 2;
        break;
      case 3:
        uVar6 = 3;
        break;
      case 4:
        uVar6 = 5;
        break;
      default:
        uVar6 = 0;
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x90) + 0x40;
      local_110 = 0xff000000ff;
      uStack_108 = 0xff000000ff;
      FUN_003486c4(param_3,lVar7,&local_110,0);
      (**(code **)(**(long **)(param_1 + 0x90) + 0x20))(&local_114);
      uVar4 = NEON_ucvtf((uint)local_114);
      uVar5 = NEON_ucvtf((uint)local_112);
      FUN_0038d200((short)uVar4,(short)uVar5,&local_100,&local_d0);
      *(long *)(param_2 + 0xf8) = lVar7;
      uVar6 = 1;
      *(undefined8 *)(param_2 + 0x110) = local_f0;
      *(undefined8 *)(param_2 + 0x118) = uStack_e8;
      *(undefined8 *)(param_2 + 0x120) = local_e0;
      *(undefined8 *)(param_2 + 0x128) = uStack_d8;
      *puVar2 = local_100;
      *(undefined8 *)(param_2 + 0x108) = uStack_f8;
      *(undefined8 *)(param_2 + 0x140) = local_c0;
      *(undefined8 *)(param_2 + 0x148) = uStack_b8;
      *puVar1 = local_d0;
      *(undefined8 *)(param_2 + 0x138) = uStack_c8;
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 8);
    }
    FUN_00382720(param_1,param_2,param_3,2,uVar6,uVar9 >> 3 & 1);
    lVar7 = *(long *)(param_1 + 0x58);
  }
  bVar8 = *(byte *)(lVar7 + 8);
  if (((bVar8 >> 1 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uVar9 = (uint)*(byte *)(lVar7 + 8);
    if ((*(byte *)(lVar7 + 8) >> 5 & 1) == 0) {
      switch(*(undefined1 *)(lVar7 + 0xe)) {
      case 1:
        uVar6 = 4;
        break;
      case 2:
        uVar6 = 2;
        break;
      case 3:
        uVar6 = 3;
        break;
      case 4:
        uVar6 = 5;
        break;
      default:
        uVar6 = 0;
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x88) + 0x40;
      local_110 = 0xff000000ff;
      uStack_108 = 0xff000000ff;
      FUN_003486c4(param_3,lVar7,&local_110,0);
      (**(code **)(**(long **)(param_1 + 0x88) + 0x20))(&local_114);
      uVar4 = NEON_ucvtf((uint)local_114);
      uVar5 = NEON_ucvtf((uint)local_112);
      FUN_0038d200((short)uVar4,(short)uVar5,&local_100,&local_d0);
      *(long *)(param_2 + 0xf8) = lVar7;
      uVar6 = 1;
      *(undefined8 *)(param_2 + 0x110) = local_f0;
      *(undefined8 *)(param_2 + 0x118) = uStack_e8;
      *(undefined8 *)(param_2 + 0x120) = local_e0;
      *(undefined8 *)(param_2 + 0x128) = uStack_d8;
      *puVar2 = local_100;
      *(undefined8 *)(param_2 + 0x108) = uStack_f8;
      *(undefined8 *)(param_2 + 0x140) = local_c0;
      *(undefined8 *)(param_2 + 0x148) = uStack_b8;
      *puVar1 = local_d0;
      *(undefined8 *)(param_2 + 0x138) = uStack_c8;
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 8);
    }
    FUN_00382720(param_1,param_2,param_3,1,uVar6,uVar9 >> 3 & 1);
    lVar7 = *(long *)(param_1 + 0x58);
    bVar8 = *(byte *)(lVar7 + 8);
  }
  if (((bVar8 & 1) != 0) && (-1 < *(int *)(param_1 + 0xcc))) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    uVar9 = (uint)*(byte *)(lVar7 + 8);
    if ((*(byte *)(lVar7 + 8) >> 5 & 1) == 0) {
      switch(*(undefined1 *)(lVar7 + 0xd)) {
      case 1:
        uVar6 = 4;
        break;
      case 2:
        uVar6 = 2;
        break;
      case 3:
        uVar6 = 3;
        break;
      case 4:
        uVar6 = 5;
        break;
      default:
        uVar6 = 0;
      }
    }
    else {
      lVar7 = *(long *)(param_1 + 0x80) + 0x40;
      local_110 = 0xff000000ff;
      uStack_108 = 0xff000000ff;
      FUN_003486c4(param_3,lVar7,&local_110,0);
      (**(code **)(**(long **)(param_1 + 0x80) + 0x20))(&local_114);
      uVar4 = NEON_ucvtf((uint)local_114);
      uVar5 = NEON_ucvtf((uint)local_112);
      FUN_0038d200((short)uVar4,(short)uVar5,&local_100,&local_d0);
      *(long *)(param_2 + 0xf8) = lVar7;
      uVar6 = 1;
      *(undefined8 *)(param_2 + 0x110) = local_f0;
      *(undefined8 *)(param_2 + 0x118) = uStack_e8;
      *(undefined8 *)(param_2 + 0x120) = local_e0;
      *(undefined8 *)(param_2 + 0x128) = uStack_d8;
      *puVar2 = local_100;
      *(undefined8 *)(param_2 + 0x108) = uStack_f8;
      *(undefined8 *)(param_2 + 0x140) = local_c0;
      *(undefined8 *)(param_2 + 0x148) = uStack_b8;
      *puVar1 = local_d0;
      *(undefined8 *)(param_2 + 0x138) = uStack_c8;
      uVar9 = (uint)*(byte *)(*(long *)(param_1 + 0x58) + 8);
    }
    FUN_00382720(param_1,param_2,param_3,0,uVar6,uVar9 >> 3 & 1);
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 == 0) {
      return;
    }
  }
  if ((*(byte *)(lVar7 + 8) >> 5 & 1) != 0) {
    FUN_00348a0c(param_3,0x80);
    FUN_00348a34(param_3,0x20);
    *(undefined1 *)(param_1 + 0x98) = 1;
    *(undefined8 *)(param_2 + 0xf8) = uVar3;
    *(undefined8 *)(param_2 + 0x110) = local_a0;
    *(undefined8 *)(param_2 + 0x118) = uStack_98;
    *(undefined8 *)(param_2 + 0x120) = local_90;
    *(undefined8 *)(param_2 + 0x128) = uStack_88;
    *puVar2 = local_b0;
    *(undefined8 *)(param_2 + 0x108) = uStack_a8;
    *(undefined8 *)(param_2 + 0x140) = local_70;
    *(undefined8 *)(param_2 + 0x148) = uStack_68;
    *puVar1 = local_80;
    *(undefined8 *)(param_2 + 0x138) = uStack_78;
    FUN_00365188(param_2,param_3);
  }
  return;
}

