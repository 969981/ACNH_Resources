
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03850078(long param_1,uint param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  uVar8 = 0;
  if (*(char *)(param_1 + 0xae) != '\0') {
    lVar4 = *(long *)(param_1 + 0x78);
    if (lVar4 == 0) {
      uVar6 = 0;
      uVar5 = _SUB_00000018;
    }
    else {
      uVar6 = *(uint *)(lVar4 + 0x18);
      uVar5 = uVar6;
    }
    if (uVar6 <= param_2) {
      param_2 = 0;
    }
    if (((int)param_2 < 0) || ((int)uVar5 <= (int)param_2)) {
      local_25 = 0;
      local_128 = 0x100;
      puStack_130 = local_124;
      local_124[0] = 0;
      local_138 = PTR_DAT_04bb21f8 + 0x10;
      lVar4 = *(long *)(*(long *)(*(long *)(lVar4 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_138,"%s.as",lVar4 + *(int *)(lVar4 + 0x24) + (long)*(int *)(lVar4 + 8));
    }
    else {
      puStack_130 = *(undefined1 **)(*(long *)(lVar4 + 0x20) + (ulong)param_2 * 0x10);
      lVar4 = *(long *)((long)puStack_130 + 0x70);
      uVar2 = *(ushort *)(lVar4 + 0x5a);
      if ((short)uVar2 < 0) {
        plVar3 = (long *)0x0;
      }
      else {
        uVar7 = (ulong)uVar2;
        if (3 < uVar2) {
          uVar7 = 0;
        }
        plVar3 = *(long **)(lVar4 + uVar7 * 8);
      }
      if (plVar3 == *(long **)(lVar4 + 0x90) && *(long **)(lVar4 + 0x90) != (long *)0x0) {
        puVar1 = (undefined8 *)(lVar4 + 0x28) + (uint)(int)(short)uVar2;
        if (3 < (uint)(int)(short)uVar2) {
          puVar1 = (undefined8 *)(lVar4 + 0x28);
        }
        local_138 = *(undefined **)((long)puStack_130 + 0x18);
        uVar8 = (**(code **)(*plVar3 + 0x50))(plVar3,&local_138,*puVar1);
      }
    }
  }
  return uVar8;
}

