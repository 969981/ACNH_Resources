
void FUN_03afc3e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined *local_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined8 local_474;
  undefined *local_468;
  int local_460 [128];
  int local_260;
  undefined *local_258;
  int local_250 [128];
  int local_50;
  undefined8 local_4c;
  
  puVar7 = PTR_DAT_04bbdc40;
  puVar6 = PTR_DAT_04bbd930;
  local_50 = 0;
  uVar8 = 0;
  do {
    uVar4 = uVar8 << 2;
    uVar5 = uVar8 >> 0x1f;
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    *(undefined4 *)((long)local_250 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = 0;
  } while (uVar1 != 0x80);
  local_258 = PTR_DAT_04bd1208 + 0x10;
  local_4c = 0x100000100;
  piVar2 = local_250 + ((long)(short)**(ushort **)PTR_DAT_04bbd930 & 0xffffffff);
  if (0x7f < **(ushort **)PTR_DAT_04bbd930) {
    piVar2 = local_250;
  }
  local_50 = local_50 - *piVar2;
  *piVar2 = 2;
  local_50 = local_50 + 2;
  piVar2 = local_250 + ((long)(short)**(ushort **)PTR_DAT_04bbdc40 & 0xffffffff);
  if (0x7f < **(ushort **)PTR_DAT_04bbdc40) {
    piVar2 = local_250;
  }
  local_50 = local_50 - *piVar2;
  *piVar2 = 6;
  local_50 = local_50 + 6;
  FUN_0391f840(param_1 + 0x770,&local_258,param_3);
  uVar8 = 0;
  local_260 = 0;
  local_468 = PTR_DAT_04bd11f8 + 0x10;
  do {
    uVar4 = uVar8 << 2;
    uVar5 = uVar8 >> 0x1f;
    uVar1 = (int)uVar8 + 1;
    uVar8 = (ulong)uVar1;
    *(undefined4 *)((long)local_460 + (-uVar5 & 0xfffffffc00000000 | uVar4)) = 0;
  } while (uVar1 != 0x80);
  piVar2 = local_460 + ((long)(short)**(ushort **)puVar6 & 0xffffffff);
  if (0x7f < **(ushort **)puVar6) {
    piVar2 = local_460;
  }
  local_260 = local_260 - *piVar2;
  *piVar2 = 1;
  local_260 = local_260 + 1;
  piVar2 = local_460 + ((long)(short)**(ushort **)puVar7 & 0xffffffff);
  if (0x7f < **(ushort **)puVar7) {
    piVar2 = local_460;
  }
  local_260 = local_260 - *piVar2;
  *piVar2 = 4;
  local_480 = 1;
  local_47c = 0x2000000020;
  local_488 = PTR_DAT_04bd1418 + 0x10;
  local_260 = local_260 + 4;
  local_474 = 0x100000004;
  FUN_039de650(param_1 + 0xbf8,&local_468,&local_488,param_1 + 0x770,param_3);
  iVar3 = *(int *)(param_1 + 0xdc8);
  *(undefined1 *)(param_1 + 0x768) = 0;
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0xdd0);
    iVar10 = 0;
    do {
      lVar11 = lVar9 + (long)iVar10 * 0x910;
      *(undefined1 *)(lVar11 + 0x708) = 1;
      *(byte *)(lVar11 + 0x308) = *(byte *)(lVar11 + 0x308) | 4;
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  return;
}

