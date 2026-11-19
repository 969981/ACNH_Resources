
void FUN_0384ff0c(undefined4 param_1,long param_2,uint param_3)

{
  ushort uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [4];
  undefined8 local_130;
  undefined1 local_35;
  
  lVar3 = *(long *)(param_2 + 0x78);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0x18);
  }
  if (uVar4 <= param_3) {
    param_3 = 0;
  }
  if (*(char *)(param_2 + 0xae) != '\0') {
    if (((int)param_3 < 0) || (*(int *)(lVar3 + 0x18) <= (int)param_3)) {
      local_35 = 0;
      local_138 = 0x100;
      puStack_140 = local_134;
      local_134[0] = 0;
      local_148 = PTR_DAT_04bb21f8 + 0x10;
      lVar3 = *(long *)(*(long *)(*(long *)(lVar3 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_148,"%s.as",lVar3 + *(int *)(lVar3 + 0x24) + (long)*(int *)(lVar3 + 8));
    }
    else {
      puStack_140 = *(undefined1 **)(*(long *)(lVar3 + 0x20) + (ulong)param_3 * 0x10);
      lVar3 = *(long *)((long)puStack_140 + 0x70);
      uVar1 = *(ushort *)(lVar3 + 0x5a);
      if ((short)uVar1 < 0) {
        lVar6 = 0;
      }
      else {
        uVar5 = (ulong)uVar1;
        if (3 < uVar1) {
          uVar5 = 0;
        }
        lVar6 = *(long *)(lVar3 + uVar5 * 8);
      }
      if (lVar6 == *(long *)(lVar3 + 0x90) && *(long *)(lVar3 + 0x90) != 0) {
        plVar2 = (long *)(lVar3 + 0x28) + (uint)(int)(short)uVar1;
        if (3 < (uint)(int)(short)uVar1) {
          plVar2 = (long *)(lVar3 + 0x28);
        }
        local_130 = 0;
        *(undefined4 *)(*plVar2 + 0x7c) = *(undefined4 *)((long)puStack_140 + 0x78);
        local_138 = 0x3f800000;
        local_148 = *(undefined **)((long)puStack_140 + 0x18);
        plVar2 = *(long **)(*(long *)((long)puStack_140 + 0x70) + 0x90);
        (**(code **)(*plVar2 + 0x48))(param_1,plVar2,&local_148);
      }
    }
  }
  if (*(uint *)(param_2 + 0x80) <= param_3) {
    param_3 = 0;
  }
  *(undefined4 *)(*(long *)(param_2 + 0x88) + (long)(int)param_3 * 0xe8 + 0xc0) = param_1;
  return;
}

