
undefined8 FUN_01254a00(long param_1,undefined4 param_2,undefined4 *param_3,uint *param_4)

{
  byte *pbVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ulong uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte bVar11;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  uVar10 = 0;
  iVar7 = 0;
  puVar9 = &DAT_05152a90;
  while (*(int *)((long)&DAT_05152ac8 + (long)iVar7 * 0x48 + 4) < 0x24) {
    uVar10 = uVar10 + 1;
    iVar7 = iVar7 + 1;
    puVar9 = puVar9 + 9;
    if (uVar10 == 0x28) {
      return 0;
    }
  }
  if (0x27 < uVar10) {
    puVar9 = &DAT_05152a90;
  }
  *(undefined2 *)((long)puVar9 + 0x45) = 0xff00;
  *puVar9 = 0xfffe;
  FUN_0277d4ac(puVar9);
  puVar9[1] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0x2400000000;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[4] = 0;
  *(undefined4 *)(puVar9 + 8) = 0;
  *(undefined1 *)((long)puVar9 + 0x47) = 2;
  *(undefined1 *)((long)puVar9 + 0x44) = 0xff;
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  if (*(short *)(param_1 + 4) == -2) {
    return 0;
  }
  *(uint *)((long)puVar9 + 0x3c) = (uint)*(byte *)(param_1 + 0x16);
  local_68 = 0xfffe;
  FUN_0277d4ac(&local_68);
  uVar8 = *(undefined8 *)(param_1 + 4);
  *(short *)puVar9 = (short)uVar8;
  *(char *)((long)puVar9 + 2) = (char)((ulong)uVar8 >> 0x10);
  *(char *)((long)puVar9 + 3) = (char)((ulong)uVar8 >> 0x18);
  *(int *)((long)puVar9 + 4) = (int)((ulong)uVar8 >> 0x20);
  sVar2 = *(short *)(param_1 + 0xc);
  sVar3 = *(short *)(param_1 + 0xe);
  *(int *)(puVar9 + 6) = (int)sVar2;
  *(int *)((long)puVar9 + 0x34) = (int)sVar3;
  *(uint *)(puVar9 + 7) = *(byte *)(param_1 + 0x19) & 7;
  pbVar1 = PTR_DAT_04bb5038 + ((long)(char)*(byte *)(param_1 + 0x17) & 0xffffffff);
  if (7 < *(byte *)(param_1 + 0x17)) {
    pbVar1 = PTR_DAT_04bb32e0;
  }
  bVar11 = *pbVar1;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  *(byte *)((long)puVar9 + 0x46) = bVar11;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = *param_3;
    *(undefined4 *)((long)puVar9 + 0xc) = param_3[1];
    *(undefined4 *)(puVar9 + 2) = param_3[2];
  }
  switch(*(undefined4 *)((long)puVar9 + 0x3c)) {
  case 2:
  case 0x15:
    uVar5 = FUN_0277e158(puVar9);
    if ((uVar5 & 1) != 0) {
      FUN_01ad5d04(&local_68,puVar9);
      FUN_01afa2dc(&local_68,0);
      *(undefined4 *)puVar9 = local_60;
      *(undefined4 *)((long)puVar9 + 4) = uStack_5c;
    }
    break;
  default:
    FUN_0125477c(puVar9);
    return 0;
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0xd:
    *(undefined4 *)(puVar9 + 8) = param_2;
    goto LAB_01254cb4;
  case 0x10:
  case 0x11:
    sVar4 = *(short *)(param_1 + 0xe);
    *(int *)(puVar9 + 4) = (int)*(short *)(param_1 + 0xc);
    *(int *)((long)puVar9 + 0x24) = (int)sVar4;
    bVar11 = *(byte *)(param_1 + 0x1d);
    *(uint *)(puVar9 + 6) = (bVar11 & 0xf) + (int)sVar2 + -8;
    *(uint *)((long)puVar9 + 0x34) = (int)sVar3 + (uint)(bVar11 >> 4) + -8;
    if ((*(byte *)(param_1 + 0x18) >> 3 & 1) != 0) {
      *(byte *)((long)puVar9 + 0x45) = *(byte *)((long)puVar9 + 0x45) | 1;
    }
    break;
  case 0x19:
  case 0x1a:
  case 0x1b:
    sVar4 = *(short *)(param_1 + 0xe);
    *(int *)(puVar9 + 4) = (int)*(short *)(param_1 + 0xc);
    *(int *)((long)puVar9 + 0x24) = (int)sVar4;
    bVar11 = *(byte *)(param_1 + 0x1d);
    *(uint *)(puVar9 + 6) = (bVar11 & 0xf) + (int)sVar2 + -8;
    *(uint *)((long)puVar9 + 0x34) = (int)sVar3 + (uint)(bVar11 >> 4) + -8;
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
    if ((*(byte *)(param_1 + 0x18) >> 1 & 1) != 0) {
      *(byte *)((long)puVar9 + 0x45) = *(byte *)((long)puVar9 + 0x45) | 2;
    }
    break;
  case 0x23:
    sVar2 = *(short *)(param_1 + 0xc);
    sVar3 = *(short *)(param_1 + 0xe);
    *(int *)(puVar9 + 4) = (int)sVar2;
    *(int *)((long)puVar9 + 0x24) = (int)sVar3;
    bVar11 = *(byte *)(param_1 + 0x1d);
    *(uint *)(puVar9 + 4) = (bVar11 & 0xf) + (int)sVar2 + -8;
    *(uint *)((long)puVar9 + 0x24) = (int)sVar3 + (uint)(bVar11 >> 4) + -8;
  }
  *(undefined4 *)(puVar9 + 8) = param_2;
  if (((*(int *)((long)puVar9 + 0x3c) == 2) && (*(int *)(puVar9 + 6) == -1)) &&
     (*(int *)((long)puVar9 + 0x34) == -1)) {
    uVar6 = 0xff;
  }
  else {
LAB_01254cb4:
    uVar6 = *(undefined1 *)(param_1 + 0x17);
  }
  *(undefined1 *)((long)puVar9 + 0x44) = uVar6;
  *(undefined1 *)((long)puVar9 + 0x47) = 0;
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar10;
  }
  return 1;
}

