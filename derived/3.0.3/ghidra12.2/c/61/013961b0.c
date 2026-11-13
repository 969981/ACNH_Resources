
/* WARNING: Removing unreachable block (ram,0x01396330) */

void FUN_013961b0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined **local_68;
  undefined *puStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined4 local_24;
  
  plVar9 = *(long **)(param_1 + 0x90);
  if (((plVar9 != (long *)0x0) && (*(long **)(param_1 + 0x58) != (long *)0x0)) &&
     (lVar5 = (**(code **)(**(long **)(param_1 + 0x58) + 0x28))(), lVar5 != 0)) {
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    puStack_60 = PTR_DAT_04bbc600 + 0x10;
    local_68 = &PTR_LAB_04993e10;
    local_58 = *(undefined4 *)(param_1 + 0x10);
    local_54 = *(undefined8 *)(param_1 + 0x14);
    local_48 = *(undefined2 *)(lVar5 + 0x14);
    uVar6 = 0;
    if (*(long **)(param_1 + 0x78) != (long *)0x0) {
      local_40 = (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
      uVar6 = 0;
      if (*(long **)(param_1 + 0x78) != (long *)0x0) {
        uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x20))();
      }
    }
    local_38 = uVar6;
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
      uVar3 = *(uint *)(param_1 + 0x14);
      puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20) + (ulong)*(uint *)(param_1 + 0x10) * 4;
      if (0x1d < *(uint *)(param_1 + 0x10)) {
        puVar2 = (uint *)(*(long *)PTR_DAT_04bbc218 + 0x20);
      }
      uVar1 = uVar3;
      if (*puVar2 <= uVar3) {
        uVar1 = 0;
      }
      local_30 = *pcVar7 == *(char *)(lVar5 + 0x16) &&
                 *(uint *)(*(long *)(puVar2 + 2) + (long)(int)uVar1 * 0x30 + 0xc) == uVar3;
    }
    local_24 = 0;
    (**(code **)(*plVar9 + DAT_04175390))(plVar9,&local_68);
  }
  return;
}

