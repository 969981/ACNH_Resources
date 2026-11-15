
void FUN_01e5c8d0(long param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 uVar10;
  float fVar11;
  undefined **local_30;
  char *pcStack_28;
  
  iVar5 = *(int *)(*(long *)(param_1 + 0x338) + 0x2b4);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x358) + 0x180))();
  if ((((uVar6 & 1) != 0) && (*(char *)(param_1 + 0x418) == '\0')) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x358) + 0x690), lVar7 != 0)) {
    uVar3 = *(uint *)(param_1 + 0x360);
    *(byte *)(lVar7 + 8) = *(byte *)(lVar7 + 8) & 0x3f | (byte)(uVar3 << 6);
    uVar2 = (ushort)(CONCAT11(*(byte *)(lVar7 + 10),*(undefined1 *)(lVar7 + 9)) >> 4) + 1;
    *(byte *)(lVar7 + 9) = (byte)(uVar3 >> 2) & 0xf | (char)uVar2 * '\x10';
    *(byte *)(lVar7 + 10) = *(byte *)(lVar7 + 10) & 0xf0 | (byte)(uVar2 >> 4) & 0xf;
    *(char *)(param_1 + 0x59c) =
         (char)((CONCAT44(uVar2 >> 4,uVar2 * 0x10000000) & 0xfffffffff) >> 0x1c);
    bVar4 = (byte)((uint)(int)*(float *)(param_1 + 0x430) >> 8);
    *(char *)(lVar7 + 0xd) = (char)(int)*(float *)(param_1 + 0x430);
    *(byte *)(lVar7 + 0xe) = *(byte *)(lVar7 + 0xe) & 0xf0 | bVar4 & 0xf;
    fVar11 = *(float *)(param_1 + 0x438);
    *(char *)(lVar7 + 0xf) = (char)((uint)(int)fVar11 >> 4);
    *(byte *)(lVar7 + 0xe) = bVar4 & 0xf | (byte)((int)fVar11 << 4);
  }
  if ((*(float *)(param_1 + 0x430) - *(float *)(*(long *)(param_1 + 0x338) + 0x278) == 0.0) &&
     (*(float *)(param_1 + 0x438) - *(float *)(*(long *)(param_1 + 0x338) + 0x280) == 0.0)) {
    bVar1 = true;
  }
  else {
    iVar5 = FUN_006f0400();
    iVar5 = iVar5 + (uint)(*(char *)(param_1 + 0x32b) != '\0') * -0x80000000;
    uVar3 = iVar5 - **(int **)(param_1 + 0x348);
    uVar2 = uVar3 >> 0x18;
    bVar1 = 0.0 < *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar2 * 0x10 + 8) +
                  *(float *)(PTR_DAT_04bb2d00 + (ulong)uVar2 * 0x10 + 0xc) *
                  (float)(uVar3 & 0xffffff) * 5.9604645e-08;
  }
  *(int *)(param_1 + 0x4e4) = iVar5;
  if (*(int *)(param_1 + 0x378) < 0x23) {
    *(int *)(param_1 + 0x3a4) = iVar5;
  }
  *(int *)(param_1 + 800) = iVar5;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x430);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x438);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x428);
    lVar7 = *(long *)(param_1 + 0x340);
    local_30 = &PTR_LAB_048f9770;
    pcStack_28 = "NpcMoveAccelRate";
    if (((*(long *)(lVar7 + 0x1138) != 0) &&
        (lVar8 = *(long *)(*(long *)(lVar7 + 0x1138) + 0x78), lVar8 != 0)) &&
       (plVar9 = *(long **)(lVar8 + 0x48), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x30))(*(undefined4 *)(param_1 + 0x318),plVar9,&local_30);
      lVar7 = *(long *)(param_1 + 0x340);
    }
    uVar10 = 1;
    FUN_017081d0(lVar7,&DAT_05390430 + (long)*(int *)(param_1 + 0x568) * 2,6,1,0);
  }
  else {
    *(int *)(param_1 + 0x444) = iVar5;
    FUN_01e5c070(param_1,0);
    uVar10 = 0;
  }
  *(undefined4 *)(param_1 + 0x598) = uVar10;
  *(undefined4 *)(param_1 + 0x4b8) = 0;
  return;
}

