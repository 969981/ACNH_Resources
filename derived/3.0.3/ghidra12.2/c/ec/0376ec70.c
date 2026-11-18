
/* WARNING: Removing unreachable block (ram,0x0376ecc0) */

void FUN_0376ec70(undefined8 *param_1)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined2 unaff_w25;
  uint uVar13;
  uint uVar14;
  undefined4 local_74;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  byte local_64;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  lVar6 = 0;
  if (lVar5 != 0) {
    local_74 = 1;
    if (((*(byte *)(lVar5 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar5 = (**(code **)(**(long **)(*(long *)(lVar5 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar5 = 0;
    }
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + 0xa8;
    }
  }
  bVar12 = 0;
  iVar7 = 0;
  do {
    lVar5 = lVar6 + 0x498 + (long)iVar7 * 0x16c0;
    if (*(long **)(lVar5 + 0x28) == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)**(long **)(lVar5 + 0x28);
      uVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)();
      }
    }
    puVar1 = (undefined2 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
    bVar2 = *(byte *)((long)puVar1 + 3);
    if ((bVar2 & 1) == 0) {
      uVar14 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar8 = 0;
    }
    else {
      unaff_w25 = *puVar1;
      bVar12 = (bVar2 >> 1 ^ 0xff) & 1;
      uVar14 = (uint)*(byte *)(puVar1 + 1);
      uVar13 = (uint)*(byte *)(puVar1 + 1);
      uVar11 = (uint)*(byte *)(puVar1 + 2);
      uVar10 = (uint)*(byte *)(puVar1 + 2);
      uVar9 = (uint)(ushort)puVar1[3];
      uVar8 = (uint)(ushort)puVar1[3];
    }
    if ((uVar4 & 1) != 0) {
      uVar10 = uVar11;
      uVar13 = uVar14;
      uVar8 = uVar9;
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    if ((bVar2 & 1) != 0) {
      local_74 = CONCAT22(local_74._2_2_,unaff_w25);
      local_70 = uVar13;
      uStack_6c = uVar10;
      local_68 = uVar8;
      local_64 = bVar12;
      (**(code **)*param_1)(param_1,&local_74);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x26);
  return;
}

