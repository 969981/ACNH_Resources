
undefined8 * FUN_0384fe18(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [255];
  undefined1 local_25;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0x18);
  }
  if (uVar3 <= param_2) {
    param_2 = 0;
  }
  if (*(char *)(param_1 + 0xae) == '\0') {
    if (*(uint *)(param_1 + 0x80) <= param_2) {
      param_2 = 0;
    }
    lVar2 = *(long *)(param_1 + 0x88) + (long)(int)param_2 * 0xe8;
    plVar4 = (long *)(lVar2 + 0x60);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    puVar1 = *(undefined8 **)(lVar2 + 0x68);
  }
  else if (((int)param_2 < 0) || (*(int *)(lVar2 + 0x18) <= (int)param_2)) {
    local_25 = 0;
    local_128 = 0x100;
    puStack_130 = local_124;
    local_124[0] = 0;
    local_138 = PTR_DAT_04bb21f8 + 0x10;
    lVar2 = *(long *)(*(long *)(*(long *)(lVar2 + 0x50) + 0x10) + 8);
    FUN_038d1270(&local_138,"%s.as",lVar2 + *(int *)(lVar2 + 0x24) + (long)*(int *)(lVar2 + 8));
    puVar1 = &DAT_0407ebb1;
  }
  else {
    puVar1 = *(undefined8 **)(*(long *)(*(long *)(lVar2 + 0x20) + (ulong)param_2 * 0x10) + 0x10);
  }
  return puVar1;
}

