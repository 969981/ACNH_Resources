
void FUN_01ca52a0(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ushort *puVar8;
  int iVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined **local_70;
  byte *pbStack_68;
  undefined4 local_60;
  byte local_5c [7];
  undefined1 local_55;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  int iStack_44;
  
  lVar11 = *(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8);
  iVar9 = *(int *)(lVar11 + 0x10);
  if (iVar9 == 0) {
    puVar7 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x38) + 0x270);
  }
  else if (iVar9 == 1) {
    puVar7 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x48) + 0x30);
  }
  else {
    if (iVar9 != 2) {
      piVar12 = (int *)0x0;
      lVar13 = *(long *)PTR_DAT_04bcb7d8;
      goto LAB_01ca5340;
    }
    puVar7 = (undefined8 *)(*(long *)(DAT_05ae6a60 + 0x40) + 0x240);
  }
  piVar12 = (int *)*puVar7;
  lVar13 = DAT_05ae6a60;
LAB_01ca5340:
  lVar13 = *(long *)(lVar13 + 0x20);
  FUN_03870d80(piVar12);
  FUN_03c09d18(lVar11,1);
  FUN_01ca5680(piVar12,*(undefined4 *)(param_1 + 0x168));
  *(undefined1 *)(lVar13 + 0x28) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x2088);
  uVar1 = *(undefined4 *)(param_1 + 0x2080);
  local_50 = (uint)*(ushort *)(param_1 + 0x16c) * 0x6c078965 + 1;
  uStack_4c = (local_50 ^ local_50 >> 0x1e) * 0x6c078965 + 2;
  local_48 = (uStack_4c ^ uStack_4c >> 0x1e) * 0x6c078965 + 3;
  iStack_44 = (local_48 ^ local_48 >> 0x1e) * 0x6c078965 + 4;
  piVar12[2] = 1;
  FUN_038a3af0(piVar12 + 3,4,uVar4,uVar1,&local_50);
  FUN_002446c0(piVar12 + 0x13be,0);
  *(char *)(lVar13 + 0x14) = (char)*(undefined4 *)(param_1 + 0xe4);
  *(bool *)(lVar13 + 0x21) = 1 < *(int *)(param_1 + 0xe4);
  FUN_03870fc8(piVar12,*(undefined4 *)(param_1 + 0xd0));
  FUN_03870f04(piVar12,1);
  if (**(long **)(param_1 + 0x178) != 0) {
    FUN_03871820(piVar12,*(long **)(param_1 + 0x178) + 1);
  }
  piVar12[1] = piVar12[1] & 0xfffffffeU | (uint)*(byte *)(param_1 + 0x170);
  uVar2 = *(ushort *)(param_1 + 0x16e) & 0x1f;
  if (1 < *(int *)(DAT_05358908 + 0xc4) - 1U) {
    uVar2 = *(ushort *)(param_1 + 0x16e);
  }
  FUN_03871164(piVar12,uVar2);
  FUN_038713e0(piVar12,*(char *)(param_1 + 0x171) == '\0');
  iVar9 = *(int *)(param_1 + 0xc4);
  if ((**(short **)(param_1 + 0x150) != 0) && (iVar9 == 1)) {
    local_5c[0] = 0;
    local_60 = 8;
    local_55 = 0;
    local_70 = &PTR_LAB_04908da0;
    pbStack_68 = local_5c;
    (**(code **)(*(long *)(param_1 + 0x148) + 0x18))(param_1 + 0x148);
    uVar6 = 0;
    lVar13 = 0x7fffffff;
    puVar8 = *(ushort **)(param_1 + 0x150);
    do {
      uVar5 = (uint)uVar6;
      pbVar10 = local_5c + uVar6;
      if (lVar13 == 0) goto LAB_01ca5570;
      uVar2 = *puVar8;
      if (uVar2 == 0) goto LAB_01ca5570;
      bVar3 = (byte)uVar2;
      if (uVar2 < 0x80) {
        *pbVar10 = bVar3;
        iVar9 = 1;
      }
      else if (uVar2 < 0x800) {
        if (6 < uVar5) break;
        *pbVar10 = (byte)(uVar2 >> 6) | 0xc0;
        local_5c[uVar6 + 1] = bVar3 & 0x3f | 0x80;
        iVar9 = 2;
      }
      else {
        if (7 < uVar5 + 2) break;
        *pbVar10 = (byte)(uVar2 >> 0xc) | 0xe0;
        local_5c[uVar6 + 1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        local_5c[uVar6 + 2] = bVar3 & 0x3f | 0x80;
        iVar9 = 3;
      }
      uVar6 = (ulong)(iVar9 + uVar5);
      lVar13 = lVar13 + -1;
      puVar8 = puVar8 + 1;
    } while (iVar9 + uVar5 < 8);
    pbVar10 = local_5c + ((int)uVar6 - 1);
LAB_01ca5570:
    *pbVar10 = 0;
    FUN_038714b0(piVar12,&local_70);
    iVar9 = *(int *)(param_1 + 0xc4);
  }
  if (**(short **)(param_1 + 0x130) != 0 && iVar9 == 0) {
    FUN_0387173c(piVar12,param_1 + 0x128);
  }
  if (*piVar12 == 1) {
    FUN_002cc04c(piVar12 + 0x836,0,0);
    FUN_002cbda4(piVar12 + 0x918,0,0);
  }
  *(undefined1 *)(lVar11 + 0x418) = 1;
  *(undefined4 *)(lVar11 + 0xe0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x120);
  return;
}

