
/* WARNING: Removing unreachable block (ram,0x037780d4) */

void FUN_03778080(undefined8 *param_1,uint *param_2)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 unaff_w25;
  byte unaff_w26;
  undefined4 local_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  byte local_68;
  uint local_64;
  
  lVar5 = *(long *)PTR_DAT_04bb46b0;
  lVar6 = 0;
  if (lVar5 != 0) {
    local_78 = 1;
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
  iVar9 = 0;
  do {
    lVar5 = lVar6 + 0x498 + (long)iVar9 * 0x16c0;
    local_64 = 0;
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
      uVar11 = 0;
      uVar10 = 0;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      unaff_w25 = *puVar1;
      local_64 = (uint)*(byte *)(puVar1 + 1);
      uVar11 = (uint)*(byte *)(puVar1 + 2);
      uVar10 = (uint)*(byte *)(puVar1 + 2);
      uVar8 = (uint)(ushort)puVar1[3];
      uVar7 = (uint)(ushort)puVar1[3];
      unaff_w26 = (*(byte *)((long)puVar1 + 3) >> 1 ^ 0xff) & 1;
    }
    if ((uVar4 & 1) != 0) {
      uVar10 = uVar11;
      uVar7 = uVar8;
      if ((*(long *)(lVar5 + 0x28) != 0) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
    if (((bVar2 & 1) != 0) && (*param_2 == local_64)) {
      local_78 = CONCAT22(local_78._2_2_,unaff_w25);
      local_74 = *param_2;
      uStack_70 = uVar10;
      local_6c = uVar7;
      local_68 = unaff_w26;
      (**(code **)*param_1)(param_1,&local_78);
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x26);
  return;
}

