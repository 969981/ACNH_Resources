
void FUN_01394e84(long param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined **local_68;
  undefined *puStack_60;
  uint local_58;
  undefined8 local_54;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  uint local_24;
  
  plVar9 = *(long **)(param_1 + 0x90);
  if ((((plVar9 != (long *)0x0) && ((char)plVar9[1] != '\0')) &&
      (*(long **)(param_1 + 0x58) != (long *)0x0)) &&
     (lVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar5 != 0)) {
    local_38 = 0;
    puStack_60 = PTR_DAT_04bbc600 + 0x10;
    local_68 = &PTR_LAB_04993e10;
    local_58 = *(uint *)(param_1 + 0x10);
    local_54 = *(undefined8 *)(param_1 + 0x14);
    local_48 = *(undefined2 *)(lVar5 + 0x14);
    local_40 = 0;
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      local_40 = (**(code **)(**(long **)(param_1 + 0x78) + 0x28))();
    }
    if ((*(long **)(param_1 + 0x58) == (long *)0x0) ||
       (lVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar5 == 0)) {
      local_30 = false;
    }
    else {
      lVar8 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar8 + 0x473);
      pcVar7 = PTR_DAT_04bc1220;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar2 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pcVar7 = (char *)(lVar8 + 0x473);
        }
      }
      local_24 = *(uint *)(param_1 + 0x10);
      uVar3 = *(uint *)(param_1 + 0x14);
      puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20) + (ulong)local_24 * 4;
      if (0x1d < local_24) {
        puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20);
      }
      uVar1 = uVar3;
      if (*puVar2 <= uVar3) {
        uVar1 = 0;
      }
      local_30 = *pcVar7 == *(char *)(lVar5 + 0x16) &&
                 *(uint *)(*(long *)(puVar2 + 2) + (long)(int)uVar1 * 0x30 + 0xc) == uVar3;
    }
    if (((char)plVar9[1] != '\0') &&
       (uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9,&local_68), (uVar6 & 1) != 0)) {
      (**(code **)(*plVar9 + 0x50))(plVar9,&local_68);
      *(undefined1 *)(plVar9 + 1) = 0;
      local_24 = local_58;
      lVar5 = *(long *)(*(long *)PTR_DAT_04bbc218 + 0x18);
      uVar3 = local_58;
      if (*(uint *)(*(long *)PTR_DAT_04bbc218 + 0x10) <= local_58) {
        uVar3 = 0;
      }
      if ((uint)local_54 < *(uint *)(lVar5 + (long)(int)uVar3 * 0x18 + 8)) {
        lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x18 + 0x10);
        if ((local_54._4_4_ < *(uint *)(lVar5 + (long)(int)(uint)local_54 * 0x10)) &&
           (lVar5 = *(long *)(lVar5 + (long)(int)(uint)local_54 * 0x10 + 8), lVar5 != 0)) {
          FUN_0139534c(lVar5 + (long)(int)local_54._4_4_ * 0x518);
        }
      }
    }
  }
  return;
}

