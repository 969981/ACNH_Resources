
void FUN_01396898(long param_1,ulong param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  short sVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  undefined **local_78;
  undefined *puStack_70;
  undefined4 local_68;
  undefined8 local_64;
  short local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  uint local_34;
  
  plVar10 = *(long **)(param_1 + 0x90);
  if (((plVar10 != (long *)0x0) && (*(long **)(param_1 + 0x58) != (long *)0x0)) &&
     (lVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar6 != 0)) {
    sVar4 = *(short *)(lVar6 + 0x14);
    local_48 = 0;
    local_68 = *(undefined4 *)(param_1 + 0x10);
    puStack_70 = PTR_DAT_04bbc600 + 0x10;
    local_64 = *(undefined8 *)(param_1 + 0x14);
    local_78 = &PTR_LAB_04993e10;
    local_50 = 0;
    local_58 = sVar4;
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      local_50 = (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
    }
    if ((param_2 & 1) != 0) {
      uVar7 = 0;
      if (*(long **)(param_1 + 0x78) != (long *)0x0) {
        uVar7 = (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
      }
      local_48 = uVar7;
    }
    if ((*(long **)(param_1 + 0x58) == (long *)0x0) ||
       (lVar6 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar6 == 0)) {
      local_40 = false;
    }
    else {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar5 = *(byte *)(lVar9 + 0x473);
      pcVar8 = PTR_DAT_04bc1220;
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
        if (7 < bVar5) {
          puVar2 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pcVar8 = (char *)(lVar9 + 0x473);
        }
      }
      uVar3 = *(uint *)(param_1 + 0x14);
      puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20) + (ulong)*(uint *)(param_1 + 0x10) * 4;
      if (0x1d < *(uint *)(param_1 + 0x10)) {
        puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20);
      }
      uVar1 = uVar3;
      if (*puVar2 <= uVar3) {
        uVar1 = 0;
      }
      local_40 = *pcVar8 == *(char *)(lVar6 + 0x16) &&
                 *(uint *)(*(long *)(puVar2 + 2) + (long)(int)uVar1 * 0x30 + 0xc) == uVar3;
    }
    local_34 = 2;
    if (*(short *)PTR_DAT_04bb6298 != sVar4) {
      local_34 = 3;
    }
    uVar3 = local_34;
    if (4 < local_34) {
      uVar3 = 0;
    }
    (**(code **)(*plVar10 + (&DAT_04175390)[(ulong)uVar3 * 2]))(plVar10,&local_78);
  }
  return;
}

