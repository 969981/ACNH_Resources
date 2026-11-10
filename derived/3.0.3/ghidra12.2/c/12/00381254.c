
void FUN_00381254(long param_1,long param_2,undefined8 param_3)

{
  uint *puVar1;
  long *plVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  uint *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 local_78;
  long local_70;
  long lStack_68;
  
  lVar7 = *(long *)(param_1 + 0x58);
  puVar11 = (uint *)(param_1 + 0x17c);
  bVar3 = *(byte *)(lVar7 + 8);
  puVar1 = (uint *)(param_1 + 0x178);
  if ((bVar3 >> 2 & 1) != 0) {
    switch(*(undefined1 *)(lVar7 + 0xf)) {
    case 1:
      uVar9 = 4;
      puVar8 = puVar11;
      goto LAB_003812f4;
    case 2:
      uVar9 = 2;
      break;
    case 3:
      uVar9 = 3;
      break;
    case 4:
      uVar9 = 5;
      break;
    default:
      uVar9 = 0;
    }
    puVar8 = puVar1;
LAB_003812f4:
    uVar4 = *puVar8;
    lVar10 = *(long *)(param_1 + 0xe0);
    FUN_0038d1a0(param_2,param_3,lVar10,uVar4);
    puVar6 = (undefined8 *)FUN_00367334(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar6;
    lVar7 = *(long *)(lVar10 + 0x30);
    iVar5 = FUN_00386648(lVar10);
    FUN_00348c64(param_3,*(undefined4 *)(lVar7 + (long)(int)(iVar5 * (uVar4 & 0xff)) * 4),4,
                 *(long *)(param_1 + 0x90) + 8,&local_78);
    uVar9 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),uVar9);
    FUN_00348090(param_3,uVar9);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xbc);
    lVar7 = *(long *)(param_2 + 0xb8);
    FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar4 * 4),0,
                 &local_70,0x230);
    FUN_00347e74(param_3,3,1,lVar7 + 0x248,6,0);
    lVar7 = *(long *)(param_1 + 0x58);
    bVar3 = *(byte *)(lVar7 + 8);
  }
  if ((bVar3 >> 1 & 1) == 0) goto joined_r0x00381298;
  switch(*(undefined1 *)(lVar7 + 0xe)) {
  case 1:
    uVar9 = 4;
    puVar8 = puVar11;
    goto LAB_00381438;
  case 2:
    uVar9 = 2;
    break;
  case 3:
    uVar9 = 3;
    break;
  case 4:
    uVar9 = 5;
    break;
  default:
    uVar9 = 0;
  }
  puVar8 = puVar1;
LAB_00381438:
  uVar4 = *puVar8;
  lVar10 = *(long *)(param_1 + 0xe0);
  FUN_0038d1a0(param_2,param_3,lVar10,uVar4);
  puVar6 = (undefined8 *)FUN_00367334(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
  local_78 = *puVar6;
  lVar7 = *(long *)(lVar10 + 0x30);
  iVar5 = FUN_00386648(lVar10);
  FUN_00348c64(param_3,*(undefined4 *)(lVar7 + (long)(int)(iVar5 * (uVar4 & 0xff)) * 4),4,
               *(long *)(param_1 + 0x88) + 8,&local_78);
  uVar9 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),uVar9);
  FUN_00348090(param_3,uVar9);
  plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_68 = plVar2[1];
  local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb8);
  lVar7 = *(long *)(param_2 + 0xb8);
  FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar4 * 4),0,&local_70,
               0x230);
  FUN_00347e74(param_3,3,1,lVar7 + 0x248,6,0);
  lVar7 = *(long *)(param_1 + 0x58);
  bVar3 = *(byte *)(lVar7 + 8);
joined_r0x00381298:
  if ((bVar3 & 1) != 0) {
    switch(*(undefined1 *)(lVar7 + 0xd)) {
    case 1:
      uVar9 = 4;
      break;
    case 2:
      uVar9 = 2;
      puVar11 = puVar1;
      break;
    case 3:
      uVar9 = 3;
      puVar11 = puVar1;
      break;
    case 4:
      uVar9 = 5;
      puVar11 = puVar1;
      break;
    default:
      uVar9 = 0;
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    lVar10 = *(long *)(param_1 + 0xe0);
    FUN_0038d1a0(param_2,param_3,lVar10,uVar4);
    puVar6 = (undefined8 *)FUN_00367334(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    local_78 = *puVar6;
    lVar7 = *(long *)(lVar10 + 0x30);
    iVar5 = FUN_00386648(lVar10);
    FUN_00348c64(param_3,*(undefined4 *)(lVar7 + (long)(int)(iVar5 * (uVar4 & 0xff)) * 4),4,
                 *(long *)(param_1 + 0x80) + 8,&local_78);
    uVar9 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),uVar9);
    FUN_00348090(param_3,uVar9);
    plVar2 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    lStack_68 = plVar2[1];
    local_70 = *plVar2 + (long)*(int *)(param_1 + 0xb4);
    lVar7 = *(long *)(param_2 + 0xb8);
    FUN_00348cdc(param_3,*(undefined4 *)(*(long *)(lVar10 + 0x18) + (long)(int)uVar4 * 4),0,
                 &local_70,0x230);
    FUN_00347e74(param_3,3,1,lVar7 + 0x248,6,0);
  }
  return;
}

