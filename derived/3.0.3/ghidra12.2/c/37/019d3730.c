
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019d3730(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  
  memset((void *)(param_1 + 0x28),0,0x6c1);
  fVar10 = (float)(int)DAT_052cdbc0 * 0.5;
  uVar6 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar6 = (uint)(fVar10 < 0.0);
  }
  iVar3 = (int)fVar10 - uVar6;
  fVar10 = (float)DAT_052cdbc0._4_4_ * 0.5;
  uVar6 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar6 = (uint)(fVar10 < 0.0);
  }
  iVar7 = (int)fVar10 - uVar6;
  fVar10 = (float)(int)DAT_052cdbd0 * 0.5;
  uVar6 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar6 = (uint)(fVar10 < 0.0);
  }
  iVar4 = (int)fVar10 - uVar6;
  fVar10 = (float)DAT_052cdbd0._4_4_ * 0.5;
  uVar6 = 0;
  if (fVar10 != (float)(int)fVar10) {
    uVar6 = (uint)(fVar10 < 0.0);
  }
  iVar8 = (int)fVar10 - uVar6;
  iVar2 = iVar3;
  if (iVar4 <= iVar3) {
    iVar2 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  iVar4 = iVar7;
  if (iVar7 <= iVar8) {
    iVar4 = iVar8;
  }
  if (iVar8 <= iVar7) {
    iVar7 = iVar8;
  }
  if (iVar4 + 1 != iVar7) {
    iVar8 = 0;
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    iVar9 = iVar2;
    do {
      local_68 = 0;
      local_70 = 0;
      local_64 = 1;
      local_70 = 2;
      local_64 = 1;
      local_68 = 0;
      local_80 = puVar1;
      local_78 = iVar9;
      iStack_74 = iVar7;
      uVar5 = FUN_0097dd50(&local_80,&local_70);
      if ((uVar5 & 1) != 0) {
        if (7 < iVar8) {
          *(undefined1 *)(param_1 + 0x6e8) = 1;
          return;
        }
        iVar8 = iVar8 + 1;
      }
      if (iVar9 < iVar3) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
        iVar9 = iVar2;
      }
    } while ((iVar2 != iVar9) || (iVar4 + 1 != iVar7));
  }
  return;
}

